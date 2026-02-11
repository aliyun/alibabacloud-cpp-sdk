// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSISTENCYSNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONSISTENCYSNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class GetConsistencySnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsistencySnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CurrentTimestamp, currentTimestamp_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(ProxyUserId, proxyUserId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsistencySnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CurrentTimestamp, currentTimestamp_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(ProxyUserId, proxyUserId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetConsistencySnapshotRequest() = default ;
    GetConsistencySnapshotRequest(const GetConsistencySnapshotRequest &) = default ;
    GetConsistencySnapshotRequest(GetConsistencySnapshotRequest &&) = default ;
    GetConsistencySnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsistencySnapshotRequest() = default ;
    GetConsistencySnapshotRequest& operator=(const GetConsistencySnapshotRequest &) = default ;
    GetConsistencySnapshotRequest& operator=(GetConsistencySnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && this->currentTimestamp_ == nullptr && this->pid_ == nullptr && this->proxyUserId_ == nullptr && this->regionId_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetConsistencySnapshotRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // currentTimestamp Field Functions 
    bool hasCurrentTimestamp() const { return this->currentTimestamp_ != nullptr;};
    void deleteCurrentTimestamp() { this->currentTimestamp_ = nullptr;};
    inline int64_t getCurrentTimestamp() const { DARABONBA_PTR_GET_DEFAULT(currentTimestamp_, 0L) };
    inline GetConsistencySnapshotRequest& setCurrentTimestamp(int64_t currentTimestamp) { DARABONBA_PTR_SET_VALUE(currentTimestamp_, currentTimestamp) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetConsistencySnapshotRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // proxyUserId Field Functions 
    bool hasProxyUserId() const { return this->proxyUserId_ != nullptr;};
    void deleteProxyUserId() { this->proxyUserId_ = nullptr;};
    inline string getProxyUserId() const { DARABONBA_PTR_GET_DEFAULT(proxyUserId_, "") };
    inline GetConsistencySnapshotRequest& setProxyUserId(string proxyUserId) { DARABONBA_PTR_SET_VALUE(proxyUserId_, proxyUserId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetConsistencySnapshotRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appType_ {};
    shared_ptr<int64_t> currentTimestamp_ {};
    // This parameter is required.
    shared_ptr<string> pid_ {};
    shared_ptr<string> proxyUserId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
