// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTDISPOSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTDISPOSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeEventDisposeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventDisposeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventDisposeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    DescribeEventDisposeRequest() = default ;
    DescribeEventDisposeRequest(const DescribeEventDisposeRequest &) = default ;
    DescribeEventDisposeRequest(DescribeEventDisposeRequest &&) = default ;
    DescribeEventDisposeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventDisposeRequest() = default ;
    DescribeEventDisposeRequest& operator=(const DescribeEventDisposeRequest &) = default ;
    DescribeEventDisposeRequest& operator=(DescribeEventDisposeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->incidentUuid_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->roleFor_ != nullptr && this->roleType_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeEventDisposeRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline DescribeEventDisposeRequest& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEventDisposeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEventDisposeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DescribeEventDisposeRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline DescribeEventDisposeRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The page number. Pages start from page 1.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The UUID of the event.
    std::shared_ptr<string> incidentUuid_ = nullptr;
    // The number of entries per page. Maximum value: 500.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The data management center of the threat analysis feature. Specify this parameter based on the region in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions inside China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the account that you switch from the management account.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // The type of the view. Valid values:
    // - 0: the current Alibaba Cloud account
    // - 1: the global account
    std::shared_ptr<int32_t> roleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
