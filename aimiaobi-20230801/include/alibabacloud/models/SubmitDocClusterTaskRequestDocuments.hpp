// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCCLUSTERTASKREQUESTDOCUMENTS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCCLUSTERTASKREQUESTDOCUMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitDocClusterTaskRequestDocuments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocClusterTaskRequestDocuments& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocClusterTaskRequestDocuments& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    SubmitDocClusterTaskRequestDocuments() = default ;
    SubmitDocClusterTaskRequestDocuments(const SubmitDocClusterTaskRequestDocuments &) = default ;
    SubmitDocClusterTaskRequestDocuments(SubmitDocClusterTaskRequestDocuments &&) = default ;
    SubmitDocClusterTaskRequestDocuments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocClusterTaskRequestDocuments() = default ;
    SubmitDocClusterTaskRequestDocuments& operator=(const SubmitDocClusterTaskRequestDocuments &) = default ;
    SubmitDocClusterTaskRequestDocuments& operator=(SubmitDocClusterTaskRequestDocuments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->docId_ != nullptr && this->title_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SubmitDocClusterTaskRequestDocuments& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline SubmitDocClusterTaskRequestDocuments& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitDocClusterTaskRequestDocuments& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
