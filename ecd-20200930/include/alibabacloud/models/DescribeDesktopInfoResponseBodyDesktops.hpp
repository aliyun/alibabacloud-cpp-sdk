// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPINFORESPONSEBODYDESKTOPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPINFORESPONSEBODYDESKTOPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopInfoResponseBodyDesktops : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopInfoResponseBodyDesktops& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_TO_JSON(CurrentAppVersion, currentAppVersion_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_TO_JSON(ManagementFlag, managementFlag_);
      DARABONBA_PTR_TO_JSON(NewAppSize, newAppSize_);
      DARABONBA_PTR_TO_JSON(NewAppVersion, newAppVersion_);
      DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopInfoResponseBodyDesktops& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_FROM_JSON(CurrentAppVersion, currentAppVersion_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_FROM_JSON(ManagementFlag, managementFlag_);
      DARABONBA_PTR_FROM_JSON(NewAppSize, newAppSize_);
      DARABONBA_PTR_FROM_JSON(NewAppVersion, newAppVersion_);
      DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDesktopInfoResponseBodyDesktops() = default ;
    DescribeDesktopInfoResponseBodyDesktops(const DescribeDesktopInfoResponseBodyDesktops &) = default ;
    DescribeDesktopInfoResponseBodyDesktops(DescribeDesktopInfoResponseBodyDesktops &&) = default ;
    DescribeDesktopInfoResponseBodyDesktops(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopInfoResponseBodyDesktops() = default ;
    DescribeDesktopInfoResponseBodyDesktops& operator=(const DescribeDesktopInfoResponseBodyDesktops &) = default ;
    DescribeDesktopInfoResponseBodyDesktops& operator=(DescribeDesktopInfoResponseBodyDesktops &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionStatus_ != nullptr
        && this->currentAppVersion_ != nullptr && this->desktopGroupId_ != nullptr && this->desktopId_ != nullptr && this->desktopStatus_ != nullptr && this->managementFlag_ != nullptr
        && this->newAppSize_ != nullptr && this->newAppVersion_ != nullptr && this->releaseNote_ != nullptr && this->startTime_ != nullptr; };
    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string connectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline DescribeDesktopInfoResponseBodyDesktops& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // currentAppVersion Field Functions 
    bool hasCurrentAppVersion() const { return this->currentAppVersion_ != nullptr;};
    void deleteCurrentAppVersion() { this->currentAppVersion_ = nullptr;};
    inline string currentAppVersion() const { DARABONBA_PTR_GET_DEFAULT(currentAppVersion_, "") };
    inline DescribeDesktopInfoResponseBodyDesktops& setCurrentAppVersion(string currentAppVersion) { DARABONBA_PTR_SET_VALUE(currentAppVersion_, currentAppVersion) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline DescribeDesktopInfoResponseBodyDesktops& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeDesktopInfoResponseBodyDesktops& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopStatus Field Functions 
    bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
    void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
    inline string desktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
    inline DescribeDesktopInfoResponseBodyDesktops& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


    // managementFlag Field Functions 
    bool hasManagementFlag() const { return this->managementFlag_ != nullptr;};
    void deleteManagementFlag() { this->managementFlag_ = nullptr;};
    inline const vector<string> & managementFlag() const { DARABONBA_PTR_GET_CONST(managementFlag_, vector<string>) };
    inline vector<string> managementFlag() { DARABONBA_PTR_GET(managementFlag_, vector<string>) };
    inline DescribeDesktopInfoResponseBodyDesktops& setManagementFlag(const vector<string> & managementFlag) { DARABONBA_PTR_SET_VALUE(managementFlag_, managementFlag) };
    inline DescribeDesktopInfoResponseBodyDesktops& setManagementFlag(vector<string> && managementFlag) { DARABONBA_PTR_SET_RVALUE(managementFlag_, managementFlag) };


    // newAppSize Field Functions 
    bool hasNewAppSize() const { return this->newAppSize_ != nullptr;};
    void deleteNewAppSize() { this->newAppSize_ = nullptr;};
    inline int64_t newAppSize() const { DARABONBA_PTR_GET_DEFAULT(newAppSize_, 0L) };
    inline DescribeDesktopInfoResponseBodyDesktops& setNewAppSize(int64_t newAppSize) { DARABONBA_PTR_SET_VALUE(newAppSize_, newAppSize) };


    // newAppVersion Field Functions 
    bool hasNewAppVersion() const { return this->newAppVersion_ != nullptr;};
    void deleteNewAppVersion() { this->newAppVersion_ = nullptr;};
    inline string newAppVersion() const { DARABONBA_PTR_GET_DEFAULT(newAppVersion_, "") };
    inline DescribeDesktopInfoResponseBodyDesktops& setNewAppVersion(string newAppVersion) { DARABONBA_PTR_SET_VALUE(newAppVersion_, newAppVersion) };


    // releaseNote Field Functions 
    bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
    void deleteReleaseNote() { this->releaseNote_ = nullptr;};
    inline string releaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
    inline DescribeDesktopInfoResponseBodyDesktops& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDesktopInfoResponseBodyDesktops& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The connection status of the user.
    // 
    // Valid values:
    // 
    // *   Connected
    // *   Disconnected
    std::shared_ptr<string> connectionStatus_ = nullptr;
    // The version of the cloud computer image.
    std::shared_ptr<string> currentAppVersion_ = nullptr;
    // The ID of the cloud computer pool.
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    // The ID of the cloud computer.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The status of the cloud computer.
    // 
    // Valid values:
    // 
    // *   Stopped
    // *   Failed
    // *   Starting
    // *   Running
    // *   Stopping
    // *   Expired
    // *   Deleted
    // *   Pending
    std::shared_ptr<string> desktopStatus_ = nullptr;
    // The information about flags that are used to manage cloud computers.
    std::shared_ptr<vector<string>> managementFlag_ = nullptr;
    // The size of the update package. Unit: KB.
    std::shared_ptr<int64_t> newAppSize_ = nullptr;
    // The version number of the image that can be updated on the cloud computer.
    std::shared_ptr<string> newAppVersion_ = nullptr;
    // The description of the image version that can be updated.
    std::shared_ptr<string> releaseNote_ = nullptr;
    // The time when the cloud computer was first started.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
