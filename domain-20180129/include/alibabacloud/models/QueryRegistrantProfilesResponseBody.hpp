// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREGISTRANTPROFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYREGISTRANTPROFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryRegistrantProfilesResponseBodyRegistrantProfiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryRegistrantProfilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRegistrantProfilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePage, prePage_);
      DARABONBA_PTR_TO_JSON(RegistrantProfiles, registrantProfiles_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRegistrantProfilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfiles, registrantProfiles_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryRegistrantProfilesResponseBody() = default ;
    QueryRegistrantProfilesResponseBody(const QueryRegistrantProfilesResponseBody &) = default ;
    QueryRegistrantProfilesResponseBody(QueryRegistrantProfilesResponseBody &&) = default ;
    QueryRegistrantProfilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRegistrantProfilesResponseBody() = default ;
    QueryRegistrantProfilesResponseBody& operator=(const QueryRegistrantProfilesResponseBody &) = default ;
    QueryRegistrantProfilesResponseBody& operator=(QueryRegistrantProfilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && return this->nextPage_ == nullptr && return this->pageSize_ == nullptr && return this->prePage_ == nullptr && return this->registrantProfiles_ == nullptr && return this->requestId_ == nullptr
        && return this->totalItemNum_ == nullptr && return this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t currentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline QueryRegistrantProfilesResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline bool nextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
    inline QueryRegistrantProfilesResponseBody& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryRegistrantProfilesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePage Field Functions 
    bool hasPrePage() const { return this->prePage_ != nullptr;};
    void deletePrePage() { this->prePage_ = nullptr;};
    inline bool prePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
    inline QueryRegistrantProfilesResponseBody& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


    // registrantProfiles Field Functions 
    bool hasRegistrantProfiles() const { return this->registrantProfiles_ != nullptr;};
    void deleteRegistrantProfiles() { this->registrantProfiles_ = nullptr;};
    inline const QueryRegistrantProfilesResponseBodyRegistrantProfiles & registrantProfiles() const { DARABONBA_PTR_GET_CONST(registrantProfiles_, QueryRegistrantProfilesResponseBodyRegistrantProfiles) };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfiles registrantProfiles() { DARABONBA_PTR_GET(registrantProfiles_, QueryRegistrantProfilesResponseBodyRegistrantProfiles) };
    inline QueryRegistrantProfilesResponseBody& setRegistrantProfiles(const QueryRegistrantProfilesResponseBodyRegistrantProfiles & registrantProfiles) { DARABONBA_PTR_SET_VALUE(registrantProfiles_, registrantProfiles) };
    inline QueryRegistrantProfilesResponseBody& setRegistrantProfiles(QueryRegistrantProfilesResponseBodyRegistrantProfiles && registrantProfiles) { DARABONBA_PTR_SET_RVALUE(registrantProfiles_, registrantProfiles) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRegistrantProfilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t totalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline QueryRegistrantProfilesResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t totalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline QueryRegistrantProfilesResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    // The page number returned.
    std::shared_ptr<int32_t> currentPageNum_ = nullptr;
    // Indicates whether the current page is followed by a page. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> nextPage_ = nullptr;
    // The number of entries returned on each page. Default value: **0**. Maximum value: **5000**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Indicates whether the current page is preceded by a page. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> prePage_ = nullptr;
    // The list of registrant profiles.
    std::shared_ptr<QueryRegistrantProfilesResponseBodyRegistrantProfiles> registrantProfiles_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries.
    // 
    // >  This parameter indicates the total number of queried registrant profiles. If multiple registrant profiles are queried, the information about these profiles is returned in sequence by profile.
    std::shared_ptr<int32_t> totalItemNum_ = nullptr;
    // The total number of returned pages.
    std::shared_ptr<int32_t> totalPageNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
