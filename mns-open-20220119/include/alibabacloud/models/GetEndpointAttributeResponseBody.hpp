// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENDPOINTATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETENDPOINTATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class GetEndpointAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEndpointAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetEndpointAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetEndpointAttributeResponseBody() = default ;
    GetEndpointAttributeResponseBody(const GetEndpointAttributeResponseBody &) = default ;
    GetEndpointAttributeResponseBody(GetEndpointAttributeResponseBody &&) = default ;
    GetEndpointAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEndpointAttributeResponseBody() = default ;
    GetEndpointAttributeResponseBody& operator=(const GetEndpointAttributeResponseBody &) = default ;
    GetEndpointAttributeResponseBody& operator=(GetEndpointAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CidrList, cidrList_);
        DARABONBA_PTR_TO_JSON(EndpointEnabled, endpointEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrList, cidrList_);
        DARABONBA_PTR_FROM_JSON(EndpointEnabled, endpointEnabled_);
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
      class CidrList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CidrList& obj) { 
          DARABONBA_PTR_TO_JSON(AclStrategy, aclStrategy_);
          DARABONBA_PTR_TO_JSON(Cidr, cidr_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        };
        friend void from_json(const Darabonba::Json& j, CidrList& obj) { 
          DARABONBA_PTR_FROM_JSON(AclStrategy, aclStrategy_);
          DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        };
        CidrList() = default ;
        CidrList(const CidrList &) = default ;
        CidrList(CidrList &&) = default ;
        CidrList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CidrList() = default ;
        CidrList& operator=(const CidrList &) = default ;
        CidrList& operator=(CidrList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aclStrategy_ == nullptr
        && this->cidr_ == nullptr && this->createTime_ == nullptr; };
        // aclStrategy Field Functions 
        bool hasAclStrategy() const { return this->aclStrategy_ != nullptr;};
        void deleteAclStrategy() { this->aclStrategy_ = nullptr;};
        inline string getAclStrategy() const { DARABONBA_PTR_GET_DEFAULT(aclStrategy_, "") };
        inline CidrList& setAclStrategy(string aclStrategy) { DARABONBA_PTR_SET_VALUE(aclStrategy_, aclStrategy) };


        // cidr Field Functions 
        bool hasCidr() const { return this->cidr_ != nullptr;};
        void deleteCidr() { this->cidr_ = nullptr;};
        inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
        inline CidrList& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline CidrList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      protected:
        // The access control list (ACL) policy. Valid value:
        // 
        // - **allow**: The endpoint allows access from the specified CIDR block. This is the only supported value.
        shared_ptr<string> aclStrategy_ {};
        // The CIDR block.
        shared_ptr<string> cidr_ {};
        // The time when the CIDR block was created.
        shared_ptr<int64_t> createTime_ {};
      };

      virtual bool empty() const override { return this->cidrList_ == nullptr
        && this->endpointEnabled_ == nullptr; };
      // cidrList Field Functions 
      bool hasCidrList() const { return this->cidrList_ != nullptr;};
      void deleteCidrList() { this->cidrList_ = nullptr;};
      inline const vector<Data::CidrList> & getCidrList() const { DARABONBA_PTR_GET_CONST(cidrList_, vector<Data::CidrList>) };
      inline vector<Data::CidrList> getCidrList() { DARABONBA_PTR_GET(cidrList_, vector<Data::CidrList>) };
      inline Data& setCidrList(const vector<Data::CidrList> & cidrList) { DARABONBA_PTR_SET_VALUE(cidrList_, cidrList) };
      inline Data& setCidrList(vector<Data::CidrList> && cidrList) { DARABONBA_PTR_SET_RVALUE(cidrList_, cidrList) };


      // endpointEnabled Field Functions 
      bool hasEndpointEnabled() const { return this->endpointEnabled_ != nullptr;};
      void deleteEndpointEnabled() { this->endpointEnabled_ = nullptr;};
      inline bool getEndpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(endpointEnabled_, false) };
      inline Data& setEndpointEnabled(bool endpointEnabled) { DARABONBA_PTR_SET_VALUE(endpointEnabled_, endpointEnabled) };


    protected:
      // The list of CIDR blocks.
      shared_ptr<vector<Data::CidrList>> cidrList_ {};
      // Indicates whether the endpoint is enabled.
      shared_ptr<bool> endpointEnabled_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetEndpointAttributeResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetEndpointAttributeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetEndpointAttributeResponseBody::Data) };
    inline GetEndpointAttributeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetEndpointAttributeResponseBody::Data) };
    inline GetEndpointAttributeResponseBody& setData(const GetEndpointAttributeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetEndpointAttributeResponseBody& setData(GetEndpointAttributeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetEndpointAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEndpointAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEndpointAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetEndpointAttributeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<int64_t> code_ {};
    // The response data.
    shared_ptr<GetEndpointAttributeResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the response.
    shared_ptr<string> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
