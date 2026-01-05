// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYALERTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYALERTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityAlertRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityAlertRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityAlertRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    UpdateDataQualityAlertRuleRequest() = default ;
    UpdateDataQualityAlertRuleRequest(const UpdateDataQualityAlertRuleRequest &) = default ;
    UpdateDataQualityAlertRuleRequest(UpdateDataQualityAlertRuleRequest &&) = default ;
    UpdateDataQualityAlertRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityAlertRuleRequest() = default ;
    UpdateDataQualityAlertRuleRequest& operator=(const UpdateDataQualityAlertRuleRequest &) = default ;
    UpdateDataQualityAlertRuleRequest& operator=(UpdateDataQualityAlertRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Target : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Target& obj) { 
        DARABONBA_PTR_TO_JSON(Ids, ids_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Target& obj) { 
        DARABONBA_PTR_FROM_JSON(Ids, ids_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Target() = default ;
      Target(const Target &) = default ;
      Target(Target &&) = default ;
      Target(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Target() = default ;
      Target& operator=(const Target &) = default ;
      Target& operator=(Target &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ids_ == nullptr
        && this->type_ == nullptr; };
      // ids Field Functions 
      bool hasIds() const { return this->ids_ != nullptr;};
      void deleteIds() { this->ids_ = nullptr;};
      inline const vector<int64_t> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
      inline vector<int64_t> getIds() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
      inline Target& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
      inline Target& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Target& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The list of monitored target IDs. Currently, only one ID can be set.
      shared_ptr<vector<int64_t>> ids_ {};
      // The type of the monitored target. Only DataQualityScan is supported.
      shared_ptr<string> type_ {};
    };

    class Notification : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Notification& obj) { 
        DARABONBA_PTR_TO_JSON(Channels, channels_);
        DARABONBA_PTR_TO_JSON(Receivers, receivers_);
      };
      friend void from_json(const Darabonba::Json& j, Notification& obj) { 
        DARABONBA_PTR_FROM_JSON(Channels, channels_);
        DARABONBA_PTR_FROM_JSON(Receivers, receivers_);
      };
      Notification() = default ;
      Notification(const Notification &) = default ;
      Notification(Notification &&) = default ;
      Notification(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Notification() = default ;
      Notification& operator=(const Notification &) = default ;
      Notification& operator=(Notification &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Receivers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Receivers& obj) { 
          DARABONBA_PTR_TO_JSON(Extension, extension_);
          DARABONBA_PTR_TO_JSON(ReceiverType, receiverType_);
          DARABONBA_PTR_TO_JSON(ReceiverValues, receiverValues_);
        };
        friend void from_json(const Darabonba::Json& j, Receivers& obj) { 
          DARABONBA_PTR_FROM_JSON(Extension, extension_);
          DARABONBA_PTR_FROM_JSON(ReceiverType, receiverType_);
          DARABONBA_PTR_FROM_JSON(ReceiverValues, receiverValues_);
        };
        Receivers() = default ;
        Receivers(const Receivers &) = default ;
        Receivers(Receivers &&) = default ;
        Receivers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Receivers() = default ;
        Receivers& operator=(const Receivers &) = default ;
        Receivers& operator=(Receivers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->extension_ == nullptr
        && this->receiverType_ == nullptr && this->receiverValues_ == nullptr; };
        // extension Field Functions 
        bool hasExtension() const { return this->extension_ != nullptr;};
        void deleteExtension() { this->extension_ = nullptr;};
        inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
        inline Receivers& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


        // receiverType Field Functions 
        bool hasReceiverType() const { return this->receiverType_ != nullptr;};
        void deleteReceiverType() { this->receiverType_ = nullptr;};
        inline string getReceiverType() const { DARABONBA_PTR_GET_DEFAULT(receiverType_, "") };
        inline Receivers& setReceiverType(string receiverType) { DARABONBA_PTR_SET_VALUE(receiverType_, receiverType) };


        // receiverValues Field Functions 
        bool hasReceiverValues() const { return this->receiverValues_ != nullptr;};
        void deleteReceiverValues() { this->receiverValues_ = nullptr;};
        inline const vector<string> & getReceiverValues() const { DARABONBA_PTR_GET_CONST(receiverValues_, vector<string>) };
        inline vector<string> getReceiverValues() { DARABONBA_PTR_GET(receiverValues_, vector<string>) };
        inline Receivers& setReceiverValues(const vector<string> & receiverValues) { DARABONBA_PTR_SET_VALUE(receiverValues_, receiverValues) };
        inline Receivers& setReceiverValues(vector<string> && receiverValues) { DARABONBA_PTR_SET_RVALUE(receiverValues_, receiverValues) };


      protected:
        // Additional configurations required for the alert recipients. When ReceiverType is DingdingUrl, you can set `{"atAll":true}` to mention all members.
        shared_ptr<string> extension_ {};
        // The type of alert recipients.
        // 
        // *   AliUid
        // *   WebhookUrl
        // *   DingdingUrl
        // *   WeixinUrl
        // *   FeishuUrl
        // *   TaskOwner
        // *   DataQualityScanOwner
        // *   ShiftSchedule
        // 
        // This parameter is required.
        shared_ptr<string> receiverType_ {};
        // The value of alert recipients.
        shared_ptr<vector<string>> receiverValues_ {};
      };

      virtual bool empty() const override { return this->channels_ == nullptr
        && this->receivers_ == nullptr; };
      // channels Field Functions 
      bool hasChannels() const { return this->channels_ != nullptr;};
      void deleteChannels() { this->channels_ = nullptr;};
      inline const vector<string> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<string>) };
      inline vector<string> getChannels() { DARABONBA_PTR_GET(channels_, vector<string>) };
      inline Notification& setChannels(const vector<string> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
      inline Notification& setChannels(vector<string> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


      // receivers Field Functions 
      bool hasReceivers() const { return this->receivers_ != nullptr;};
      void deleteReceivers() { this->receivers_ = nullptr;};
      inline const vector<Notification::Receivers> & getReceivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<Notification::Receivers>) };
      inline vector<Notification::Receivers> getReceivers() { DARABONBA_PTR_GET(receivers_, vector<Notification::Receivers>) };
      inline Notification& setReceivers(const vector<Notification::Receivers> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
      inline Notification& setReceivers(vector<Notification::Receivers> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


    protected:
      // The list of alert channels. You can set both Email and Sms at the same time. In other cases, only one channel can be set.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> channels_ {};
      // The alert recipients.
      shared_ptr<vector<Notification::Receivers>> receivers_ {};
    };

    virtual bool empty() const override { return this->condition_ == nullptr
        && this->id_ == nullptr && this->notification_ == nullptr && this->projectId_ == nullptr && this->target_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline UpdateDataQualityAlertRuleRequest& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDataQualityAlertRuleRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const UpdateDataQualityAlertRuleRequest::Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, UpdateDataQualityAlertRuleRequest::Notification) };
    inline UpdateDataQualityAlertRuleRequest::Notification getNotification() { DARABONBA_PTR_GET(notification_, UpdateDataQualityAlertRuleRequest::Notification) };
    inline UpdateDataQualityAlertRuleRequest& setNotification(const UpdateDataQualityAlertRuleRequest::Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline UpdateDataQualityAlertRuleRequest& setNotification(UpdateDataQualityAlertRuleRequest::Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDataQualityAlertRuleRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const UpdateDataQualityAlertRuleRequest::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, UpdateDataQualityAlertRuleRequest::Target) };
    inline UpdateDataQualityAlertRuleRequest::Target getTarget() { DARABONBA_PTR_GET(target_, UpdateDataQualityAlertRuleRequest::Target) };
    inline UpdateDataQualityAlertRuleRequest& setTarget(const UpdateDataQualityAlertRuleRequest::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline UpdateDataQualityAlertRuleRequest& setTarget(UpdateDataQualityAlertRuleRequest::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    // The alert condition of the data quality monitoring rule.
    shared_ptr<string> condition_ {};
    // The ID of the alert rule.
    shared_ptr<int64_t> id_ {};
    // Alert notification configurations.
    shared_ptr<UpdateDataQualityAlertRuleRequest::Notification> notification_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The monitored target of the data quality monitoring rule.
    shared_ptr<UpdateDataQualityAlertRuleRequest::Target> target_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
