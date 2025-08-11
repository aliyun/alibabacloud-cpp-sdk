// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWORKSBYORGANIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYWORKSBYORGANIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryWorksByOrganizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWorksByOrganizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ThirdPartAuthFlag, thirdPartAuthFlag_);
      DARABONBA_PTR_TO_JSON(WorksType, worksType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWorksByOrganizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ThirdPartAuthFlag, thirdPartAuthFlag_);
      DARABONBA_PTR_FROM_JSON(WorksType, worksType_);
    };
    QueryWorksByOrganizationRequest() = default ;
    QueryWorksByOrganizationRequest(const QueryWorksByOrganizationRequest &) = default ;
    QueryWorksByOrganizationRequest(QueryWorksByOrganizationRequest &&) = default ;
    QueryWorksByOrganizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWorksByOrganizationRequest() = default ;
    QueryWorksByOrganizationRequest& operator=(const QueryWorksByOrganizationRequest &) = default ;
    QueryWorksByOrganizationRequest& operator=(QueryWorksByOrganizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNum_ != nullptr
        && this->pageSize_ != nullptr && this->status_ != nullptr && this->thirdPartAuthFlag_ != nullptr && this->worksType_ != nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryWorksByOrganizationRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryWorksByOrganizationRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryWorksByOrganizationRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thirdPartAuthFlag Field Functions 
    bool hasThirdPartAuthFlag() const { return this->thirdPartAuthFlag_ != nullptr;};
    void deleteThirdPartAuthFlag() { this->thirdPartAuthFlag_ = nullptr;};
    inline int32_t thirdPartAuthFlag() const { DARABONBA_PTR_GET_DEFAULT(thirdPartAuthFlag_, 0) };
    inline QueryWorksByOrganizationRequest& setThirdPartAuthFlag(int32_t thirdPartAuthFlag) { DARABONBA_PTR_SET_VALUE(thirdPartAuthFlag_, thirdPartAuthFlag) };


    // worksType Field Functions 
    bool hasWorksType() const { return this->worksType_ != nullptr;};
    void deleteWorksType() { this->worksType_ = nullptr;};
    inline string worksType() const { DARABONBA_PTR_GET_DEFAULT(worksType_, "") };
    inline QueryWorksByOrganizationRequest& setWorksType(string worksType) { DARABONBA_PTR_SET_VALUE(worksType_, worksType) };


  protected:
    // Page number.
    // 
    // - Default value is 1.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // Number of items per page.
    // 
    // - Default value is 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The status of the work to query. Possible values:
    // 
    // - 0: Unpublished
    // - 1: Published
    // - 2: Modified but not published
    // - 3: Offline
    std::shared_ptr<int32_t> status_ = nullptr;
    // Third-party embedding status. Possible values:
    // 
    // - 0: Embedding not enabled
    // - 1: Embedding enabled
    std::shared_ptr<int32_t> thirdPartAuthFlag_ = nullptr;
    // The type of work to query. Leave blank to query all types. Possible values:
    // 
    // - DATAPRODUCT: Data Portal
    // - PAGE: Dashboard
    // - REPORT: Spreadsheet
    // - dashboardOfflineQuery: Self-service Data Retrieval
    std::shared_ptr<string> worksType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
