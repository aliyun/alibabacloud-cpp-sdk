// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWHATSAPPCONVERSIONAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWHATSAPPCONVERSIONAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetWhatsappConversionApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWhatsappConversionApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetWhatsappConversionApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetWhatsappConversionApiResponseBody() = default ;
    GetWhatsappConversionApiResponseBody(const GetWhatsappConversionApiResponseBody &) = default ;
    GetWhatsappConversionApiResponseBody(GetWhatsappConversionApiResponseBody &&) = default ;
    GetWhatsappConversionApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWhatsappConversionApiResponseBody() = default ;
    GetWhatsappConversionApiResponseBody& operator=(const GetWhatsappConversionApiResponseBody &) = default ;
    GetWhatsappConversionApiResponseBody& operator=(GetWhatsappConversionApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(PageId, pageId_);
        DARABONBA_PTR_TO_JSON(PageName, pageName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(PageId, pageId_);
        DARABONBA_PTR_FROM_JSON(PageName, pageName_);
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
      virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->pageId_ == nullptr && this->pageName_ == nullptr; };
      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
      inline Data& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // pageId Field Functions 
      bool hasPageId() const { return this->pageId_ != nullptr;};
      void deletePageId() { this->pageId_ = nullptr;};
      inline string getPageId() const { DARABONBA_PTR_GET_DEFAULT(pageId_, "") };
      inline Data& setPageId(string pageId) { DARABONBA_PTR_SET_VALUE(pageId_, pageId) };


      // pageName Field Functions 
      bool hasPageName() const { return this->pageName_ != nullptr;};
      void deletePageName() { this->pageName_ = nullptr;};
      inline string getPageName() const { DARABONBA_PTR_GET_DEFAULT(pageName_, "") };
      inline Data& setPageName(string pageName) { DARABONBA_PTR_SET_VALUE(pageName_, pageName) };


    protected:
      shared_ptr<string> datasetId_ {};
      shared_ptr<string> pageId_ {};
      shared_ptr<string> pageName_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetWhatsappConversionApiResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetWhatsappConversionApiResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetWhatsappConversionApiResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetWhatsappConversionApiResponseBody::Data>) };
    inline vector<GetWhatsappConversionApiResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetWhatsappConversionApiResponseBody::Data>) };
    inline GetWhatsappConversionApiResponseBody& setData(const vector<GetWhatsappConversionApiResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWhatsappConversionApiResponseBody& setData(vector<GetWhatsappConversionApiResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWhatsappConversionApiResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWhatsappConversionApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWhatsappConversionApiResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetWhatsappConversionApiResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
