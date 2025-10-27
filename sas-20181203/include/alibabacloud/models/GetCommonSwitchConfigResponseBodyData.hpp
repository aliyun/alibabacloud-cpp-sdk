// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMONSWITCHCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMONSWITCHCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCommonSwitchConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommonSwitchConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TargetDefault, targetDefault_);
      DARABONBA_PTR_TO_JSON(TargetSyncStatus, targetSyncStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommonSwitchConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetDefault, targetDefault_);
      DARABONBA_PTR_FROM_JSON(TargetSyncStatus, targetSyncStatus_);
    };
    GetCommonSwitchConfigResponseBodyData() = default ;
    GetCommonSwitchConfigResponseBodyData(const GetCommonSwitchConfigResponseBodyData &) = default ;
    GetCommonSwitchConfigResponseBodyData(GetCommonSwitchConfigResponseBodyData &&) = default ;
    GetCommonSwitchConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommonSwitchConfigResponseBodyData() = default ;
    GetCommonSwitchConfigResponseBodyData& operator=(const GetCommonSwitchConfigResponseBodyData &) = default ;
    GetCommonSwitchConfigResponseBodyData& operator=(GetCommonSwitchConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targetDefault_ == nullptr
        && return this->targetSyncStatus_ == nullptr; };
    // targetDefault Field Functions 
    bool hasTargetDefault() const { return this->targetDefault_ != nullptr;};
    void deleteTargetDefault() { this->targetDefault_ = nullptr;};
    inline string targetDefault() const { DARABONBA_PTR_GET_DEFAULT(targetDefault_, "") };
    inline GetCommonSwitchConfigResponseBodyData& setTargetDefault(string targetDefault) { DARABONBA_PTR_SET_VALUE(targetDefault_, targetDefault) };


    // targetSyncStatus Field Functions 
    bool hasTargetSyncStatus() const { return this->targetSyncStatus_ != nullptr;};
    void deleteTargetSyncStatus() { this->targetSyncStatus_ = nullptr;};
    inline string targetSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(targetSyncStatus_, "") };
    inline GetCommonSwitchConfigResponseBodyData& setTargetSyncStatus(string targetSyncStatus) { DARABONBA_PTR_SET_VALUE(targetSyncStatus_, targetSyncStatus) };


  protected:
    // Specifies whether to turn on the switch for newly added servers. Valid values:
    // 
    // *   **add**: By default, the switch is turned on for newly added servers.
    // *   **del**: By default, the switch is turned off for newly added servers.
    std::shared_ptr<string> targetDefault_ = nullptr;
    // The status of the synchronization. Valid values:
    // 
    // *   **sync**: The modifications are being synchronized.
    // *   **valid**: The modifications has taken effect.
    std::shared_ptr<string> targetSyncStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
