// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSREFERENCEPARTREFERENCES_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSREFERENCEPARTREFERENCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences& obj) { 
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sourceCode, sourceCode_);
      DARABONBA_PTR_TO_JSON(sourceIcon, sourceIcon_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences& obj) { 
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sourceCode, sourceCode_);
      DARABONBA_PTR_FROM_JSON(sourceIcon, sourceIcon_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences() = default ;
    CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences(const CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences &) = default ;
    CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences(CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences &&) = default ;
    CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences() = default ;
    CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences& operator=(const CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences &) = default ;
    CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences& operator=(CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->index_ == nullptr
        && return this->name_ == nullptr && return this->sourceCode_ == nullptr && return this->sourceIcon_ == nullptr && return this->summary_ == nullptr && return this->title_ == nullptr
        && return this->url_ == nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceCode Field Functions 
    bool hasSourceCode() const { return this->sourceCode_ != nullptr;};
    void deleteSourceCode() { this->sourceCode_ = nullptr;};
    inline string sourceCode() const { DARABONBA_PTR_GET_DEFAULT(sourceCode_, "") };
    inline CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences& setSourceCode(string sourceCode) { DARABONBA_PTR_SET_VALUE(sourceCode_, sourceCode) };


    // sourceIcon Field Functions 
    bool hasSourceIcon() const { return this->sourceIcon_ != nullptr;};
    void deleteSourceIcon() { this->sourceIcon_ = nullptr;};
    inline string sourceIcon() const { DARABONBA_PTR_GET_DEFAULT(sourceIcon_, "") };
    inline CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences& setSourceIcon(string sourceIcon) { DARABONBA_PTR_SET_VALUE(sourceIcon_, sourceIcon) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateMessageResponseBodyMessagesContentStructViewPartsReferencePartReferences& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> index_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> sourceCode_ = nullptr;
    std::shared_ptr<string> sourceIcon_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
