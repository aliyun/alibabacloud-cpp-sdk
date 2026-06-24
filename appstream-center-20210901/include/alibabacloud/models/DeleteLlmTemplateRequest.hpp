// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELLMTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELLMTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DeleteLlmTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLlmTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LlmTemplateId, llmTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLlmTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LlmTemplateId, llmTemplateId_);
    };
    DeleteLlmTemplateRequest() = default ;
    DeleteLlmTemplateRequest(const DeleteLlmTemplateRequest &) = default ;
    DeleteLlmTemplateRequest(DeleteLlmTemplateRequest &&) = default ;
    DeleteLlmTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLlmTemplateRequest() = default ;
    DeleteLlmTemplateRequest& operator=(const DeleteLlmTemplateRequest &) = default ;
    DeleteLlmTemplateRequest& operator=(DeleteLlmTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->llmTemplateId_ == nullptr; };
    // llmTemplateId Field Functions 
    bool hasLlmTemplateId() const { return this->llmTemplateId_ != nullptr;};
    void deleteLlmTemplateId() { this->llmTemplateId_ = nullptr;};
    inline string getLlmTemplateId() const { DARABONBA_PTR_GET_DEFAULT(llmTemplateId_, "") };
    inline DeleteLlmTemplateRequest& setLlmTemplateId(string llmTemplateId) { DARABONBA_PTR_SET_VALUE(llmTemplateId_, llmTemplateId) };


  protected:
    // The ID of the model template.
    // 
    // This parameter is required.
    shared_ptr<string> llmTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
