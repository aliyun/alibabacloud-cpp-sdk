// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDOCUMENTCHUNKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDOCUMENTCHUNKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DeleteDocumentChunksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDocumentChunksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkIds, chunkIds_);
      DARABONBA_PTR_TO_JSON(DocumentName, documentName_);
      DARABONBA_PTR_TO_JSON(KbUuid, kbUuid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDocumentChunksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkIds, chunkIds_);
      DARABONBA_PTR_FROM_JSON(DocumentName, documentName_);
      DARABONBA_PTR_FROM_JSON(KbUuid, kbUuid_);
    };
    DeleteDocumentChunksRequest() = default ;
    DeleteDocumentChunksRequest(const DeleteDocumentChunksRequest &) = default ;
    DeleteDocumentChunksRequest(DeleteDocumentChunksRequest &&) = default ;
    DeleteDocumentChunksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDocumentChunksRequest() = default ;
    DeleteDocumentChunksRequest& operator=(const DeleteDocumentChunksRequest &) = default ;
    DeleteDocumentChunksRequest& operator=(DeleteDocumentChunksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkIds_ == nullptr
        && this->documentName_ == nullptr && this->kbUuid_ == nullptr; };
    // chunkIds Field Functions 
    bool hasChunkIds() const { return this->chunkIds_ != nullptr;};
    void deleteChunkIds() { this->chunkIds_ = nullptr;};
    inline const vector<string> & getChunkIds() const { DARABONBA_PTR_GET_CONST(chunkIds_, vector<string>) };
    inline vector<string> getChunkIds() { DARABONBA_PTR_GET(chunkIds_, vector<string>) };
    inline DeleteDocumentChunksRequest& setChunkIds(const vector<string> & chunkIds) { DARABONBA_PTR_SET_VALUE(chunkIds_, chunkIds) };
    inline DeleteDocumentChunksRequest& setChunkIds(vector<string> && chunkIds) { DARABONBA_PTR_SET_RVALUE(chunkIds_, chunkIds) };


    // documentName Field Functions 
    bool hasDocumentName() const { return this->documentName_ != nullptr;};
    void deleteDocumentName() { this->documentName_ = nullptr;};
    inline string getDocumentName() const { DARABONBA_PTR_GET_DEFAULT(documentName_, "") };
    inline DeleteDocumentChunksRequest& setDocumentName(string documentName) { DARABONBA_PTR_SET_VALUE(documentName_, documentName) };


    // kbUuid Field Functions 
    bool hasKbUuid() const { return this->kbUuid_ != nullptr;};
    void deleteKbUuid() { this->kbUuid_ = nullptr;};
    inline string getKbUuid() const { DARABONBA_PTR_GET_DEFAULT(kbUuid_, "") };
    inline DeleteDocumentChunksRequest& setKbUuid(string kbUuid) { DARABONBA_PTR_SET_VALUE(kbUuid_, kbUuid) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> chunkIds_ {};
    // This parameter is required.
    shared_ptr<string> documentName_ {};
    // This parameter is required.
    shared_ptr<string> kbUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
