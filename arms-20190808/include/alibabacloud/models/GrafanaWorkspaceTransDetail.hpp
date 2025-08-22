// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACETRANSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACETRANSDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceTransDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceTransDetail& obj) { 
      DARABONBA_PTR_TO_JSON(dashboardAmount, dashboardAmount_);
      DARABONBA_PTR_TO_JSON(dataSourceAmount, dataSourceAmount_);
      DARABONBA_PTR_TO_JSON(original, original_);
      DARABONBA_PTR_TO_JSON(originalName, originalName_);
      DARABONBA_PTR_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(targetName, targetName_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceTransDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(dashboardAmount, dashboardAmount_);
      DARABONBA_PTR_FROM_JSON(dataSourceAmount, dataSourceAmount_);
      DARABONBA_PTR_FROM_JSON(original, original_);
      DARABONBA_PTR_FROM_JSON(originalName, originalName_);
      DARABONBA_PTR_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(targetName, targetName_);
    };
    GrafanaWorkspaceTransDetail() = default ;
    GrafanaWorkspaceTransDetail(const GrafanaWorkspaceTransDetail &) = default ;
    GrafanaWorkspaceTransDetail(GrafanaWorkspaceTransDetail &&) = default ;
    GrafanaWorkspaceTransDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceTransDetail() = default ;
    GrafanaWorkspaceTransDetail& operator=(const GrafanaWorkspaceTransDetail &) = default ;
    GrafanaWorkspaceTransDetail& operator=(GrafanaWorkspaceTransDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dashboardAmount_ != nullptr
        && this->dataSourceAmount_ != nullptr && this->original_ != nullptr && this->originalName_ != nullptr && this->target_ != nullptr && this->targetName_ != nullptr; };
    // dashboardAmount Field Functions 
    bool hasDashboardAmount() const { return this->dashboardAmount_ != nullptr;};
    void deleteDashboardAmount() { this->dashboardAmount_ = nullptr;};
    inline int32_t dashboardAmount() const { DARABONBA_PTR_GET_DEFAULT(dashboardAmount_, 0) };
    inline GrafanaWorkspaceTransDetail& setDashboardAmount(int32_t dashboardAmount) { DARABONBA_PTR_SET_VALUE(dashboardAmount_, dashboardAmount) };


    // dataSourceAmount Field Functions 
    bool hasDataSourceAmount() const { return this->dataSourceAmount_ != nullptr;};
    void deleteDataSourceAmount() { this->dataSourceAmount_ = nullptr;};
    inline int32_t dataSourceAmount() const { DARABONBA_PTR_GET_DEFAULT(dataSourceAmount_, 0) };
    inline GrafanaWorkspaceTransDetail& setDataSourceAmount(int32_t dataSourceAmount) { DARABONBA_PTR_SET_VALUE(dataSourceAmount_, dataSourceAmount) };


    // original Field Functions 
    bool hasOriginal() const { return this->original_ != nullptr;};
    void deleteOriginal() { this->original_ = nullptr;};
    inline int64_t original() const { DARABONBA_PTR_GET_DEFAULT(original_, 0L) };
    inline GrafanaWorkspaceTransDetail& setOriginal(int64_t original) { DARABONBA_PTR_SET_VALUE(original_, original) };


    // originalName Field Functions 
    bool hasOriginalName() const { return this->originalName_ != nullptr;};
    void deleteOriginalName() { this->originalName_ = nullptr;};
    inline string originalName() const { DARABONBA_PTR_GET_DEFAULT(originalName_, "") };
    inline GrafanaWorkspaceTransDetail& setOriginalName(string originalName) { DARABONBA_PTR_SET_VALUE(originalName_, originalName) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline int64_t target() const { DARABONBA_PTR_GET_DEFAULT(target_, 0L) };
    inline GrafanaWorkspaceTransDetail& setTarget(int64_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline GrafanaWorkspaceTransDetail& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


  protected:
    std::shared_ptr<int32_t> dashboardAmount_ = nullptr;
    std::shared_ptr<int32_t> dataSourceAmount_ = nullptr;
    std::shared_ptr<int64_t> original_ = nullptr;
    std::shared_ptr<string> originalName_ = nullptr;
    std::shared_ptr<int64_t> target_ = nullptr;
    std::shared_ptr<string> targetName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
