// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEVSWITCHESFROMEPNINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEVSWITCHESFROMEPNINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RemoveVSwitchesFromEpnInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveVSwitchesFromEpnInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_TO_JSON(VSwitchesInfo, vSwitchesInfo_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveVSwitchesFromEpnInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_FROM_JSON(VSwitchesInfo, vSwitchesInfo_);
    };
    RemoveVSwitchesFromEpnInstanceRequest() = default ;
    RemoveVSwitchesFromEpnInstanceRequest(const RemoveVSwitchesFromEpnInstanceRequest &) = default ;
    RemoveVSwitchesFromEpnInstanceRequest(RemoveVSwitchesFromEpnInstanceRequest &&) = default ;
    RemoveVSwitchesFromEpnInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveVSwitchesFromEpnInstanceRequest() = default ;
    RemoveVSwitchesFromEpnInstanceRequest& operator=(const RemoveVSwitchesFromEpnInstanceRequest &) = default ;
    RemoveVSwitchesFromEpnInstanceRequest& operator=(RemoveVSwitchesFromEpnInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->EPNInstanceId_ == nullptr
        && return this->vSwitchesInfo_ == nullptr; };
    // EPNInstanceId Field Functions 
    bool hasEPNInstanceId() const { return this->EPNInstanceId_ != nullptr;};
    void deleteEPNInstanceId() { this->EPNInstanceId_ = nullptr;};
    inline string EPNInstanceId() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceId_, "") };
    inline RemoveVSwitchesFromEpnInstanceRequest& setEPNInstanceId(string EPNInstanceId) { DARABONBA_PTR_SET_VALUE(EPNInstanceId_, EPNInstanceId) };


    // vSwitchesInfo Field Functions 
    bool hasVSwitchesInfo() const { return this->vSwitchesInfo_ != nullptr;};
    void deleteVSwitchesInfo() { this->vSwitchesInfo_ = nullptr;};
    inline string vSwitchesInfo() const { DARABONBA_PTR_GET_DEFAULT(vSwitchesInfo_, "") };
    inline RemoveVSwitchesFromEpnInstanceRequest& setVSwitchesInfo(string vSwitchesInfo) { DARABONBA_PTR_SET_VALUE(vSwitchesInfo_, vSwitchesInfo) };


  protected:
    // The ID of theEPN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> EPNInstanceId_ = nullptr;
    // The internal networking information that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchesInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
