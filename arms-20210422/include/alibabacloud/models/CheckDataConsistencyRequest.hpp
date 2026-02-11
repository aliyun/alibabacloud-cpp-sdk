// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDATACONSISTENCYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKDATACONSISTENCYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class CheckDataConsistencyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDataConsistencyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CurrentTimestamp, currentTimestamp_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(ProxyUserId, proxyUserId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDataConsistencyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CurrentTimestamp, currentTimestamp_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(ProxyUserId, proxyUserId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CheckDataConsistencyRequest() = default ;
    CheckDataConsistencyRequest(const CheckDataConsistencyRequest &) = default ;
    CheckDataConsistencyRequest(CheckDataConsistencyRequest &&) = default ;
    CheckDataConsistencyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDataConsistencyRequest() = default ;
    CheckDataConsistencyRequest& operator=(const CheckDataConsistencyRequest &) = default ;
    CheckDataConsistencyRequest& operator=(CheckDataConsistencyRequest &&) = default ;
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
    inline CheckDataConsistencyRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // currentTimestamp Field Functions 
    bool hasCurrentTimestamp() const { return this->currentTimestamp_ != nullptr;};
    void deleteCurrentTimestamp() { this->currentTimestamp_ = nullptr;};
    inline int64_t getCurrentTimestamp() const { DARABONBA_PTR_GET_DEFAULT(currentTimestamp_, 0L) };
    inline CheckDataConsistencyRequest& setCurrentTimestamp(int64_t currentTimestamp) { DARABONBA_PTR_SET_VALUE(currentTimestamp_, currentTimestamp) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline CheckDataConsistencyRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // proxyUserId Field Functions 
    bool hasProxyUserId() const { return this->proxyUserId_ != nullptr;};
    void deleteProxyUserId() { this->proxyUserId_ = nullptr;};
    inline string getProxyUserId() const { DARABONBA_PTR_GET_DEFAULT(proxyUserId_, "") };
    inline CheckDataConsistencyRequest& setProxyUserId(string proxyUserId) { DARABONBA_PTR_SET_VALUE(proxyUserId_, proxyUserId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CheckDataConsistencyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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
