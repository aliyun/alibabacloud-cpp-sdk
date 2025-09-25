// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPDFTRANSLATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPDFTRANSLATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreatePdfTranslateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePdfTranslateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_PTR_TO_JSON(knowledge, knowledge_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(translateTo, translateTo_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePdfTranslateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_PTR_FROM_JSON(knowledge, knowledge_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(translateTo, translateTo_);
    };
    CreatePdfTranslateTaskRequest() = default ;
    CreatePdfTranslateTaskRequest(const CreatePdfTranslateTaskRequest &) = default ;
    CreatePdfTranslateTaskRequest(CreatePdfTranslateTaskRequest &&) = default ;
    CreatePdfTranslateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePdfTranslateTaskRequest() = default ;
    CreatePdfTranslateTaskRequest& operator=(const CreatePdfTranslateTaskRequest &) = default ;
    CreatePdfTranslateTaskRequest& operator=(CreatePdfTranslateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docId_ != nullptr
        && this->knowledge_ != nullptr && this->libraryId_ != nullptr && this->modelId_ != nullptr && this->translateTo_ != nullptr; };
    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline CreatePdfTranslateTaskRequest& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // knowledge Field Functions 
    bool hasKnowledge() const { return this->knowledge_ != nullptr;};
    void deleteKnowledge() { this->knowledge_ = nullptr;};
    inline string knowledge() const { DARABONBA_PTR_GET_DEFAULT(knowledge_, "") };
    inline CreatePdfTranslateTaskRequest& setKnowledge(string knowledge) { DARABONBA_PTR_SET_VALUE(knowledge_, knowledge) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline CreatePdfTranslateTaskRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline CreatePdfTranslateTaskRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // translateTo Field Functions 
    bool hasTranslateTo() const { return this->translateTo_ != nullptr;};
    void deleteTranslateTo() { this->translateTo_ = nullptr;};
    inline string translateTo() const { DARABONBA_PTR_GET_DEFAULT(translateTo_, "") };
    inline CreatePdfTranslateTaskRequest& setTranslateTo(string translateTo) { DARABONBA_PTR_SET_VALUE(translateTo_, translateTo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> knowledge_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> libraryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> translateTo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
