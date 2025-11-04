// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXFILEDETAILSRESPONSEBODYDATADOCUMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXFILEDETAILSRESPONSEBODYDATADOCUMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListIndexFileDetailsResponseBodyDataDocuments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexFileDetailsResponseBodyDataDocuments& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkMode, chunkMode_);
      DARABONBA_PTR_TO_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DocumentType, documentType_);
      DARABONBA_PTR_TO_JSON(EnableHeaders, enableHeaders_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OverlapSize, overlapSize_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(separator, separator_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexFileDetailsResponseBodyDataDocuments& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkMode, chunkMode_);
      DARABONBA_PTR_FROM_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DocumentType, documentType_);
      DARABONBA_PTR_FROM_JSON(EnableHeaders, enableHeaders_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OverlapSize, overlapSize_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(separator, separator_);
    };
    ListIndexFileDetailsResponseBodyDataDocuments() = default ;
    ListIndexFileDetailsResponseBodyDataDocuments(const ListIndexFileDetailsResponseBodyDataDocuments &) = default ;
    ListIndexFileDetailsResponseBodyDataDocuments(ListIndexFileDetailsResponseBodyDataDocuments &&) = default ;
    ListIndexFileDetailsResponseBodyDataDocuments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexFileDetailsResponseBodyDataDocuments() = default ;
    ListIndexFileDetailsResponseBodyDataDocuments& operator=(const ListIndexFileDetailsResponseBodyDataDocuments &) = default ;
    ListIndexFileDetailsResponseBodyDataDocuments& operator=(ListIndexFileDetailsResponseBodyDataDocuments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkMode_ == nullptr
        && return this->chunkSize_ == nullptr && return this->code_ == nullptr && return this->documentType_ == nullptr && return this->enableHeaders_ == nullptr && return this->gmtModified_ == nullptr
        && return this->id_ == nullptr && return this->message_ == nullptr && return this->name_ == nullptr && return this->overlapSize_ == nullptr && return this->size_ == nullptr
        && return this->sourceId_ == nullptr && return this->status_ == nullptr && return this->separator_ == nullptr; };
    // chunkMode Field Functions 
    bool hasChunkMode() const { return this->chunkMode_ != nullptr;};
    void deleteChunkMode() { this->chunkMode_ = nullptr;};
    inline string chunkMode() const { DARABONBA_PTR_GET_DEFAULT(chunkMode_, "") };
    inline ListIndexFileDetailsResponseBodyDataDocuments& setChunkMode(string chunkMode) { DARABONBA_PTR_SET_VALUE(chunkMode_, chunkMode) };


    // chunkSize Field Functions 
    bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
    void deleteChunkSize() { this->chunkSize_ = nullptr;};
    inline string chunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, "") };
    inline ListIndexFileDetailsResponseBodyDataDocuments& setChunkSize(string chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListIndexFileDetailsResponseBodyDataDocuments& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // documentType Field Functions 
    bool hasDocumentType() const { return this->documentType_ != nullptr;};
    void deleteDocumentType() { this->documentType_ = nullptr;};
    inline string documentType() const { DARABONBA_PTR_GET_DEFAULT(documentType_, "") };
    inline ListIndexFileDetailsResponseBodyDataDocuments& setDocumentType(string documentType) { DARABONBA_PTR_SET_VALUE(documentType_, documentType) };


    // enableHeaders Field Functions 
    bool hasEnableHeaders() const { return this->enableHeaders_ != nullptr;};
    void deleteEnableHeaders() { this->enableHeaders_ = nullptr;};
    inline string enableHeaders() const { DARABONBA_PTR_GET_DEFAULT(enableHeaders_, "") };
    inline ListIndexFileDetailsResponseBodyDataDocuments& setEnableHeaders(string enableHeaders) { DARABONBA_PTR_SET_VALUE(enableHeaders_, enableHeaders) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListIndexFileDetailsResponseBodyDataDocuments& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListIndexFileDetailsResponseBodyDataDocuments& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIndexFileDetailsResponseBodyDataDocuments& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIndexFileDetailsResponseBodyDataDocuments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // overlapSize Field Functions 
    bool hasOverlapSize() const { return this->overlapSize_ != nullptr;};
    void deleteOverlapSize() { this->overlapSize_ = nullptr;};
    inline string overlapSize() const { DARABONBA_PTR_GET_DEFAULT(overlapSize_, "") };
    inline ListIndexFileDetailsResponseBodyDataDocuments& setOverlapSize(string overlapSize) { DARABONBA_PTR_SET_VALUE(overlapSize_, overlapSize) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListIndexFileDetailsResponseBodyDataDocuments& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ListIndexFileDetailsResponseBodyDataDocuments& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIndexFileDetailsResponseBodyDataDocuments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // separator Field Functions 
    bool hasSeparator() const { return this->separator_ != nullptr;};
    void deleteSeparator() { this->separator_ = nullptr;};
    inline string separator() const { DARABONBA_PTR_GET_DEFAULT(separator_, "") };
    inline ListIndexFileDetailsResponseBodyDataDocuments& setSeparator(string separator) { DARABONBA_PTR_SET_VALUE(separator_, separator) };


  protected:
    std::shared_ptr<string> chunkMode_ = nullptr;
    std::shared_ptr<string> chunkSize_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> documentType_ = nullptr;
    std::shared_ptr<string> enableHeaders_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> overlapSize_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> sourceId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> separator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
