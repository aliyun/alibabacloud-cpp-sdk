// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPREDEFINEDDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPREDEFINEDDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePredefinedDocumentRequestChunks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreatePredefinedDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePredefinedDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chunks, chunks_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_ANY_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePredefinedDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chunks, chunks_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_ANY_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    CreatePredefinedDocumentRequest() = default ;
    CreatePredefinedDocumentRequest(const CreatePredefinedDocumentRequest &) = default ;
    CreatePredefinedDocumentRequest(CreatePredefinedDocumentRequest &&) = default ;
    CreatePredefinedDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePredefinedDocumentRequest() = default ;
    CreatePredefinedDocumentRequest& operator=(const CreatePredefinedDocumentRequest &) = default ;
    CreatePredefinedDocumentRequest& operator=(CreatePredefinedDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chunks_ != nullptr
        && this->libraryId_ != nullptr && this->metadata_ != nullptr && this->title_ != nullptr; };
    // chunks Field Functions 
    bool hasChunks() const { return this->chunks_ != nullptr;};
    void deleteChunks() { this->chunks_ = nullptr;};
    inline const vector<CreatePredefinedDocumentRequestChunks> & chunks() const { DARABONBA_PTR_GET_CONST(chunks_, vector<CreatePredefinedDocumentRequestChunks>) };
    inline vector<CreatePredefinedDocumentRequestChunks> chunks() { DARABONBA_PTR_GET(chunks_, vector<CreatePredefinedDocumentRequestChunks>) };
    inline CreatePredefinedDocumentRequest& setChunks(const vector<CreatePredefinedDocumentRequestChunks> & chunks) { DARABONBA_PTR_SET_VALUE(chunks_, chunks) };
    inline CreatePredefinedDocumentRequest& setChunks(vector<CreatePredefinedDocumentRequestChunks> && chunks) { DARABONBA_PTR_SET_RVALUE(chunks_, chunks) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline CreatePredefinedDocumentRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline CreatePredefinedDocumentRequest& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline CreatePredefinedDocumentRequest& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreatePredefinedDocumentRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<vector<CreatePredefinedDocumentRequestChunks>> chunks_ = nullptr;
    std::shared_ptr<string> libraryId_ = nullptr;
    Darabonba::Json metadata_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
