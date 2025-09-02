// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiNameKeyword, apiNameKeyword_);
      DARABONBA_PTR_TO_JSON(ApiPathKeyword, apiPathKeyword_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiNameKeyword, apiNameKeyword_);
      DARABONBA_PTR_FROM_JSON(ApiPathKeyword, apiPathKeyword_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ListDataServiceApisRequest() = default ;
    ListDataServiceApisRequest(const ListDataServiceApisRequest &) = default ;
    ListDataServiceApisRequest(ListDataServiceApisRequest &&) = default ;
    ListDataServiceApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApisRequest() = default ;
    ListDataServiceApisRequest& operator=(const ListDataServiceApisRequest &) = default ;
    ListDataServiceApisRequest& operator=(ListDataServiceApisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiNameKeyword_ != nullptr
        && this->apiPathKeyword_ != nullptr && this->creatorId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->projectId_ != nullptr
        && this->tenantId_ != nullptr; };
    // apiNameKeyword Field Functions 
    bool hasApiNameKeyword() const { return this->apiNameKeyword_ != nullptr;};
    void deleteApiNameKeyword() { this->apiNameKeyword_ = nullptr;};
    inline string apiNameKeyword() const { DARABONBA_PTR_GET_DEFAULT(apiNameKeyword_, "") };
    inline ListDataServiceApisRequest& setApiNameKeyword(string apiNameKeyword) { DARABONBA_PTR_SET_VALUE(apiNameKeyword_, apiNameKeyword) };


    // apiPathKeyword Field Functions 
    bool hasApiPathKeyword() const { return this->apiPathKeyword_ != nullptr;};
    void deleteApiPathKeyword() { this->apiPathKeyword_ = nullptr;};
    inline string apiPathKeyword() const { DARABONBA_PTR_GET_DEFAULT(apiPathKeyword_, "") };
    inline ListDataServiceApisRequest& setApiPathKeyword(string apiPathKeyword) { DARABONBA_PTR_SET_VALUE(apiPathKeyword_, apiPathKeyword) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListDataServiceApisRequest& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataServiceApisRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataServiceApisRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataServiceApisRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline ListDataServiceApisRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The keyword in API names. The keyword is used to search for the APIs whose names contain the keyword.
    std::shared_ptr<string> apiNameKeyword_ = nullptr;
    // The keyword in API paths. The keyword is used to search for the APIs whose paths contain the keyword.
    std::shared_ptr<string> apiPathKeyword_ = nullptr;
    // The ID of the Alibaba Cloud account used by the creator of the APIs. The ID is used to search for the APIs created by the creator.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The tenant ID. To obtain the tenant ID, perform the following steps: Log on to the [DataWorks console](https://workbench.data.aliyun.com/console). Find your workspace and go to the DataStudio page. On the DataStudio page, click the logon username in the upper-right corner and click User Info in the Menu section.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
