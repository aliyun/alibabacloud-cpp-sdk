// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMPTTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMPTTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreatePromptTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePromptTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(promptTemplateId, promptTemplateId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePromptTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(promptTemplateId, promptTemplateId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreatePromptTemplateResponseBody() = default ;
    CreatePromptTemplateResponseBody(const CreatePromptTemplateResponseBody &) = default ;
    CreatePromptTemplateResponseBody(CreatePromptTemplateResponseBody &&) = default ;
    CreatePromptTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePromptTemplateResponseBody() = default ;
    CreatePromptTemplateResponseBody& operator=(const CreatePromptTemplateResponseBody &) = default ;
    CreatePromptTemplateResponseBody& operator=(CreatePromptTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->promptTemplateId_ == nullptr
        && return this->requestId_ == nullptr; };
    // promptTemplateId Field Functions 
    bool hasPromptTemplateId() const { return this->promptTemplateId_ != nullptr;};
    void deletePromptTemplateId() { this->promptTemplateId_ = nullptr;};
    inline string promptTemplateId() const { DARABONBA_PTR_GET_DEFAULT(promptTemplateId_, "") };
    inline CreatePromptTemplateResponseBody& setPromptTemplateId(string promptTemplateId) { DARABONBA_PTR_SET_VALUE(promptTemplateId_, promptTemplateId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePromptTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> promptTemplateId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
