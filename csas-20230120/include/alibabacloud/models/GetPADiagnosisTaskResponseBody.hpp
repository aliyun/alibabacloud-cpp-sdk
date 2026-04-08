// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPADIAGNOSISTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPADIAGNOSISTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetPADiagnosisTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPADiagnosisTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnosisTask, diagnosisTask_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPADiagnosisTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnosisTask, diagnosisTask_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPADiagnosisTaskResponseBody() = default ;
    GetPADiagnosisTaskResponseBody(const GetPADiagnosisTaskResponseBody &) = default ;
    GetPADiagnosisTaskResponseBody(GetPADiagnosisTaskResponseBody &&) = default ;
    GetPADiagnosisTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPADiagnosisTaskResponseBody() = default ;
    GetPADiagnosisTaskResponseBody& operator=(const GetPADiagnosisTaskResponseBody &) = default ;
    GetPADiagnosisTaskResponseBody& operator=(GetPADiagnosisTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DiagnosisTask : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiagnosisTask& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DevTag, devTag_);
        DARABONBA_PTR_TO_JSON(DiagnoseId, diagnoseId_);
        DARABONBA_PTR_TO_JSON(DiagnoseType, diagnoseType_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(PopId, popId_);
        DARABONBA_PTR_TO_JSON(PopMode, popMode_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UdpExtraConfigs, udpExtraConfigs_);
        DARABONBA_PTR_TO_JSON(UserGroup, userGroup_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, DiagnosisTask& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
        DARABONBA_PTR_FROM_JSON(DiagnoseId, diagnoseId_);
        DARABONBA_PTR_FROM_JSON(DiagnoseType, diagnoseType_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(PopId, popId_);
        DARABONBA_PTR_FROM_JSON(PopMode, popMode_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
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

      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(FlowId, flowId_);
          DARABONBA_PTR_TO_JSON(NetworkLinkInfo, networkLinkInfo_);
          DARABONBA_PTR_TO_JSON(PolicyInfo, policyInfo_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
          DARABONBA_PTR_FROM_JSON(NetworkLinkInfo, networkLinkInfo_);
          DARABONBA_PTR_FROM_JSON(PolicyInfo, policyInfo_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PolicyInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PolicyInfo& obj) { 
            DARABONBA_PTR_TO_JSON(DeviceAttributeInfo, deviceAttributeInfo_);
            DARABONBA_PTR_TO_JSON(ProcessTime, processTime_);
            DARABONBA_PTR_TO_JSON(RouteStrategyInfo, routeStrategyInfo_);
            DARABONBA_PTR_TO_JSON(UserGroupInfo, userGroupInfo_);
            DARABONBA_PTR_TO_JSON(ZeroTrustPolicyInfo, zeroTrustPolicyInfo_);
          };
          friend void from_json(const Darabonba::Json& j, PolicyInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(DeviceAttributeInfo, deviceAttributeInfo_);
            DARABONBA_PTR_FROM_JSON(ProcessTime, processTime_);
            DARABONBA_PTR_FROM_JSON(RouteStrategyInfo, routeStrategyInfo_);
            DARABONBA_PTR_FROM_JSON(UserGroupInfo, userGroupInfo_);
            DARABONBA_PTR_FROM_JSON(ZeroTrustPolicyInfo, zeroTrustPolicyInfo_);
          };
          PolicyInfo() = default ;
          PolicyInfo(const PolicyInfo &) = default ;
          PolicyInfo(PolicyInfo &&) = default ;
          PolicyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PolicyInfo() = default ;
          PolicyInfo& operator=(const PolicyInfo &) = default ;
          PolicyInfo& operator=(PolicyInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ZeroTrustPolicyInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ZeroTrustPolicyInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Action, action_);
              DARABONBA_PTR_TO_JSON(AppName, appName_);
              DARABONBA_PTR_TO_JSON(BlockInfo, blockInfo_);
              DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
            };
            friend void from_json(const Darabonba::Json& j, ZeroTrustPolicyInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Action, action_);
              DARABONBA_PTR_FROM_JSON(AppName, appName_);
              DARABONBA_PTR_FROM_JSON(BlockInfo, blockInfo_);
              DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
            };
            ZeroTrustPolicyInfo() = default ;
            ZeroTrustPolicyInfo(const ZeroTrustPolicyInfo &) = default ;
            ZeroTrustPolicyInfo(ZeroTrustPolicyInfo &&) = default ;
            ZeroTrustPolicyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ZeroTrustPolicyInfo() = default ;
            ZeroTrustPolicyInfo& operator=(const ZeroTrustPolicyInfo &) = default ;
            ZeroTrustPolicyInfo& operator=(ZeroTrustPolicyInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->action_ == nullptr
        && this->appName_ == nullptr && this->blockInfo_ == nullptr && this->policyName_ == nullptr; };
            // action Field Functions 
            bool hasAction() const { return this->action_ != nullptr;};
            void deleteAction() { this->action_ = nullptr;};
            inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
            inline ZeroTrustPolicyInfo& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


            // appName Field Functions 
            bool hasAppName() const { return this->appName_ != nullptr;};
            void deleteAppName() { this->appName_ = nullptr;};
            inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
            inline ZeroTrustPolicyInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


            // blockInfo Field Functions 
            bool hasBlockInfo() const { return this->blockInfo_ != nullptr;};
            void deleteBlockInfo() { this->blockInfo_ = nullptr;};
            inline string getBlockInfo() const { DARABONBA_PTR_GET_DEFAULT(blockInfo_, "") };
            inline ZeroTrustPolicyInfo& setBlockInfo(string blockInfo) { DARABONBA_PTR_SET_VALUE(blockInfo_, blockInfo) };


            // policyName Field Functions 
            bool hasPolicyName() const { return this->policyName_ != nullptr;};
            void deletePolicyName() { this->policyName_ = nullptr;};
            inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
            inline ZeroTrustPolicyInfo& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


          protected:
            shared_ptr<string> action_ {};
            shared_ptr<string> appName_ {};
            shared_ptr<string> blockInfo_ {};
            shared_ptr<string> policyName_ {};
          };

          class UserGroupInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const UserGroupInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Email, email_);
              DARABONBA_PTR_TO_JSON(Group, group_);
              DARABONBA_PTR_TO_JSON(MatchedUserGroups, matchedUserGroups_);
              DARABONBA_PTR_TO_JSON(Telephone, telephone_);
              DARABONBA_PTR_TO_JSON(Username, username_);
            };
            friend void from_json(const Darabonba::Json& j, UserGroupInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Email, email_);
              DARABONBA_PTR_FROM_JSON(Group, group_);
              DARABONBA_PTR_FROM_JSON(MatchedUserGroups, matchedUserGroups_);
              DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
              DARABONBA_PTR_FROM_JSON(Username, username_);
            };
            UserGroupInfo() = default ;
            UserGroupInfo(const UserGroupInfo &) = default ;
            UserGroupInfo(UserGroupInfo &&) = default ;
            UserGroupInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~UserGroupInfo() = default ;
            UserGroupInfo& operator=(const UserGroupInfo &) = default ;
            UserGroupInfo& operator=(UserGroupInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->email_ == nullptr
        && this->group_ == nullptr && this->matchedUserGroups_ == nullptr && this->telephone_ == nullptr && this->username_ == nullptr; };
            // email Field Functions 
            bool hasEmail() const { return this->email_ != nullptr;};
            void deleteEmail() { this->email_ = nullptr;};
            inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
            inline UserGroupInfo& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


            // group Field Functions 
            bool hasGroup() const { return this->group_ != nullptr;};
            void deleteGroup() { this->group_ = nullptr;};
            inline const vector<string> & getGroup() const { DARABONBA_PTR_GET_CONST(group_, vector<string>) };
            inline vector<string> getGroup() { DARABONBA_PTR_GET(group_, vector<string>) };
            inline UserGroupInfo& setGroup(const vector<string> & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
            inline UserGroupInfo& setGroup(vector<string> && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


            // matchedUserGroups Field Functions 
            bool hasMatchedUserGroups() const { return this->matchedUserGroups_ != nullptr;};
            void deleteMatchedUserGroups() { this->matchedUserGroups_ = nullptr;};
            inline string getMatchedUserGroups() const { DARABONBA_PTR_GET_DEFAULT(matchedUserGroups_, "") };
            inline UserGroupInfo& setMatchedUserGroups(string matchedUserGroups) { DARABONBA_PTR_SET_VALUE(matchedUserGroups_, matchedUserGroups) };


            // telephone Field Functions 
            bool hasTelephone() const { return this->telephone_ != nullptr;};
            void deleteTelephone() { this->telephone_ = nullptr;};
            inline string getTelephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
            inline UserGroupInfo& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


            // username Field Functions 
            bool hasUsername() const { return this->username_ != nullptr;};
            void deleteUsername() { this->username_ = nullptr;};
            inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
            inline UserGroupInfo& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


          protected:
            shared_ptr<string> email_ {};
            shared_ptr<vector<string>> group_ {};
            shared_ptr<string> matchedUserGroups_ {};
            shared_ptr<string> telephone_ {};
            shared_ptr<string> username_ {};
          };

          class RouteStrategyInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RouteStrategyInfo& obj) { 
              DARABONBA_PTR_TO_JSON(RouteType, routeType_);
              DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
              DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
            };
            friend void from_json(const Darabonba::Json& j, RouteStrategyInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
              DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
              DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
            };
            RouteStrategyInfo() = default ;
            RouteStrategyInfo(const RouteStrategyInfo &) = default ;
            RouteStrategyInfo(RouteStrategyInfo &&) = default ;
            RouteStrategyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RouteStrategyInfo() = default ;
            RouteStrategyInfo& operator=(const RouteStrategyInfo &) = default ;
            RouteStrategyInfo& operator=(RouteStrategyInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->routeType_ == nullptr
        && this->strategyId_ == nullptr && this->strategyName_ == nullptr; };
            // routeType Field Functions 
            bool hasRouteType() const { return this->routeType_ != nullptr;};
            void deleteRouteType() { this->routeType_ = nullptr;};
            inline string getRouteType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
            inline RouteStrategyInfo& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


            // strategyId Field Functions 
            bool hasStrategyId() const { return this->strategyId_ != nullptr;};
            void deleteStrategyId() { this->strategyId_ = nullptr;};
            inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
            inline RouteStrategyInfo& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


            // strategyName Field Functions 
            bool hasStrategyName() const { return this->strategyName_ != nullptr;};
            void deleteStrategyName() { this->strategyName_ = nullptr;};
            inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
            inline RouteStrategyInfo& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


          protected:
            shared_ptr<string> routeType_ {};
            shared_ptr<string> strategyId_ {};
            shared_ptr<string> strategyName_ {};
          };

          class DeviceAttributeInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DeviceAttributeInfo& obj) { 
              DARABONBA_PTR_TO_JSON(DevTag, devTag_);
              DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
              DARABONBA_PTR_TO_JSON(File, file_);
              DARABONBA_PTR_TO_JSON(Firewall, firewall_);
              DARABONBA_PTR_TO_JSON(Hostname, hostname_);
              DARABONBA_PTR_TO_JSON(InnerIp, innerIp_);
              DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
              DARABONBA_PTR_TO_JSON(Mac, mac_);
              DARABONBA_PTR_TO_JSON(MatchedSecurityBaseline, matchedSecurityBaseline_);
              DARABONBA_PTR_TO_JSON(Process, process_);
              DARABONBA_PTR_TO_JSON(Ssid, ssid_);
            };
            friend void from_json(const Darabonba::Json& j, DeviceAttributeInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
              DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
              DARABONBA_PTR_FROM_JSON(File, file_);
              DARABONBA_PTR_FROM_JSON(Firewall, firewall_);
              DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
              DARABONBA_PTR_FROM_JSON(InnerIp, innerIp_);
              DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
              DARABONBA_PTR_FROM_JSON(Mac, mac_);
              DARABONBA_PTR_FROM_JSON(MatchedSecurityBaseline, matchedSecurityBaseline_);
              DARABONBA_PTR_FROM_JSON(Process, process_);
              DARABONBA_PTR_FROM_JSON(Ssid, ssid_);
            };
            DeviceAttributeInfo() = default ;
            DeviceAttributeInfo(const DeviceAttributeInfo &) = default ;
            DeviceAttributeInfo(DeviceAttributeInfo &&) = default ;
            DeviceAttributeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DeviceAttributeInfo() = default ;
            DeviceAttributeInfo& operator=(const DeviceAttributeInfo &) = default ;
            DeviceAttributeInfo& operator=(DeviceAttributeInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->devTag_ == nullptr
        && this->deviceType_ == nullptr && this->file_ == nullptr && this->firewall_ == nullptr && this->hostname_ == nullptr && this->innerIp_ == nullptr
        && this->internetIp_ == nullptr && this->mac_ == nullptr && this->matchedSecurityBaseline_ == nullptr && this->process_ == nullptr && this->ssid_ == nullptr; };
            // devTag Field Functions 
            bool hasDevTag() const { return this->devTag_ != nullptr;};
            void deleteDevTag() { this->devTag_ = nullptr;};
            inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
            inline DeviceAttributeInfo& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


            // deviceType Field Functions 
            bool hasDeviceType() const { return this->deviceType_ != nullptr;};
            void deleteDeviceType() { this->deviceType_ = nullptr;};
            inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
            inline DeviceAttributeInfo& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


            // file Field Functions 
            bool hasFile() const { return this->file_ != nullptr;};
            void deleteFile() { this->file_ = nullptr;};
            inline const vector<string> & getFile() const { DARABONBA_PTR_GET_CONST(file_, vector<string>) };
            inline vector<string> getFile() { DARABONBA_PTR_GET(file_, vector<string>) };
            inline DeviceAttributeInfo& setFile(const vector<string> & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
            inline DeviceAttributeInfo& setFile(vector<string> && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


            // firewall Field Functions 
            bool hasFirewall() const { return this->firewall_ != nullptr;};
            void deleteFirewall() { this->firewall_ = nullptr;};
            inline string getFirewall() const { DARABONBA_PTR_GET_DEFAULT(firewall_, "") };
            inline DeviceAttributeInfo& setFirewall(string firewall) { DARABONBA_PTR_SET_VALUE(firewall_, firewall) };


            // hostname Field Functions 
            bool hasHostname() const { return this->hostname_ != nullptr;};
            void deleteHostname() { this->hostname_ = nullptr;};
            inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
            inline DeviceAttributeInfo& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


            // innerIp Field Functions 
            bool hasInnerIp() const { return this->innerIp_ != nullptr;};
            void deleteInnerIp() { this->innerIp_ = nullptr;};
            inline string getInnerIp() const { DARABONBA_PTR_GET_DEFAULT(innerIp_, "") };
            inline DeviceAttributeInfo& setInnerIp(string innerIp) { DARABONBA_PTR_SET_VALUE(innerIp_, innerIp) };


            // internetIp Field Functions 
            bool hasInternetIp() const { return this->internetIp_ != nullptr;};
            void deleteInternetIp() { this->internetIp_ = nullptr;};
            inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
            inline DeviceAttributeInfo& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


            // mac Field Functions 
            bool hasMac() const { return this->mac_ != nullptr;};
            void deleteMac() { this->mac_ = nullptr;};
            inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
            inline DeviceAttributeInfo& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


            // matchedSecurityBaseline Field Functions 
            bool hasMatchedSecurityBaseline() const { return this->matchedSecurityBaseline_ != nullptr;};
            void deleteMatchedSecurityBaseline() { this->matchedSecurityBaseline_ = nullptr;};
            inline string getMatchedSecurityBaseline() const { DARABONBA_PTR_GET_DEFAULT(matchedSecurityBaseline_, "") };
            inline DeviceAttributeInfo& setMatchedSecurityBaseline(string matchedSecurityBaseline) { DARABONBA_PTR_SET_VALUE(matchedSecurityBaseline_, matchedSecurityBaseline) };


            // process Field Functions 
            bool hasProcess() const { return this->process_ != nullptr;};
            void deleteProcess() { this->process_ = nullptr;};
            inline const vector<string> & getProcess() const { DARABONBA_PTR_GET_CONST(process_, vector<string>) };
            inline vector<string> getProcess() { DARABONBA_PTR_GET(process_, vector<string>) };
            inline DeviceAttributeInfo& setProcess(const vector<string> & process) { DARABONBA_PTR_SET_VALUE(process_, process) };
            inline DeviceAttributeInfo& setProcess(vector<string> && process) { DARABONBA_PTR_SET_RVALUE(process_, process) };


            // ssid Field Functions 
            bool hasSsid() const { return this->ssid_ != nullptr;};
            void deleteSsid() { this->ssid_ = nullptr;};
            inline string getSsid() const { DARABONBA_PTR_GET_DEFAULT(ssid_, "") };
            inline DeviceAttributeInfo& setSsid(string ssid) { DARABONBA_PTR_SET_VALUE(ssid_, ssid) };


          protected:
            shared_ptr<string> devTag_ {};
            shared_ptr<string> deviceType_ {};
            shared_ptr<vector<string>> file_ {};
            shared_ptr<string> firewall_ {};
            shared_ptr<string> hostname_ {};
            shared_ptr<string> innerIp_ {};
            shared_ptr<string> internetIp_ {};
            shared_ptr<string> mac_ {};
            shared_ptr<string> matchedSecurityBaseline_ {};
            shared_ptr<vector<string>> process_ {};
            // SSID。
            shared_ptr<string> ssid_ {};
          };

          virtual bool empty() const override { return this->deviceAttributeInfo_ == nullptr
        && this->processTime_ == nullptr && this->routeStrategyInfo_ == nullptr && this->userGroupInfo_ == nullptr && this->zeroTrustPolicyInfo_ == nullptr; };
          // deviceAttributeInfo Field Functions 
          bool hasDeviceAttributeInfo() const { return this->deviceAttributeInfo_ != nullptr;};
          void deleteDeviceAttributeInfo() { this->deviceAttributeInfo_ = nullptr;};
          inline const PolicyInfo::DeviceAttributeInfo & getDeviceAttributeInfo() const { DARABONBA_PTR_GET_CONST(deviceAttributeInfo_, PolicyInfo::DeviceAttributeInfo) };
          inline PolicyInfo::DeviceAttributeInfo getDeviceAttributeInfo() { DARABONBA_PTR_GET(deviceAttributeInfo_, PolicyInfo::DeviceAttributeInfo) };
          inline PolicyInfo& setDeviceAttributeInfo(const PolicyInfo::DeviceAttributeInfo & deviceAttributeInfo) { DARABONBA_PTR_SET_VALUE(deviceAttributeInfo_, deviceAttributeInfo) };
          inline PolicyInfo& setDeviceAttributeInfo(PolicyInfo::DeviceAttributeInfo && deviceAttributeInfo) { DARABONBA_PTR_SET_RVALUE(deviceAttributeInfo_, deviceAttributeInfo) };


          // processTime Field Functions 
          bool hasProcessTime() const { return this->processTime_ != nullptr;};
          void deleteProcessTime() { this->processTime_ = nullptr;};
          inline int64_t getProcessTime() const { DARABONBA_PTR_GET_DEFAULT(processTime_, 0L) };
          inline PolicyInfo& setProcessTime(int64_t processTime) { DARABONBA_PTR_SET_VALUE(processTime_, processTime) };


          // routeStrategyInfo Field Functions 
          bool hasRouteStrategyInfo() const { return this->routeStrategyInfo_ != nullptr;};
          void deleteRouteStrategyInfo() { this->routeStrategyInfo_ = nullptr;};
          inline const PolicyInfo::RouteStrategyInfo & getRouteStrategyInfo() const { DARABONBA_PTR_GET_CONST(routeStrategyInfo_, PolicyInfo::RouteStrategyInfo) };
          inline PolicyInfo::RouteStrategyInfo getRouteStrategyInfo() { DARABONBA_PTR_GET(routeStrategyInfo_, PolicyInfo::RouteStrategyInfo) };
          inline PolicyInfo& setRouteStrategyInfo(const PolicyInfo::RouteStrategyInfo & routeStrategyInfo) { DARABONBA_PTR_SET_VALUE(routeStrategyInfo_, routeStrategyInfo) };
          inline PolicyInfo& setRouteStrategyInfo(PolicyInfo::RouteStrategyInfo && routeStrategyInfo) { DARABONBA_PTR_SET_RVALUE(routeStrategyInfo_, routeStrategyInfo) };


          // userGroupInfo Field Functions 
          bool hasUserGroupInfo() const { return this->userGroupInfo_ != nullptr;};
          void deleteUserGroupInfo() { this->userGroupInfo_ = nullptr;};
          inline const PolicyInfo::UserGroupInfo & getUserGroupInfo() const { DARABONBA_PTR_GET_CONST(userGroupInfo_, PolicyInfo::UserGroupInfo) };
          inline PolicyInfo::UserGroupInfo getUserGroupInfo() { DARABONBA_PTR_GET(userGroupInfo_, PolicyInfo::UserGroupInfo) };
          inline PolicyInfo& setUserGroupInfo(const PolicyInfo::UserGroupInfo & userGroupInfo) { DARABONBA_PTR_SET_VALUE(userGroupInfo_, userGroupInfo) };
          inline PolicyInfo& setUserGroupInfo(PolicyInfo::UserGroupInfo && userGroupInfo) { DARABONBA_PTR_SET_RVALUE(userGroupInfo_, userGroupInfo) };


          // zeroTrustPolicyInfo Field Functions 
          bool hasZeroTrustPolicyInfo() const { return this->zeroTrustPolicyInfo_ != nullptr;};
          void deleteZeroTrustPolicyInfo() { this->zeroTrustPolicyInfo_ = nullptr;};
          inline const PolicyInfo::ZeroTrustPolicyInfo & getZeroTrustPolicyInfo() const { DARABONBA_PTR_GET_CONST(zeroTrustPolicyInfo_, PolicyInfo::ZeroTrustPolicyInfo) };
          inline PolicyInfo::ZeroTrustPolicyInfo getZeroTrustPolicyInfo() { DARABONBA_PTR_GET(zeroTrustPolicyInfo_, PolicyInfo::ZeroTrustPolicyInfo) };
          inline PolicyInfo& setZeroTrustPolicyInfo(const PolicyInfo::ZeroTrustPolicyInfo & zeroTrustPolicyInfo) { DARABONBA_PTR_SET_VALUE(zeroTrustPolicyInfo_, zeroTrustPolicyInfo) };
          inline PolicyInfo& setZeroTrustPolicyInfo(PolicyInfo::ZeroTrustPolicyInfo && zeroTrustPolicyInfo) { DARABONBA_PTR_SET_RVALUE(zeroTrustPolicyInfo_, zeroTrustPolicyInfo) };


        protected:
          shared_ptr<PolicyInfo::DeviceAttributeInfo> deviceAttributeInfo_ {};
          shared_ptr<int64_t> processTime_ {};
          shared_ptr<PolicyInfo::RouteStrategyInfo> routeStrategyInfo_ {};
          shared_ptr<PolicyInfo::UserGroupInfo> userGroupInfo_ {};
          shared_ptr<PolicyInfo::ZeroTrustPolicyInfo> zeroTrustPolicyInfo_ {};
        };

        class NetworkLinkInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkLinkInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Dns, dns_);
            DARABONBA_PTR_TO_JSON(FBT, FBT_);
            DARABONBA_PTR_TO_JSON(Links, links_);
            DARABONBA_PTR_TO_JSON(Nodes, nodes_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkLinkInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Dns, dns_);
            DARABONBA_PTR_FROM_JSON(FBT, FBT_);
            DARABONBA_PTR_FROM_JSON(Links, links_);
            DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
          };
          NetworkLinkInfo() = default ;
          NetworkLinkInfo(const NetworkLinkInfo &) = default ;
          NetworkLinkInfo(NetworkLinkInfo &&) = default ;
          NetworkLinkInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkLinkInfo() = default ;
          NetworkLinkInfo& operator=(const NetworkLinkInfo &) = default ;
          NetworkLinkInfo& operator=(NetworkLinkInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Nodes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
              DARABONBA_PTR_TO_JSON(Address, address_);
              DARABONBA_PTR_TO_JSON(CloudNetId, cloudNetId_);
              DARABONBA_PTR_TO_JSON(Error, error_);
              DARABONBA_PTR_TO_JSON(GeoData, geoData_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(NameEn, nameEn_);
              DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
              DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
              DARABONBA_PTR_TO_JSON(Success, success_);
            };
            friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
              DARABONBA_PTR_FROM_JSON(Address, address_);
              DARABONBA_PTR_FROM_JSON(CloudNetId, cloudNetId_);
              DARABONBA_PTR_FROM_JSON(Error, error_);
              DARABONBA_PTR_FROM_JSON(GeoData, geoData_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(NameEn, nameEn_);
              DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
              DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
            };
            Nodes() = default ;
            Nodes(const Nodes &) = default ;
            Nodes(Nodes &&) = default ;
            Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Nodes() = default ;
            Nodes& operator=(const Nodes &) = default ;
            Nodes& operator=(Nodes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class GeoData : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const GeoData& obj) { 
                DARABONBA_PTR_TO_JSON(City, city_);
                DARABONBA_PTR_TO_JSON(Country, country_);
                DARABONBA_PTR_TO_JSON(Isp, isp_);
                DARABONBA_PTR_TO_JSON(Prov, prov_);
              };
              friend void from_json(const Darabonba::Json& j, GeoData& obj) { 
                DARABONBA_PTR_FROM_JSON(City, city_);
                DARABONBA_PTR_FROM_JSON(Country, country_);
                DARABONBA_PTR_FROM_JSON(Isp, isp_);
                DARABONBA_PTR_FROM_JSON(Prov, prov_);
              };
              GeoData() = default ;
              GeoData(const GeoData &) = default ;
              GeoData(GeoData &&) = default ;
              GeoData(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~GeoData() = default ;
              GeoData& operator=(const GeoData &) = default ;
              GeoData& operator=(GeoData &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->city_ == nullptr
        && this->country_ == nullptr && this->isp_ == nullptr && this->prov_ == nullptr; };
              // city Field Functions 
              bool hasCity() const { return this->city_ != nullptr;};
              void deleteCity() { this->city_ = nullptr;};
              inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
              inline GeoData& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


              // country Field Functions 
              bool hasCountry() const { return this->country_ != nullptr;};
              void deleteCountry() { this->country_ = nullptr;};
              inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
              inline GeoData& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


              // isp Field Functions 
              bool hasIsp() const { return this->isp_ != nullptr;};
              void deleteIsp() { this->isp_ = nullptr;};
              inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
              inline GeoData& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


              // prov Field Functions 
              bool hasProv() const { return this->prov_ != nullptr;};
              void deleteProv() { this->prov_ = nullptr;};
              inline string getProv() const { DARABONBA_PTR_GET_DEFAULT(prov_, "") };
              inline GeoData& setProv(string prov) { DARABONBA_PTR_SET_VALUE(prov_, prov) };


            protected:
              shared_ptr<string> city_ {};
              shared_ptr<string> country_ {};
              shared_ptr<string> isp_ {};
              shared_ptr<string> prov_ {};
            };

            virtual bool empty() const override { return this->address_ == nullptr
        && this->cloudNetId_ == nullptr && this->error_ == nullptr && this->geoData_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->nameEn_ == nullptr && this->nodeType_ == nullptr && this->resourceId_ == nullptr && this->success_ == nullptr; };
            // address Field Functions 
            bool hasAddress() const { return this->address_ != nullptr;};
            void deleteAddress() { this->address_ = nullptr;};
            inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
            inline Nodes& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


            // cloudNetId Field Functions 
            bool hasCloudNetId() const { return this->cloudNetId_ != nullptr;};
            void deleteCloudNetId() { this->cloudNetId_ = nullptr;};
            inline string getCloudNetId() const { DARABONBA_PTR_GET_DEFAULT(cloudNetId_, "") };
            inline Nodes& setCloudNetId(string cloudNetId) { DARABONBA_PTR_SET_VALUE(cloudNetId_, cloudNetId) };


            // error Field Functions 
            bool hasError() const { return this->error_ != nullptr;};
            void deleteError() { this->error_ = nullptr;};
            inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
            inline Nodes& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


            // geoData Field Functions 
            bool hasGeoData() const { return this->geoData_ != nullptr;};
            void deleteGeoData() { this->geoData_ = nullptr;};
            inline const Nodes::GeoData & getGeoData() const { DARABONBA_PTR_GET_CONST(geoData_, Nodes::GeoData) };
            inline Nodes::GeoData getGeoData() { DARABONBA_PTR_GET(geoData_, Nodes::GeoData) };
            inline Nodes& setGeoData(const Nodes::GeoData & geoData) { DARABONBA_PTR_SET_VALUE(geoData_, geoData) };
            inline Nodes& setGeoData(Nodes::GeoData && geoData) { DARABONBA_PTR_SET_RVALUE(geoData_, geoData) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline Nodes& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Nodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // nameEn Field Functions 
            bool hasNameEn() const { return this->nameEn_ != nullptr;};
            void deleteNameEn() { this->nameEn_ = nullptr;};
            inline string getNameEn() const { DARABONBA_PTR_GET_DEFAULT(nameEn_, "") };
            inline Nodes& setNameEn(string nameEn) { DARABONBA_PTR_SET_VALUE(nameEn_, nameEn) };


            // nodeType Field Functions 
            bool hasNodeType() const { return this->nodeType_ != nullptr;};
            void deleteNodeType() { this->nodeType_ = nullptr;};
            inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
            inline Nodes& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


            // resourceId Field Functions 
            bool hasResourceId() const { return this->resourceId_ != nullptr;};
            void deleteResourceId() { this->resourceId_ = nullptr;};
            inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
            inline Nodes& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
            inline Nodes& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


          protected:
            shared_ptr<string> address_ {};
            shared_ptr<string> cloudNetId_ {};
            shared_ptr<string> error_ {};
            shared_ptr<Nodes::GeoData> geoData_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<string> name_ {};
            shared_ptr<string> nameEn_ {};
            shared_ptr<string> nodeType_ {};
            shared_ptr<string> resourceId_ {};
            shared_ptr<bool> success_ {};
          };

          class Links : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Links& obj) { 
              DARABONBA_PTR_TO_JSON(Error, error_);
              DARABONBA_PTR_TO_JSON(FromNode, fromNode_);
              DARABONBA_PTR_TO_JSON(Hops, hops_);
              DARABONBA_PTR_TO_JSON(Latency, latency_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(ToNode, toNode_);
            };
            friend void from_json(const Darabonba::Json& j, Links& obj) { 
              DARABONBA_PTR_FROM_JSON(Error, error_);
              DARABONBA_PTR_FROM_JSON(FromNode, fromNode_);
              DARABONBA_PTR_FROM_JSON(Hops, hops_);
              DARABONBA_PTR_FROM_JSON(Latency, latency_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(ToNode, toNode_);
            };
            Links() = default ;
            Links(const Links &) = default ;
            Links(Links &&) = default ;
            Links(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Links() = default ;
            Links& operator=(const Links &) = default ;
            Links& operator=(Links &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Hops : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Hops& obj) { 
                DARABONBA_PTR_TO_JSON(Address, address_);
                DARABONBA_PTR_TO_JSON(GeoData, geoData_);
                DARABONBA_PTR_TO_JSON(Latency, latency_);
                DARABONBA_PTR_TO_JSON(TTL, TTL_);
              };
              friend void from_json(const Darabonba::Json& j, Hops& obj) { 
                DARABONBA_PTR_FROM_JSON(Address, address_);
                DARABONBA_PTR_FROM_JSON(GeoData, geoData_);
                DARABONBA_PTR_FROM_JSON(Latency, latency_);
                DARABONBA_PTR_FROM_JSON(TTL, TTL_);
              };
              Hops() = default ;
              Hops(const Hops &) = default ;
              Hops(Hops &&) = default ;
              Hops(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Hops() = default ;
              Hops& operator=(const Hops &) = default ;
              Hops& operator=(Hops &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class GeoData : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const GeoData& obj) { 
                  DARABONBA_PTR_TO_JSON(City, city_);
                  DARABONBA_PTR_TO_JSON(Country, country_);
                  DARABONBA_PTR_TO_JSON(Isp, isp_);
                  DARABONBA_PTR_TO_JSON(Prov, prov_);
                };
                friend void from_json(const Darabonba::Json& j, GeoData& obj) { 
                  DARABONBA_PTR_FROM_JSON(City, city_);
                  DARABONBA_PTR_FROM_JSON(Country, country_);
                  DARABONBA_PTR_FROM_JSON(Isp, isp_);
                  DARABONBA_PTR_FROM_JSON(Prov, prov_);
                };
                GeoData() = default ;
                GeoData(const GeoData &) = default ;
                GeoData(GeoData &&) = default ;
                GeoData(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~GeoData() = default ;
                GeoData& operator=(const GeoData &) = default ;
                GeoData& operator=(GeoData &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->city_ == nullptr
        && this->country_ == nullptr && this->isp_ == nullptr && this->prov_ == nullptr; };
                // city Field Functions 
                bool hasCity() const { return this->city_ != nullptr;};
                void deleteCity() { this->city_ = nullptr;};
                inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
                inline GeoData& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


                // country Field Functions 
                bool hasCountry() const { return this->country_ != nullptr;};
                void deleteCountry() { this->country_ = nullptr;};
                inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
                inline GeoData& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


                // isp Field Functions 
                bool hasIsp() const { return this->isp_ != nullptr;};
                void deleteIsp() { this->isp_ = nullptr;};
                inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
                inline GeoData& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


                // prov Field Functions 
                bool hasProv() const { return this->prov_ != nullptr;};
                void deleteProv() { this->prov_ = nullptr;};
                inline string getProv() const { DARABONBA_PTR_GET_DEFAULT(prov_, "") };
                inline GeoData& setProv(string prov) { DARABONBA_PTR_SET_VALUE(prov_, prov) };


              protected:
                shared_ptr<string> city_ {};
                shared_ptr<string> country_ {};
                shared_ptr<string> isp_ {};
                shared_ptr<string> prov_ {};
              };

              virtual bool empty() const override { return this->address_ == nullptr
        && this->geoData_ == nullptr && this->latency_ == nullptr && this->TTL_ == nullptr; };
              // address Field Functions 
              bool hasAddress() const { return this->address_ != nullptr;};
              void deleteAddress() { this->address_ = nullptr;};
              inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
              inline Hops& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


              // geoData Field Functions 
              bool hasGeoData() const { return this->geoData_ != nullptr;};
              void deleteGeoData() { this->geoData_ = nullptr;};
              inline const Hops::GeoData & getGeoData() const { DARABONBA_PTR_GET_CONST(geoData_, Hops::GeoData) };
              inline Hops::GeoData getGeoData() { DARABONBA_PTR_GET(geoData_, Hops::GeoData) };
              inline Hops& setGeoData(const Hops::GeoData & geoData) { DARABONBA_PTR_SET_VALUE(geoData_, geoData) };
              inline Hops& setGeoData(Hops::GeoData && geoData) { DARABONBA_PTR_SET_RVALUE(geoData_, geoData) };


              // latency Field Functions 
              bool hasLatency() const { return this->latency_ != nullptr;};
              void deleteLatency() { this->latency_ = nullptr;};
              inline string getLatency() const { DARABONBA_PTR_GET_DEFAULT(latency_, "") };
              inline Hops& setLatency(string latency) { DARABONBA_PTR_SET_VALUE(latency_, latency) };


              // TTL Field Functions 
              bool hasTTL() const { return this->TTL_ != nullptr;};
              void deleteTTL() { this->TTL_ = nullptr;};
              inline string getTTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, "") };
              inline Hops& setTTL(string TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


            protected:
              shared_ptr<string> address_ {};
              shared_ptr<Hops::GeoData> geoData_ {};
              shared_ptr<string> latency_ {};
              // TTL。
              shared_ptr<string> TTL_ {};
            };

            virtual bool empty() const override { return this->error_ == nullptr
        && this->fromNode_ == nullptr && this->hops_ == nullptr && this->latency_ == nullptr && this->success_ == nullptr && this->toNode_ == nullptr; };
            // error Field Functions 
            bool hasError() const { return this->error_ != nullptr;};
            void deleteError() { this->error_ = nullptr;};
            inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
            inline Links& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


            // fromNode Field Functions 
            bool hasFromNode() const { return this->fromNode_ != nullptr;};
            void deleteFromNode() { this->fromNode_ = nullptr;};
            inline int64_t getFromNode() const { DARABONBA_PTR_GET_DEFAULT(fromNode_, 0L) };
            inline Links& setFromNode(int64_t fromNode) { DARABONBA_PTR_SET_VALUE(fromNode_, fromNode) };


            // hops Field Functions 
            bool hasHops() const { return this->hops_ != nullptr;};
            void deleteHops() { this->hops_ = nullptr;};
            inline const vector<Links::Hops> & getHops() const { DARABONBA_PTR_GET_CONST(hops_, vector<Links::Hops>) };
            inline vector<Links::Hops> getHops() { DARABONBA_PTR_GET(hops_, vector<Links::Hops>) };
            inline Links& setHops(const vector<Links::Hops> & hops) { DARABONBA_PTR_SET_VALUE(hops_, hops) };
            inline Links& setHops(vector<Links::Hops> && hops) { DARABONBA_PTR_SET_RVALUE(hops_, hops) };


            // latency Field Functions 
            bool hasLatency() const { return this->latency_ != nullptr;};
            void deleteLatency() { this->latency_ = nullptr;};
            inline string getLatency() const { DARABONBA_PTR_GET_DEFAULT(latency_, "") };
            inline Links& setLatency(string latency) { DARABONBA_PTR_SET_VALUE(latency_, latency) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
            inline Links& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // toNode Field Functions 
            bool hasToNode() const { return this->toNode_ != nullptr;};
            void deleteToNode() { this->toNode_ = nullptr;};
            inline int64_t getToNode() const { DARABONBA_PTR_GET_DEFAULT(toNode_, 0L) };
            inline Links& setToNode(int64_t toNode) { DARABONBA_PTR_SET_VALUE(toNode_, toNode) };


          protected:
            shared_ptr<string> error_ {};
            shared_ptr<int64_t> fromNode_ {};
            shared_ptr<vector<Links::Hops>> hops_ {};
            shared_ptr<string> latency_ {};
            shared_ptr<bool> success_ {};
            shared_ptr<int64_t> toNode_ {};
          };

          class Dns : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Dns& obj) { 
              DARABONBA_PTR_TO_JSON(DnsServer, dnsServer_);
              DARABONBA_PTR_TO_JSON(DnsType, dnsType_);
              DARABONBA_PTR_TO_JSON(Error, error_);
              DARABONBA_PTR_TO_JSON(FromNode, fromNode_);
              DARABONBA_PTR_TO_JSON(Hops, hops_);
              DARABONBA_PTR_TO_JSON(Latency, latency_);
              DARABONBA_PTR_TO_JSON(Result, result_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(ToNode, toNode_);
            };
            friend void from_json(const Darabonba::Json& j, Dns& obj) { 
              DARABONBA_PTR_FROM_JSON(DnsServer, dnsServer_);
              DARABONBA_PTR_FROM_JSON(DnsType, dnsType_);
              DARABONBA_PTR_FROM_JSON(Error, error_);
              DARABONBA_PTR_FROM_JSON(FromNode, fromNode_);
              DARABONBA_PTR_FROM_JSON(Hops, hops_);
              DARABONBA_PTR_FROM_JSON(Latency, latency_);
              DARABONBA_PTR_FROM_JSON(Result, result_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(ToNode, toNode_);
            };
            Dns() = default ;
            Dns(const Dns &) = default ;
            Dns(Dns &&) = default ;
            Dns(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Dns() = default ;
            Dns& operator=(const Dns &) = default ;
            Dns& operator=(Dns &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->dnsServer_ == nullptr
        && this->dnsType_ == nullptr && this->error_ == nullptr && this->fromNode_ == nullptr && this->hops_ == nullptr && this->latency_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr && this->toNode_ == nullptr; };
            // dnsServer Field Functions 
            bool hasDnsServer() const { return this->dnsServer_ != nullptr;};
            void deleteDnsServer() { this->dnsServer_ = nullptr;};
            inline string getDnsServer() const { DARABONBA_PTR_GET_DEFAULT(dnsServer_, "") };
            inline Dns& setDnsServer(string dnsServer) { DARABONBA_PTR_SET_VALUE(dnsServer_, dnsServer) };


            // dnsType Field Functions 
            bool hasDnsType() const { return this->dnsType_ != nullptr;};
            void deleteDnsType() { this->dnsType_ = nullptr;};
            inline string getDnsType() const { DARABONBA_PTR_GET_DEFAULT(dnsType_, "") };
            inline Dns& setDnsType(string dnsType) { DARABONBA_PTR_SET_VALUE(dnsType_, dnsType) };


            // error Field Functions 
            bool hasError() const { return this->error_ != nullptr;};
            void deleteError() { this->error_ = nullptr;};
            inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
            inline Dns& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


            // fromNode Field Functions 
            bool hasFromNode() const { return this->fromNode_ != nullptr;};
            void deleteFromNode() { this->fromNode_ = nullptr;};
            inline int64_t getFromNode() const { DARABONBA_PTR_GET_DEFAULT(fromNode_, 0L) };
            inline Dns& setFromNode(int64_t fromNode) { DARABONBA_PTR_SET_VALUE(fromNode_, fromNode) };


            // hops Field Functions 
            bool hasHops() const { return this->hops_ != nullptr;};
            void deleteHops() { this->hops_ = nullptr;};
            inline const vector<vector<Dns::Hops>> & getHops() const { DARABONBA_PTR_GET_CONST(hops_, vector<vector<Dns::Hops>>) };
            inline vector<vector<Dns::Hops>> getHops() { DARABONBA_PTR_GET(hops_, vector<vector<Dns::Hops>>) };
            inline Dns& setHops(const vector<vector<Dns::Hops>> & hops) { DARABONBA_PTR_SET_VALUE(hops_, hops) };
            inline Dns& setHops(vector<vector<Dns::Hops>> && hops) { DARABONBA_PTR_SET_RVALUE(hops_, hops) };


            // latency Field Functions 
            bool hasLatency() const { return this->latency_ != nullptr;};
            void deleteLatency() { this->latency_ = nullptr;};
            inline string getLatency() const { DARABONBA_PTR_GET_DEFAULT(latency_, "") };
            inline Dns& setLatency(string latency) { DARABONBA_PTR_SET_VALUE(latency_, latency) };


            // result Field Functions 
            bool hasResult() const { return this->result_ != nullptr;};
            void deleteResult() { this->result_ = nullptr;};
            inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
            inline Dns& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
            inline Dns& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // toNode Field Functions 
            bool hasToNode() const { return this->toNode_ != nullptr;};
            void deleteToNode() { this->toNode_ = nullptr;};
            inline int64_t getToNode() const { DARABONBA_PTR_GET_DEFAULT(toNode_, 0L) };
            inline Dns& setToNode(int64_t toNode) { DARABONBA_PTR_SET_VALUE(toNode_, toNode) };


          protected:
            shared_ptr<string> dnsServer_ {};
            shared_ptr<string> dnsType_ {};
            shared_ptr<string> error_ {};
            shared_ptr<int64_t> fromNode_ {};
            shared_ptr<vector<vector<Dns::Hops>>> hops_ {};
            shared_ptr<string> latency_ {};
            shared_ptr<string> result_ {};
            shared_ptr<bool> success_ {};
            shared_ptr<int64_t> toNode_ {};
          };

          virtual bool empty() const override { return this->dns_ == nullptr
        && this->FBT_ == nullptr && this->links_ == nullptr && this->nodes_ == nullptr; };
          // dns Field Functions 
          bool hasDns() const { return this->dns_ != nullptr;};
          void deleteDns() { this->dns_ = nullptr;};
          inline const NetworkLinkInfo::Dns & getDns() const { DARABONBA_PTR_GET_CONST(dns_, NetworkLinkInfo::Dns) };
          inline NetworkLinkInfo::Dns getDns() { DARABONBA_PTR_GET(dns_, NetworkLinkInfo::Dns) };
          inline NetworkLinkInfo& setDns(const NetworkLinkInfo::Dns & dns) { DARABONBA_PTR_SET_VALUE(dns_, dns) };
          inline NetworkLinkInfo& setDns(NetworkLinkInfo::Dns && dns) { DARABONBA_PTR_SET_RVALUE(dns_, dns) };


          // FBT Field Functions 
          bool hasFBT() const { return this->FBT_ != nullptr;};
          void deleteFBT() { this->FBT_ = nullptr;};
          inline string getFBT() const { DARABONBA_PTR_GET_DEFAULT(FBT_, "") };
          inline NetworkLinkInfo& setFBT(string FBT) { DARABONBA_PTR_SET_VALUE(FBT_, FBT) };


          // links Field Functions 
          bool hasLinks() const { return this->links_ != nullptr;};
          void deleteLinks() { this->links_ = nullptr;};
          inline const vector<NetworkLinkInfo::Links> & getLinks() const { DARABONBA_PTR_GET_CONST(links_, vector<NetworkLinkInfo::Links>) };
          inline vector<NetworkLinkInfo::Links> getLinks() { DARABONBA_PTR_GET(links_, vector<NetworkLinkInfo::Links>) };
          inline NetworkLinkInfo& setLinks(const vector<NetworkLinkInfo::Links> & links) { DARABONBA_PTR_SET_VALUE(links_, links) };
          inline NetworkLinkInfo& setLinks(vector<NetworkLinkInfo::Links> && links) { DARABONBA_PTR_SET_RVALUE(links_, links) };


          // nodes Field Functions 
          bool hasNodes() const { return this->nodes_ != nullptr;};
          void deleteNodes() { this->nodes_ = nullptr;};
          inline const vector<NetworkLinkInfo::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<NetworkLinkInfo::Nodes>) };
          inline vector<NetworkLinkInfo::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<NetworkLinkInfo::Nodes>) };
          inline NetworkLinkInfo& setNodes(const vector<NetworkLinkInfo::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
          inline NetworkLinkInfo& setNodes(vector<NetworkLinkInfo::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


        protected:
          shared_ptr<NetworkLinkInfo::Dns> dns_ {};
          shared_ptr<string> FBT_ {};
          shared_ptr<vector<NetworkLinkInfo::Links>> links_ {};
          shared_ptr<vector<NetworkLinkInfo::Nodes>> nodes_ {};
        };

        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->flowId_ == nullptr && this->networkLinkInfo_ == nullptr && this->policyInfo_ == nullptr && this->success_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Result& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // flowId Field Functions 
        bool hasFlowId() const { return this->flowId_ != nullptr;};
        void deleteFlowId() { this->flowId_ = nullptr;};
        inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
        inline Result& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


        // networkLinkInfo Field Functions 
        bool hasNetworkLinkInfo() const { return this->networkLinkInfo_ != nullptr;};
        void deleteNetworkLinkInfo() { this->networkLinkInfo_ = nullptr;};
        inline const Result::NetworkLinkInfo & getNetworkLinkInfo() const { DARABONBA_PTR_GET_CONST(networkLinkInfo_, Result::NetworkLinkInfo) };
        inline Result::NetworkLinkInfo getNetworkLinkInfo() { DARABONBA_PTR_GET(networkLinkInfo_, Result::NetworkLinkInfo) };
        inline Result& setNetworkLinkInfo(const Result::NetworkLinkInfo & networkLinkInfo) { DARABONBA_PTR_SET_VALUE(networkLinkInfo_, networkLinkInfo) };
        inline Result& setNetworkLinkInfo(Result::NetworkLinkInfo && networkLinkInfo) { DARABONBA_PTR_SET_RVALUE(networkLinkInfo_, networkLinkInfo) };


        // policyInfo Field Functions 
        bool hasPolicyInfo() const { return this->policyInfo_ != nullptr;};
        void deletePolicyInfo() { this->policyInfo_ = nullptr;};
        inline const Result::PolicyInfo & getPolicyInfo() const { DARABONBA_PTR_GET_CONST(policyInfo_, Result::PolicyInfo) };
        inline Result::PolicyInfo getPolicyInfo() { DARABONBA_PTR_GET(policyInfo_, Result::PolicyInfo) };
        inline Result& setPolicyInfo(const Result::PolicyInfo & policyInfo) { DARABONBA_PTR_SET_VALUE(policyInfo_, policyInfo) };
        inline Result& setPolicyInfo(Result::PolicyInfo && policyInfo) { DARABONBA_PTR_SET_RVALUE(policyInfo_, policyInfo) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline Result& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        shared_ptr<string> errorMessage_ {};
        shared_ptr<string> flowId_ {};
        shared_ptr<Result::NetworkLinkInfo> networkLinkInfo_ {};
        shared_ptr<Result::PolicyInfo> policyInfo_ {};
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->devTag_ == nullptr && this->diagnoseId_ == nullptr && this->diagnoseType_ == nullptr && this->host_ == nullptr && this->popId_ == nullptr
        && this->popMode_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr && this->result_ == nullptr && this->status_ == nullptr
        && this->udpExtraConfigs_ == nullptr && this->userGroup_ == nullptr && this->username_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DiagnosisTask& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


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


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const DiagnosisTask::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DiagnosisTask::Result) };
      inline DiagnosisTask::Result getResult() { DARABONBA_PTR_GET(result_, DiagnosisTask::Result) };
      inline DiagnosisTask& setResult(const DiagnosisTask::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline DiagnosisTask& setResult(DiagnosisTask::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


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
      shared_ptr<string> createTime_ {};
      shared_ptr<string> devTag_ {};
      shared_ptr<string> diagnoseId_ {};
      shared_ptr<string> diagnoseType_ {};
      shared_ptr<string> host_ {};
      shared_ptr<string> popId_ {};
      shared_ptr<string> popMode_ {};
      shared_ptr<string> port_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<DiagnosisTask::Result> result_ {};
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
    inline const GetPADiagnosisTaskResponseBody::DiagnosisTask & getDiagnosisTask() const { DARABONBA_PTR_GET_CONST(diagnosisTask_, GetPADiagnosisTaskResponseBody::DiagnosisTask) };
    inline GetPADiagnosisTaskResponseBody::DiagnosisTask getDiagnosisTask() { DARABONBA_PTR_GET(diagnosisTask_, GetPADiagnosisTaskResponseBody::DiagnosisTask) };
    inline GetPADiagnosisTaskResponseBody& setDiagnosisTask(const GetPADiagnosisTaskResponseBody::DiagnosisTask & diagnosisTask) { DARABONBA_PTR_SET_VALUE(diagnosisTask_, diagnosisTask) };
    inline GetPADiagnosisTaskResponseBody& setDiagnosisTask(GetPADiagnosisTaskResponseBody::DiagnosisTask && diagnosisTask) { DARABONBA_PTR_SET_RVALUE(diagnosisTask_, diagnosisTask) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPADiagnosisTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetPADiagnosisTaskResponseBody::DiagnosisTask> diagnosisTask_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
