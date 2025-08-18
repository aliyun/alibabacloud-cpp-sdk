// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHRECORDSREQUESTLISTQUERYSEARCHFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHRECORDSREQUESTLISTQUERYSEARCHFILTER_HPP_
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
  class ListPublishRecordsRequestListQuerySearchFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishRecordsRequestListQuerySearchFilter& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeTypeList, changeTypeList_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectIdList, projectIdList_);
      DARABONBA_PTR_TO_JSON(PublishEndTime, publishEndTime_);
      DARABONBA_PTR_TO_JSON(PublishStartTime, publishStartTime_);
      DARABONBA_PTR_TO_JSON(PublishStatusList, publishStatusList_);
      DARABONBA_PTR_TO_JSON(SubmitterList, submitterList_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishRecordsRequestListQuerySearchFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeTypeList, changeTypeList_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectIdList, projectIdList_);
      DARABONBA_PTR_FROM_JSON(PublishEndTime, publishEndTime_);
      DARABONBA_PTR_FROM_JSON(PublishStartTime, publishStartTime_);
      DARABONBA_PTR_FROM_JSON(PublishStatusList, publishStatusList_);
      DARABONBA_PTR_FROM_JSON(SubmitterList, submitterList_);
    };
    ListPublishRecordsRequestListQuerySearchFilter() = default ;
    ListPublishRecordsRequestListQuerySearchFilter(const ListPublishRecordsRequestListQuerySearchFilter &) = default ;
    ListPublishRecordsRequestListQuerySearchFilter(ListPublishRecordsRequestListQuerySearchFilter &&) = default ;
    ListPublishRecordsRequestListQuerySearchFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishRecordsRequestListQuerySearchFilter() = default ;
    ListPublishRecordsRequestListQuerySearchFilter& operator=(const ListPublishRecordsRequestListQuerySearchFilter &) = default ;
    ListPublishRecordsRequestListQuerySearchFilter& operator=(ListPublishRecordsRequestListQuerySearchFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeTypeList_ != nullptr
        && this->page_ != nullptr && this->pageSize_ != nullptr && this->projectIdList_ != nullptr && this->publishEndTime_ != nullptr && this->publishStartTime_ != nullptr
        && this->publishStatusList_ != nullptr && this->submitterList_ != nullptr; };
    // changeTypeList Field Functions 
    bool hasChangeTypeList() const { return this->changeTypeList_ != nullptr;};
    void deleteChangeTypeList() { this->changeTypeList_ = nullptr;};
    inline const vector<int32_t> & changeTypeList() const { DARABONBA_PTR_GET_CONST(changeTypeList_, vector<int32_t>) };
    inline vector<int32_t> changeTypeList() { DARABONBA_PTR_GET(changeTypeList_, vector<int32_t>) };
    inline ListPublishRecordsRequestListQuerySearchFilter& setChangeTypeList(const vector<int32_t> & changeTypeList) { DARABONBA_PTR_SET_VALUE(changeTypeList_, changeTypeList) };
    inline ListPublishRecordsRequestListQuerySearchFilter& setChangeTypeList(vector<int32_t> && changeTypeList) { DARABONBA_PTR_SET_RVALUE(changeTypeList_, changeTypeList) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListPublishRecordsRequestListQuerySearchFilter& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPublishRecordsRequestListQuerySearchFilter& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectIdList Field Functions 
    bool hasProjectIdList() const { return this->projectIdList_ != nullptr;};
    void deleteProjectIdList() { this->projectIdList_ = nullptr;};
    inline const vector<int64_t> & projectIdList() const { DARABONBA_PTR_GET_CONST(projectIdList_, vector<int64_t>) };
    inline vector<int64_t> projectIdList() { DARABONBA_PTR_GET(projectIdList_, vector<int64_t>) };
    inline ListPublishRecordsRequestListQuerySearchFilter& setProjectIdList(const vector<int64_t> & projectIdList) { DARABONBA_PTR_SET_VALUE(projectIdList_, projectIdList) };
    inline ListPublishRecordsRequestListQuerySearchFilter& setProjectIdList(vector<int64_t> && projectIdList) { DARABONBA_PTR_SET_RVALUE(projectIdList_, projectIdList) };


    // publishEndTime Field Functions 
    bool hasPublishEndTime() const { return this->publishEndTime_ != nullptr;};
    void deletePublishEndTime() { this->publishEndTime_ = nullptr;};
    inline string publishEndTime() const { DARABONBA_PTR_GET_DEFAULT(publishEndTime_, "") };
    inline ListPublishRecordsRequestListQuerySearchFilter& setPublishEndTime(string publishEndTime) { DARABONBA_PTR_SET_VALUE(publishEndTime_, publishEndTime) };


    // publishStartTime Field Functions 
    bool hasPublishStartTime() const { return this->publishStartTime_ != nullptr;};
    void deletePublishStartTime() { this->publishStartTime_ = nullptr;};
    inline string publishStartTime() const { DARABONBA_PTR_GET_DEFAULT(publishStartTime_, "") };
    inline ListPublishRecordsRequestListQuerySearchFilter& setPublishStartTime(string publishStartTime) { DARABONBA_PTR_SET_VALUE(publishStartTime_, publishStartTime) };


    // publishStatusList Field Functions 
    bool hasPublishStatusList() const { return this->publishStatusList_ != nullptr;};
    void deletePublishStatusList() { this->publishStatusList_ = nullptr;};
    inline const vector<int32_t> & publishStatusList() const { DARABONBA_PTR_GET_CONST(publishStatusList_, vector<int32_t>) };
    inline vector<int32_t> publishStatusList() { DARABONBA_PTR_GET(publishStatusList_, vector<int32_t>) };
    inline ListPublishRecordsRequestListQuerySearchFilter& setPublishStatusList(const vector<int32_t> & publishStatusList) { DARABONBA_PTR_SET_VALUE(publishStatusList_, publishStatusList) };
    inline ListPublishRecordsRequestListQuerySearchFilter& setPublishStatusList(vector<int32_t> && publishStatusList) { DARABONBA_PTR_SET_RVALUE(publishStatusList_, publishStatusList) };


    // submitterList Field Functions 
    bool hasSubmitterList() const { return this->submitterList_ != nullptr;};
    void deleteSubmitterList() { this->submitterList_ = nullptr;};
    inline const vector<string> & submitterList() const { DARABONBA_PTR_GET_CONST(submitterList_, vector<string>) };
    inline vector<string> submitterList() { DARABONBA_PTR_GET(submitterList_, vector<string>) };
    inline ListPublishRecordsRequestListQuerySearchFilter& setSubmitterList(const vector<string> & submitterList) { DARABONBA_PTR_SET_VALUE(submitterList_, submitterList) };
    inline ListPublishRecordsRequestListQuerySearchFilter& setSubmitterList(vector<string> && submitterList) { DARABONBA_PTR_SET_RVALUE(submitterList_, submitterList) };


  protected:
    std::shared_ptr<vector<int32_t>> changeTypeList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> page_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> projectIdList_ = nullptr;
    std::shared_ptr<string> publishEndTime_ = nullptr;
    std::shared_ptr<string> publishStartTime_ = nullptr;
    std::shared_ptr<vector<int32_t>> publishStatusList_ = nullptr;
    std::shared_ptr<vector<string>> submitterList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
