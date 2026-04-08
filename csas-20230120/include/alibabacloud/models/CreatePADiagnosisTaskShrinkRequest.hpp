// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPADIAGNOSISTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPADIAGNOSISTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreatePADiagnosisTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePADiagnosisTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DevTag, devTag_);
      DARABONBA_PTR_TO_JSON(DiagnoseType, diagnoseType_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(PopId, popId_);
      DARABONBA_PTR_TO_JSON(PopMode, popMode_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(UdpExtraConfigs, udpExtraConfigsShrink_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePADiagnosisTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
      DARABONBA_PTR_FROM_JSON(DiagnoseType, diagnoseType_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(PopId, popId_);
      DARABONBA_PTR_FROM_JSON(PopMode, popMode_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(UdpExtraConfigs, udpExtraConfigsShrink_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    CreatePADiagnosisTaskShrinkRequest() = default ;
    CreatePADiagnosisTaskShrinkRequest(const CreatePADiagnosisTaskShrinkRequest &) = default ;
    CreatePADiagnosisTaskShrinkRequest(CreatePADiagnosisTaskShrinkRequest &&) = default ;
    CreatePADiagnosisTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePADiagnosisTaskShrinkRequest() = default ;
    CreatePADiagnosisTaskShrinkRequest& operator=(const CreatePADiagnosisTaskShrinkRequest &) = default ;
    CreatePADiagnosisTaskShrinkRequest& operator=(CreatePADiagnosisTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->devTag_ == nullptr
        && this->diagnoseType_ == nullptr && this->host_ == nullptr && this->popId_ == nullptr && this->popMode_ == nullptr && this->port_ == nullptr
        && this->protocol_ == nullptr && this->udpExtraConfigsShrink_ == nullptr && this->userGroupId_ == nullptr && this->username_ == nullptr; };
    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline CreatePADiagnosisTaskShrinkRequest& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


    // diagnoseType Field Functions 
    bool hasDiagnoseType() const { return this->diagnoseType_ != nullptr;};
    void deleteDiagnoseType() { this->diagnoseType_ = nullptr;};
    inline string getDiagnoseType() const { DARABONBA_PTR_GET_DEFAULT(diagnoseType_, "") };
    inline CreatePADiagnosisTaskShrinkRequest& setDiagnoseType(string diagnoseType) { DARABONBA_PTR_SET_VALUE(diagnoseType_, diagnoseType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline CreatePADiagnosisTaskShrinkRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // popId Field Functions 
    bool hasPopId() const { return this->popId_ != nullptr;};
    void deletePopId() { this->popId_ = nullptr;};
    inline string getPopId() const { DARABONBA_PTR_GET_DEFAULT(popId_, "") };
    inline CreatePADiagnosisTaskShrinkRequest& setPopId(string popId) { DARABONBA_PTR_SET_VALUE(popId_, popId) };


    // popMode Field Functions 
    bool hasPopMode() const { return this->popMode_ != nullptr;};
    void deletePopMode() { this->popMode_ = nullptr;};
    inline string getPopMode() const { DARABONBA_PTR_GET_DEFAULT(popMode_, "") };
    inline CreatePADiagnosisTaskShrinkRequest& setPopMode(string popMode) { DARABONBA_PTR_SET_VALUE(popMode_, popMode) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreatePADiagnosisTaskShrinkRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreatePADiagnosisTaskShrinkRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // udpExtraConfigsShrink Field Functions 
    bool hasUdpExtraConfigsShrink() const { return this->udpExtraConfigsShrink_ != nullptr;};
    void deleteUdpExtraConfigsShrink() { this->udpExtraConfigsShrink_ = nullptr;};
    inline string getUdpExtraConfigsShrink() const { DARABONBA_PTR_GET_DEFAULT(udpExtraConfigsShrink_, "") };
    inline CreatePADiagnosisTaskShrinkRequest& setUdpExtraConfigsShrink(string udpExtraConfigsShrink) { DARABONBA_PTR_SET_VALUE(udpExtraConfigsShrink_, udpExtraConfigsShrink) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline CreatePADiagnosisTaskShrinkRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CreatePADiagnosisTaskShrinkRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    shared_ptr<string> devTag_ {};
    // This parameter is required.
    shared_ptr<string> diagnoseType_ {};
    // This parameter is required.
    shared_ptr<string> host_ {};
    shared_ptr<string> popId_ {};
    // This parameter is required.
    shared_ptr<string> popMode_ {};
    // This parameter is required.
    shared_ptr<string> port_ {};
    // This parameter is required.
    shared_ptr<string> protocol_ {};
    shared_ptr<string> udpExtraConfigsShrink_ {};
    shared_ptr<string> userGroupId_ {};
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
