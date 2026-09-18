// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGESUMMARYCOMPAREDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGESUMMARYCOMPAREDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetStorageSummaryComparedShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageSummaryComparedShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(beginDate, beginDate_);
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(projects, projectsShrink_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageSummaryComparedShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(beginDate, beginDate_);
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(projects, projectsShrink_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetStorageSummaryComparedShrinkRequest() = default ;
    GetStorageSummaryComparedShrinkRequest(const GetStorageSummaryComparedShrinkRequest &) = default ;
    GetStorageSummaryComparedShrinkRequest(GetStorageSummaryComparedShrinkRequest &&) = default ;
    GetStorageSummaryComparedShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageSummaryComparedShrinkRequest() = default ;
    GetStorageSummaryComparedShrinkRequest& operator=(const GetStorageSummaryComparedShrinkRequest &) = default ;
    GetStorageSummaryComparedShrinkRequest& operator=(GetStorageSummaryComparedShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginDate_ == nullptr
        && this->endDate_ == nullptr && this->projectsShrink_ == nullptr && this->region_ == nullptr && this->tenantId_ == nullptr; };
    // beginDate Field Functions 
    bool hasBeginDate() const { return this->beginDate_ != nullptr;};
    void deleteBeginDate() { this->beginDate_ = nullptr;};
    inline string getBeginDate() const { DARABONBA_PTR_GET_DEFAULT(beginDate_, "") };
    inline GetStorageSummaryComparedShrinkRequest& setBeginDate(string beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetStorageSummaryComparedShrinkRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // projectsShrink Field Functions 
    bool hasProjectsShrink() const { return this->projectsShrink_ != nullptr;};
    void deleteProjectsShrink() { this->projectsShrink_ = nullptr;};
    inline string getProjectsShrink() const { DARABONBA_PTR_GET_DEFAULT(projectsShrink_, "") };
    inline GetStorageSummaryComparedShrinkRequest& setProjectsShrink(string projectsShrink) { DARABONBA_PTR_SET_VALUE(projectsShrink_, projectsShrink) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetStorageSummaryComparedShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetStorageSummaryComparedShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The start date.
    // 
    // This parameter is required.
    shared_ptr<string> beginDate_ {};
    // The end date.
    // 
    // This parameter is required.
    shared_ptr<string> endDate_ {};
    // The list of projects.
    shared_ptr<string> projectsShrink_ {};
    // The region ID.
    shared_ptr<string> region_ {};
    // The tenant ID. You can log on to the MaxCompute console and choose **Tenant Property** in the navigation pane on the left to view the tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
