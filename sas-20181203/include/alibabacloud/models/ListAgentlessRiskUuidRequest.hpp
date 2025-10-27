// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSRISKUUIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSRISKUUIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAgentlessRiskUuidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessRiskUuidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(MachineName, machineName_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Risk, risk_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessRiskUuidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(MachineName, machineName_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Risk, risk_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListAgentlessRiskUuidRequest() = default ;
    ListAgentlessRiskUuidRequest(const ListAgentlessRiskUuidRequest &) = default ;
    ListAgentlessRiskUuidRequest(ListAgentlessRiskUuidRequest &&) = default ;
    ListAgentlessRiskUuidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessRiskUuidRequest() = default ;
    ListAgentlessRiskUuidRequest& operator=(const ListAgentlessRiskUuidRequest &) = default ;
    ListAgentlessRiskUuidRequest& operator=(ListAgentlessRiskUuidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->machineName_ == nullptr
        && return this->pageSize_ == nullptr && return this->risk_ == nullptr && return this->targetName_ == nullptr && return this->targetType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAgentlessRiskUuidRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAgentlessRiskUuidRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListAgentlessRiskUuidRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListAgentlessRiskUuidRequest& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListAgentlessRiskUuidRequest& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // machineName Field Functions 
    bool hasMachineName() const { return this->machineName_ != nullptr;};
    void deleteMachineName() { this->machineName_ = nullptr;};
    inline string machineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
    inline ListAgentlessRiskUuidRequest& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAgentlessRiskUuidRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // risk Field Functions 
    bool hasRisk() const { return this->risk_ != nullptr;};
    void deleteRisk() { this->risk_ = nullptr;};
    inline bool risk() const { DARABONBA_PTR_GET_DEFAULT(risk_, false) };
    inline ListAgentlessRiskUuidRequest& setRisk(bool risk) { DARABONBA_PTR_SET_VALUE(risk_, risk) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline ListAgentlessRiskUuidRequest& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline int32_t targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
    inline ListAgentlessRiskUuidRequest& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The instance ID of the asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the asset that you want to query.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the asset that you want to query.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> machineName_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Specifies whether risks exist. Valid values:
    // 
    // *   **true**: Risks exist.
    // *   **false**: Risks do not exist.
    std::shared_ptr<bool> risk_ = nullptr;
    // The name of the detection object.
    std::shared_ptr<string> targetName_ = nullptr;
    // Specifies the type of the object being inspected. Valid values:
    // 
    // *   **1**: Host Snapshot.
    // *   **2**: Host Image.
    // *   **3**: User Snapshot.
    // *   **4**: User Image.
    std::shared_ptr<int32_t> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
