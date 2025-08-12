// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORSLSGROUPRESPONSEBODYLISTSLSGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORSLSGROUPRESPONSEBODYLISTSLSGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SLSLogstore, SLSLogstore_);
      DARABONBA_PTR_TO_JSON(SLSProject, SLSProject_);
      DARABONBA_PTR_TO_JSON(SLSRegion, SLSRegion_);
      DARABONBA_PTR_TO_JSON(SLSUserId, SLSUserId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SLSLogstore, SLSLogstore_);
      DARABONBA_PTR_FROM_JSON(SLSProject, SLSProject_);
      DARABONBA_PTR_FROM_JSON(SLSRegion, SLSRegion_);
      DARABONBA_PTR_FROM_JSON(SLSUserId, SLSUserId_);
    };
    DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig() = default ;
    DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig(const DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig &) = default ;
    DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig(DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig &&) = default ;
    DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig() = default ;
    DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig& operator=(const DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig &) = default ;
    DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig& operator=(DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->SLSLogstore_ != nullptr
        && this->SLSProject_ != nullptr && this->SLSRegion_ != nullptr && this->SLSUserId_ != nullptr; };
    // SLSLogstore Field Functions 
    bool hasSLSLogstore() const { return this->SLSLogstore_ != nullptr;};
    void deleteSLSLogstore() { this->SLSLogstore_ = nullptr;};
    inline string SLSLogstore() const { DARABONBA_PTR_GET_DEFAULT(SLSLogstore_, "") };
    inline DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig& setSLSLogstore(string SLSLogstore) { DARABONBA_PTR_SET_VALUE(SLSLogstore_, SLSLogstore) };


    // SLSProject Field Functions 
    bool hasSLSProject() const { return this->SLSProject_ != nullptr;};
    void deleteSLSProject() { this->SLSProject_ = nullptr;};
    inline string SLSProject() const { DARABONBA_PTR_GET_DEFAULT(SLSProject_, "") };
    inline DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig& setSLSProject(string SLSProject) { DARABONBA_PTR_SET_VALUE(SLSProject_, SLSProject) };


    // SLSRegion Field Functions 
    bool hasSLSRegion() const { return this->SLSRegion_ != nullptr;};
    void deleteSLSRegion() { this->SLSRegion_ = nullptr;};
    inline string SLSRegion() const { DARABONBA_PTR_GET_DEFAULT(SLSRegion_, "") };
    inline DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig& setSLSRegion(string SLSRegion) { DARABONBA_PTR_SET_VALUE(SLSRegion_, SLSRegion) };


    // SLSUserId Field Functions 
    bool hasSLSUserId() const { return this->SLSUserId_ != nullptr;};
    void deleteSLSUserId() { this->SLSUserId_ = nullptr;};
    inline string SLSUserId() const { DARABONBA_PTR_GET_DEFAULT(SLSUserId_, "") };
    inline DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig& setSLSUserId(string SLSUserId) { DARABONBA_PTR_SET_VALUE(SLSUserId_, SLSUserId) };


  protected:
    // The Logstore.
    std::shared_ptr<string> SLSLogstore_ = nullptr;
    // The Simple Log Service project.
    std::shared_ptr<string> SLSProject_ = nullptr;
    // The region ID.
    std::shared_ptr<string> SLSRegion_ = nullptr;
    // The member ID.
    // 
    // **Description** This parameter is returned when you call the operation by using an administrative account.
    std::shared_ptr<string> SLSUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
