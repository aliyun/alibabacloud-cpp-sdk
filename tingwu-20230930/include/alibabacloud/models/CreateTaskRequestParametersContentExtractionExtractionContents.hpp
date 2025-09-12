// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSCONTENTEXTRACTIONEXTRACTIONCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSCONTENTEXTRACTIONEXTRACTIONCONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequestParametersContentExtractionExtractionContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestParametersContentExtractionExtractionContents& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Identity, identity_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestParametersContentExtractionExtractionContents& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Identity, identity_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateTaskRequestParametersContentExtractionExtractionContents() = default ;
    CreateTaskRequestParametersContentExtractionExtractionContents(const CreateTaskRequestParametersContentExtractionExtractionContents &) = default ;
    CreateTaskRequestParametersContentExtractionExtractionContents(CreateTaskRequestParametersContentExtractionExtractionContents &&) = default ;
    CreateTaskRequestParametersContentExtractionExtractionContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestParametersContentExtractionExtractionContents() = default ;
    CreateTaskRequestParametersContentExtractionExtractionContents& operator=(const CreateTaskRequestParametersContentExtractionExtractionContents &) = default ;
    CreateTaskRequestParametersContentExtractionExtractionContents& operator=(CreateTaskRequestParametersContentExtractionExtractionContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->identity_ != nullptr && this->title_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateTaskRequestParametersContentExtractionExtractionContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // identity Field Functions 
    bool hasIdentity() const { return this->identity_ != nullptr;};
    void deleteIdentity() { this->identity_ = nullptr;};
    inline string identity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
    inline CreateTaskRequestParametersContentExtractionExtractionContents& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateTaskRequestParametersContentExtractionExtractionContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> identity_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
