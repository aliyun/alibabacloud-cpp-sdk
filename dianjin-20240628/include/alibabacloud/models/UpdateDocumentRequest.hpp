// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class UpdateDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_ANY_TO_JSON(meta, meta_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_ANY_FROM_JSON(meta, meta_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    UpdateDocumentRequest() = default ;
    UpdateDocumentRequest(const UpdateDocumentRequest &) = default ;
    UpdateDocumentRequest(UpdateDocumentRequest &&) = default ;
    UpdateDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDocumentRequest() = default ;
    UpdateDocumentRequest& operator=(const UpdateDocumentRequest &) = default ;
    UpdateDocumentRequest& operator=(UpdateDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docId_ != nullptr
        && this->libraryId_ != nullptr && this->meta_ != nullptr && this->title_ != nullptr; };
    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline UpdateDocumentRequest& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline UpdateDocumentRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline     const Darabonba::Json & meta() const { DARABONBA_GET(meta_) };
    Darabonba::Json & meta() { DARABONBA_GET(meta_) };
    inline UpdateDocumentRequest& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
    inline UpdateDocumentRequest& setMeta(Darabonba::Json & meta) { DARABONBA_SET_RVALUE(meta_, meta) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateDocumentRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> docId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> libraryId_ = nullptr;
    Darabonba::Json meta_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
