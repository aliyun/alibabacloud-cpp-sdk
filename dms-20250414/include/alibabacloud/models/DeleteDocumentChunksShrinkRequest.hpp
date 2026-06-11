// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDOCUMENTCHUNKSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDOCUMENTCHUNKSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DeleteDocumentChunksShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDocumentChunksShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkIds, chunkIdsShrink_);
      DARABONBA_PTR_TO_JSON(DocumentName, documentName_);
      DARABONBA_PTR_TO_JSON(KbUuid, kbUuid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDocumentChunksShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkIds, chunkIdsShrink_);
      DARABONBA_PTR_FROM_JSON(DocumentName, documentName_);
      DARABONBA_PTR_FROM_JSON(KbUuid, kbUuid_);
    };
    DeleteDocumentChunksShrinkRequest() = default ;
    DeleteDocumentChunksShrinkRequest(const DeleteDocumentChunksShrinkRequest &) = default ;
    DeleteDocumentChunksShrinkRequest(DeleteDocumentChunksShrinkRequest &&) = default ;
    DeleteDocumentChunksShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDocumentChunksShrinkRequest() = default ;
    DeleteDocumentChunksShrinkRequest& operator=(const DeleteDocumentChunksShrinkRequest &) = default ;
    DeleteDocumentChunksShrinkRequest& operator=(DeleteDocumentChunksShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkIdsShrink_ == nullptr
        && this->documentName_ == nullptr && this->kbUuid_ == nullptr; };
    // chunkIdsShrink Field Functions 
    bool hasChunkIdsShrink() const { return this->chunkIdsShrink_ != nullptr;};
    void deleteChunkIdsShrink() { this->chunkIdsShrink_ = nullptr;};
    inline string getChunkIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(chunkIdsShrink_, "") };
    inline DeleteDocumentChunksShrinkRequest& setChunkIdsShrink(string chunkIdsShrink) { DARABONBA_PTR_SET_VALUE(chunkIdsShrink_, chunkIdsShrink) };


    // documentName Field Functions 
    bool hasDocumentName() const { return this->documentName_ != nullptr;};
    void deleteDocumentName() { this->documentName_ = nullptr;};
    inline string getDocumentName() const { DARABONBA_PTR_GET_DEFAULT(documentName_, "") };
    inline DeleteDocumentChunksShrinkRequest& setDocumentName(string documentName) { DARABONBA_PTR_SET_VALUE(documentName_, documentName) };


    // kbUuid Field Functions 
    bool hasKbUuid() const { return this->kbUuid_ != nullptr;};
    void deleteKbUuid() { this->kbUuid_ = nullptr;};
    inline string getKbUuid() const { DARABONBA_PTR_GET_DEFAULT(kbUuid_, "") };
    inline DeleteDocumentChunksShrinkRequest& setKbUuid(string kbUuid) { DARABONBA_PTR_SET_VALUE(kbUuid_, kbUuid) };


  protected:
    // A list of chunk IDs.
    // 
    // This parameter is required.
    shared_ptr<string> chunkIdsShrink_ {};
    // The name of the document.
    // 
    // This parameter is required.
    shared_ptr<string> documentName_ {};
    // The ID of the knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> kbUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
