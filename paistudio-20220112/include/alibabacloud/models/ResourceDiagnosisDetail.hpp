// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCEDIAGNOSISDETAIL_HPP_
#define ALIBABACLOUD_MODELS_RESOURCEDIAGNOSISDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ResourceDiagnosisDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceDiagnosisDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ExceedResources, exceedResources_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Used, used_);
      DARABONBA_PTR_TO_JSON(WorkloadIds, workloadIds_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceDiagnosisDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ExceedResources, exceedResources_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Used, used_);
      DARABONBA_PTR_FROM_JSON(WorkloadIds, workloadIds_);
    };
    ResourceDiagnosisDetail() = default ;
    ResourceDiagnosisDetail(const ResourceDiagnosisDetail &) = default ;
    ResourceDiagnosisDetail(ResourceDiagnosisDetail &&) = default ;
    ResourceDiagnosisDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceDiagnosisDetail() = default ;
    ResourceDiagnosisDetail& operator=(const ResourceDiagnosisDetail &) = default ;
    ResourceDiagnosisDetail& operator=(ResourceDiagnosisDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exceedResources_ != nullptr
        && this->limit_ != nullptr && this->status_ != nullptr && this->used_ != nullptr && this->workloadIds_ != nullptr; };
    // exceedResources Field Functions 
    bool hasExceedResources() const { return this->exceedResources_ != nullptr;};
    void deleteExceedResources() { this->exceedResources_ = nullptr;};
    inline const vector<string> & exceedResources() const { DARABONBA_PTR_GET_CONST(exceedResources_, vector<string>) };
    inline vector<string> exceedResources() { DARABONBA_PTR_GET(exceedResources_, vector<string>) };
    inline ResourceDiagnosisDetail& setExceedResources(const vector<string> & exceedResources) { DARABONBA_PTR_SET_VALUE(exceedResources_, exceedResources) };
    inline ResourceDiagnosisDetail& setExceedResources(vector<string> && exceedResources) { DARABONBA_PTR_SET_RVALUE(exceedResources_, exceedResources) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline const ResourceAmount & limit() const { DARABONBA_PTR_GET_CONST(limit_, ResourceAmount) };
    inline ResourceAmount limit() { DARABONBA_PTR_GET(limit_, ResourceAmount) };
    inline ResourceDiagnosisDetail& setLimit(const ResourceAmount & limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };
    inline ResourceDiagnosisDetail& setLimit(ResourceAmount && limit) { DARABONBA_PTR_SET_RVALUE(limit_, limit) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ResourceDiagnosisDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // used Field Functions 
    bool hasUsed() const { return this->used_ != nullptr;};
    void deleteUsed() { this->used_ = nullptr;};
    inline const ResourceAmount & used() const { DARABONBA_PTR_GET_CONST(used_, ResourceAmount) };
    inline ResourceAmount used() { DARABONBA_PTR_GET(used_, ResourceAmount) };
    inline ResourceDiagnosisDetail& setUsed(const ResourceAmount & used) { DARABONBA_PTR_SET_VALUE(used_, used) };
    inline ResourceDiagnosisDetail& setUsed(ResourceAmount && used) { DARABONBA_PTR_SET_RVALUE(used_, used) };


    // workloadIds Field Functions 
    bool hasWorkloadIds() const { return this->workloadIds_ != nullptr;};
    void deleteWorkloadIds() { this->workloadIds_ = nullptr;};
    inline const vector<string> & workloadIds() const { DARABONBA_PTR_GET_CONST(workloadIds_, vector<string>) };
    inline vector<string> workloadIds() { DARABONBA_PTR_GET(workloadIds_, vector<string>) };
    inline ResourceDiagnosisDetail& setWorkloadIds(const vector<string> & workloadIds) { DARABONBA_PTR_SET_VALUE(workloadIds_, workloadIds) };
    inline ResourceDiagnosisDetail& setWorkloadIds(vector<string> && workloadIds) { DARABONBA_PTR_SET_RVALUE(workloadIds_, workloadIds) };


  protected:
    std::shared_ptr<vector<string>> exceedResources_ = nullptr;
    std::shared_ptr<ResourceAmount> limit_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<ResourceAmount> used_ = nullptr;
    std::shared_ptr<vector<string>> workloadIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
