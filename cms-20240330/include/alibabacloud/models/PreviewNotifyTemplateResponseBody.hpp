// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWNOTIFYTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWNOTIFYTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class PreviewNotifyTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewNotifyTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewNotifyTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    PreviewNotifyTemplateResponseBody() = default ;
    PreviewNotifyTemplateResponseBody(const PreviewNotifyTemplateResponseBody &) = default ;
    PreviewNotifyTemplateResponseBody(PreviewNotifyTemplateResponseBody &&) = default ;
    PreviewNotifyTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewNotifyTemplateResponseBody() = default ;
    PreviewNotifyTemplateResponseBody& operator=(const PreviewNotifyTemplateResponseBody &) = default ;
    PreviewNotifyTemplateResponseBody& operator=(PreviewNotifyTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(failed, failed_);
        DARABONBA_ANY_TO_JSON(success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(failed, failed_);
        DARABONBA_ANY_FROM_JSON(success, success_);
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
      virtual bool empty() const override { return this->failed_ == nullptr
        && this->success_ == nullptr; };
      // failed Field Functions 
      bool hasFailed() const { return this->failed_ != nullptr;};
      void deleteFailed() { this->failed_ = nullptr;};
      inline       const Darabonba::Json & getFailed() const { DARABONBA_GET(failed_) };
      Darabonba::Json & getFailed() { DARABONBA_GET(failed_) };
      inline Data& setFailed(const Darabonba::Json & failed) { DARABONBA_SET_VALUE(failed_, failed) };
      inline Data& setFailed(Darabonba::Json && failed) { DARABONBA_SET_RVALUE(failed_, failed) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline       const Darabonba::Json & getSuccess() const { DARABONBA_GET(success_) };
      Darabonba::Json & getSuccess() { DARABONBA_GET(success_) };
      inline Data& setSuccess(const Darabonba::Json & success) { DARABONBA_SET_VALUE(success_, success) };
      inline Data& setSuccess(Darabonba::Json && success) { DARABONBA_SET_RVALUE(success_, success) };


    protected:
      // The mapping of failed rendering results. The key is the template identifier, and the value is the cause of the failure, such as a template syntax error or a reference to an undefined variable.
      Darabonba::Json failed_ {};
      // The mapping of successful rendering results. The key is the template identifier, which corresponds to templates[].key in the request, and the value is the rendered string content.
      Darabonba::Json success_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PreviewNotifyTemplateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PreviewNotifyTemplateResponseBody::Data) };
    inline PreviewNotifyTemplateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PreviewNotifyTemplateResponseBody::Data) };
    inline PreviewNotifyTemplateResponseBody& setData(const PreviewNotifyTemplateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PreviewNotifyTemplateResponseBody& setData(PreviewNotifyTemplateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline PreviewNotifyTemplateResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewNotifyTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PreviewNotifyTemplateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The rendering result object, which contains two mappings: success for successfully rendered items and failed for items that failed to render.
    shared_ptr<PreviewNotifyTemplateResponseBody::Data> data_ {};
    // The processing result message. The value is success if the request is successful, or an error message if the request fails.
    shared_ptr<string> msg_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // - true: The request is successful.
    // - false: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
