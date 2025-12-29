// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONVSWITCHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONVSWITCHESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateApplicationVswitchesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationVswitchesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Deploy, deploy_);
      DARABONBA_PTR_TO_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_TO_JSON(MinReadyInstances, minReadyInstances_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationVswitchesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Deploy, deploy_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstances, minReadyInstances_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    UpdateApplicationVswitchesRequest() = default ;
    UpdateApplicationVswitchesRequest(const UpdateApplicationVswitchesRequest &) = default ;
    UpdateApplicationVswitchesRequest(UpdateApplicationVswitchesRequest &&) = default ;
    UpdateApplicationVswitchesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationVswitchesRequest() = default ;
    UpdateApplicationVswitchesRequest& operator=(const UpdateApplicationVswitchesRequest &) = default ;
    UpdateApplicationVswitchesRequest& operator=(UpdateApplicationVswitchesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->deploy_ == nullptr && this->minReadyInstanceRatio_ == nullptr && this->minReadyInstances_ == nullptr && this->vSwitchId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateApplicationVswitchesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // deploy Field Functions 
    bool hasDeploy() const { return this->deploy_ != nullptr;};
    void deleteDeploy() { this->deploy_ = nullptr;};
    inline bool getDeploy() const { DARABONBA_PTR_GET_DEFAULT(deploy_, false) };
    inline UpdateApplicationVswitchesRequest& setDeploy(bool deploy) { DARABONBA_PTR_SET_VALUE(deploy_, deploy) };


    // minReadyInstanceRatio Field Functions 
    bool hasMinReadyInstanceRatio() const { return this->minReadyInstanceRatio_ != nullptr;};
    void deleteMinReadyInstanceRatio() { this->minReadyInstanceRatio_ = nullptr;};
    inline int32_t getMinReadyInstanceRatio() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstanceRatio_, 0) };
    inline UpdateApplicationVswitchesRequest& setMinReadyInstanceRatio(int32_t minReadyInstanceRatio) { DARABONBA_PTR_SET_VALUE(minReadyInstanceRatio_, minReadyInstanceRatio) };


    // minReadyInstances Field Functions 
    bool hasMinReadyInstances() const { return this->minReadyInstances_ != nullptr;};
    void deleteMinReadyInstances() { this->minReadyInstances_ = nullptr;};
    inline int32_t getMinReadyInstances() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstances_, 0) };
    inline UpdateApplicationVswitchesRequest& setMinReadyInstances(int32_t minReadyInstances) { DARABONBA_PTR_SET_VALUE(minReadyInstances_, minReadyInstances) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline UpdateApplicationVswitchesRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<bool> deploy_ {};
    shared_ptr<int32_t> minReadyInstanceRatio_ {};
    shared_ptr<int32_t> minReadyInstances_ {};
    // The ID of the vSwitch.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
