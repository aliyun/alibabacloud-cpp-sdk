// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTCHUNKLISTRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTCHUNKLISTRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDocumentChunkListResponseBodyDataRecordsPos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetDocumentChunkListResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentChunkListResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(chunkId, chunkId_);
      DARABONBA_ANY_TO_JSON(chunkMeta, chunkMeta_);
      DARABONBA_PTR_TO_JSON(chunkOssUrl, chunkOssUrl_);
      DARABONBA_PTR_TO_JSON(chunkText, chunkText_);
      DARABONBA_PTR_TO_JSON(chunkType, chunkType_);
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_PTR_TO_JSON(fileType, fileType_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(libraryName, libraryName_);
      DARABONBA_PTR_TO_JSON(nextChunkId, nextChunkId_);
      DARABONBA_PTR_TO_JSON(pos, pos_);
      DARABONBA_PTR_TO_JSON(preChunkId, preChunkId_);
      DARABONBA_PTR_TO_JSON(score, score_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentChunkListResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(chunkId, chunkId_);
      DARABONBA_ANY_FROM_JSON(chunkMeta, chunkMeta_);
      DARABONBA_PTR_FROM_JSON(chunkOssUrl, chunkOssUrl_);
      DARABONBA_PTR_FROM_JSON(chunkText, chunkText_);
      DARABONBA_PTR_FROM_JSON(chunkType, chunkType_);
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_PTR_FROM_JSON(fileType, fileType_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(libraryName, libraryName_);
      DARABONBA_PTR_FROM_JSON(nextChunkId, nextChunkId_);
      DARABONBA_PTR_FROM_JSON(pos, pos_);
      DARABONBA_PTR_FROM_JSON(preChunkId, preChunkId_);
      DARABONBA_PTR_FROM_JSON(score, score_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    GetDocumentChunkListResponseBodyDataRecords() = default ;
    GetDocumentChunkListResponseBodyDataRecords(const GetDocumentChunkListResponseBodyDataRecords &) = default ;
    GetDocumentChunkListResponseBodyDataRecords(GetDocumentChunkListResponseBodyDataRecords &&) = default ;
    GetDocumentChunkListResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentChunkListResponseBodyDataRecords() = default ;
    GetDocumentChunkListResponseBodyDataRecords& operator=(const GetDocumentChunkListResponseBodyDataRecords &) = default ;
    GetDocumentChunkListResponseBodyDataRecords& operator=(GetDocumentChunkListResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkId_ == nullptr
        && return this->chunkMeta_ == nullptr && return this->chunkOssUrl_ == nullptr && return this->chunkText_ == nullptr && return this->chunkType_ == nullptr && return this->docId_ == nullptr
        && return this->fileType_ == nullptr && return this->libraryId_ == nullptr && return this->libraryName_ == nullptr && return this->nextChunkId_ == nullptr && return this->pos_ == nullptr
        && return this->preChunkId_ == nullptr && return this->score_ == nullptr && return this->title_ == nullptr; };
    // chunkId Field Functions 
    bool hasChunkId() const { return this->chunkId_ != nullptr;};
    void deleteChunkId() { this->chunkId_ = nullptr;};
    inline string chunkId() const { DARABONBA_PTR_GET_DEFAULT(chunkId_, "") };
    inline GetDocumentChunkListResponseBodyDataRecords& setChunkId(string chunkId) { DARABONBA_PTR_SET_VALUE(chunkId_, chunkId) };


    // chunkMeta Field Functions 
    bool hasChunkMeta() const { return this->chunkMeta_ != nullptr;};
    void deleteChunkMeta() { this->chunkMeta_ = nullptr;};
    inline     const Darabonba::Json & chunkMeta() const { DARABONBA_GET(chunkMeta_) };
    Darabonba::Json & chunkMeta() { DARABONBA_GET(chunkMeta_) };
    inline GetDocumentChunkListResponseBodyDataRecords& setChunkMeta(const Darabonba::Json & chunkMeta) { DARABONBA_SET_VALUE(chunkMeta_, chunkMeta) };
    inline GetDocumentChunkListResponseBodyDataRecords& setChunkMeta(Darabonba::Json & chunkMeta) { DARABONBA_SET_RVALUE(chunkMeta_, chunkMeta) };


    // chunkOssUrl Field Functions 
    bool hasChunkOssUrl() const { return this->chunkOssUrl_ != nullptr;};
    void deleteChunkOssUrl() { this->chunkOssUrl_ = nullptr;};
    inline string chunkOssUrl() const { DARABONBA_PTR_GET_DEFAULT(chunkOssUrl_, "") };
    inline GetDocumentChunkListResponseBodyDataRecords& setChunkOssUrl(string chunkOssUrl) { DARABONBA_PTR_SET_VALUE(chunkOssUrl_, chunkOssUrl) };


    // chunkText Field Functions 
    bool hasChunkText() const { return this->chunkText_ != nullptr;};
    void deleteChunkText() { this->chunkText_ = nullptr;};
    inline string chunkText() const { DARABONBA_PTR_GET_DEFAULT(chunkText_, "") };
    inline GetDocumentChunkListResponseBodyDataRecords& setChunkText(string chunkText) { DARABONBA_PTR_SET_VALUE(chunkText_, chunkText) };


    // chunkType Field Functions 
    bool hasChunkType() const { return this->chunkType_ != nullptr;};
    void deleteChunkType() { this->chunkType_ = nullptr;};
    inline string chunkType() const { DARABONBA_PTR_GET_DEFAULT(chunkType_, "") };
    inline GetDocumentChunkListResponseBodyDataRecords& setChunkType(string chunkType) { DARABONBA_PTR_SET_VALUE(chunkType_, chunkType) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline GetDocumentChunkListResponseBodyDataRecords& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline GetDocumentChunkListResponseBodyDataRecords& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline GetDocumentChunkListResponseBodyDataRecords& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // libraryName Field Functions 
    bool hasLibraryName() const { return this->libraryName_ != nullptr;};
    void deleteLibraryName() { this->libraryName_ = nullptr;};
    inline string libraryName() const { DARABONBA_PTR_GET_DEFAULT(libraryName_, "") };
    inline GetDocumentChunkListResponseBodyDataRecords& setLibraryName(string libraryName) { DARABONBA_PTR_SET_VALUE(libraryName_, libraryName) };


    // nextChunkId Field Functions 
    bool hasNextChunkId() const { return this->nextChunkId_ != nullptr;};
    void deleteNextChunkId() { this->nextChunkId_ = nullptr;};
    inline string nextChunkId() const { DARABONBA_PTR_GET_DEFAULT(nextChunkId_, "") };
    inline GetDocumentChunkListResponseBodyDataRecords& setNextChunkId(string nextChunkId) { DARABONBA_PTR_SET_VALUE(nextChunkId_, nextChunkId) };


    // pos Field Functions 
    bool hasPos() const { return this->pos_ != nullptr;};
    void deletePos() { this->pos_ = nullptr;};
    inline const vector<Models::GetDocumentChunkListResponseBodyDataRecordsPos> & pos() const { DARABONBA_PTR_GET_CONST(pos_, vector<Models::GetDocumentChunkListResponseBodyDataRecordsPos>) };
    inline vector<Models::GetDocumentChunkListResponseBodyDataRecordsPos> pos() { DARABONBA_PTR_GET(pos_, vector<Models::GetDocumentChunkListResponseBodyDataRecordsPos>) };
    inline GetDocumentChunkListResponseBodyDataRecords& setPos(const vector<Models::GetDocumentChunkListResponseBodyDataRecordsPos> & pos) { DARABONBA_PTR_SET_VALUE(pos_, pos) };
    inline GetDocumentChunkListResponseBodyDataRecords& setPos(vector<Models::GetDocumentChunkListResponseBodyDataRecordsPos> && pos) { DARABONBA_PTR_SET_RVALUE(pos_, pos) };


    // preChunkId Field Functions 
    bool hasPreChunkId() const { return this->preChunkId_ != nullptr;};
    void deletePreChunkId() { this->preChunkId_ = nullptr;};
    inline string preChunkId() const { DARABONBA_PTR_GET_DEFAULT(preChunkId_, "") };
    inline GetDocumentChunkListResponseBodyDataRecords& setPreChunkId(string preChunkId) { DARABONBA_PTR_SET_VALUE(preChunkId_, preChunkId) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline GetDocumentChunkListResponseBodyDataRecords& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetDocumentChunkListResponseBodyDataRecords& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> chunkId_ = nullptr;
    Darabonba::Json chunkMeta_ = nullptr;
    std::shared_ptr<string> chunkOssUrl_ = nullptr;
    std::shared_ptr<string> chunkText_ = nullptr;
    std::shared_ptr<string> chunkType_ = nullptr;
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> fileType_ = nullptr;
    std::shared_ptr<string> libraryId_ = nullptr;
    std::shared_ptr<string> libraryName_ = nullptr;
    std::shared_ptr<string> nextChunkId_ = nullptr;
    std::shared_ptr<vector<Models::GetDocumentChunkListResponseBodyDataRecordsPos>> pos_ = nullptr;
    std::shared_ptr<string> preChunkId_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
