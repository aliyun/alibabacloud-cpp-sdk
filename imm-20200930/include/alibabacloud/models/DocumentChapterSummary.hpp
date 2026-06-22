// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTCHAPTERSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTCHAPTERSUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChapterSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DocumentChapterSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentChapterSummary& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextMarker, nextMarker_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentChapterSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextMarker, nextMarker_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DocumentChapterSummary() = default ;
    DocumentChapterSummary(const DocumentChapterSummary &) = default ;
    DocumentChapterSummary(DocumentChapterSummary &&) = default ;
    DocumentChapterSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentChapterSummary() = default ;
    DocumentChapterSummary& operator=(const DocumentChapterSummary &) = default ;
    DocumentChapterSummary& operator=(DocumentChapterSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->nextMarker_ == nullptr && this->version_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ChapterSummary> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ChapterSummary>) };
    inline vector<ChapterSummary> getData() { DARABONBA_PTR_GET(data_, vector<ChapterSummary>) };
    inline DocumentChapterSummary& setData(const vector<ChapterSummary> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DocumentChapterSummary& setData(vector<ChapterSummary> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextMarker Field Functions 
    bool hasNextMarker() const { return this->nextMarker_ != nullptr;};
    void deleteNextMarker() { this->nextMarker_ = nullptr;};
    inline int32_t getNextMarker() const { DARABONBA_PTR_GET_DEFAULT(nextMarker_, 0) };
    inline DocumentChapterSummary& setNextMarker(int32_t nextMarker) { DARABONBA_PTR_SET_VALUE(nextMarker_, nextMarker) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DocumentChapterSummary& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<vector<ChapterSummary>> data_ {};
    shared_ptr<int32_t> nextMarker_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
