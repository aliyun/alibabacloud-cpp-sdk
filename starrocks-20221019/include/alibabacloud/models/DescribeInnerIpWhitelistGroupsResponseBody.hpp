// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINNERIPWHITELISTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINNERIPWHITELISTGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeInnerIpWhitelistGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInnerIpWhitelistGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInnerIpWhitelistGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DescribeInnerIpWhitelistGroupsResponseBody() = default ;
    DescribeInnerIpWhitelistGroupsResponseBody(const DescribeInnerIpWhitelistGroupsResponseBody &) = default ;
    DescribeInnerIpWhitelistGroupsResponseBody(DescribeInnerIpWhitelistGroupsResponseBody &&) = default ;
    DescribeInnerIpWhitelistGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInnerIpWhitelistGroupsResponseBody() = default ;
    DescribeInnerIpWhitelistGroupsResponseBody& operator=(const DescribeInnerIpWhitelistGroupsResponseBody &) = default ;
    DescribeInnerIpWhitelistGroupsResponseBody& operator=(DescribeInnerIpWhitelistGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CidrIpList, cidrIpList_);
        DARABONBA_PTR_TO_JSON(InnerIpWhitelistGroupId, innerIpWhitelistGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrIpList, cidrIpList_);
        DARABONBA_PTR_FROM_JSON(InnerIpWhitelistGroupId, innerIpWhitelistGroupId_);
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
      virtual bool empty() const override { return this->cidrIpList_ == nullptr
        && this->innerIpWhitelistGroupId_ == nullptr; };
      // cidrIpList Field Functions 
      bool hasCidrIpList() const { return this->cidrIpList_ != nullptr;};
      void deleteCidrIpList() { this->cidrIpList_ = nullptr;};
      inline const vector<string> & getCidrIpList() const { DARABONBA_PTR_GET_CONST(cidrIpList_, vector<string>) };
      inline vector<string> getCidrIpList() { DARABONBA_PTR_GET(cidrIpList_, vector<string>) };
      inline Data& setCidrIpList(const vector<string> & cidrIpList) { DARABONBA_PTR_SET_VALUE(cidrIpList_, cidrIpList) };
      inline Data& setCidrIpList(vector<string> && cidrIpList) { DARABONBA_PTR_SET_RVALUE(cidrIpList_, cidrIpList) };


      // innerIpWhitelistGroupId Field Functions 
      bool hasInnerIpWhitelistGroupId() const { return this->innerIpWhitelistGroupId_ != nullptr;};
      void deleteInnerIpWhitelistGroupId() { this->innerIpWhitelistGroupId_ = nullptr;};
      inline string getInnerIpWhitelistGroupId() const { DARABONBA_PTR_GET_DEFAULT(innerIpWhitelistGroupId_, "") };
      inline Data& setInnerIpWhitelistGroupId(string innerIpWhitelistGroupId) { DARABONBA_PTR_SET_VALUE(innerIpWhitelistGroupId_, innerIpWhitelistGroupId) };


    protected:
      shared_ptr<vector<string>> cidrIpList_ {};
      shared_ptr<string> innerIpWhitelistGroupId_ {};
    };

    virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->data_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeInnerIpWhitelistGroupsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeInnerIpWhitelistGroupsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeInnerIpWhitelistGroupsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInnerIpWhitelistGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeInnerIpWhitelistGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeInnerIpWhitelistGroupsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeInnerIpWhitelistGroupsResponseBody::Data>) };
    inline vector<DescribeInnerIpWhitelistGroupsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeInnerIpWhitelistGroupsResponseBody::Data>) };
    inline DescribeInnerIpWhitelistGroupsResponseBody& setData(const vector<DescribeInnerIpWhitelistGroupsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeInnerIpWhitelistGroupsResponseBody& setData(vector<DescribeInnerIpWhitelistGroupsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<vector<DescribeInnerIpWhitelistGroupsResponseBody::Data>> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
