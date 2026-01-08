// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWABABUSINESSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYWABABUSINESSINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class QueryWabaBusinessInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWabaBusinessInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWabaBusinessInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryWabaBusinessInfoResponseBody() = default ;
    QueryWabaBusinessInfoResponseBody(const QueryWabaBusinessInfoResponseBody &) = default ;
    QueryWabaBusinessInfoResponseBody(QueryWabaBusinessInfoResponseBody &&) = default ;
    QueryWabaBusinessInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWabaBusinessInfoResponseBody() = default ;
    QueryWabaBusinessInfoResponseBody& operator=(const QueryWabaBusinessInfoResponseBody &) = default ;
    QueryWabaBusinessInfoResponseBody& operator=(QueryWabaBusinessInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
        DARABONBA_PTR_TO_JSON(BusinessName, businessName_);
        DARABONBA_PTR_TO_JSON(VerificationStatus, verificationStatus_);
        DARABONBA_PTR_TO_JSON(Vertical, vertical_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
        DARABONBA_PTR_FROM_JSON(BusinessName, businessName_);
        DARABONBA_PTR_FROM_JSON(VerificationStatus, verificationStatus_);
        DARABONBA_PTR_FROM_JSON(Vertical, vertical_);
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
      virtual bool empty() const override { return this->businessId_ == nullptr
        && this->businessName_ == nullptr && this->verificationStatus_ == nullptr && this->vertical_ == nullptr; };
      // businessId Field Functions 
      bool hasBusinessId() const { return this->businessId_ != nullptr;};
      void deleteBusinessId() { this->businessId_ = nullptr;};
      inline string getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, "") };
      inline Data& setBusinessId(string businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


      // businessName Field Functions 
      bool hasBusinessName() const { return this->businessName_ != nullptr;};
      void deleteBusinessName() { this->businessName_ = nullptr;};
      inline string getBusinessName() const { DARABONBA_PTR_GET_DEFAULT(businessName_, "") };
      inline Data& setBusinessName(string businessName) { DARABONBA_PTR_SET_VALUE(businessName_, businessName) };


      // verificationStatus Field Functions 
      bool hasVerificationStatus() const { return this->verificationStatus_ != nullptr;};
      void deleteVerificationStatus() { this->verificationStatus_ = nullptr;};
      inline string getVerificationStatus() const { DARABONBA_PTR_GET_DEFAULT(verificationStatus_, "") };
      inline Data& setVerificationStatus(string verificationStatus) { DARABONBA_PTR_SET_VALUE(verificationStatus_, verificationStatus) };


      // vertical Field Functions 
      bool hasVertical() const { return this->vertical_ != nullptr;};
      void deleteVertical() { this->vertical_ = nullptr;};
      inline string getVertical() const { DARABONBA_PTR_GET_DEFAULT(vertical_, "") };
      inline Data& setVertical(string vertical) { DARABONBA_PTR_SET_VALUE(vertical_, vertical) };


    protected:
      // The Business Manager ID.
      shared_ptr<string> businessId_ {};
      // The Business Manager name.
      shared_ptr<string> businessName_ {};
      // The verification status.
      shared_ptr<string> verificationStatus_ {};
      // The industry.
      shared_ptr<string> vertical_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryWabaBusinessInfoResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryWabaBusinessInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryWabaBusinessInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryWabaBusinessInfoResponseBody::Data) };
    inline QueryWabaBusinessInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryWabaBusinessInfoResponseBody::Data) };
    inline QueryWabaBusinessInfoResponseBody& setData(const QueryWabaBusinessInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryWabaBusinessInfoResponseBody& setData(QueryWabaBusinessInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryWabaBusinessInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryWabaBusinessInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryWabaBusinessInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The HTTP status code returned.
    // 
    // *   A value of OK indicates that the call is successful.
    // *   Other values indicate that the call fails. For more information, see [Error codes](https://help.aliyun.com/document_detail/196974.html).
    shared_ptr<string> code_ {};
    // The business information about the WABA.
    shared_ptr<QueryWabaBusinessInfoResponseBody::Data> data_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
