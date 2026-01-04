// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOINVSWITCHESTOEPNINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_JOINVSWITCHESTOEPNINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class JoinVSwitchesToEpnInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JoinVSwitchesToEpnInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_TO_JSON(VSwitchesInfo, vSwitchesInfo_);
    };
    friend void from_json(const Darabonba::Json& j, JoinVSwitchesToEpnInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_FROM_JSON(VSwitchesInfo, vSwitchesInfo_);
    };
    JoinVSwitchesToEpnInstanceRequest() = default ;
    JoinVSwitchesToEpnInstanceRequest(const JoinVSwitchesToEpnInstanceRequest &) = default ;
    JoinVSwitchesToEpnInstanceRequest(JoinVSwitchesToEpnInstanceRequest &&) = default ;
    JoinVSwitchesToEpnInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JoinVSwitchesToEpnInstanceRequest() = default ;
    JoinVSwitchesToEpnInstanceRequest& operator=(const JoinVSwitchesToEpnInstanceRequest &) = default ;
    JoinVSwitchesToEpnInstanceRequest& operator=(JoinVSwitchesToEpnInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->EPNInstanceId_ == nullptr
        && this->vSwitchesInfo_ == nullptr; };
    // EPNInstanceId Field Functions 
    bool hasEPNInstanceId() const { return this->EPNInstanceId_ != nullptr;};
    void deleteEPNInstanceId() { this->EPNInstanceId_ = nullptr;};
    inline string getEPNInstanceId() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceId_, "") };
    inline JoinVSwitchesToEpnInstanceRequest& setEPNInstanceId(string EPNInstanceId) { DARABONBA_PTR_SET_VALUE(EPNInstanceId_, EPNInstanceId) };


    // vSwitchesInfo Field Functions 
    bool hasVSwitchesInfo() const { return this->vSwitchesInfo_ != nullptr;};
    void deleteVSwitchesInfo() { this->vSwitchesInfo_ = nullptr;};
    inline string getVSwitchesInfo() const { DARABONBA_PTR_GET_DEFAULT(vSwitchesInfo_, "") };
    inline JoinVSwitchesToEpnInstanceRequest& setVSwitchesInfo(string vSwitchesInfo) { DARABONBA_PTR_SET_VALUE(vSwitchesInfo_, vSwitchesInfo) };


  protected:
    // The ID of the edge network instance.
    // 
    // This parameter is required.
    shared_ptr<string> EPNInstanceId_ {};
    // The information about the internal networking to which you want to add the edge network instance.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchesInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
