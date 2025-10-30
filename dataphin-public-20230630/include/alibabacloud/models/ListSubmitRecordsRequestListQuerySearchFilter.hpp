// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBMITRECORDSREQUESTLISTQUERYSEARCHFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBMITRECORDSREQUESTLISTQUERYSEARCHFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListSubmitRecordsRequestListQuerySearchFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubmitRecordsRequestListQuerySearchFilter& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeTypeList, changeTypeList_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectIdList, projectIdList_);
      DARABONBA_PTR_TO_JSON(SubmitEndTime, submitEndTime_);
      DARABONBA_PTR_TO_JSON(SubmitStartTime, submitStartTime_);
      DARABONBA_PTR_TO_JSON(SubmitterList, submitterList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubmitRecordsRequestListQuerySearchFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeTypeList, changeTypeList_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectIdList, projectIdList_);
      DARABONBA_PTR_FROM_JSON(SubmitEndTime, submitEndTime_);
      DARABONBA_PTR_FROM_JSON(SubmitStartTime, submitStartTime_);
      DARABONBA_PTR_FROM_JSON(SubmitterList, submitterList_);
    };
    ListSubmitRecordsRequestListQuerySearchFilter() = default ;
    ListSubmitRecordsRequestListQuerySearchFilter(const ListSubmitRecordsRequestListQuerySearchFilter &) = default ;
    ListSubmitRecordsRequestListQuerySearchFilter(ListSubmitRecordsRequestListQuerySearchFilter &&) = default ;
    ListSubmitRecordsRequestListQuerySearchFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubmitRecordsRequestListQuerySearchFilter() = default ;
    ListSubmitRecordsRequestListQuerySearchFilter& operator=(const ListSubmitRecordsRequestListQuerySearchFilter &) = default ;
    ListSubmitRecordsRequestListQuerySearchFilter& operator=(ListSubmitRecordsRequestListQuerySearchFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeTypeList_ == nullptr
        && return this->page_ == nullptr && return this->pageSize_ == nullptr && return this->projectIdList_ == nullptr && return this->submitEndTime_ == nullptr && return this->submitStartTime_ == nullptr
        && return this->submitterList_ == nullptr; };
    // changeTypeList Field Functions 
    bool hasChangeTypeList() const { return this->changeTypeList_ != nullptr;};
    void deleteChangeTypeList() { this->changeTypeList_ = nullptr;};
    inline const vector<int32_t> & changeTypeList() const { DARABONBA_PTR_GET_CONST(changeTypeList_, vector<int32_t>) };
    inline vector<int32_t> changeTypeList() { DARABONBA_PTR_GET(changeTypeList_, vector<int32_t>) };
    inline ListSubmitRecordsRequestListQuerySearchFilter& setChangeTypeList(const vector<int32_t> & changeTypeList) { DARABONBA_PTR_SET_VALUE(changeTypeList_, changeTypeList) };
    inline ListSubmitRecordsRequestListQuerySearchFilter& setChangeTypeList(vector<int32_t> && changeTypeList) { DARABONBA_PTR_SET_RVALUE(changeTypeList_, changeTypeList) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListSubmitRecordsRequestListQuerySearchFilter& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSubmitRecordsRequestListQuerySearchFilter& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectIdList Field Functions 
    bool hasProjectIdList() const { return this->projectIdList_ != nullptr;};
    void deleteProjectIdList() { this->projectIdList_ = nullptr;};
    inline const vector<int64_t> & projectIdList() const { DARABONBA_PTR_GET_CONST(projectIdList_, vector<int64_t>) };
    inline vector<int64_t> projectIdList() { DARABONBA_PTR_GET(projectIdList_, vector<int64_t>) };
    inline ListSubmitRecordsRequestListQuerySearchFilter& setProjectIdList(const vector<int64_t> & projectIdList) { DARABONBA_PTR_SET_VALUE(projectIdList_, projectIdList) };
    inline ListSubmitRecordsRequestListQuerySearchFilter& setProjectIdList(vector<int64_t> && projectIdList) { DARABONBA_PTR_SET_RVALUE(projectIdList_, projectIdList) };


    // submitEndTime Field Functions 
    bool hasSubmitEndTime() const { return this->submitEndTime_ != nullptr;};
    void deleteSubmitEndTime() { this->submitEndTime_ = nullptr;};
    inline string submitEndTime() const { DARABONBA_PTR_GET_DEFAULT(submitEndTime_, "") };
    inline ListSubmitRecordsRequestListQuerySearchFilter& setSubmitEndTime(string submitEndTime) { DARABONBA_PTR_SET_VALUE(submitEndTime_, submitEndTime) };


    // submitStartTime Field Functions 
    bool hasSubmitStartTime() const { return this->submitStartTime_ != nullptr;};
    void deleteSubmitStartTime() { this->submitStartTime_ = nullptr;};
    inline string submitStartTime() const { DARABONBA_PTR_GET_DEFAULT(submitStartTime_, "") };
    inline ListSubmitRecordsRequestListQuerySearchFilter& setSubmitStartTime(string submitStartTime) { DARABONBA_PTR_SET_VALUE(submitStartTime_, submitStartTime) };


    // submitterList Field Functions 
    bool hasSubmitterList() const { return this->submitterList_ != nullptr;};
    void deleteSubmitterList() { this->submitterList_ = nullptr;};
    inline const vector<string> & submitterList() const { DARABONBA_PTR_GET_CONST(submitterList_, vector<string>) };
    inline vector<string> submitterList() { DARABONBA_PTR_GET(submitterList_, vector<string>) };
    inline ListSubmitRecordsRequestListQuerySearchFilter& setSubmitterList(const vector<string> & submitterList) { DARABONBA_PTR_SET_VALUE(submitterList_, submitterList) };
    inline ListSubmitRecordsRequestListQuerySearchFilter& setSubmitterList(vector<string> && submitterList) { DARABONBA_PTR_SET_RVALUE(submitterList_, submitterList) };


  protected:
    std::shared_ptr<vector<int32_t>> changeTypeList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> page_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> projectIdList_ = nullptr;
    std::shared_ptr<string> submitEndTime_ = nullptr;
    std::shared_ptr<string> submitStartTime_ = nullptr;
    std::shared_ptr<vector<string>> submitterList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
