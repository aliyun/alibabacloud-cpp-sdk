// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
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
  class ListUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUsersResponseBody() = default ;
    ListUsersResponseBody(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody(ListUsersResponseBody &&) = default ;
    ListUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBody() = default ;
    ListUsersResponseBody& operator=(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody& operator=(ListUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(DeviceExt, deviceExt_);
          DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
          DARABONBA_PTR_TO_JSON(DeviceState, deviceState_);
          DARABONBA_PTR_TO_JSON(DisplayId, displayId_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(Extension, extension_);
          DARABONBA_PTR_TO_JSON(LoginName, loginName_);
          DARABONBA_PTR_TO_JSON(Mobile, mobile_);
          DARABONBA_PTR_TO_JSON(PersonalOutboundNumberList, personalOutboundNumberList_);
          DARABONBA_PTR_TO_JSON(Primary, primary_);
          DARABONBA_PTR_TO_JSON(PrimaryAccount, primaryAccount_);
          DARABONBA_PTR_TO_JSON(RamId, ramId_);
          DARABONBA_PTR_TO_JSON(RoleId, roleId_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
          DARABONBA_PTR_TO_JSON(SkillLevelList, skillLevelList_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(DeviceExt, deviceExt_);
          DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
          DARABONBA_PTR_FROM_JSON(DeviceState, deviceState_);
          DARABONBA_PTR_FROM_JSON(DisplayId, displayId_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(Extension, extension_);
          DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
          DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
          DARABONBA_PTR_FROM_JSON(PersonalOutboundNumberList, personalOutboundNumberList_);
          DARABONBA_PTR_FROM_JSON(Primary, primary_);
          DARABONBA_PTR_FROM_JSON(PrimaryAccount, primaryAccount_);
          DARABONBA_PTR_FROM_JSON(RamId, ramId_);
          DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
          DARABONBA_PTR_FROM_JSON(SkillLevelList, skillLevelList_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SkillLevelList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SkillLevelList& obj) { 
            DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
            DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
            DARABONBA_PTR_TO_JSON(SkillLevel, skillLevel_);
          };
          friend void from_json(const Darabonba::Json& j, SkillLevelList& obj) { 
            DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
            DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
            DARABONBA_PTR_FROM_JSON(SkillLevel, skillLevel_);
          };
          SkillLevelList() = default ;
          SkillLevelList(const SkillLevelList &) = default ;
          SkillLevelList(SkillLevelList &&) = default ;
          SkillLevelList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SkillLevelList() = default ;
          SkillLevelList& operator=(const SkillLevelList &) = default ;
          SkillLevelList& operator=(SkillLevelList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->skillGroupId_ == nullptr
        && this->skillGroupName_ == nullptr && this->skillLevel_ == nullptr; };
          // skillGroupId Field Functions 
          bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
          void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
          inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
          inline SkillLevelList& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


          // skillGroupName Field Functions 
          bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
          void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
          inline string getSkillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
          inline SkillLevelList& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


          // skillLevel Field Functions 
          bool hasSkillLevel() const { return this->skillLevel_ != nullptr;};
          void deleteSkillLevel() { this->skillLevel_ = nullptr;};
          inline int32_t getSkillLevel() const { DARABONBA_PTR_GET_DEFAULT(skillLevel_, 0) };
          inline SkillLevelList& setSkillLevel(int32_t skillLevel) { DARABONBA_PTR_SET_VALUE(skillLevel_, skillLevel) };


        protected:
          shared_ptr<string> skillGroupId_ {};
          shared_ptr<string> skillGroupName_ {};
          shared_ptr<int32_t> skillLevel_ {};
        };

        class PersonalOutboundNumberList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PersonalOutboundNumberList& obj) { 
            DARABONBA_PTR_TO_JSON(Active, active_);
            DARABONBA_PTR_TO_JSON(City, city_);
            DARABONBA_PTR_TO_JSON(Number, number_);
            DARABONBA_PTR_TO_JSON(Province, province_);
            DARABONBA_PTR_TO_JSON(Usage, usage_);
          };
          friend void from_json(const Darabonba::Json& j, PersonalOutboundNumberList& obj) { 
            DARABONBA_PTR_FROM_JSON(Active, active_);
            DARABONBA_PTR_FROM_JSON(City, city_);
            DARABONBA_PTR_FROM_JSON(Number, number_);
            DARABONBA_PTR_FROM_JSON(Province, province_);
            DARABONBA_PTR_FROM_JSON(Usage, usage_);
          };
          PersonalOutboundNumberList() = default ;
          PersonalOutboundNumberList(const PersonalOutboundNumberList &) = default ;
          PersonalOutboundNumberList(PersonalOutboundNumberList &&) = default ;
          PersonalOutboundNumberList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PersonalOutboundNumberList() = default ;
          PersonalOutboundNumberList& operator=(const PersonalOutboundNumberList &) = default ;
          PersonalOutboundNumberList& operator=(PersonalOutboundNumberList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->active_ == nullptr
        && this->city_ == nullptr && this->number_ == nullptr && this->province_ == nullptr && this->usage_ == nullptr; };
          // active Field Functions 
          bool hasActive() const { return this->active_ != nullptr;};
          void deleteActive() { this->active_ = nullptr;};
          inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
          inline PersonalOutboundNumberList& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


          // city Field Functions 
          bool hasCity() const { return this->city_ != nullptr;};
          void deleteCity() { this->city_ = nullptr;};
          inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
          inline PersonalOutboundNumberList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


          // number Field Functions 
          bool hasNumber() const { return this->number_ != nullptr;};
          void deleteNumber() { this->number_ = nullptr;};
          inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
          inline PersonalOutboundNumberList& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


          // province Field Functions 
          bool hasProvince() const { return this->province_ != nullptr;};
          void deleteProvince() { this->province_ = nullptr;};
          inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
          inline PersonalOutboundNumberList& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


          // usage Field Functions 
          bool hasUsage() const { return this->usage_ != nullptr;};
          void deleteUsage() { this->usage_ = nullptr;};
          inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
          inline PersonalOutboundNumberList& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


        protected:
          shared_ptr<bool> active_ {};
          shared_ptr<string> city_ {};
          shared_ptr<string> number_ {};
          shared_ptr<string> province_ {};
          shared_ptr<string> usage_ {};
        };

        virtual bool empty() const override { return this->deviceExt_ == nullptr
        && this->deviceId_ == nullptr && this->deviceState_ == nullptr && this->displayId_ == nullptr && this->displayName_ == nullptr && this->email_ == nullptr
        && this->extension_ == nullptr && this->loginName_ == nullptr && this->mobile_ == nullptr && this->personalOutboundNumberList_ == nullptr && this->primary_ == nullptr
        && this->primaryAccount_ == nullptr && this->ramId_ == nullptr && this->roleId_ == nullptr && this->roleName_ == nullptr && this->skillLevelList_ == nullptr
        && this->userId_ == nullptr && this->workMode_ == nullptr; };
        // deviceExt Field Functions 
        bool hasDeviceExt() const { return this->deviceExt_ != nullptr;};
        void deleteDeviceExt() { this->deviceExt_ = nullptr;};
        inline string getDeviceExt() const { DARABONBA_PTR_GET_DEFAULT(deviceExt_, "") };
        inline List& setDeviceExt(string deviceExt) { DARABONBA_PTR_SET_VALUE(deviceExt_, deviceExt) };


        // deviceId Field Functions 
        bool hasDeviceId() const { return this->deviceId_ != nullptr;};
        void deleteDeviceId() { this->deviceId_ = nullptr;};
        inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
        inline List& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


        // deviceState Field Functions 
        bool hasDeviceState() const { return this->deviceState_ != nullptr;};
        void deleteDeviceState() { this->deviceState_ = nullptr;};
        inline string getDeviceState() const { DARABONBA_PTR_GET_DEFAULT(deviceState_, "") };
        inline List& setDeviceState(string deviceState) { DARABONBA_PTR_SET_VALUE(deviceState_, deviceState) };


        // displayId Field Functions 
        bool hasDisplayId() const { return this->displayId_ != nullptr;};
        void deleteDisplayId() { this->displayId_ = nullptr;};
        inline string getDisplayId() const { DARABONBA_PTR_GET_DEFAULT(displayId_, "") };
        inline List& setDisplayId(string displayId) { DARABONBA_PTR_SET_VALUE(displayId_, displayId) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline List& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline List& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // extension Field Functions 
        bool hasExtension() const { return this->extension_ != nullptr;};
        void deleteExtension() { this->extension_ = nullptr;};
        inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
        inline List& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


        // loginName Field Functions 
        bool hasLoginName() const { return this->loginName_ != nullptr;};
        void deleteLoginName() { this->loginName_ = nullptr;};
        inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
        inline List& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


        // mobile Field Functions 
        bool hasMobile() const { return this->mobile_ != nullptr;};
        void deleteMobile() { this->mobile_ = nullptr;};
        inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
        inline List& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


        // personalOutboundNumberList Field Functions 
        bool hasPersonalOutboundNumberList() const { return this->personalOutboundNumberList_ != nullptr;};
        void deletePersonalOutboundNumberList() { this->personalOutboundNumberList_ = nullptr;};
        inline const vector<List::PersonalOutboundNumberList> & getPersonalOutboundNumberList() const { DARABONBA_PTR_GET_CONST(personalOutboundNumberList_, vector<List::PersonalOutboundNumberList>) };
        inline vector<List::PersonalOutboundNumberList> getPersonalOutboundNumberList() { DARABONBA_PTR_GET(personalOutboundNumberList_, vector<List::PersonalOutboundNumberList>) };
        inline List& setPersonalOutboundNumberList(const vector<List::PersonalOutboundNumberList> & personalOutboundNumberList) { DARABONBA_PTR_SET_VALUE(personalOutboundNumberList_, personalOutboundNumberList) };
        inline List& setPersonalOutboundNumberList(vector<List::PersonalOutboundNumberList> && personalOutboundNumberList) { DARABONBA_PTR_SET_RVALUE(personalOutboundNumberList_, personalOutboundNumberList) };


        // primary Field Functions 
        bool hasPrimary() const { return this->primary_ != nullptr;};
        void deletePrimary() { this->primary_ = nullptr;};
        inline bool getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
        inline List& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


        // primaryAccount Field Functions 
        bool hasPrimaryAccount() const { return this->primaryAccount_ != nullptr;};
        void deletePrimaryAccount() { this->primaryAccount_ = nullptr;};
        inline bool getPrimaryAccount() const { DARABONBA_PTR_GET_DEFAULT(primaryAccount_, false) };
        inline List& setPrimaryAccount(bool primaryAccount) { DARABONBA_PTR_SET_VALUE(primaryAccount_, primaryAccount) };


        // ramId Field Functions 
        bool hasRamId() const { return this->ramId_ != nullptr;};
        void deleteRamId() { this->ramId_ = nullptr;};
        inline int64_t getRamId() const { DARABONBA_PTR_GET_DEFAULT(ramId_, 0L) };
        inline List& setRamId(int64_t ramId) { DARABONBA_PTR_SET_VALUE(ramId_, ramId) };


        // roleId Field Functions 
        bool hasRoleId() const { return this->roleId_ != nullptr;};
        void deleteRoleId() { this->roleId_ = nullptr;};
        inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
        inline List& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline List& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


        // skillLevelList Field Functions 
        bool hasSkillLevelList() const { return this->skillLevelList_ != nullptr;};
        void deleteSkillLevelList() { this->skillLevelList_ = nullptr;};
        inline const vector<List::SkillLevelList> & getSkillLevelList() const { DARABONBA_PTR_GET_CONST(skillLevelList_, vector<List::SkillLevelList>) };
        inline vector<List::SkillLevelList> getSkillLevelList() { DARABONBA_PTR_GET(skillLevelList_, vector<List::SkillLevelList>) };
        inline List& setSkillLevelList(const vector<List::SkillLevelList> & skillLevelList) { DARABONBA_PTR_SET_VALUE(skillLevelList_, skillLevelList) };
        inline List& setSkillLevelList(vector<List::SkillLevelList> && skillLevelList) { DARABONBA_PTR_SET_RVALUE(skillLevelList_, skillLevelList) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline List& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // workMode Field Functions 
        bool hasWorkMode() const { return this->workMode_ != nullptr;};
        void deleteWorkMode() { this->workMode_ = nullptr;};
        inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
        inline List& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


      protected:
        shared_ptr<string> deviceExt_ {};
        shared_ptr<string> deviceId_ {};
        shared_ptr<string> deviceState_ {};
        shared_ptr<string> displayId_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> email_ {};
        shared_ptr<string> extension_ {};
        shared_ptr<string> loginName_ {};
        shared_ptr<string> mobile_ {};
        shared_ptr<vector<List::PersonalOutboundNumberList>> personalOutboundNumberList_ {};
        shared_ptr<bool> primary_ {};
        shared_ptr<bool> primaryAccount_ {};
        shared_ptr<int64_t> ramId_ {};
        shared_ptr<string> roleId_ {};
        shared_ptr<string> roleName_ {};
        shared_ptr<vector<List::SkillLevelList>> skillLevelList_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> workMode_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListUsersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListUsersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListUsersResponseBody::Data) };
    inline ListUsersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListUsersResponseBody::Data) };
    inline ListUsersResponseBody& setData(const ListUsersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListUsersResponseBody& setData(ListUsersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListUsersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListUsersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListUsersResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListUsersResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListUsersResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
