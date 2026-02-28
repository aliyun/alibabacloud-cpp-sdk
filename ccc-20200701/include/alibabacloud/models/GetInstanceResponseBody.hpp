// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceResponseBody() = default ;
    GetInstanceResponseBody(const GetInstanceResponseBody &) = default ;
    GetInstanceResponseBody(GetInstanceResponseBody &&) = default ;
    GetInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBody() = default ;
    GetInstanceResponseBody& operator=(const GetInstanceResponseBody &) = default ;
    GetInstanceResponseBody& operator=(GetInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AdminList, adminList_);
        DARABONBA_PTR_TO_JSON(AgentType, agentType_);
        DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_TO_JSON(ChatbotBusinessUnit, chatbotBusinessUnit_);
        DARABONBA_PTR_TO_JSON(ConsoleUrl, consoleUrl_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NumberList, numberList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AdminList, adminList_);
        DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
        DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_FROM_JSON(ChatbotBusinessUnit, chatbotBusinessUnit_);
        DARABONBA_PTR_FROM_JSON(ConsoleUrl, consoleUrl_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NumberList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NumberList& obj) { 
          DARABONBA_PTR_TO_JSON(Active, active_);
          DARABONBA_PTR_TO_JSON(City, city_);
          DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Number, number_);
          DARABONBA_PTR_TO_JSON(Province, province_);
          DARABONBA_PTR_TO_JSON(SkillGroups, skillGroups_);
          DARABONBA_PTR_TO_JSON(Usage, usage_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, NumberList& obj) { 
          DARABONBA_PTR_FROM_JSON(Active, active_);
          DARABONBA_PTR_FROM_JSON(City, city_);
          DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Number, number_);
          DARABONBA_PTR_FROM_JSON(Province, province_);
          DARABONBA_PTR_FROM_JSON(SkillGroups, skillGroups_);
          DARABONBA_PTR_FROM_JSON(Usage, usage_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        NumberList() = default ;
        NumberList(const NumberList &) = default ;
        NumberList(NumberList &&) = default ;
        NumberList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NumberList() = default ;
        NumberList& operator=(const NumberList &) = default ;
        NumberList& operator=(NumberList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SkillGroups : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SkillGroups& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(PhoneNumberCount, phoneNumberCount_);
            DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
            DARABONBA_PTR_TO_JSON(UserCount, userCount_);
          };
          friend void from_json(const Darabonba::Json& j, SkillGroups& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(PhoneNumberCount, phoneNumberCount_);
            DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
            DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
          };
          SkillGroups() = default ;
          SkillGroups(const SkillGroups &) = default ;
          SkillGroups(SkillGroups &&) = default ;
          SkillGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SkillGroups() = default ;
          SkillGroups& operator=(const SkillGroups &) = default ;
          SkillGroups& operator=(SkillGroups &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->phoneNumberCount_ == nullptr && this->skillGroupId_ == nullptr
        && this->userCount_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline SkillGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline SkillGroups& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline SkillGroups& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SkillGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // phoneNumberCount Field Functions 
          bool hasPhoneNumberCount() const { return this->phoneNumberCount_ != nullptr;};
          void deletePhoneNumberCount() { this->phoneNumberCount_ = nullptr;};
          inline int32_t getPhoneNumberCount() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberCount_, 0) };
          inline SkillGroups& setPhoneNumberCount(int32_t phoneNumberCount) { DARABONBA_PTR_SET_VALUE(phoneNumberCount_, phoneNumberCount) };


          // skillGroupId Field Functions 
          bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
          void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
          inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
          inline SkillGroups& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


          // userCount Field Functions 
          bool hasUserCount() const { return this->userCount_ != nullptr;};
          void deleteUserCount() { this->userCount_ = nullptr;};
          inline int32_t getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
          inline SkillGroups& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<string> displayName_ {};
          shared_ptr<string> instanceId_ {};
          shared_ptr<string> name_ {};
          shared_ptr<int32_t> phoneNumberCount_ {};
          shared_ptr<string> skillGroupId_ {};
          shared_ptr<int32_t> userCount_ {};
        };

        virtual bool empty() const override { return this->active_ == nullptr
        && this->city_ == nullptr && this->contactFlowId_ == nullptr && this->instanceId_ == nullptr && this->number_ == nullptr && this->province_ == nullptr
        && this->skillGroups_ == nullptr && this->usage_ == nullptr && this->userId_ == nullptr; };
        // active Field Functions 
        bool hasActive() const { return this->active_ != nullptr;};
        void deleteActive() { this->active_ = nullptr;};
        inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
        inline NumberList& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


        // city Field Functions 
        bool hasCity() const { return this->city_ != nullptr;};
        void deleteCity() { this->city_ = nullptr;};
        inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
        inline NumberList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


        // contactFlowId Field Functions 
        bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
        void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
        inline string getContactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
        inline NumberList& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline NumberList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
        inline NumberList& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        // province Field Functions 
        bool hasProvince() const { return this->province_ != nullptr;};
        void deleteProvince() { this->province_ = nullptr;};
        inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
        inline NumberList& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


        // skillGroups Field Functions 
        bool hasSkillGroups() const { return this->skillGroups_ != nullptr;};
        void deleteSkillGroups() { this->skillGroups_ = nullptr;};
        inline const vector<NumberList::SkillGroups> & getSkillGroups() const { DARABONBA_PTR_GET_CONST(skillGroups_, vector<NumberList::SkillGroups>) };
        inline vector<NumberList::SkillGroups> getSkillGroups() { DARABONBA_PTR_GET(skillGroups_, vector<NumberList::SkillGroups>) };
        inline NumberList& setSkillGroups(const vector<NumberList::SkillGroups> & skillGroups) { DARABONBA_PTR_SET_VALUE(skillGroups_, skillGroups) };
        inline NumberList& setSkillGroups(vector<NumberList::SkillGroups> && skillGroups) { DARABONBA_PTR_SET_RVALUE(skillGroups_, skillGroups) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
        inline NumberList& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline NumberList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<bool> active_ {};
        shared_ptr<string> city_ {};
        shared_ptr<string> contactFlowId_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> number_ {};
        shared_ptr<string> province_ {};
        shared_ptr<vector<NumberList::SkillGroups>> skillGroups_ {};
        shared_ptr<string> usage_ {};
        shared_ptr<string> userId_ {};
      };

      class ChatbotBusinessUnit : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChatbotBusinessUnit& obj) { 
          DARABONBA_PTR_TO_JSON(UnitId, unitId_);
          DARABONBA_PTR_TO_JSON(UnitKey, unitKey_);
        };
        friend void from_json(const Darabonba::Json& j, ChatbotBusinessUnit& obj) { 
          DARABONBA_PTR_FROM_JSON(UnitId, unitId_);
          DARABONBA_PTR_FROM_JSON(UnitKey, unitKey_);
        };
        ChatbotBusinessUnit() = default ;
        ChatbotBusinessUnit(const ChatbotBusinessUnit &) = default ;
        ChatbotBusinessUnit(ChatbotBusinessUnit &&) = default ;
        ChatbotBusinessUnit(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChatbotBusinessUnit() = default ;
        ChatbotBusinessUnit& operator=(const ChatbotBusinessUnit &) = default ;
        ChatbotBusinessUnit& operator=(ChatbotBusinessUnit &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->unitId_ == nullptr
        && this->unitKey_ == nullptr; };
        // unitId Field Functions 
        bool hasUnitId() const { return this->unitId_ != nullptr;};
        void deleteUnitId() { this->unitId_ = nullptr;};
        inline int64_t getUnitId() const { DARABONBA_PTR_GET_DEFAULT(unitId_, 0L) };
        inline ChatbotBusinessUnit& setUnitId(int64_t unitId) { DARABONBA_PTR_SET_VALUE(unitId_, unitId) };


        // unitKey Field Functions 
        bool hasUnitKey() const { return this->unitKey_ != nullptr;};
        void deleteUnitKey() { this->unitKey_ = nullptr;};
        inline string getUnitKey() const { DARABONBA_PTR_GET_DEFAULT(unitKey_, "") };
        inline ChatbotBusinessUnit& setUnitKey(string unitKey) { DARABONBA_PTR_SET_VALUE(unitKey_, unitKey) };


      protected:
        shared_ptr<int64_t> unitId_ {};
        shared_ptr<string> unitKey_ {};
      };

      class AdminList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdminList& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(Extension, extension_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(LoginName, loginName_);
          DARABONBA_PTR_TO_JSON(Mobile, mobile_);
          DARABONBA_PTR_TO_JSON(RoleId, roleId_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
        };
        friend void from_json(const Darabonba::Json& j, AdminList& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(Extension, extension_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
          DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
          DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
        };
        AdminList() = default ;
        AdminList(const AdminList &) = default ;
        AdminList(AdminList &&) = default ;
        AdminList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdminList() = default ;
        AdminList& operator=(const AdminList &) = default ;
        AdminList& operator=(AdminList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->email_ == nullptr && this->extension_ == nullptr && this->instanceId_ == nullptr && this->loginName_ == nullptr && this->mobile_ == nullptr
        && this->roleId_ == nullptr && this->roleName_ == nullptr && this->userId_ == nullptr && this->workMode_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline AdminList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline AdminList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // extension Field Functions 
        bool hasExtension() const { return this->extension_ != nullptr;};
        void deleteExtension() { this->extension_ = nullptr;};
        inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
        inline AdminList& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline AdminList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // loginName Field Functions 
        bool hasLoginName() const { return this->loginName_ != nullptr;};
        void deleteLoginName() { this->loginName_ = nullptr;};
        inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
        inline AdminList& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


        // mobile Field Functions 
        bool hasMobile() const { return this->mobile_ != nullptr;};
        void deleteMobile() { this->mobile_ = nullptr;};
        inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
        inline AdminList& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


        // roleId Field Functions 
        bool hasRoleId() const { return this->roleId_ != nullptr;};
        void deleteRoleId() { this->roleId_ = nullptr;};
        inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
        inline AdminList& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline AdminList& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline AdminList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // workMode Field Functions 
        bool hasWorkMode() const { return this->workMode_ != nullptr;};
        void deleteWorkMode() { this->workMode_ = nullptr;};
        inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
        inline AdminList& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


      protected:
        shared_ptr<string> displayName_ {};
        shared_ptr<string> email_ {};
        shared_ptr<string> extension_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> loginName_ {};
        shared_ptr<string> mobile_ {};
        shared_ptr<string> roleId_ {};
        shared_ptr<string> roleName_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> workMode_ {};
      };

      virtual bool empty() const override { return this->adminList_ == nullptr
        && this->agentType_ == nullptr && this->aliyunUid_ == nullptr && this->chatbotBusinessUnit_ == nullptr && this->consoleUrl_ == nullptr && this->description_ == nullptr
        && this->domainName_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->numberList_ == nullptr && this->status_ == nullptr; };
      // adminList Field Functions 
      bool hasAdminList() const { return this->adminList_ != nullptr;};
      void deleteAdminList() { this->adminList_ = nullptr;};
      inline const vector<Data::AdminList> & getAdminList() const { DARABONBA_PTR_GET_CONST(adminList_, vector<Data::AdminList>) };
      inline vector<Data::AdminList> getAdminList() { DARABONBA_PTR_GET(adminList_, vector<Data::AdminList>) };
      inline Data& setAdminList(const vector<Data::AdminList> & adminList) { DARABONBA_PTR_SET_VALUE(adminList_, adminList) };
      inline Data& setAdminList(vector<Data::AdminList> && adminList) { DARABONBA_PTR_SET_RVALUE(adminList_, adminList) };


      // agentType Field Functions 
      bool hasAgentType() const { return this->agentType_ != nullptr;};
      void deleteAgentType() { this->agentType_ = nullptr;};
      inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
      inline Data& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


      // aliyunUid Field Functions 
      bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
      void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
      inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
      inline Data& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


      // chatbotBusinessUnit Field Functions 
      bool hasChatbotBusinessUnit() const { return this->chatbotBusinessUnit_ != nullptr;};
      void deleteChatbotBusinessUnit() { this->chatbotBusinessUnit_ = nullptr;};
      inline const Data::ChatbotBusinessUnit & getChatbotBusinessUnit() const { DARABONBA_PTR_GET_CONST(chatbotBusinessUnit_, Data::ChatbotBusinessUnit) };
      inline Data::ChatbotBusinessUnit getChatbotBusinessUnit() { DARABONBA_PTR_GET(chatbotBusinessUnit_, Data::ChatbotBusinessUnit) };
      inline Data& setChatbotBusinessUnit(const Data::ChatbotBusinessUnit & chatbotBusinessUnit) { DARABONBA_PTR_SET_VALUE(chatbotBusinessUnit_, chatbotBusinessUnit) };
      inline Data& setChatbotBusinessUnit(Data::ChatbotBusinessUnit && chatbotBusinessUnit) { DARABONBA_PTR_SET_RVALUE(chatbotBusinessUnit_, chatbotBusinessUnit) };


      // consoleUrl Field Functions 
      bool hasConsoleUrl() const { return this->consoleUrl_ != nullptr;};
      void deleteConsoleUrl() { this->consoleUrl_ = nullptr;};
      inline string getConsoleUrl() const { DARABONBA_PTR_GET_DEFAULT(consoleUrl_, "") };
      inline Data& setConsoleUrl(string consoleUrl) { DARABONBA_PTR_SET_VALUE(consoleUrl_, consoleUrl) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Data& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // numberList Field Functions 
      bool hasNumberList() const { return this->numberList_ != nullptr;};
      void deleteNumberList() { this->numberList_ = nullptr;};
      inline const vector<Data::NumberList> & getNumberList() const { DARABONBA_PTR_GET_CONST(numberList_, vector<Data::NumberList>) };
      inline vector<Data::NumberList> getNumberList() { DARABONBA_PTR_GET(numberList_, vector<Data::NumberList>) };
      inline Data& setNumberList(const vector<Data::NumberList> & numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };
      inline Data& setNumberList(vector<Data::NumberList> && numberList) { DARABONBA_PTR_SET_RVALUE(numberList_, numberList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<vector<Data::AdminList>> adminList_ {};
      shared_ptr<string> agentType_ {};
      shared_ptr<string> aliyunUid_ {};
      shared_ptr<Data::ChatbotBusinessUnit> chatbotBusinessUnit_ {};
      shared_ptr<string> consoleUrl_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<Data::NumberList>> numberList_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInstanceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInstanceResponseBody::Data) };
    inline GetInstanceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInstanceResponseBody::Data) };
    inline GetInstanceResponseBody& setData(const GetInstanceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInstanceResponseBody& setData(GetInstanceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetInstanceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetInstanceResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
