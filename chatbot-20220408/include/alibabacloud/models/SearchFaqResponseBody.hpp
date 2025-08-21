// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFAQRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFAQRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchFaqResponseBodyFaqHits.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class SearchFaqResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFaqResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FaqHits, faqHits_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFaqResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FaqHits, faqHits_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchFaqResponseBody() = default ;
    SearchFaqResponseBody(const SearchFaqResponseBody &) = default ;
    SearchFaqResponseBody(SearchFaqResponseBody &&) = default ;
    SearchFaqResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFaqResponseBody() = default ;
    SearchFaqResponseBody& operator=(const SearchFaqResponseBody &) = default ;
    SearchFaqResponseBody& operator=(SearchFaqResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->faqHits_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // faqHits Field Functions 
    bool hasFaqHits() const { return this->faqHits_ != nullptr;};
    void deleteFaqHits() { this->faqHits_ = nullptr;};
    inline const vector<SearchFaqResponseBodyFaqHits> & faqHits() const { DARABONBA_PTR_GET_CONST(faqHits_, vector<SearchFaqResponseBodyFaqHits>) };
    inline vector<SearchFaqResponseBodyFaqHits> faqHits() { DARABONBA_PTR_GET(faqHits_, vector<SearchFaqResponseBodyFaqHits>) };
    inline SearchFaqResponseBody& setFaqHits(const vector<SearchFaqResponseBodyFaqHits> & faqHits) { DARABONBA_PTR_SET_VALUE(faqHits_, faqHits) };
    inline SearchFaqResponseBody& setFaqHits(vector<SearchFaqResponseBodyFaqHits> && faqHits) { DARABONBA_PTR_SET_RVALUE(faqHits_, faqHits) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchFaqResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchFaqResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchFaqResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline SearchFaqResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<SearchFaqResponseBodyFaqHits>> faqHits_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
