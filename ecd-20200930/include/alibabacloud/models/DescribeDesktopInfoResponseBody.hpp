// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPINFORESPONSEBODY_HPP_
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
  class DescribeDesktopInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Desktops, desktops_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Desktops, desktops_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDesktopInfoResponseBody() = default ;
    DescribeDesktopInfoResponseBody(const DescribeDesktopInfoResponseBody &) = default ;
    DescribeDesktopInfoResponseBody(DescribeDesktopInfoResponseBody &&) = default ;
    DescribeDesktopInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopInfoResponseBody() = default ;
    DescribeDesktopInfoResponseBody& operator=(const DescribeDesktopInfoResponseBody &) = default ;
    DescribeDesktopInfoResponseBody& operator=(DescribeDesktopInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Desktops : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Desktops& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Desktops& obj) { 
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
      Desktops() = default ;
      Desktops(const Desktops &) = default ;
      Desktops(Desktops &&) = default ;
      Desktops(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Desktops() = default ;
      Desktops& operator=(const Desktops &) = default ;
      Desktops& operator=(Desktops &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectionStatus_ == nullptr
        && this->currentAppVersion_ == nullptr && this->desktopGroupId_ == nullptr && this->desktopId_ == nullptr && this->desktopStatus_ == nullptr && this->managementFlag_ == nullptr
        && this->newAppSize_ == nullptr && this->newAppVersion_ == nullptr && this->releaseNote_ == nullptr && this->startTime_ == nullptr; };
      // connectionStatus Field Functions 
      bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
      void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
      inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
      inline Desktops& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


      // currentAppVersion Field Functions 
      bool hasCurrentAppVersion() const { return this->currentAppVersion_ != nullptr;};
      void deleteCurrentAppVersion() { this->currentAppVersion_ = nullptr;};
      inline string getCurrentAppVersion() const { DARABONBA_PTR_GET_DEFAULT(currentAppVersion_, "") };
      inline Desktops& setCurrentAppVersion(string currentAppVersion) { DARABONBA_PTR_SET_VALUE(currentAppVersion_, currentAppVersion) };


      // desktopGroupId Field Functions 
      bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
      void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
      inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
      inline Desktops& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Desktops& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopStatus Field Functions 
      bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
      void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
      inline string getDesktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
      inline Desktops& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


      // managementFlag Field Functions 
      bool hasManagementFlag() const { return this->managementFlag_ != nullptr;};
      void deleteManagementFlag() { this->managementFlag_ = nullptr;};
      inline const vector<string> & getManagementFlag() const { DARABONBA_PTR_GET_CONST(managementFlag_, vector<string>) };
      inline vector<string> getManagementFlag() { DARABONBA_PTR_GET(managementFlag_, vector<string>) };
      inline Desktops& setManagementFlag(const vector<string> & managementFlag) { DARABONBA_PTR_SET_VALUE(managementFlag_, managementFlag) };
      inline Desktops& setManagementFlag(vector<string> && managementFlag) { DARABONBA_PTR_SET_RVALUE(managementFlag_, managementFlag) };


      // newAppSize Field Functions 
      bool hasNewAppSize() const { return this->newAppSize_ != nullptr;};
      void deleteNewAppSize() { this->newAppSize_ = nullptr;};
      inline int64_t getNewAppSize() const { DARABONBA_PTR_GET_DEFAULT(newAppSize_, 0L) };
      inline Desktops& setNewAppSize(int64_t newAppSize) { DARABONBA_PTR_SET_VALUE(newAppSize_, newAppSize) };


      // newAppVersion Field Functions 
      bool hasNewAppVersion() const { return this->newAppVersion_ != nullptr;};
      void deleteNewAppVersion() { this->newAppVersion_ = nullptr;};
      inline string getNewAppVersion() const { DARABONBA_PTR_GET_DEFAULT(newAppVersion_, "") };
      inline Desktops& setNewAppVersion(string newAppVersion) { DARABONBA_PTR_SET_VALUE(newAppVersion_, newAppVersion) };


      // releaseNote Field Functions 
      bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
      void deleteReleaseNote() { this->releaseNote_ = nullptr;};
      inline string getReleaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
      inline Desktops& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Desktops& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The connection status of the user.
      // 
      // Valid values:
      // 
      // *   Connected
      // *   Disconnected
      shared_ptr<string> connectionStatus_ {};
      // The version of the cloud computer image.
      shared_ptr<string> currentAppVersion_ {};
      // The ID of the cloud computer pool.
      shared_ptr<string> desktopGroupId_ {};
      // The ID of the cloud computer.
      shared_ptr<string> desktopId_ {};
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
      shared_ptr<string> desktopStatus_ {};
      // The information about flags that are used to manage cloud computers.
      shared_ptr<vector<string>> managementFlag_ {};
      // The size of the update package. Unit: KB.
      shared_ptr<int64_t> newAppSize_ {};
      // The version number of the image that can be updated on the cloud computer.
      shared_ptr<string> newAppVersion_ {};
      // The description of the image version that can be updated.
      shared_ptr<string> releaseNote_ {};
      // The time when the cloud computer was first started.
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->desktops_ == nullptr
        && this->requestId_ == nullptr; };
    // desktops Field Functions 
    bool hasDesktops() const { return this->desktops_ != nullptr;};
    void deleteDesktops() { this->desktops_ = nullptr;};
    inline const vector<DescribeDesktopInfoResponseBody::Desktops> & getDesktops() const { DARABONBA_PTR_GET_CONST(desktops_, vector<DescribeDesktopInfoResponseBody::Desktops>) };
    inline vector<DescribeDesktopInfoResponseBody::Desktops> getDesktops() { DARABONBA_PTR_GET(desktops_, vector<DescribeDesktopInfoResponseBody::Desktops>) };
    inline DescribeDesktopInfoResponseBody& setDesktops(const vector<DescribeDesktopInfoResponseBody::Desktops> & desktops) { DARABONBA_PTR_SET_VALUE(desktops_, desktops) };
    inline DescribeDesktopInfoResponseBody& setDesktops(vector<DescribeDesktopInfoResponseBody::Desktops> && desktops) { DARABONBA_PTR_SET_RVALUE(desktops_, desktops) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDesktopInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The basic information about cloud computers.
    shared_ptr<vector<DescribeDesktopInfoResponseBody::Desktops>> desktops_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
