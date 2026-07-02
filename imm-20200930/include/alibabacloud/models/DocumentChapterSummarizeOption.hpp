// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTCHAPTERSUMMARIZEOPTION_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTCHAPTERSUMMARIZEOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DocumentChapterSummarizeOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentChapterSummarizeOption& obj) { 
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentChapterSummarizeOption& obj) { 
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DocumentChapterSummarizeOption() = default ;
    DocumentChapterSummarizeOption(const DocumentChapterSummarizeOption &) = default ;
    DocumentChapterSummarizeOption(DocumentChapterSummarizeOption &&) = default ;
    DocumentChapterSummarizeOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentChapterSummarizeOption() = default ;
    DocumentChapterSummarizeOption& operator=(const DocumentChapterSummarizeOption &) = default ;
    DocumentChapterSummarizeOption& operator=(DocumentChapterSummarizeOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limit_ == nullptr
        && this->marker_ == nullptr && this->version_ == nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline DocumentChapterSummarizeOption& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline int32_t getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, 0) };
    inline DocumentChapterSummarizeOption& setMarker(int32_t marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DocumentChapterSummarizeOption& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The number of section-by-section summaries. If neither Marker nor Index is specified, the entire article is summarized by default. Marker and Index must either both be specified or both be omitted.
    shared_ptr<int32_t> limit_ {};
    // The start position for section-by-section summarization.
    shared_ptr<int32_t> marker_ {};
    // The version of section-by-section summarization.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
