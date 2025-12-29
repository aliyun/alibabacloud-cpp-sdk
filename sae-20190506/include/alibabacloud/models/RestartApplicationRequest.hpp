// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTARTAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class RestartApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AutoEnableApplicationScalingRule, autoEnableApplicationScalingRule_);
      DARABONBA_PTR_TO_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_TO_JSON(MinReadyInstances, minReadyInstances_);
    };
    friend void from_json(const Darabonba::Json& j, RestartApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AutoEnableApplicationScalingRule, autoEnableApplicationScalingRule_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstances, minReadyInstances_);
    };
    RestartApplicationRequest() = default ;
    RestartApplicationRequest(const RestartApplicationRequest &) = default ;
    RestartApplicationRequest(RestartApplicationRequest &&) = default ;
    RestartApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartApplicationRequest() = default ;
    RestartApplicationRequest& operator=(const RestartApplicationRequest &) = default ;
    RestartApplicationRequest& operator=(RestartApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->autoEnableApplicationScalingRule_ == nullptr && this->minReadyInstanceRatio_ == nullptr && this->minReadyInstances_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RestartApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // autoEnableApplicationScalingRule Field Functions 
    bool hasAutoEnableApplicationScalingRule() const { return this->autoEnableApplicationScalingRule_ != nullptr;};
    void deleteAutoEnableApplicationScalingRule() { this->autoEnableApplicationScalingRule_ = nullptr;};
    inline bool getAutoEnableApplicationScalingRule() const { DARABONBA_PTR_GET_DEFAULT(autoEnableApplicationScalingRule_, false) };
    inline RestartApplicationRequest& setAutoEnableApplicationScalingRule(bool autoEnableApplicationScalingRule) { DARABONBA_PTR_SET_VALUE(autoEnableApplicationScalingRule_, autoEnableApplicationScalingRule) };


    // minReadyInstanceRatio Field Functions 
    bool hasMinReadyInstanceRatio() const { return this->minReadyInstanceRatio_ != nullptr;};
    void deleteMinReadyInstanceRatio() { this->minReadyInstanceRatio_ = nullptr;};
    inline int32_t getMinReadyInstanceRatio() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstanceRatio_, 0) };
    inline RestartApplicationRequest& setMinReadyInstanceRatio(int32_t minReadyInstanceRatio) { DARABONBA_PTR_SET_VALUE(minReadyInstanceRatio_, minReadyInstanceRatio) };


    // minReadyInstances Field Functions 
    bool hasMinReadyInstances() const { return this->minReadyInstances_ != nullptr;};
    void deleteMinReadyInstances() { this->minReadyInstances_ = nullptr;};
    inline int32_t getMinReadyInstances() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstances_, 0) };
    inline RestartApplicationRequest& setMinReadyInstances(int32_t minReadyInstances) { DARABONBA_PTR_SET_VALUE(minReadyInstances_, minReadyInstances) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // Specifies whether to automatically enable an auto scaling policy for the application. Valid values:
    // 
    // *   **true**: enabled.
    // *   **false**: disabled
    shared_ptr<bool> autoEnableApplicationScalingRule_ {};
    // The percentage of the minimum number of available instances. Take note of the following rules:
    // 
    // *   If you set the value to **-1**, the minimum number of available instances is not determined based on this parameter. Default value: -1.
    // *   If you set the value to a number **from 0 to 100**, the minimum number of available instances is calculated by using the following formula: Current number of instances × (Value of MinReadyInstanceRatio × 100%). The value is the nearest integer rounded up from the calculated result. For example, if the percentage is set to **50**% and five instances are available, the minimum number of available instances is 3.
    // 
    // > When **MinReadyInstance** and **MinReadyInstanceRatio** are specified and **MinReadyInstanceRatio** is set to a number from 0 to 100, the value of \\*\\*MinReadyInstanceRatio** takes precedence.**** For example, if **MinReadyInstances** is set to **5\\*\\*, and **MinReadyInstanceRatio** is set to **50**, the minimum number of available instances is set to the nearest integer rounded up from the calculated result of the following formula: Current number of instances × **50%**.
    shared_ptr<int32_t> minReadyInstanceRatio_ {};
    // The minimum number of available instances. Special values:
    // 
    // *   If you set the value to **0**, business interruptions occur when the application is updated.
    // *   If you set the value to \\*\\*-1\\*\\*, the minimum number of available instances is automatically set to a system-recommended value. The value is the nearest integer to which the calculated result of the following formula is rounded up: Current number of instances × 25%. For example, if five instances are available, the minimum number of available instances is calculated by using the following formula: 5 × 25% = 1.25. In this case, the minimum number of available instances is 2.
    // 
    // > Make sure that at least one instance is available during application deployment and rollback to prevent business interruptions.
    shared_ptr<int32_t> minReadyInstances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
