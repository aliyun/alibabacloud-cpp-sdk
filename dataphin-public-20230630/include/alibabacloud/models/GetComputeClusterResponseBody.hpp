// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTECLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTECLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetComputeClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterConfig, clusterConfig_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterConfig, clusterConfig_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetComputeClusterResponseBody() = default ;
    GetComputeClusterResponseBody(const GetComputeClusterResponseBody &) = default ;
    GetComputeClusterResponseBody(GetComputeClusterResponseBody &&) = default ;
    GetComputeClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeClusterResponseBody() = default ;
    GetComputeClusterResponseBody& operator=(const GetComputeClusterResponseBody &) = default ;
    GetComputeClusterResponseBody& operator=(GetComputeClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterSafetyControl, clusterSafetyControl_);
        DARABONBA_PTR_TO_JSON(Des, des_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(TypeVersion, typeVersion_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterSafetyControl, clusterSafetyControl_);
        DARABONBA_PTR_FROM_JSON(Des, des_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(TypeVersion, typeVersion_);
      };
      ClusterConfig() = default ;
      ClusterConfig(const ClusterConfig &) = default ;
      ClusterConfig(ClusterConfig &&) = default ;
      ClusterConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterConfig() = default ;
      ClusterConfig& operator=(const ClusterConfig &) = default ;
      ClusterConfig& operator=(ClusterConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ClusterSafetyControl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClusterSafetyControl& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterSafetyAuthType, clusterSafetyAuthType_);
          DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
          DARABONBA_PTR_TO_JSON(UserGroupNames, userGroupNames_);
          DARABONBA_PTR_TO_JSON(UserIds, userIds_);
          DARABONBA_PTR_TO_JSON(UserNames, userNames_);
        };
        friend void from_json(const Darabonba::Json& j, ClusterSafetyControl& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterSafetyAuthType, clusterSafetyAuthType_);
          DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
          DARABONBA_PTR_FROM_JSON(UserGroupNames, userGroupNames_);
          DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
          DARABONBA_PTR_FROM_JSON(UserNames, userNames_);
        };
        ClusterSafetyControl() = default ;
        ClusterSafetyControl(const ClusterSafetyControl &) = default ;
        ClusterSafetyControl(ClusterSafetyControl &&) = default ;
        ClusterSafetyControl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClusterSafetyControl() = default ;
        ClusterSafetyControl& operator=(const ClusterSafetyControl &) = default ;
        ClusterSafetyControl& operator=(ClusterSafetyControl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterSafetyAuthType_ == nullptr
        && this->userGroupIds_ == nullptr && this->userGroupNames_ == nullptr && this->userIds_ == nullptr && this->userNames_ == nullptr; };
        // clusterSafetyAuthType Field Functions 
        bool hasClusterSafetyAuthType() const { return this->clusterSafetyAuthType_ != nullptr;};
        void deleteClusterSafetyAuthType() { this->clusterSafetyAuthType_ = nullptr;};
        inline string getClusterSafetyAuthType() const { DARABONBA_PTR_GET_DEFAULT(clusterSafetyAuthType_, "") };
        inline ClusterSafetyControl& setClusterSafetyAuthType(string clusterSafetyAuthType) { DARABONBA_PTR_SET_VALUE(clusterSafetyAuthType_, clusterSafetyAuthType) };


        // userGroupIds Field Functions 
        bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
        void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
        inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
        inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
        inline ClusterSafetyControl& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
        inline ClusterSafetyControl& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


        // userGroupNames Field Functions 
        bool hasUserGroupNames() const { return this->userGroupNames_ != nullptr;};
        void deleteUserGroupNames() { this->userGroupNames_ = nullptr;};
        inline const vector<string> & getUserGroupNames() const { DARABONBA_PTR_GET_CONST(userGroupNames_, vector<string>) };
        inline vector<string> getUserGroupNames() { DARABONBA_PTR_GET(userGroupNames_, vector<string>) };
        inline ClusterSafetyControl& setUserGroupNames(const vector<string> & userGroupNames) { DARABONBA_PTR_SET_VALUE(userGroupNames_, userGroupNames) };
        inline ClusterSafetyControl& setUserGroupNames(vector<string> && userGroupNames) { DARABONBA_PTR_SET_RVALUE(userGroupNames_, userGroupNames) };


        // userIds Field Functions 
        bool hasUserIds() const { return this->userIds_ != nullptr;};
        void deleteUserIds() { this->userIds_ = nullptr;};
        inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
        inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
        inline ClusterSafetyControl& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
        inline ClusterSafetyControl& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


        // userNames Field Functions 
        bool hasUserNames() const { return this->userNames_ != nullptr;};
        void deleteUserNames() { this->userNames_ = nullptr;};
        inline const vector<string> & getUserNames() const { DARABONBA_PTR_GET_CONST(userNames_, vector<string>) };
        inline vector<string> getUserNames() { DARABONBA_PTR_GET(userNames_, vector<string>) };
        inline ClusterSafetyControl& setUserNames(const vector<string> & userNames) { DARABONBA_PTR_SET_VALUE(userNames_, userNames) };
        inline ClusterSafetyControl& setUserNames(vector<string> && userNames) { DARABONBA_PTR_SET_RVALUE(userNames_, userNames) };


      protected:
        // The control mode.
        shared_ptr<string> clusterSafetyAuthType_ {};
        // The list of whitelisted user group IDs.
        shared_ptr<vector<string>> userGroupIds_ {};
        // The list of whitelisted user group names.
        shared_ptr<vector<string>> userGroupNames_ {};
        // The list of whitelisted user IDs.
        shared_ptr<vector<string>> userIds_ {};
        // The list of whitelisted usernames.
        shared_ptr<vector<string>> userNames_ {};
      };

      virtual bool empty() const override { return this->clusterSafetyControl_ == nullptr
        && this->des_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->owner_ == nullptr && this->typeVersion_ == nullptr; };
      // clusterSafetyControl Field Functions 
      bool hasClusterSafetyControl() const { return this->clusterSafetyControl_ != nullptr;};
      void deleteClusterSafetyControl() { this->clusterSafetyControl_ = nullptr;};
      inline const ClusterConfig::ClusterSafetyControl & getClusterSafetyControl() const { DARABONBA_PTR_GET_CONST(clusterSafetyControl_, ClusterConfig::ClusterSafetyControl) };
      inline ClusterConfig::ClusterSafetyControl getClusterSafetyControl() { DARABONBA_PTR_GET(clusterSafetyControl_, ClusterConfig::ClusterSafetyControl) };
      inline ClusterConfig& setClusterSafetyControl(const ClusterConfig::ClusterSafetyControl & clusterSafetyControl) { DARABONBA_PTR_SET_VALUE(clusterSafetyControl_, clusterSafetyControl) };
      inline ClusterConfig& setClusterSafetyControl(ClusterConfig::ClusterSafetyControl && clusterSafetyControl) { DARABONBA_PTR_SET_RVALUE(clusterSafetyControl_, clusterSafetyControl) };


      // des Field Functions 
      bool hasDes() const { return this->des_ != nullptr;};
      void deleteDes() { this->des_ = nullptr;};
      inline string getDes() const { DARABONBA_PTR_GET_DEFAULT(des_, "") };
      inline ClusterConfig& setDes(string des) { DARABONBA_PTR_SET_VALUE(des_, des) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline ClusterConfig& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline ClusterConfig& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ClusterConfig& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ClusterConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline ClusterConfig& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // typeVersion Field Functions 
      bool hasTypeVersion() const { return this->typeVersion_ != nullptr;};
      void deleteTypeVersion() { this->typeVersion_ = nullptr;};
      inline string getTypeVersion() const { DARABONBA_PTR_GET_DEFAULT(typeVersion_, "") };
      inline ClusterConfig& setTypeVersion(string typeVersion) { DARABONBA_PTR_SET_VALUE(typeVersion_, typeVersion) };


    protected:
      // The cluster security control configuration.
      shared_ptr<ClusterConfig::ClusterSafetyControl> clusterSafetyControl_ {};
      // The cluster description.
      shared_ptr<string> des_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The update time.
      shared_ptr<string> gmtModified_ {};
      // The cluster ID.
      shared_ptr<int64_t> id_ {};
      // The cluster name.
      shared_ptr<string> name_ {};
      // The cluster owner.
      shared_ptr<string> owner_ {};
      // The cluster version.
      shared_ptr<string> typeVersion_ {};
    };

    virtual bool empty() const override { return this->clusterConfig_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // clusterConfig Field Functions 
    bool hasClusterConfig() const { return this->clusterConfig_ != nullptr;};
    void deleteClusterConfig() { this->clusterConfig_ = nullptr;};
    inline const GetComputeClusterResponseBody::ClusterConfig & getClusterConfig() const { DARABONBA_PTR_GET_CONST(clusterConfig_, GetComputeClusterResponseBody::ClusterConfig) };
    inline GetComputeClusterResponseBody::ClusterConfig getClusterConfig() { DARABONBA_PTR_GET(clusterConfig_, GetComputeClusterResponseBody::ClusterConfig) };
    inline GetComputeClusterResponseBody& setClusterConfig(const GetComputeClusterResponseBody::ClusterConfig & clusterConfig) { DARABONBA_PTR_SET_VALUE(clusterConfig_, clusterConfig) };
    inline GetComputeClusterResponseBody& setClusterConfig(GetComputeClusterResponseBody::ClusterConfig && clusterConfig) { DARABONBA_PTR_SET_RVALUE(clusterConfig_, clusterConfig) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetComputeClusterResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetComputeClusterResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetComputeClusterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetComputeClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetComputeClusterResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The cluster details.
    shared_ptr<GetComputeClusterResponseBody::ClusterConfig> clusterConfig_ {};
    // The backend response code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The details of the backend exception.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
