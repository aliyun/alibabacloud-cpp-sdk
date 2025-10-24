// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGESUMMARYCOMPAREDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGESUMMARYCOMPAREDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetStorageSummaryComparedRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageSummaryComparedRequest& obj) { 
      DARABONBA_PTR_TO_JSON(beginDate, beginDate_);
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(projects, projects_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageSummaryComparedRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(beginDate, beginDate_);
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(projects, projects_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetStorageSummaryComparedRequest() = default ;
    GetStorageSummaryComparedRequest(const GetStorageSummaryComparedRequest &) = default ;
    GetStorageSummaryComparedRequest(GetStorageSummaryComparedRequest &&) = default ;
    GetStorageSummaryComparedRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageSummaryComparedRequest() = default ;
    GetStorageSummaryComparedRequest& operator=(const GetStorageSummaryComparedRequest &) = default ;
    GetStorageSummaryComparedRequest& operator=(GetStorageSummaryComparedRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginDate_ == nullptr
        && return this->endDate_ == nullptr && return this->projects_ == nullptr && return this->region_ == nullptr && return this->tenantId_ == nullptr; };
    // beginDate Field Functions 
    bool hasBeginDate() const { return this->beginDate_ != nullptr;};
    void deleteBeginDate() { this->beginDate_ = nullptr;};
    inline string beginDate() const { DARABONBA_PTR_GET_DEFAULT(beginDate_, "") };
    inline GetStorageSummaryComparedRequest& setBeginDate(string beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetStorageSummaryComparedRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // projects Field Functions 
    bool hasProjects() const { return this->projects_ != nullptr;};
    void deleteProjects() { this->projects_ = nullptr;};
    inline const vector<string> & projects() const { DARABONBA_PTR_GET_CONST(projects_, vector<string>) };
    inline vector<string> projects() { DARABONBA_PTR_GET(projects_, vector<string>) };
    inline GetStorageSummaryComparedRequest& setProjects(const vector<string> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
    inline GetStorageSummaryComparedRequest& setProjects(vector<string> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetStorageSummaryComparedRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetStorageSummaryComparedRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> beginDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<vector<string>> projects_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
