// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSOCIATEDTRANSFERSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASSOCIATEDTRANSFERSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListAssociatedTransferSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssociatedTransferSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedTransferSetting, associatedTransferSetting_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssociatedTransferSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedTransferSetting, associatedTransferSetting_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAssociatedTransferSettingResponseBody() = default ;
    ListAssociatedTransferSettingResponseBody(const ListAssociatedTransferSettingResponseBody &) = default ;
    ListAssociatedTransferSettingResponseBody(ListAssociatedTransferSettingResponseBody &&) = default ;
    ListAssociatedTransferSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssociatedTransferSettingResponseBody() = default ;
    ListAssociatedTransferSettingResponseBody& operator=(const ListAssociatedTransferSettingResponseBody &) = default ;
    ListAssociatedTransferSettingResponseBody& operator=(ListAssociatedTransferSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssociatedTransferSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssociatedTransferSetting& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(EnableExistingResourcesTransfer, enableExistingResourcesTransfer_);
        DARABONBA_PTR_TO_JSON(RuleSettings, ruleSettings_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, AssociatedTransferSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(EnableExistingResourcesTransfer, enableExistingResourcesTransfer_);
        DARABONBA_PTR_FROM_JSON(RuleSettings, ruleSettings_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      AssociatedTransferSetting() = default ;
      AssociatedTransferSetting(const AssociatedTransferSetting &) = default ;
      AssociatedTransferSetting(AssociatedTransferSetting &&) = default ;
      AssociatedTransferSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssociatedTransferSetting() = default ;
      AssociatedTransferSetting& operator=(const AssociatedTransferSetting &) = default ;
      AssociatedTransferSetting& operator=(AssociatedTransferSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuleSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleSettings& obj) { 
          DARABONBA_PTR_TO_JSON(AssociatedResourceType, associatedResourceType_);
          DARABONBA_PTR_TO_JSON(AssociatedService, associatedService_);
          DARABONBA_PTR_TO_JSON(MasterResourceType, masterResourceType_);
          DARABONBA_PTR_TO_JSON(MasterService, masterService_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, RuleSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(AssociatedResourceType, associatedResourceType_);
          DARABONBA_PTR_FROM_JSON(AssociatedService, associatedService_);
          DARABONBA_PTR_FROM_JSON(MasterResourceType, masterResourceType_);
          DARABONBA_PTR_FROM_JSON(MasterService, masterService_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        RuleSettings() = default ;
        RuleSettings(const RuleSettings &) = default ;
        RuleSettings(RuleSettings &&) = default ;
        RuleSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleSettings() = default ;
        RuleSettings& operator=(const RuleSettings &) = default ;
        RuleSettings& operator=(RuleSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->associatedResourceType_ == nullptr
        && this->associatedService_ == nullptr && this->masterResourceType_ == nullptr && this->masterService_ == nullptr && this->status_ == nullptr; };
        // associatedResourceType Field Functions 
        bool hasAssociatedResourceType() const { return this->associatedResourceType_ != nullptr;};
        void deleteAssociatedResourceType() { this->associatedResourceType_ = nullptr;};
        inline string getAssociatedResourceType() const { DARABONBA_PTR_GET_DEFAULT(associatedResourceType_, "") };
        inline RuleSettings& setAssociatedResourceType(string associatedResourceType) { DARABONBA_PTR_SET_VALUE(associatedResourceType_, associatedResourceType) };


        // associatedService Field Functions 
        bool hasAssociatedService() const { return this->associatedService_ != nullptr;};
        void deleteAssociatedService() { this->associatedService_ = nullptr;};
        inline string getAssociatedService() const { DARABONBA_PTR_GET_DEFAULT(associatedService_, "") };
        inline RuleSettings& setAssociatedService(string associatedService) { DARABONBA_PTR_SET_VALUE(associatedService_, associatedService) };


        // masterResourceType Field Functions 
        bool hasMasterResourceType() const { return this->masterResourceType_ != nullptr;};
        void deleteMasterResourceType() { this->masterResourceType_ = nullptr;};
        inline string getMasterResourceType() const { DARABONBA_PTR_GET_DEFAULT(masterResourceType_, "") };
        inline RuleSettings& setMasterResourceType(string masterResourceType) { DARABONBA_PTR_SET_VALUE(masterResourceType_, masterResourceType) };


        // masterService Field Functions 
        bool hasMasterService() const { return this->masterService_ != nullptr;};
        void deleteMasterService() { this->masterService_ = nullptr;};
        inline string getMasterService() const { DARABONBA_PTR_GET_DEFAULT(masterService_, "") };
        inline RuleSettings& setMasterService(string masterService) { DARABONBA_PTR_SET_VALUE(masterService_, masterService) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RuleSettings& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The type of the associated resource.
        shared_ptr<string> associatedResourceType_ {};
        // The service code of the associated resource.
        shared_ptr<string> associatedService_ {};
        // The type of the primary resource.
        shared_ptr<string> masterResourceType_ {};
        // The service code of the primary resource.
        shared_ptr<string> masterService_ {};
        // The status of the Transfer Associated Resources feature. Valid values:
        // 
        // *   Enable: enabled
        // *   Disable: disabled
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->enableExistingResourcesTransfer_ == nullptr && this->ruleSettings_ == nullptr && this->status_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline AssociatedTransferSetting& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // enableExistingResourcesTransfer Field Functions 
      bool hasEnableExistingResourcesTransfer() const { return this->enableExistingResourcesTransfer_ != nullptr;};
      void deleteEnableExistingResourcesTransfer() { this->enableExistingResourcesTransfer_ = nullptr;};
      inline string getEnableExistingResourcesTransfer() const { DARABONBA_PTR_GET_DEFAULT(enableExistingResourcesTransfer_, "") };
      inline AssociatedTransferSetting& setEnableExistingResourcesTransfer(string enableExistingResourcesTransfer) { DARABONBA_PTR_SET_VALUE(enableExistingResourcesTransfer_, enableExistingResourcesTransfer) };


      // ruleSettings Field Functions 
      bool hasRuleSettings() const { return this->ruleSettings_ != nullptr;};
      void deleteRuleSettings() { this->ruleSettings_ = nullptr;};
      inline const vector<AssociatedTransferSetting::RuleSettings> & getRuleSettings() const { DARABONBA_PTR_GET_CONST(ruleSettings_, vector<AssociatedTransferSetting::RuleSettings>) };
      inline vector<AssociatedTransferSetting::RuleSettings> getRuleSettings() { DARABONBA_PTR_GET(ruleSettings_, vector<AssociatedTransferSetting::RuleSettings>) };
      inline AssociatedTransferSetting& setRuleSettings(const vector<AssociatedTransferSetting::RuleSettings> & ruleSettings) { DARABONBA_PTR_SET_VALUE(ruleSettings_, ruleSettings) };
      inline AssociatedTransferSetting& setRuleSettings(vector<AssociatedTransferSetting::RuleSettings> && ruleSettings) { DARABONBA_PTR_SET_RVALUE(ruleSettings_, ruleSettings) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AssociatedTransferSetting& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<string> accountId_ {};
      // Indicates whether the Transfer Existing Associated Resources feature is enabled. Valid values:
      // 
      // *   false
      // *   true
      shared_ptr<string> enableExistingResourcesTransfer_ {};
      // The settings of transfer rules.
      shared_ptr<vector<AssociatedTransferSetting::RuleSettings>> ruleSettings_ {};
      // The status of the Transfer Associated Resources feature. Valid values:
      // 
      // *   Enable: enabled
      // *   Disable: disabled
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->associatedTransferSetting_ == nullptr
        && this->requestId_ == nullptr; };
    // associatedTransferSetting Field Functions 
    bool hasAssociatedTransferSetting() const { return this->associatedTransferSetting_ != nullptr;};
    void deleteAssociatedTransferSetting() { this->associatedTransferSetting_ = nullptr;};
    inline const ListAssociatedTransferSettingResponseBody::AssociatedTransferSetting & getAssociatedTransferSetting() const { DARABONBA_PTR_GET_CONST(associatedTransferSetting_, ListAssociatedTransferSettingResponseBody::AssociatedTransferSetting) };
    inline ListAssociatedTransferSettingResponseBody::AssociatedTransferSetting getAssociatedTransferSetting() { DARABONBA_PTR_GET(associatedTransferSetting_, ListAssociatedTransferSettingResponseBody::AssociatedTransferSetting) };
    inline ListAssociatedTransferSettingResponseBody& setAssociatedTransferSetting(const ListAssociatedTransferSettingResponseBody::AssociatedTransferSetting & associatedTransferSetting) { DARABONBA_PTR_SET_VALUE(associatedTransferSetting_, associatedTransferSetting) };
    inline ListAssociatedTransferSettingResponseBody& setAssociatedTransferSetting(ListAssociatedTransferSettingResponseBody::AssociatedTransferSetting && associatedTransferSetting) { DARABONBA_PTR_SET_RVALUE(associatedTransferSetting_, associatedTransferSetting) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAssociatedTransferSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The settings of the Transfer Associated Resources feature.
    shared_ptr<ListAssociatedTransferSettingResponseBody::AssociatedTransferSetting> associatedTransferSetting_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
