// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPADIAGNOSISTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPADIAGNOSISTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreatePADiagnosisTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePADiagnosisTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnosisTask, diagnosisTask_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePADiagnosisTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnosisTask, diagnosisTask_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePADiagnosisTaskResponseBody() = default ;
    CreatePADiagnosisTaskResponseBody(const CreatePADiagnosisTaskResponseBody &) = default ;
    CreatePADiagnosisTaskResponseBody(CreatePADiagnosisTaskResponseBody &&) = default ;
    CreatePADiagnosisTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePADiagnosisTaskResponseBody() = default ;
    CreatePADiagnosisTaskResponseBody& operator=(const CreatePADiagnosisTaskResponseBody &) = default ;
    CreatePADiagnosisTaskResponseBody& operator=(CreatePADiagnosisTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DiagnosisTask : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiagnosisTask& obj) { 
        DARABONBA_PTR_TO_JSON(DevTag, devTag_);
        DARABONBA_PTR_TO_JSON(DiagnoseId, diagnoseId_);
        DARABONBA_PTR_TO_JSON(DiagnoseType, diagnoseType_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(PopId, popId_);
        DARABONBA_PTR_TO_JSON(PopMode, popMode_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UdpExtraConfigs, udpExtraConfigs_);
        DARABONBA_PTR_TO_JSON(UserGroup, userGroup_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, DiagnosisTask& obj) { 
        DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
        DARABONBA_PTR_FROM_JSON(DiagnoseId, diagnoseId_);
        DARABONBA_PTR_FROM_JSON(DiagnoseType, diagnoseType_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(PopId, popId_);
        DARABONBA_PTR_FROM_JSON(PopMode, popMode_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UdpExtraConfigs, udpExtraConfigs_);
        DARABONBA_PTR_FROM_JSON(UserGroup, userGroup_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
      };
      DiagnosisTask() = default ;
      DiagnosisTask(const DiagnosisTask &) = default ;
      DiagnosisTask(DiagnosisTask &&) = default ;
      DiagnosisTask(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DiagnosisTask() = default ;
      DiagnosisTask& operator=(const DiagnosisTask &) = default ;
      DiagnosisTask& operator=(DiagnosisTask &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserGroup& obj) { 
          DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
          DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, UserGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
          DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
        };
        UserGroup() = default ;
        UserGroup(const UserGroup &) = default ;
        UserGroup(UserGroup &&) = default ;
        UserGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserGroup() = default ;
        UserGroup& operator=(const UserGroup &) = default ;
        UserGroup& operator=(UserGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userGroupId_ == nullptr
        && this->userGroupName_ == nullptr; };
        // userGroupId Field Functions 
        bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
        void deleteUserGroupId() { this->userGroupId_ = nullptr;};
        inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
        inline UserGroup& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


        // userGroupName Field Functions 
        bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
        void deleteUserGroupName() { this->userGroupName_ = nullptr;};
        inline string getUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
        inline UserGroup& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


      protected:
        shared_ptr<string> userGroupId_ {};
        shared_ptr<string> userGroupName_ {};
      };

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
        && this->diagnoseId_ == nullptr && this->diagnoseType_ == nullptr && this->host_ == nullptr && this->popId_ == nullptr && this->popMode_ == nullptr
        && this->port_ == nullptr && this->protocol_ == nullptr && this->status_ == nullptr && this->udpExtraConfigs_ == nullptr && this->userGroup_ == nullptr
        && this->username_ == nullptr; };
      // devTag Field Functions 
      bool hasDevTag() const { return this->devTag_ != nullptr;};
      void deleteDevTag() { this->devTag_ = nullptr;};
      inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
      inline DiagnosisTask& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


      // diagnoseId Field Functions 
      bool hasDiagnoseId() const { return this->diagnoseId_ != nullptr;};
      void deleteDiagnoseId() { this->diagnoseId_ = nullptr;};
      inline string getDiagnoseId() const { DARABONBA_PTR_GET_DEFAULT(diagnoseId_, "") };
      inline DiagnosisTask& setDiagnoseId(string diagnoseId) { DARABONBA_PTR_SET_VALUE(diagnoseId_, diagnoseId) };


      // diagnoseType Field Functions 
      bool hasDiagnoseType() const { return this->diagnoseType_ != nullptr;};
      void deleteDiagnoseType() { this->diagnoseType_ = nullptr;};
      inline string getDiagnoseType() const { DARABONBA_PTR_GET_DEFAULT(diagnoseType_, "") };
      inline DiagnosisTask& setDiagnoseType(string diagnoseType) { DARABONBA_PTR_SET_VALUE(diagnoseType_, diagnoseType) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline DiagnosisTask& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // popId Field Functions 
      bool hasPopId() const { return this->popId_ != nullptr;};
      void deletePopId() { this->popId_ = nullptr;};
      inline string getPopId() const { DARABONBA_PTR_GET_DEFAULT(popId_, "") };
      inline DiagnosisTask& setPopId(string popId) { DARABONBA_PTR_SET_VALUE(popId_, popId) };


      // popMode Field Functions 
      bool hasPopMode() const { return this->popMode_ != nullptr;};
      void deletePopMode() { this->popMode_ = nullptr;};
      inline string getPopMode() const { DARABONBA_PTR_GET_DEFAULT(popMode_, "") };
      inline DiagnosisTask& setPopMode(string popMode) { DARABONBA_PTR_SET_VALUE(popMode_, popMode) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline DiagnosisTask& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline DiagnosisTask& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DiagnosisTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // udpExtraConfigs Field Functions 
      bool hasUdpExtraConfigs() const { return this->udpExtraConfigs_ != nullptr;};
      void deleteUdpExtraConfigs() { this->udpExtraConfigs_ = nullptr;};
      inline const DiagnosisTask::UdpExtraConfigs & getUdpExtraConfigs() const { DARABONBA_PTR_GET_CONST(udpExtraConfigs_, DiagnosisTask::UdpExtraConfigs) };
      inline DiagnosisTask::UdpExtraConfigs getUdpExtraConfigs() { DARABONBA_PTR_GET(udpExtraConfigs_, DiagnosisTask::UdpExtraConfigs) };
      inline DiagnosisTask& setUdpExtraConfigs(const DiagnosisTask::UdpExtraConfigs & udpExtraConfigs) { DARABONBA_PTR_SET_VALUE(udpExtraConfigs_, udpExtraConfigs) };
      inline DiagnosisTask& setUdpExtraConfigs(DiagnosisTask::UdpExtraConfigs && udpExtraConfigs) { DARABONBA_PTR_SET_RVALUE(udpExtraConfigs_, udpExtraConfigs) };


      // userGroup Field Functions 
      bool hasUserGroup() const { return this->userGroup_ != nullptr;};
      void deleteUserGroup() { this->userGroup_ = nullptr;};
      inline const DiagnosisTask::UserGroup & getUserGroup() const { DARABONBA_PTR_GET_CONST(userGroup_, DiagnosisTask::UserGroup) };
      inline DiagnosisTask::UserGroup getUserGroup() { DARABONBA_PTR_GET(userGroup_, DiagnosisTask::UserGroup) };
      inline DiagnosisTask& setUserGroup(const DiagnosisTask::UserGroup & userGroup) { DARABONBA_PTR_SET_VALUE(userGroup_, userGroup) };
      inline DiagnosisTask& setUserGroup(DiagnosisTask::UserGroup && userGroup) { DARABONBA_PTR_SET_RVALUE(userGroup_, userGroup) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline DiagnosisTask& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      shared_ptr<string> devTag_ {};
      shared_ptr<string> diagnoseId_ {};
      shared_ptr<string> diagnoseType_ {};
      shared_ptr<string> host_ {};
      shared_ptr<string> popId_ {};
      shared_ptr<string> popMode_ {};
      shared_ptr<string> port_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<string> status_ {};
      shared_ptr<DiagnosisTask::UdpExtraConfigs> udpExtraConfigs_ {};
      shared_ptr<DiagnosisTask::UserGroup> userGroup_ {};
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->diagnosisTask_ == nullptr
        && this->requestId_ == nullptr; };
    // diagnosisTask Field Functions 
    bool hasDiagnosisTask() const { return this->diagnosisTask_ != nullptr;};
    void deleteDiagnosisTask() { this->diagnosisTask_ = nullptr;};
    inline const CreatePADiagnosisTaskResponseBody::DiagnosisTask & getDiagnosisTask() const { DARABONBA_PTR_GET_CONST(diagnosisTask_, CreatePADiagnosisTaskResponseBody::DiagnosisTask) };
    inline CreatePADiagnosisTaskResponseBody::DiagnosisTask getDiagnosisTask() { DARABONBA_PTR_GET(diagnosisTask_, CreatePADiagnosisTaskResponseBody::DiagnosisTask) };
    inline CreatePADiagnosisTaskResponseBody& setDiagnosisTask(const CreatePADiagnosisTaskResponseBody::DiagnosisTask & diagnosisTask) { DARABONBA_PTR_SET_VALUE(diagnosisTask_, diagnosisTask) };
    inline CreatePADiagnosisTaskResponseBody& setDiagnosisTask(CreatePADiagnosisTaskResponseBody::DiagnosisTask && diagnosisTask) { DARABONBA_PTR_SET_RVALUE(diagnosisTask_, diagnosisTask) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePADiagnosisTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreatePADiagnosisTaskResponseBody::DiagnosisTask> diagnosisTask_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
