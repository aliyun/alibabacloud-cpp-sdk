// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERSAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERSAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class UpdateUserSayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserSayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserSayDefinition, userSayDefinition_);
      DARABONBA_PTR_TO_JSON(UserSayId, userSayId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserSayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserSayDefinition, userSayDefinition_);
      DARABONBA_PTR_FROM_JSON(UserSayId, userSayId_);
    };
    UpdateUserSayRequest() = default ;
    UpdateUserSayRequest(const UpdateUserSayRequest &) = default ;
    UpdateUserSayRequest(UpdateUserSayRequest &&) = default ;
    UpdateUserSayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserSayRequest() = default ;
    UpdateUserSayRequest& operator=(const UpdateUserSayRequest &) = default ;
    UpdateUserSayRequest& operator=(UpdateUserSayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserSayDefinition : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserSayDefinition& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(IntentId, intentId_);
        DARABONBA_PTR_TO_JSON(SlotInfos, slotInfos_);
      };
      friend void from_json(const Darabonba::Json& j, UserSayDefinition& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
        DARABONBA_PTR_FROM_JSON(SlotInfos, slotInfos_);
      };
      UserSayDefinition() = default ;
      UserSayDefinition(const UserSayDefinition &) = default ;
      UserSayDefinition(UserSayDefinition &&) = default ;
      UserSayDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserSayDefinition() = default ;
      UserSayDefinition& operator=(const UserSayDefinition &) = default ;
      UserSayDefinition& operator=(UserSayDefinition &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SlotInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlotInfos& obj) { 
          DARABONBA_PTR_TO_JSON(EndIndex, endIndex_);
          DARABONBA_PTR_TO_JSON(SlotId, slotId_);
          DARABONBA_PTR_TO_JSON(StartIndex, startIndex_);
        };
        friend void from_json(const Darabonba::Json& j, SlotInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(EndIndex, endIndex_);
          DARABONBA_PTR_FROM_JSON(SlotId, slotId_);
          DARABONBA_PTR_FROM_JSON(StartIndex, startIndex_);
        };
        SlotInfos() = default ;
        SlotInfos(const SlotInfos &) = default ;
        SlotInfos(SlotInfos &&) = default ;
        SlotInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlotInfos() = default ;
        SlotInfos& operator=(const SlotInfos &) = default ;
        SlotInfos& operator=(SlotInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endIndex_ == nullptr
        && this->slotId_ == nullptr && this->startIndex_ == nullptr; };
        // endIndex Field Functions 
        bool hasEndIndex() const { return this->endIndex_ != nullptr;};
        void deleteEndIndex() { this->endIndex_ = nullptr;};
        inline int32_t getEndIndex() const { DARABONBA_PTR_GET_DEFAULT(endIndex_, 0) };
        inline SlotInfos& setEndIndex(int32_t endIndex) { DARABONBA_PTR_SET_VALUE(endIndex_, endIndex) };


        // slotId Field Functions 
        bool hasSlotId() const { return this->slotId_ != nullptr;};
        void deleteSlotId() { this->slotId_ = nullptr;};
        inline string getSlotId() const { DARABONBA_PTR_GET_DEFAULT(slotId_, "") };
        inline SlotInfos& setSlotId(string slotId) { DARABONBA_PTR_SET_VALUE(slotId_, slotId) };


        // startIndex Field Functions 
        bool hasStartIndex() const { return this->startIndex_ != nullptr;};
        void deleteStartIndex() { this->startIndex_ = nullptr;};
        inline int32_t getStartIndex() const { DARABONBA_PTR_GET_DEFAULT(startIndex_, 0) };
        inline SlotInfos& setStartIndex(int32_t startIndex) { DARABONBA_PTR_SET_VALUE(startIndex_, startIndex) };


      protected:
        shared_ptr<int32_t> endIndex_ {};
        shared_ptr<string> slotId_ {};
        shared_ptr<int32_t> startIndex_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->intentId_ == nullptr && this->slotInfos_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline UserSayDefinition& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // intentId Field Functions 
      bool hasIntentId() const { return this->intentId_ != nullptr;};
      void deleteIntentId() { this->intentId_ = nullptr;};
      inline int64_t getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
      inline UserSayDefinition& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


      // slotInfos Field Functions 
      bool hasSlotInfos() const { return this->slotInfos_ != nullptr;};
      void deleteSlotInfos() { this->slotInfos_ = nullptr;};
      inline const vector<UserSayDefinition::SlotInfos> & getSlotInfos() const { DARABONBA_PTR_GET_CONST(slotInfos_, vector<UserSayDefinition::SlotInfos>) };
      inline vector<UserSayDefinition::SlotInfos> getSlotInfos() { DARABONBA_PTR_GET(slotInfos_, vector<UserSayDefinition::SlotInfos>) };
      inline UserSayDefinition& setSlotInfos(const vector<UserSayDefinition::SlotInfos> & slotInfos) { DARABONBA_PTR_SET_VALUE(slotInfos_, slotInfos) };
      inline UserSayDefinition& setSlotInfos(vector<UserSayDefinition::SlotInfos> && slotInfos) { DARABONBA_PTR_SET_RVALUE(slotInfos_, slotInfos) };


    protected:
      // This parameter is required.
      shared_ptr<string> content_ {};
      // This parameter is required.
      shared_ptr<int64_t> intentId_ {};
      shared_ptr<vector<UserSayDefinition::SlotInfos>> slotInfos_ {};
    };

    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->instanceId_ == nullptr && this->userSayDefinition_ == nullptr && this->userSayId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateUserSayRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateUserSayRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userSayDefinition Field Functions 
    bool hasUserSayDefinition() const { return this->userSayDefinition_ != nullptr;};
    void deleteUserSayDefinition() { this->userSayDefinition_ = nullptr;};
    inline const UpdateUserSayRequest::UserSayDefinition & getUserSayDefinition() const { DARABONBA_PTR_GET_CONST(userSayDefinition_, UpdateUserSayRequest::UserSayDefinition) };
    inline UpdateUserSayRequest::UserSayDefinition getUserSayDefinition() { DARABONBA_PTR_GET(userSayDefinition_, UpdateUserSayRequest::UserSayDefinition) };
    inline UpdateUserSayRequest& setUserSayDefinition(const UpdateUserSayRequest::UserSayDefinition & userSayDefinition) { DARABONBA_PTR_SET_VALUE(userSayDefinition_, userSayDefinition) };
    inline UpdateUserSayRequest& setUserSayDefinition(UpdateUserSayRequest::UserSayDefinition && userSayDefinition) { DARABONBA_PTR_SET_RVALUE(userSayDefinition_, userSayDefinition) };


    // userSayId Field Functions 
    bool hasUserSayId() const { return this->userSayId_ != nullptr;};
    void deleteUserSayId() { this->userSayId_ = nullptr;};
    inline int64_t getUserSayId() const { DARABONBA_PTR_GET_DEFAULT(userSayId_, 0L) };
    inline UpdateUserSayRequest& setUserSayId(int64_t userSayId) { DARABONBA_PTR_SET_VALUE(userSayId_, userSayId) };


  protected:
    shared_ptr<string> agentKey_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<UpdateUserSayRequest::UserSayDefinition> userSayDefinition_ {};
    // This parameter is required.
    shared_ptr<int64_t> userSayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
