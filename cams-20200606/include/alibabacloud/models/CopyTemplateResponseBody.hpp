// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COPYTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class CopyTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CopyTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CopyTemplateResponseBody() = default ;
    CopyTemplateResponseBody(const CopyTemplateResponseBody &) = default ;
    CopyTemplateResponseBody(CopyTemplateResponseBody &&) = default ;
    CopyTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyTemplateResponseBody() = default ;
    CopyTemplateResponseBody& operator=(const CopyTemplateResponseBody &) = default ;
    CopyTemplateResponseBody& operator=(CopyTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SceneTemplateCode, sceneTemplateCode_);
        DARABONBA_PTR_TO_JSON(SceneTemplateName, sceneTemplateName_);
        DARABONBA_PTR_TO_JSON(WhatsappCatagory, whatsappCatagory_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SceneTemplateCode, sceneTemplateCode_);
        DARABONBA_PTR_FROM_JSON(SceneTemplateName, sceneTemplateName_);
        DARABONBA_PTR_FROM_JSON(WhatsappCatagory, whatsappCatagory_);
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
      virtual bool empty() const override { return this->sceneTemplateCode_ == nullptr
        && this->sceneTemplateName_ == nullptr && this->whatsappCatagory_ == nullptr; };
      // sceneTemplateCode Field Functions 
      bool hasSceneTemplateCode() const { return this->sceneTemplateCode_ != nullptr;};
      void deleteSceneTemplateCode() { this->sceneTemplateCode_ = nullptr;};
      inline string getSceneTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(sceneTemplateCode_, "") };
      inline Data& setSceneTemplateCode(string sceneTemplateCode) { DARABONBA_PTR_SET_VALUE(sceneTemplateCode_, sceneTemplateCode) };


      // sceneTemplateName Field Functions 
      bool hasSceneTemplateName() const { return this->sceneTemplateName_ != nullptr;};
      void deleteSceneTemplateName() { this->sceneTemplateName_ = nullptr;};
      inline string getSceneTemplateName() const { DARABONBA_PTR_GET_DEFAULT(sceneTemplateName_, "") };
      inline Data& setSceneTemplateName(string sceneTemplateName) { DARABONBA_PTR_SET_VALUE(sceneTemplateName_, sceneTemplateName) };


      // whatsappCatagory Field Functions 
      bool hasWhatsappCatagory() const { return this->whatsappCatagory_ != nullptr;};
      void deleteWhatsappCatagory() { this->whatsappCatagory_ = nullptr;};
      inline string getWhatsappCatagory() const { DARABONBA_PTR_GET_DEFAULT(whatsappCatagory_, "") };
      inline Data& setWhatsappCatagory(string whatsappCatagory) { DARABONBA_PTR_SET_VALUE(whatsappCatagory_, whatsappCatagory) };


    protected:
      shared_ptr<string> sceneTemplateCode_ {};
      shared_ptr<string> sceneTemplateName_ {};
      shared_ptr<string> whatsappCatagory_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CopyTemplateResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CopyTemplateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CopyTemplateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CopyTemplateResponseBody::Data) };
    inline CopyTemplateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CopyTemplateResponseBody::Data) };
    inline CopyTemplateResponseBody& setData(const CopyTemplateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CopyTemplateResponseBody& setData(CopyTemplateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CopyTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CopyTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CopyTemplateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CopyTemplateResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
