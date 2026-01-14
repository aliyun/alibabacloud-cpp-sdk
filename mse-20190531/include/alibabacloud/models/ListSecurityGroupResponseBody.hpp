// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListSecurityGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSecurityGroupResponseBody() = default ;
    ListSecurityGroupResponseBody(const ListSecurityGroupResponseBody &) = default ;
    ListSecurityGroupResponseBody(ListSecurityGroupResponseBody &&) = default ;
    ListSecurityGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityGroupResponseBody() = default ;
    ListSecurityGroupResponseBody& operator=(const ListSecurityGroupResponseBody &) = default ;
    ListSecurityGroupResponseBody& operator=(ListSecurityGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
        DARABONBA_PTR_TO_JSON(SecurityGroupType, securityGroupType_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupType, securityGroupType_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && this->securityGroupName_ == nullptr && this->securityGroupType_ == nullptr && this->vpcId_ == nullptr; };
      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Data& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // securityGroupName Field Functions 
      bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
      void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
      inline string getSecurityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
      inline Data& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


      // securityGroupType Field Functions 
      bool hasSecurityGroupType() const { return this->securityGroupType_ != nullptr;};
      void deleteSecurityGroupType() { this->securityGroupType_ = nullptr;};
      inline string getSecurityGroupType() const { DARABONBA_PTR_GET_DEFAULT(securityGroupType_, "") };
      inline Data& setSecurityGroupType(string securityGroupType) { DARABONBA_PTR_SET_VALUE(securityGroupType_, securityGroupType) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The ID of the security group.
      shared_ptr<string> securityGroupId_ {};
      // The name of the security group.
      shared_ptr<string> securityGroupName_ {};
      // The type of the security group. Valid values:
      // 
      // *   normal: basic security group
      // *   enterprise: advanced security group For more information, see [Advanced security groups](https://help.aliyun.com/document_detail/120621.html).
      shared_ptr<string> securityGroupType_ {};
      // The ID of the virtual private cloud (VPC).
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListSecurityGroupResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSecurityGroupResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSecurityGroupResponseBody::Data>) };
    inline vector<ListSecurityGroupResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListSecurityGroupResponseBody::Data>) };
    inline ListSecurityGroupResponseBody& setData(const vector<ListSecurityGroupResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSecurityGroupResponseBody& setData(vector<ListSecurityGroupResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSecurityGroupResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSecurityGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecurityGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSecurityGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<int32_t> code_ {};
    // The data structure.
    shared_ptr<vector<ListSecurityGroupResponseBody::Data>> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
