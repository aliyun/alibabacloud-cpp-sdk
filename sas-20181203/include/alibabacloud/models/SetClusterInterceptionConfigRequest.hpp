// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCLUSTERINTERCEPTIONCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCLUSTERINTERCEPTIONCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SetClusterInterceptionConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetClusterInterceptionConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_TO_JSON(SwitchOn, switchOn_);
      DARABONBA_PTR_TO_JSON(SwitchType, switchType_);
    };
    friend void from_json(const Darabonba::Json& j, SetClusterInterceptionConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_FROM_JSON(SwitchOn, switchOn_);
      DARABONBA_PTR_FROM_JSON(SwitchType, switchType_);
    };
    SetClusterInterceptionConfigRequest() = default ;
    SetClusterInterceptionConfigRequest(const SetClusterInterceptionConfigRequest &) = default ;
    SetClusterInterceptionConfigRequest(SetClusterInterceptionConfigRequest &&) = default ;
    SetClusterInterceptionConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetClusterInterceptionConfigRequest() = default ;
    SetClusterInterceptionConfigRequest& operator=(const SetClusterInterceptionConfigRequest &) = default ;
    SetClusterInterceptionConfigRequest& operator=(SetClusterInterceptionConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterIds_ == nullptr
        && return this->switchOn_ == nullptr && return this->switchType_ == nullptr; };
    // clusterIds Field Functions 
    bool hasClusterIds() const { return this->clusterIds_ != nullptr;};
    void deleteClusterIds() { this->clusterIds_ = nullptr;};
    inline string clusterIds() const { DARABONBA_PTR_GET_DEFAULT(clusterIds_, "") };
    inline SetClusterInterceptionConfigRequest& setClusterIds(string clusterIds) { DARABONBA_PTR_SET_VALUE(clusterIds_, clusterIds) };


    // switchOn Field Functions 
    bool hasSwitchOn() const { return this->switchOn_ != nullptr;};
    void deleteSwitchOn() { this->switchOn_ = nullptr;};
    inline int32_t switchOn() const { DARABONBA_PTR_GET_DEFAULT(switchOn_, 0) };
    inline SetClusterInterceptionConfigRequest& setSwitchOn(int32_t switchOn) { DARABONBA_PTR_SET_VALUE(switchOn_, switchOn) };


    // switchType Field Functions 
    bool hasSwitchType() const { return this->switchType_ != nullptr;};
    void deleteSwitchType() { this->switchType_ = nullptr;};
    inline int32_t switchType() const { DARABONBA_PTR_GET_DEFAULT(switchType_, 0) };
    inline SetClusterInterceptionConfigRequest& setSwitchType(int32_t switchType) { DARABONBA_PTR_SET_VALUE(switchType_, switchType) };


  protected:
    // The ID of the cluster. Separate multiple cluster IDs with commas (,).
    // 
    // > You can call the [ListClusterInterceptionConfig](~~ListClusterInterceptionConfig~~) operation to query the IDs of clusters.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterIds_ = nullptr;
    // Specifies whether to turn on the switch. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> switchOn_ = nullptr;
    // The type of the switch that you want to configure. Valid values:
    // 
    // *   **0**: the interception switch
    // *   **1**: the interception type switch
    // *   **2**: the interception history switch
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> switchType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
