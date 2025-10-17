// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETSNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETSNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class ResetSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(StopDesktop, stopDesktop_);
    };
    friend void from_json(const Darabonba::Json& j, ResetSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(StopDesktop, stopDesktop_);
    };
    ResetSnapshotRequest() = default ;
    ResetSnapshotRequest(const ResetSnapshotRequest &) = default ;
    ResetSnapshotRequest(ResetSnapshotRequest &&) = default ;
    ResetSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetSnapshotRequest() = default ;
    ResetSnapshotRequest& operator=(const ResetSnapshotRequest &) = default ;
    ResetSnapshotRequest& operator=(ResetSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && return this->desktopId_ == nullptr && return this->loginToken_ == nullptr && return this->regionId_ == nullptr && return this->sessionId_ == nullptr && return this->snapshotId_ == nullptr
        && return this->stopDesktop_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline ResetSnapshotRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline ResetSnapshotRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string loginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline ResetSnapshotRequest& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResetSnapshotRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ResetSnapshotRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline ResetSnapshotRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // stopDesktop Field Functions 
    bool hasStopDesktop() const { return this->stopDesktop_ != nullptr;};
    void deleteStopDesktop() { this->stopDesktop_ = nullptr;};
    inline bool stopDesktop() const { DARABONBA_PTR_GET_DEFAULT(stopDesktop_, false) };
    inline ResetSnapshotRequest& setStopDesktop(bool stopDesktop) { DARABONBA_PTR_SET_VALUE(stopDesktop_, stopDesktop) };


  protected:
    // The client ID. The system generates a unique ID for each client.
    // 
    // This parameter is required.
    std::shared_ptr<string> clientId_ = nullptr;
    // The cloud computer ID.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The logon token.
    // 
    // This parameter is required.
    std::shared_ptr<string> loginToken_ = nullptr;
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The session ID.
    std::shared_ptr<string> sessionId_ = nullptr;
    // The snapshot ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // Specifies whether to stop the cloud computer.
    std::shared_ptr<bool> stopDesktop_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
