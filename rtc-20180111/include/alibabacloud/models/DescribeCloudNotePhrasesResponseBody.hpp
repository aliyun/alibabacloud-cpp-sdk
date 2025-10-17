// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDNOTEPHRASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDNOTEPHRASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudNotePhrasesResponseBodyPhrases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeCloudNotePhrasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudNotePhrasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Phrases, phrases_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudNotePhrasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Phrases, phrases_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeCloudNotePhrasesResponseBody() = default ;
    DescribeCloudNotePhrasesResponseBody(const DescribeCloudNotePhrasesResponseBody &) = default ;
    DescribeCloudNotePhrasesResponseBody(DescribeCloudNotePhrasesResponseBody &&) = default ;
    DescribeCloudNotePhrasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudNotePhrasesResponseBody() = default ;
    DescribeCloudNotePhrasesResponseBody& operator=(const DescribeCloudNotePhrasesResponseBody &) = default ;
    DescribeCloudNotePhrasesResponseBody& operator=(DescribeCloudNotePhrasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->phrases_ == nullptr
        && return this->requestId_ == nullptr && return this->totalNum_ == nullptr && return this->totalPage_ == nullptr; };
    // phrases Field Functions 
    bool hasPhrases() const { return this->phrases_ != nullptr;};
    void deletePhrases() { this->phrases_ = nullptr;};
    inline const vector<DescribeCloudNotePhrasesResponseBodyPhrases> & phrases() const { DARABONBA_PTR_GET_CONST(phrases_, vector<DescribeCloudNotePhrasesResponseBodyPhrases>) };
    inline vector<DescribeCloudNotePhrasesResponseBodyPhrases> phrases() { DARABONBA_PTR_GET(phrases_, vector<DescribeCloudNotePhrasesResponseBodyPhrases>) };
    inline DescribeCloudNotePhrasesResponseBody& setPhrases(const vector<DescribeCloudNotePhrasesResponseBodyPhrases> & phrases) { DARABONBA_PTR_SET_VALUE(phrases_, phrases) };
    inline DescribeCloudNotePhrasesResponseBody& setPhrases(vector<DescribeCloudNotePhrasesResponseBodyPhrases> && phrases) { DARABONBA_PTR_SET_RVALUE(phrases_, phrases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudNotePhrasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribeCloudNotePhrasesResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeCloudNotePhrasesResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    std::shared_ptr<vector<DescribeCloudNotePhrasesResponseBodyPhrases>> phrases_ = nullptr;
    // Id of the request。
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalNum_ = nullptr;
    std::shared_ptr<int64_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
