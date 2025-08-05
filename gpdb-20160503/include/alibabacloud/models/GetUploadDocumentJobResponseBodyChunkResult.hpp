// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADDOCUMENTJOBRESPONSEBODYCHUNKRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADDOCUMENTJOBRESPONSEBODYCHUNKRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetUploadDocumentJobResponseBodyChunkResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadDocumentJobResponseBodyChunkResult& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkFileUrl, chunkFileUrl_);
      DARABONBA_PTR_TO_JSON(DocumentLoaderResultFileUrl, documentLoaderResultFileUrl_);
      DARABONBA_PTR_TO_JSON(PlainChunkFileUrl, plainChunkFileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadDocumentJobResponseBodyChunkResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkFileUrl, chunkFileUrl_);
      DARABONBA_PTR_FROM_JSON(DocumentLoaderResultFileUrl, documentLoaderResultFileUrl_);
      DARABONBA_PTR_FROM_JSON(PlainChunkFileUrl, plainChunkFileUrl_);
    };
    GetUploadDocumentJobResponseBodyChunkResult() = default ;
    GetUploadDocumentJobResponseBodyChunkResult(const GetUploadDocumentJobResponseBodyChunkResult &) = default ;
    GetUploadDocumentJobResponseBodyChunkResult(GetUploadDocumentJobResponseBodyChunkResult &&) = default ;
    GetUploadDocumentJobResponseBodyChunkResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadDocumentJobResponseBodyChunkResult() = default ;
    GetUploadDocumentJobResponseBodyChunkResult& operator=(const GetUploadDocumentJobResponseBodyChunkResult &) = default ;
    GetUploadDocumentJobResponseBodyChunkResult& operator=(GetUploadDocumentJobResponseBodyChunkResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chunkFileUrl_ != nullptr
        && this->documentLoaderResultFileUrl_ != nullptr && this->plainChunkFileUrl_ != nullptr; };
    // chunkFileUrl Field Functions 
    bool hasChunkFileUrl() const { return this->chunkFileUrl_ != nullptr;};
    void deleteChunkFileUrl() { this->chunkFileUrl_ = nullptr;};
    inline string chunkFileUrl() const { DARABONBA_PTR_GET_DEFAULT(chunkFileUrl_, "") };
    inline GetUploadDocumentJobResponseBodyChunkResult& setChunkFileUrl(string chunkFileUrl) { DARABONBA_PTR_SET_VALUE(chunkFileUrl_, chunkFileUrl) };


    // documentLoaderResultFileUrl Field Functions 
    bool hasDocumentLoaderResultFileUrl() const { return this->documentLoaderResultFileUrl_ != nullptr;};
    void deleteDocumentLoaderResultFileUrl() { this->documentLoaderResultFileUrl_ = nullptr;};
    inline string documentLoaderResultFileUrl() const { DARABONBA_PTR_GET_DEFAULT(documentLoaderResultFileUrl_, "") };
    inline GetUploadDocumentJobResponseBodyChunkResult& setDocumentLoaderResultFileUrl(string documentLoaderResultFileUrl) { DARABONBA_PTR_SET_VALUE(documentLoaderResultFileUrl_, documentLoaderResultFileUrl) };


    // plainChunkFileUrl Field Functions 
    bool hasPlainChunkFileUrl() const { return this->plainChunkFileUrl_ != nullptr;};
    void deletePlainChunkFileUrl() { this->plainChunkFileUrl_ = nullptr;};
    inline string plainChunkFileUrl() const { DARABONBA_PTR_GET_DEFAULT(plainChunkFileUrl_, "") };
    inline GetUploadDocumentJobResponseBodyChunkResult& setPlainChunkFileUrl(string plainChunkFileUrl) { DARABONBA_PTR_SET_VALUE(plainChunkFileUrl_, plainChunkFileUrl) };


  protected:
    // The URL of the file after chunking. The validity period of the URL is 2 hours. The file is in the JSONL format. Each line is in the `{"page_content":"*****", "metadata": {"**":"***","**":"***"}` format.
    std::shared_ptr<string> chunkFileUrl_ = nullptr;
    std::shared_ptr<string> documentLoaderResultFileUrl_ = nullptr;
    // The URL of the file that does not contain metadata after chunking. The validity period of the URL is 2 hours. The file is in the TXT format. Each line is a chunk. The file can be easily used for embedding.
    std::shared_ptr<string> plainChunkFileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
