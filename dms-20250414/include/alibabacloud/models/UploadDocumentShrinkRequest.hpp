// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDOCUMENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDOCUMENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UploadDocumentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDocumentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkOverlap, chunkOverlap_);
      DARABONBA_PTR_TO_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DocumentLoaderName, documentLoaderName_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(KbUuid, kbUuid_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Separators, separatorsShrink_);
      DARABONBA_PTR_TO_JSON(SplitterModel, splitterModel_);
      DARABONBA_PTR_TO_JSON(TextSplitterName, textSplitterName_);
      DARABONBA_PTR_TO_JSON(VlEnhance, vlEnhance_);
      DARABONBA_PTR_TO_JSON(ZhTitleEnhance, zhTitleEnhance_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDocumentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkOverlap, chunkOverlap_);
      DARABONBA_PTR_FROM_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DocumentLoaderName, documentLoaderName_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(KbUuid, kbUuid_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Separators, separatorsShrink_);
      DARABONBA_PTR_FROM_JSON(SplitterModel, splitterModel_);
      DARABONBA_PTR_FROM_JSON(TextSplitterName, textSplitterName_);
      DARABONBA_PTR_FROM_JSON(VlEnhance, vlEnhance_);
      DARABONBA_PTR_FROM_JSON(ZhTitleEnhance, zhTitleEnhance_);
    };
    UploadDocumentShrinkRequest() = default ;
    UploadDocumentShrinkRequest(const UploadDocumentShrinkRequest &) = default ;
    UploadDocumentShrinkRequest(UploadDocumentShrinkRequest &&) = default ;
    UploadDocumentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDocumentShrinkRequest() = default ;
    UploadDocumentShrinkRequest& operator=(const UploadDocumentShrinkRequest &) = default ;
    UploadDocumentShrinkRequest& operator=(UploadDocumentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkOverlap_ == nullptr
        && this->chunkSize_ == nullptr && this->description_ == nullptr && this->documentLoaderName_ == nullptr && this->fileName_ == nullptr && this->kbUuid_ == nullptr
        && this->location_ == nullptr && this->separatorsShrink_ == nullptr && this->splitterModel_ == nullptr && this->textSplitterName_ == nullptr && this->vlEnhance_ == nullptr
        && this->zhTitleEnhance_ == nullptr; };
    // chunkOverlap Field Functions 
    bool hasChunkOverlap() const { return this->chunkOverlap_ != nullptr;};
    void deleteChunkOverlap() { this->chunkOverlap_ = nullptr;};
    inline int64_t getChunkOverlap() const { DARABONBA_PTR_GET_DEFAULT(chunkOverlap_, 0L) };
    inline UploadDocumentShrinkRequest& setChunkOverlap(int64_t chunkOverlap) { DARABONBA_PTR_SET_VALUE(chunkOverlap_, chunkOverlap) };


    // chunkSize Field Functions 
    bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
    void deleteChunkSize() { this->chunkSize_ = nullptr;};
    inline int64_t getChunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0L) };
    inline UploadDocumentShrinkRequest& setChunkSize(int64_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UploadDocumentShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // documentLoaderName Field Functions 
    bool hasDocumentLoaderName() const { return this->documentLoaderName_ != nullptr;};
    void deleteDocumentLoaderName() { this->documentLoaderName_ = nullptr;};
    inline string getDocumentLoaderName() const { DARABONBA_PTR_GET_DEFAULT(documentLoaderName_, "") };
    inline UploadDocumentShrinkRequest& setDocumentLoaderName(string documentLoaderName) { DARABONBA_PTR_SET_VALUE(documentLoaderName_, documentLoaderName) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadDocumentShrinkRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // kbUuid Field Functions 
    bool hasKbUuid() const { return this->kbUuid_ != nullptr;};
    void deleteKbUuid() { this->kbUuid_ = nullptr;};
    inline string getKbUuid() const { DARABONBA_PTR_GET_DEFAULT(kbUuid_, "") };
    inline UploadDocumentShrinkRequest& setKbUuid(string kbUuid) { DARABONBA_PTR_SET_VALUE(kbUuid_, kbUuid) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline UploadDocumentShrinkRequest& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // separatorsShrink Field Functions 
    bool hasSeparatorsShrink() const { return this->separatorsShrink_ != nullptr;};
    void deleteSeparatorsShrink() { this->separatorsShrink_ = nullptr;};
    inline string getSeparatorsShrink() const { DARABONBA_PTR_GET_DEFAULT(separatorsShrink_, "") };
    inline UploadDocumentShrinkRequest& setSeparatorsShrink(string separatorsShrink) { DARABONBA_PTR_SET_VALUE(separatorsShrink_, separatorsShrink) };


    // splitterModel Field Functions 
    bool hasSplitterModel() const { return this->splitterModel_ != nullptr;};
    void deleteSplitterModel() { this->splitterModel_ = nullptr;};
    inline string getSplitterModel() const { DARABONBA_PTR_GET_DEFAULT(splitterModel_, "") };
    inline UploadDocumentShrinkRequest& setSplitterModel(string splitterModel) { DARABONBA_PTR_SET_VALUE(splitterModel_, splitterModel) };


    // textSplitterName Field Functions 
    bool hasTextSplitterName() const { return this->textSplitterName_ != nullptr;};
    void deleteTextSplitterName() { this->textSplitterName_ = nullptr;};
    inline string getTextSplitterName() const { DARABONBA_PTR_GET_DEFAULT(textSplitterName_, "") };
    inline UploadDocumentShrinkRequest& setTextSplitterName(string textSplitterName) { DARABONBA_PTR_SET_VALUE(textSplitterName_, textSplitterName) };


    // vlEnhance Field Functions 
    bool hasVlEnhance() const { return this->vlEnhance_ != nullptr;};
    void deleteVlEnhance() { this->vlEnhance_ = nullptr;};
    inline bool getVlEnhance() const { DARABONBA_PTR_GET_DEFAULT(vlEnhance_, false) };
    inline UploadDocumentShrinkRequest& setVlEnhance(bool vlEnhance) { DARABONBA_PTR_SET_VALUE(vlEnhance_, vlEnhance) };


    // zhTitleEnhance Field Functions 
    bool hasZhTitleEnhance() const { return this->zhTitleEnhance_ != nullptr;};
    void deleteZhTitleEnhance() { this->zhTitleEnhance_ = nullptr;};
    inline bool getZhTitleEnhance() const { DARABONBA_PTR_GET_DEFAULT(zhTitleEnhance_, false) };
    inline UploadDocumentShrinkRequest& setZhTitleEnhance(bool zhTitleEnhance) { DARABONBA_PTR_SET_VALUE(zhTitleEnhance_, zhTitleEnhance) };


  protected:
    // The number of overlapping characters between adjacent chunks. This value cannot exceed `ChunkSize`. The default is 50.
    shared_ptr<int64_t> chunkOverlap_ {};
    // The size of each document chunk. The default is 250, and the maximum is 2,048.
    shared_ptr<int64_t> chunkSize_ {};
    // The description of the document.
    shared_ptr<string> description_ {};
    // The name of the document loader. The default is `ADBPGLoader`.
    shared_ptr<string> documentLoaderName_ {};
    // The name of the document.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The ID of the knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> kbUuid_ {};
    // The OSS location of the input file. Construct this path by appending the file name to the `UploadDir` value returned by the `DescribeKnowledgeBaseUploadSignature` operation.
    // 
    // This parameter is required.
    shared_ptr<string> location_ {};
    // An array of strings used to split text.
    // 
    // > - This critical parameter affects data chunking results and is related to the splitter specified by `TextSplitterName`.
    // >
    // > - In most cases, you can omit this parameter. The service automatically assigns default separators based on `TextSplitterName`.
    shared_ptr<string> separatorsShrink_ {};
    // The splitter model to use. The default is `qwen3-8b`.
    shared_ptr<string> splitterModel_ {};
    // The name of the text splitter.
    shared_ptr<string> textSplitterName_ {};
    // Specifies whether to enable visual-linguistic (VL) enhanced content recognition for complex documents. The default is false.
    shared_ptr<bool> vlEnhance_ {};
    // Specifies whether to enable title enhancement.
    shared_ptr<bool> zhTitleEnhance_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
