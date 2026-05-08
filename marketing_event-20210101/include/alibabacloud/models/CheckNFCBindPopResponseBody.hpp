// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKNFCBINDPOPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKNFCBINDPOPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class CheckNFCBindPopResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckNFCBindPopResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CheckNFCBindPopResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CheckNFCBindPopResponseBody() = default ;
    CheckNFCBindPopResponseBody(const CheckNFCBindPopResponseBody &) = default ;
    CheckNFCBindPopResponseBody(CheckNFCBindPopResponseBody &&) = default ;
    CheckNFCBindPopResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckNFCBindPopResponseBody() = default ;
    CheckNFCBindPopResponseBody& operator=(const CheckNFCBindPopResponseBody &) = default ;
    CheckNFCBindPopResponseBody& operator=(CheckNFCBindPopResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(IsGlobal, isGlobal_);
        DARABONBA_PTR_TO_JSON(IsSign, isSign_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(IsGlobal, isGlobal_);
        DARABONBA_PTR_FROM_JSON(IsSign, isSign_);
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
      virtual bool empty() const override { return this->isGlobal_ == nullptr
        && this->isSign_ == nullptr; };
      // isGlobal Field Functions 
      bool hasIsGlobal() const { return this->isGlobal_ != nullptr;};
      void deleteIsGlobal() { this->isGlobal_ = nullptr;};
      inline int32_t getIsGlobal() const { DARABONBA_PTR_GET_DEFAULT(isGlobal_, 0) };
      inline Data& setIsGlobal(int32_t isGlobal) { DARABONBA_PTR_SET_VALUE(isGlobal_, isGlobal) };


      // isSign Field Functions 
      bool hasIsSign() const { return this->isSign_ != nullptr;};
      void deleteIsSign() { this->isSign_ = nullptr;};
      inline bool getIsSign() const { DARABONBA_PTR_GET_DEFAULT(isSign_, false) };
      inline Data& setIsSign(bool isSign) { DARABONBA_PTR_SET_VALUE(isSign_, isSign) };


    protected:
      shared_ptr<int32_t> isGlobal_ {};
      shared_ptr<bool> isSign_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CheckNFCBindPopResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CheckNFCBindPopResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CheckNFCBindPopResponseBody::Data) };
    inline CheckNFCBindPopResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CheckNFCBindPopResponseBody::Data) };
    inline CheckNFCBindPopResponseBody& setData(const CheckNFCBindPopResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CheckNFCBindPopResponseBody& setData(CheckNFCBindPopResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline CheckNFCBindPopResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline CheckNFCBindPopResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CheckNFCBindPopResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckNFCBindPopResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CheckNFCBindPopResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<CheckNFCBindPopResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
