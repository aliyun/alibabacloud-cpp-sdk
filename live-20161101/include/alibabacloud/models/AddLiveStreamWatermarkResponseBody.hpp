// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVESTREAMWATERMARKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVESTREAMWATERMARKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddLiveStreamWatermarkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLiveStreamWatermarkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, AddLiveStreamWatermarkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    AddLiveStreamWatermarkResponseBody() = default ;
    AddLiveStreamWatermarkResponseBody(const AddLiveStreamWatermarkResponseBody &) = default ;
    AddLiveStreamWatermarkResponseBody(AddLiveStreamWatermarkResponseBody &&) = default ;
    AddLiveStreamWatermarkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLiveStreamWatermarkResponseBody() = default ;
    AddLiveStreamWatermarkResponseBody& operator=(const AddLiveStreamWatermarkResponseBody &) = default ;
    AddLiveStreamWatermarkResponseBody& operator=(AddLiveStreamWatermarkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->templateId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddLiveStreamWatermarkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline AddLiveStreamWatermarkResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the watermark template.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
