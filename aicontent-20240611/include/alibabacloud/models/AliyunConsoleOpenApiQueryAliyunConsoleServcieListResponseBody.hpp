// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALIYUNCONSOLEOPENAPIQUERYALIYUNCONSOLESERVCIELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALIYUNCONSOLEOPENAPIQUERYALIYUNCONSOLESERVCIELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody() = default ;
    AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody(const AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody &) = default ;
    AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody(AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody &&) = default ;
    AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody() = default ;
    AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody& operator=(const AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody &) = default ;
    AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody& operator=(AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FreeConcurrencyCount, freeConcurrencyCount_);
        DARABONBA_PTR_TO_JSON(FreeCount, freeCount_);
        DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FreeConcurrencyCount, freeConcurrencyCount_);
        DARABONBA_PTR_FROM_JSON(FreeCount, freeCount_);
        DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
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
      virtual bool empty() const override { return this->freeConcurrencyCount_ == nullptr
        && this->freeCount_ == nullptr && this->serviceCode_ == nullptr && this->serviceName_ == nullptr; };
      // freeConcurrencyCount Field Functions 
      bool hasFreeConcurrencyCount() const { return this->freeConcurrencyCount_ != nullptr;};
      void deleteFreeConcurrencyCount() { this->freeConcurrencyCount_ = nullptr;};
      inline int32_t getFreeConcurrencyCount() const { DARABONBA_PTR_GET_DEFAULT(freeConcurrencyCount_, 0) };
      inline Data& setFreeConcurrencyCount(int32_t freeConcurrencyCount) { DARABONBA_PTR_SET_VALUE(freeConcurrencyCount_, freeConcurrencyCount) };


      // freeCount Field Functions 
      bool hasFreeCount() const { return this->freeCount_ != nullptr;};
      void deleteFreeCount() { this->freeCount_ = nullptr;};
      inline int32_t getFreeCount() const { DARABONBA_PTR_GET_DEFAULT(freeCount_, 0) };
      inline Data& setFreeCount(int32_t freeCount) { DARABONBA_PTR_SET_VALUE(freeCount_, freeCount) };


      // serviceCode Field Functions 
      bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
      void deleteServiceCode() { this->serviceCode_ = nullptr;};
      inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
      inline Data& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Data& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    protected:
      shared_ptr<int32_t> freeConcurrencyCount_ {};
      shared_ptr<int32_t> freeCount_ {};
      shared_ptr<string> serviceCode_ {};
      shared_ptr<string> serviceName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody::Data>) };
    inline vector<AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody::Data>) };
    inline AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody& setData(const vector<AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody& setData(vector<AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
