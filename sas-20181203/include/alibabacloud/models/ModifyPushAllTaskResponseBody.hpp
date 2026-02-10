// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPUSHALLTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPUSHALLTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyPushAllTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPushAllTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PushTaskRsp, pushTaskRsp_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPushAllTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PushTaskRsp, pushTaskRsp_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyPushAllTaskResponseBody() = default ;
    ModifyPushAllTaskResponseBody(const ModifyPushAllTaskResponseBody &) = default ;
    ModifyPushAllTaskResponseBody(ModifyPushAllTaskResponseBody &&) = default ;
    ModifyPushAllTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPushAllTaskResponseBody() = default ;
    ModifyPushAllTaskResponseBody& operator=(const ModifyPushAllTaskResponseBody &) = default ;
    ModifyPushAllTaskResponseBody& operator=(ModifyPushAllTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PushTaskRsp : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PushTaskRsp& obj) { 
        DARABONBA_PTR_TO_JSON(PushTaskResultList, pushTaskResultList_);
      };
      friend void from_json(const Darabonba::Json& j, PushTaskRsp& obj) { 
        DARABONBA_PTR_FROM_JSON(PushTaskResultList, pushTaskResultList_);
      };
      PushTaskRsp() = default ;
      PushTaskRsp(const PushTaskRsp &) = default ;
      PushTaskRsp(PushTaskRsp &&) = default ;
      PushTaskRsp(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PushTaskRsp() = default ;
      PushTaskRsp& operator=(const PushTaskRsp &) = default ;
      PushTaskRsp& operator=(PushTaskRsp &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PushTaskResultList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PushTaskResultList& obj) { 
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Online, online_);
          DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Success, success_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, PushTaskResultList& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Online, online_);
          DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        PushTaskResultList() = default ;
        PushTaskResultList(const PushTaskResultList &) = default ;
        PushTaskResultList(PushTaskResultList &&) = default ;
        PushTaskResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PushTaskResultList() = default ;
        PushTaskResultList& operator=(const PushTaskResultList &) = default ;
        PushTaskResultList& operator=(PushTaskResultList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupId_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->ip_ == nullptr && this->message_ == nullptr && this->online_ == nullptr
        && this->osVersion_ == nullptr && this->region_ == nullptr && this->success_ == nullptr && this->uuid_ == nullptr; };
        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
        inline PushTaskResultList& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline PushTaskResultList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline PushTaskResultList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline PushTaskResultList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline PushTaskResultList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // online Field Functions 
        bool hasOnline() const { return this->online_ != nullptr;};
        void deleteOnline() { this->online_ = nullptr;};
        inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
        inline PushTaskResultList& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


        // osVersion Field Functions 
        bool hasOsVersion() const { return this->osVersion_ != nullptr;};
        void deleteOsVersion() { this->osVersion_ = nullptr;};
        inline string getOsVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
        inline PushTaskResultList& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline PushTaskResultList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline PushTaskResultList& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline PushTaskResultList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        // The ID of the server group to which the server belongs.
        shared_ptr<int64_t> groupId_ {};
        // The ID of the server.
        shared_ptr<string> instanceId_ {};
        // The name of the server.
        shared_ptr<string> instanceName_ {};
        // The IP address of the server.
        shared_ptr<string> ip_ {};
        // The message that describes the security check failure.
        shared_ptr<string> message_ {};
        // Indicates whether the Security Center agent is online. Valid values:
        // 
        // *   **true**: yes
        // *   **false**: no
        // 
        // >  If the Security Center agent of the server is offline, Security Center does not protect the server.
        shared_ptr<bool> online_ {};
        // The operating system version of the server.
        shared_ptr<string> osVersion_ {};
        // The region in which the server resides.
        shared_ptr<string> region_ {};
        // Indicates whether the security check task is successful. Valid values:
        // 
        // *   **true**: yes
        // *   **false**: no
        shared_ptr<bool> success_ {};
        // The UUID of the server.
        shared_ptr<string> uuid_ {};
      };

      virtual bool empty() const override { return this->pushTaskResultList_ == nullptr; };
      // pushTaskResultList Field Functions 
      bool hasPushTaskResultList() const { return this->pushTaskResultList_ != nullptr;};
      void deletePushTaskResultList() { this->pushTaskResultList_ = nullptr;};
      inline const vector<PushTaskRsp::PushTaskResultList> & getPushTaskResultList() const { DARABONBA_PTR_GET_CONST(pushTaskResultList_, vector<PushTaskRsp::PushTaskResultList>) };
      inline vector<PushTaskRsp::PushTaskResultList> getPushTaskResultList() { DARABONBA_PTR_GET(pushTaskResultList_, vector<PushTaskRsp::PushTaskResultList>) };
      inline PushTaskRsp& setPushTaskResultList(const vector<PushTaskRsp::PushTaskResultList> & pushTaskResultList) { DARABONBA_PTR_SET_VALUE(pushTaskResultList_, pushTaskResultList) };
      inline PushTaskRsp& setPushTaskResultList(vector<PushTaskRsp::PushTaskResultList> && pushTaskResultList) { DARABONBA_PTR_SET_RVALUE(pushTaskResultList_, pushTaskResultList) };


    protected:
      // The information about the server on which security check tasks failed.
      shared_ptr<vector<PushTaskRsp::PushTaskResultList>> pushTaskResultList_ {};
    };

    virtual bool empty() const override { return this->pushTaskRsp_ == nullptr
        && this->requestId_ == nullptr; };
    // pushTaskRsp Field Functions 
    bool hasPushTaskRsp() const { return this->pushTaskRsp_ != nullptr;};
    void deletePushTaskRsp() { this->pushTaskRsp_ = nullptr;};
    inline const ModifyPushAllTaskResponseBody::PushTaskRsp & getPushTaskRsp() const { DARABONBA_PTR_GET_CONST(pushTaskRsp_, ModifyPushAllTaskResponseBody::PushTaskRsp) };
    inline ModifyPushAllTaskResponseBody::PushTaskRsp getPushTaskRsp() { DARABONBA_PTR_GET(pushTaskRsp_, ModifyPushAllTaskResponseBody::PushTaskRsp) };
    inline ModifyPushAllTaskResponseBody& setPushTaskRsp(const ModifyPushAllTaskResponseBody::PushTaskRsp & pushTaskRsp) { DARABONBA_PTR_SET_VALUE(pushTaskRsp_, pushTaskRsp) };
    inline ModifyPushAllTaskResponseBody& setPushTaskRsp(ModifyPushAllTaskResponseBody::PushTaskRsp && pushTaskRsp) { DARABONBA_PTR_SET_RVALUE(pushTaskRsp_, pushTaskRsp) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyPushAllTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The results of security check tasks.
    shared_ptr<ModifyPushAllTaskResponseBody::PushTaskRsp> pushTaskRsp_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
