// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTDOCUMENTCHUNKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPSERTDOCUMENTCHUNKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UpsertDocumentChunksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertDocumentChunksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Chunks, chunks_);
      DARABONBA_PTR_TO_JSON(DocumentName, documentName_);
      DARABONBA_PTR_TO_JSON(KbUuid, kbUuid_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertDocumentChunksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Chunks, chunks_);
      DARABONBA_PTR_FROM_JSON(DocumentName, documentName_);
      DARABONBA_PTR_FROM_JSON(KbUuid, kbUuid_);
    };
    UpsertDocumentChunksRequest() = default ;
    UpsertDocumentChunksRequest(const UpsertDocumentChunksRequest &) = default ;
    UpsertDocumentChunksRequest(UpsertDocumentChunksRequest &&) = default ;
    UpsertDocumentChunksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertDocumentChunksRequest() = default ;
    UpsertDocumentChunksRequest& operator=(const UpsertDocumentChunksRequest &) = default ;
    UpsertDocumentChunksRequest& operator=(UpsertDocumentChunksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunks_ == nullptr
        && this->documentName_ == nullptr && this->kbUuid_ == nullptr; };
    // chunks Field Functions 
    bool hasChunks() const { return this->chunks_ != nullptr;};
    void deleteChunks() { this->chunks_ = nullptr;};
    inline string getChunks() const { DARABONBA_PTR_GET_DEFAULT(chunks_, "") };
    inline UpsertDocumentChunksRequest& setChunks(string chunks) { DARABONBA_PTR_SET_VALUE(chunks_, chunks) };


    // documentName Field Functions 
    bool hasDocumentName() const { return this->documentName_ != nullptr;};
    void deleteDocumentName() { this->documentName_ = nullptr;};
    inline string getDocumentName() const { DARABONBA_PTR_GET_DEFAULT(documentName_, "") };
    inline UpsertDocumentChunksRequest& setDocumentName(string documentName) { DARABONBA_PTR_SET_VALUE(documentName_, documentName) };


    // kbUuid Field Functions 
    bool hasKbUuid() const { return this->kbUuid_ != nullptr;};
    void deleteKbUuid() { this->kbUuid_ = nullptr;};
    inline string getKbUuid() const { DARABONBA_PTR_GET_DEFAULT(kbUuid_, "") };
    inline UpsertDocumentChunksRequest& setKbUuid(string kbUuid) { DARABONBA_PTR_SET_VALUE(kbUuid_, kbUuid) };


  protected:
    // A list of document chunks to upsert.
    // 
    // This parameter is required.
    shared_ptr<string> chunks_ {};
    // The name of the document.
    // 
    // This parameter is required.
    shared_ptr<string> documentName_ {};
    // The unique identifier for the knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> kbUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
