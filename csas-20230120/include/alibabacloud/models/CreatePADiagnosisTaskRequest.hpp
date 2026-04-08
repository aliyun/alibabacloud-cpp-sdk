// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPADIAGNOSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPADIAGNOSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreatePADiagnosisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePADiagnosisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DevTag, devTag_);
      DARABONBA_PTR_TO_JSON(DiagnoseType, diagnoseType_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(PopId, popId_);
      DARABONBA_PTR_TO_JSON(PopMode, popMode_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(UdpExtraConfigs, udpExtraConfigs_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePADiagnosisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
      DARABONBA_PTR_FROM_JSON(DiagnoseType, diagnoseType_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(PopId, popId_);
      DARABONBA_PTR_FROM_JSON(PopMode, popMode_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(UdpExtraConfigs, udpExtraConfigs_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    CreatePADiagnosisTaskRequest() = default ;
    CreatePADiagnosisTaskRequest(const CreatePADiagnosisTaskRequest &) = default ;
    CreatePADiagnosisTaskRequest(CreatePADiagnosisTaskRequest &&) = default ;
    CreatePADiagnosisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePADiagnosisTaskRequest() = default ;
    CreatePADiagnosisTaskRequest& operator=(const CreatePADiagnosisTaskRequest &) = default ;
    CreatePADiagnosisTaskRequest& operator=(CreatePADiagnosisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UdpExtraConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UdpExtraConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(ExpectedResponse, expectedResponse_);
        DARABONBA_PTR_TO_JSON(RequestContent, requestContent_);
      };
      friend void from_json(const Darabonba::Json& j, UdpExtraConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpectedResponse, expectedResponse_);
        DARABONBA_PTR_FROM_JSON(RequestContent, requestContent_);
      };
      UdpExtraConfigs() = default ;
      UdpExtraConfigs(const UdpExtraConfigs &) = default ;
      UdpExtraConfigs(UdpExtraConfigs &&) = default ;
      UdpExtraConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UdpExtraConfigs() = default ;
      UdpExtraConfigs& operator=(const UdpExtraConfigs &) = default ;
      UdpExtraConfigs& operator=(UdpExtraConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->expectedResponse_ == nullptr
        && this->requestContent_ == nullptr; };
      // expectedResponse Field Functions 
      bool hasExpectedResponse() const { return this->expectedResponse_ != nullptr;};
      void deleteExpectedResponse() { this->expectedResponse_ = nullptr;};
      inline string getExpectedResponse() const { DARABONBA_PTR_GET_DEFAULT(expectedResponse_, "") };
      inline UdpExtraConfigs& setExpectedResponse(string expectedResponse) { DARABONBA_PTR_SET_VALUE(expectedResponse_, expectedResponse) };


      // requestContent Field Functions 
      bool hasRequestContent() const { return this->requestContent_ != nullptr;};
      void deleteRequestContent() { this->requestContent_ = nullptr;};
      inline string getRequestContent() const { DARABONBA_PTR_GET_DEFAULT(requestContent_, "") };
      inline UdpExtraConfigs& setRequestContent(string requestContent) { DARABONBA_PTR_SET_VALUE(requestContent_, requestContent) };


    protected:
      shared_ptr<string> expectedResponse_ {};
      shared_ptr<string> requestContent_ {};
    };

    virtual bool empty() const override { return this->devTag_ == nullptr
        && this->diagnoseType_ == nullptr && this->host_ == nullptr && this->popId_ == nullptr && this->popMode_ == nullptr && this->port_ == nullptr
        && this->protocol_ == nullptr && this->udpExtraConfigs_ == nullptr && this->userGroupId_ == nullptr && this->username_ == nullptr; };
    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline CreatePADiagnosisTaskRequest& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


    // diagnoseType Field Functions 
    bool hasDiagnoseType() const { return this->diagnoseType_ != nullptr;};
    void deleteDiagnoseType() { this->diagnoseType_ = nullptr;};
    inline string getDiagnoseType() const { DARABONBA_PTR_GET_DEFAULT(diagnoseType_, "") };
    inline CreatePADiagnosisTaskRequest& setDiagnoseType(string diagnoseType) { DARABONBA_PTR_SET_VALUE(diagnoseType_, diagnoseType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline CreatePADiagnosisTaskRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // popId Field Functions 
    bool hasPopId() const { return this->popId_ != nullptr;};
    void deletePopId() { this->popId_ = nullptr;};
    inline string getPopId() const { DARABONBA_PTR_GET_DEFAULT(popId_, "") };
    inline CreatePADiagnosisTaskRequest& setPopId(string popId) { DARABONBA_PTR_SET_VALUE(popId_, popId) };


    // popMode Field Functions 
    bool hasPopMode() const { return this->popMode_ != nullptr;};
    void deletePopMode() { this->popMode_ = nullptr;};
    inline string getPopMode() const { DARABONBA_PTR_GET_DEFAULT(popMode_, "") };
    inline CreatePADiagnosisTaskRequest& setPopMode(string popMode) { DARABONBA_PTR_SET_VALUE(popMode_, popMode) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreatePADiagnosisTaskRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreatePADiagnosisTaskRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // udpExtraConfigs Field Functions 
    bool hasUdpExtraConfigs() const { return this->udpExtraConfigs_ != nullptr;};
    void deleteUdpExtraConfigs() { this->udpExtraConfigs_ = nullptr;};
    inline const CreatePADiagnosisTaskRequest::UdpExtraConfigs & getUdpExtraConfigs() const { DARABONBA_PTR_GET_CONST(udpExtraConfigs_, CreatePADiagnosisTaskRequest::UdpExtraConfigs) };
    inline CreatePADiagnosisTaskRequest::UdpExtraConfigs getUdpExtraConfigs() { DARABONBA_PTR_GET(udpExtraConfigs_, CreatePADiagnosisTaskRequest::UdpExtraConfigs) };
    inline CreatePADiagnosisTaskRequest& setUdpExtraConfigs(const CreatePADiagnosisTaskRequest::UdpExtraConfigs & udpExtraConfigs) { DARABONBA_PTR_SET_VALUE(udpExtraConfigs_, udpExtraConfigs) };
    inline CreatePADiagnosisTaskRequest& setUdpExtraConfigs(CreatePADiagnosisTaskRequest::UdpExtraConfigs && udpExtraConfigs) { DARABONBA_PTR_SET_RVALUE(udpExtraConfigs_, udpExtraConfigs) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline CreatePADiagnosisTaskRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CreatePADiagnosisTaskRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


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
    shared_ptr<CreatePADiagnosisTaskRequest::UdpExtraConfigs> udpExtraConfigs_ {};
    shared_ptr<string> userGroupId_ {};
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
