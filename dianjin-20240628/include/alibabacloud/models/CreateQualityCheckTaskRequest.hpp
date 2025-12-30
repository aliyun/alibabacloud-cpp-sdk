// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUALITYCHECKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUALITYCHECKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateQualityCheckTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQualityCheckTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(conversationList, conversationList_);
      DARABONBA_PTR_TO_JSON(gmtService, gmtService_);
      DARABONBA_PTR_TO_JSON(metaData, metaData_);
      DARABONBA_PTR_TO_JSON(qualityGroup, qualityGroup_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQualityCheckTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(conversationList, conversationList_);
      DARABONBA_PTR_FROM_JSON(gmtService, gmtService_);
      DARABONBA_PTR_FROM_JSON(metaData, metaData_);
      DARABONBA_PTR_FROM_JSON(qualityGroup, qualityGroup_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateQualityCheckTaskRequest() = default ;
    CreateQualityCheckTaskRequest(const CreateQualityCheckTaskRequest &) = default ;
    CreateQualityCheckTaskRequest(CreateQualityCheckTaskRequest &&) = default ;
    CreateQualityCheckTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQualityCheckTaskRequest() = default ;
    CreateQualityCheckTaskRequest& operator=(const CreateQualityCheckTaskRequest &) = default ;
    CreateQualityCheckTaskRequest& operator=(CreateQualityCheckTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConversationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConversationList& obj) { 
        DARABONBA_PTR_TO_JSON(callType, callType_);
        DARABONBA_PTR_TO_JSON(customerId, customerId_);
        DARABONBA_PTR_TO_JSON(customerName, customerName_);
        DARABONBA_PTR_TO_JSON(customerServiceId, customerServiceId_);
        DARABONBA_PTR_TO_JSON(customerServiceName, customerServiceName_);
        DARABONBA_PTR_TO_JSON(dialogueList, dialogueList_);
        DARABONBA_PTR_TO_JSON(gmtService, gmtService_);
      };
      friend void from_json(const Darabonba::Json& j, ConversationList& obj) { 
        DARABONBA_PTR_FROM_JSON(callType, callType_);
        DARABONBA_PTR_FROM_JSON(customerId, customerId_);
        DARABONBA_PTR_FROM_JSON(customerName, customerName_);
        DARABONBA_PTR_FROM_JSON(customerServiceId, customerServiceId_);
        DARABONBA_PTR_FROM_JSON(customerServiceName, customerServiceName_);
        DARABONBA_PTR_FROM_JSON(dialogueList, dialogueList_);
        DARABONBA_PTR_FROM_JSON(gmtService, gmtService_);
      };
      ConversationList() = default ;
      ConversationList(const ConversationList &) = default ;
      ConversationList(ConversationList &&) = default ;
      ConversationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConversationList() = default ;
      ConversationList& operator=(const ConversationList &) = default ;
      ConversationList& operator=(ConversationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DialogueList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DialogueList& obj) { 
          DARABONBA_PTR_TO_JSON(begin, begin_);
          DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(customerId, customerId_);
          DARABONBA_PTR_TO_JSON(customerServiceId, customerServiceId_);
          DARABONBA_PTR_TO_JSON(customerServiceType, customerServiceType_);
          DARABONBA_PTR_TO_JSON(end, end_);
          DARABONBA_PTR_TO_JSON(role, role_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DialogueList& obj) { 
          DARABONBA_PTR_FROM_JSON(begin, begin_);
          DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(customerId, customerId_);
          DARABONBA_PTR_FROM_JSON(customerServiceId, customerServiceId_);
          DARABONBA_PTR_FROM_JSON(customerServiceType, customerServiceType_);
          DARABONBA_PTR_FROM_JSON(end, end_);
          DARABONBA_PTR_FROM_JSON(role, role_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        DialogueList() = default ;
        DialogueList(const DialogueList &) = default ;
        DialogueList(DialogueList &&) = default ;
        DialogueList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DialogueList() = default ;
        DialogueList& operator=(const DialogueList &) = default ;
        DialogueList& operator=(DialogueList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->begin_ == nullptr
        && this->beginTime_ == nullptr && this->content_ == nullptr && this->customerId_ == nullptr && this->customerServiceId_ == nullptr && this->customerServiceType_ == nullptr
        && this->end_ == nullptr && this->role_ == nullptr && this->type_ == nullptr; };
        // begin Field Functions 
        bool hasBegin() const { return this->begin_ != nullptr;};
        void deleteBegin() { this->begin_ = nullptr;};
        inline int32_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0) };
        inline DialogueList& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


        // beginTime Field Functions 
        bool hasBeginTime() const { return this->beginTime_ != nullptr;};
        void deleteBeginTime() { this->beginTime_ = nullptr;};
        inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
        inline DialogueList& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline DialogueList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // customerId Field Functions 
        bool hasCustomerId() const { return this->customerId_ != nullptr;};
        void deleteCustomerId() { this->customerId_ = nullptr;};
        inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
        inline DialogueList& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


        // customerServiceId Field Functions 
        bool hasCustomerServiceId() const { return this->customerServiceId_ != nullptr;};
        void deleteCustomerServiceId() { this->customerServiceId_ = nullptr;};
        inline string getCustomerServiceId() const { DARABONBA_PTR_GET_DEFAULT(customerServiceId_, "") };
        inline DialogueList& setCustomerServiceId(string customerServiceId) { DARABONBA_PTR_SET_VALUE(customerServiceId_, customerServiceId) };


        // customerServiceType Field Functions 
        bool hasCustomerServiceType() const { return this->customerServiceType_ != nullptr;};
        void deleteCustomerServiceType() { this->customerServiceType_ = nullptr;};
        inline string getCustomerServiceType() const { DARABONBA_PTR_GET_DEFAULT(customerServiceType_, "") };
        inline DialogueList& setCustomerServiceType(string customerServiceType) { DARABONBA_PTR_SET_VALUE(customerServiceType_, customerServiceType) };


        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
        inline DialogueList& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline DialogueList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DialogueList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int32_t> begin_ {};
        shared_ptr<string> beginTime_ {};
        // This parameter is required.
        shared_ptr<string> content_ {};
        shared_ptr<string> customerId_ {};
        shared_ptr<string> customerServiceId_ {};
        shared_ptr<string> customerServiceType_ {};
        shared_ptr<int32_t> end_ {};
        // This parameter is required.
        shared_ptr<string> role_ {};
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->callType_ == nullptr
        && this->customerId_ == nullptr && this->customerName_ == nullptr && this->customerServiceId_ == nullptr && this->customerServiceName_ == nullptr && this->dialogueList_ == nullptr
        && this->gmtService_ == nullptr; };
      // callType Field Functions 
      bool hasCallType() const { return this->callType_ != nullptr;};
      void deleteCallType() { this->callType_ = nullptr;};
      inline string getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
      inline ConversationList& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


      // customerId Field Functions 
      bool hasCustomerId() const { return this->customerId_ != nullptr;};
      void deleteCustomerId() { this->customerId_ = nullptr;};
      inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
      inline ConversationList& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


      // customerName Field Functions 
      bool hasCustomerName() const { return this->customerName_ != nullptr;};
      void deleteCustomerName() { this->customerName_ = nullptr;};
      inline string getCustomerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
      inline ConversationList& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


      // customerServiceId Field Functions 
      bool hasCustomerServiceId() const { return this->customerServiceId_ != nullptr;};
      void deleteCustomerServiceId() { this->customerServiceId_ = nullptr;};
      inline string getCustomerServiceId() const { DARABONBA_PTR_GET_DEFAULT(customerServiceId_, "") };
      inline ConversationList& setCustomerServiceId(string customerServiceId) { DARABONBA_PTR_SET_VALUE(customerServiceId_, customerServiceId) };


      // customerServiceName Field Functions 
      bool hasCustomerServiceName() const { return this->customerServiceName_ != nullptr;};
      void deleteCustomerServiceName() { this->customerServiceName_ = nullptr;};
      inline string getCustomerServiceName() const { DARABONBA_PTR_GET_DEFAULT(customerServiceName_, "") };
      inline ConversationList& setCustomerServiceName(string customerServiceName) { DARABONBA_PTR_SET_VALUE(customerServiceName_, customerServiceName) };


      // dialogueList Field Functions 
      bool hasDialogueList() const { return this->dialogueList_ != nullptr;};
      void deleteDialogueList() { this->dialogueList_ = nullptr;};
      inline const vector<ConversationList::DialogueList> & getDialogueList() const { DARABONBA_PTR_GET_CONST(dialogueList_, vector<ConversationList::DialogueList>) };
      inline vector<ConversationList::DialogueList> getDialogueList() { DARABONBA_PTR_GET(dialogueList_, vector<ConversationList::DialogueList>) };
      inline ConversationList& setDialogueList(const vector<ConversationList::DialogueList> & dialogueList) { DARABONBA_PTR_SET_VALUE(dialogueList_, dialogueList) };
      inline ConversationList& setDialogueList(vector<ConversationList::DialogueList> && dialogueList) { DARABONBA_PTR_SET_RVALUE(dialogueList_, dialogueList) };


      // gmtService Field Functions 
      bool hasGmtService() const { return this->gmtService_ != nullptr;};
      void deleteGmtService() { this->gmtService_ = nullptr;};
      inline string getGmtService() const { DARABONBA_PTR_GET_DEFAULT(gmtService_, "") };
      inline ConversationList& setGmtService(string gmtService) { DARABONBA_PTR_SET_VALUE(gmtService_, gmtService) };


    protected:
      shared_ptr<string> callType_ {};
      shared_ptr<string> customerId_ {};
      shared_ptr<string> customerName_ {};
      shared_ptr<string> customerServiceId_ {};
      shared_ptr<string> customerServiceName_ {};
      // This parameter is required.
      shared_ptr<vector<ConversationList::DialogueList>> dialogueList_ {};
      shared_ptr<string> gmtService_ {};
    };

    virtual bool empty() const override { return this->conversationList_ == nullptr
        && this->gmtService_ == nullptr && this->metaData_ == nullptr && this->qualityGroup_ == nullptr && this->requestId_ == nullptr && this->sceneCode_ == nullptr
        && this->type_ == nullptr; };
    // conversationList Field Functions 
    bool hasConversationList() const { return this->conversationList_ != nullptr;};
    void deleteConversationList() { this->conversationList_ = nullptr;};
    inline const CreateQualityCheckTaskRequest::ConversationList & getConversationList() const { DARABONBA_PTR_GET_CONST(conversationList_, CreateQualityCheckTaskRequest::ConversationList) };
    inline CreateQualityCheckTaskRequest::ConversationList getConversationList() { DARABONBA_PTR_GET(conversationList_, CreateQualityCheckTaskRequest::ConversationList) };
    inline CreateQualityCheckTaskRequest& setConversationList(const CreateQualityCheckTaskRequest::ConversationList & conversationList) { DARABONBA_PTR_SET_VALUE(conversationList_, conversationList) };
    inline CreateQualityCheckTaskRequest& setConversationList(CreateQualityCheckTaskRequest::ConversationList && conversationList) { DARABONBA_PTR_SET_RVALUE(conversationList_, conversationList) };


    // gmtService Field Functions 
    bool hasGmtService() const { return this->gmtService_ != nullptr;};
    void deleteGmtService() { this->gmtService_ = nullptr;};
    inline string getGmtService() const { DARABONBA_PTR_GET_DEFAULT(gmtService_, "") };
    inline CreateQualityCheckTaskRequest& setGmtService(string gmtService) { DARABONBA_PTR_SET_VALUE(gmtService_, gmtService) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline const map<string, string> & getMetaData() const { DARABONBA_PTR_GET_CONST(metaData_, map<string, string>) };
    inline map<string, string> getMetaData() { DARABONBA_PTR_GET(metaData_, map<string, string>) };
    inline CreateQualityCheckTaskRequest& setMetaData(const map<string, string> & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
    inline CreateQualityCheckTaskRequest& setMetaData(map<string, string> && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


    // qualityGroup Field Functions 
    bool hasQualityGroup() const { return this->qualityGroup_ != nullptr;};
    void deleteQualityGroup() { this->qualityGroup_ = nullptr;};
    inline const vector<string> & getQualityGroup() const { DARABONBA_PTR_GET_CONST(qualityGroup_, vector<string>) };
    inline vector<string> getQualityGroup() { DARABONBA_PTR_GET(qualityGroup_, vector<string>) };
    inline CreateQualityCheckTaskRequest& setQualityGroup(const vector<string> & qualityGroup) { DARABONBA_PTR_SET_VALUE(qualityGroup_, qualityGroup) };
    inline CreateQualityCheckTaskRequest& setQualityGroup(vector<string> && qualityGroup) { DARABONBA_PTR_SET_RVALUE(qualityGroup_, qualityGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateQualityCheckTaskRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline CreateQualityCheckTaskRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateQualityCheckTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<CreateQualityCheckTaskRequest::ConversationList> conversationList_ {};
    // This parameter is required.
    shared_ptr<string> gmtService_ {};
    shared_ptr<map<string, string>> metaData_ {};
    shared_ptr<vector<string>> qualityGroup_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sceneCode_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
