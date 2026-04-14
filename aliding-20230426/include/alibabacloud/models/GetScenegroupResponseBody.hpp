// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCENEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetScenegroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScenegroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(groupUrl, groupUrl_);
      DARABONBA_PTR_TO_JSON(icon, icon_);
      DARABONBA_PTR_TO_JSON(managementOptions, managementOptions_);
      DARABONBA_PTR_TO_JSON(openConversationId, openConversationId_);
      DARABONBA_PTR_TO_JSON(ownerStaffId, ownerStaffId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(subAdminStaffIds, subAdminStaffIds_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetScenegroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(groupUrl, groupUrl_);
      DARABONBA_PTR_FROM_JSON(icon, icon_);
      DARABONBA_PTR_FROM_JSON(managementOptions, managementOptions_);
      DARABONBA_PTR_FROM_JSON(openConversationId, openConversationId_);
      DARABONBA_PTR_FROM_JSON(ownerStaffId, ownerStaffId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(subAdminStaffIds, subAdminStaffIds_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetScenegroupResponseBody() = default ;
    GetScenegroupResponseBody(const GetScenegroupResponseBody &) = default ;
    GetScenegroupResponseBody(GetScenegroupResponseBody &&) = default ;
    GetScenegroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScenegroupResponseBody() = default ;
    GetScenegroupResponseBody& operator=(const GetScenegroupResponseBody &) = default ;
    GetScenegroupResponseBody& operator=(GetScenegroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ManagementOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ManagementOptions& obj) { 
        DARABONBA_PTR_TO_JSON(ChatBannedType, chatBannedType_);
        DARABONBA_PTR_TO_JSON(ManagementType, managementType_);
        DARABONBA_PTR_TO_JSON(MentionAllAuthority, mentionAllAuthority_);
        DARABONBA_PTR_TO_JSON(Searchable, searchable_);
        DARABONBA_PTR_TO_JSON(ShowHistoryType, showHistoryType_);
        DARABONBA_PTR_TO_JSON(ValidationType, validationType_);
      };
      friend void from_json(const Darabonba::Json& j, ManagementOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(ChatBannedType, chatBannedType_);
        DARABONBA_PTR_FROM_JSON(ManagementType, managementType_);
        DARABONBA_PTR_FROM_JSON(MentionAllAuthority, mentionAllAuthority_);
        DARABONBA_PTR_FROM_JSON(Searchable, searchable_);
        DARABONBA_PTR_FROM_JSON(ShowHistoryType, showHistoryType_);
        DARABONBA_PTR_FROM_JSON(ValidationType, validationType_);
      };
      ManagementOptions() = default ;
      ManagementOptions(const ManagementOptions &) = default ;
      ManagementOptions(ManagementOptions &&) = default ;
      ManagementOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ManagementOptions() = default ;
      ManagementOptions& operator=(const ManagementOptions &) = default ;
      ManagementOptions& operator=(ManagementOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chatBannedType_ == nullptr
        && this->managementType_ == nullptr && this->mentionAllAuthority_ == nullptr && this->searchable_ == nullptr && this->showHistoryType_ == nullptr && this->validationType_ == nullptr; };
      // chatBannedType Field Functions 
      bool hasChatBannedType() const { return this->chatBannedType_ != nullptr;};
      void deleteChatBannedType() { this->chatBannedType_ = nullptr;};
      inline string getChatBannedType() const { DARABONBA_PTR_GET_DEFAULT(chatBannedType_, "") };
      inline ManagementOptions& setChatBannedType(string chatBannedType) { DARABONBA_PTR_SET_VALUE(chatBannedType_, chatBannedType) };


      // managementType Field Functions 
      bool hasManagementType() const { return this->managementType_ != nullptr;};
      void deleteManagementType() { this->managementType_ = nullptr;};
      inline string getManagementType() const { DARABONBA_PTR_GET_DEFAULT(managementType_, "") };
      inline ManagementOptions& setManagementType(string managementType) { DARABONBA_PTR_SET_VALUE(managementType_, managementType) };


      // mentionAllAuthority Field Functions 
      bool hasMentionAllAuthority() const { return this->mentionAllAuthority_ != nullptr;};
      void deleteMentionAllAuthority() { this->mentionAllAuthority_ = nullptr;};
      inline string getMentionAllAuthority() const { DARABONBA_PTR_GET_DEFAULT(mentionAllAuthority_, "") };
      inline ManagementOptions& setMentionAllAuthority(string mentionAllAuthority) { DARABONBA_PTR_SET_VALUE(mentionAllAuthority_, mentionAllAuthority) };


      // searchable Field Functions 
      bool hasSearchable() const { return this->searchable_ != nullptr;};
      void deleteSearchable() { this->searchable_ = nullptr;};
      inline string getSearchable() const { DARABONBA_PTR_GET_DEFAULT(searchable_, "") };
      inline ManagementOptions& setSearchable(string searchable) { DARABONBA_PTR_SET_VALUE(searchable_, searchable) };


      // showHistoryType Field Functions 
      bool hasShowHistoryType() const { return this->showHistoryType_ != nullptr;};
      void deleteShowHistoryType() { this->showHistoryType_ = nullptr;};
      inline string getShowHistoryType() const { DARABONBA_PTR_GET_DEFAULT(showHistoryType_, "") };
      inline ManagementOptions& setShowHistoryType(string showHistoryType) { DARABONBA_PTR_SET_VALUE(showHistoryType_, showHistoryType) };


      // validationType Field Functions 
      bool hasValidationType() const { return this->validationType_ != nullptr;};
      void deleteValidationType() { this->validationType_ = nullptr;};
      inline string getValidationType() const { DARABONBA_PTR_GET_DEFAULT(validationType_, "") };
      inline ManagementOptions& setValidationType(string validationType) { DARABONBA_PTR_SET_VALUE(validationType_, validationType) };


    protected:
      shared_ptr<string> chatBannedType_ {};
      shared_ptr<string> managementType_ {};
      shared_ptr<string> mentionAllAuthority_ {};
      shared_ptr<string> searchable_ {};
      shared_ptr<string> showHistoryType_ {};
      shared_ptr<string> validationType_ {};
    };

    virtual bool empty() const override { return this->groupUrl_ == nullptr
        && this->icon_ == nullptr && this->managementOptions_ == nullptr && this->openConversationId_ == nullptr && this->ownerStaffId_ == nullptr && this->requestId_ == nullptr
        && this->subAdminStaffIds_ == nullptr && this->templateId_ == nullptr && this->title_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // groupUrl Field Functions 
    bool hasGroupUrl() const { return this->groupUrl_ != nullptr;};
    void deleteGroupUrl() { this->groupUrl_ = nullptr;};
    inline string getGroupUrl() const { DARABONBA_PTR_GET_DEFAULT(groupUrl_, "") };
    inline GetScenegroupResponseBody& setGroupUrl(string groupUrl) { DARABONBA_PTR_SET_VALUE(groupUrl_, groupUrl) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline GetScenegroupResponseBody& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // managementOptions Field Functions 
    bool hasManagementOptions() const { return this->managementOptions_ != nullptr;};
    void deleteManagementOptions() { this->managementOptions_ = nullptr;};
    inline const GetScenegroupResponseBody::ManagementOptions & getManagementOptions() const { DARABONBA_PTR_GET_CONST(managementOptions_, GetScenegroupResponseBody::ManagementOptions) };
    inline GetScenegroupResponseBody::ManagementOptions getManagementOptions() { DARABONBA_PTR_GET(managementOptions_, GetScenegroupResponseBody::ManagementOptions) };
    inline GetScenegroupResponseBody& setManagementOptions(const GetScenegroupResponseBody::ManagementOptions & managementOptions) { DARABONBA_PTR_SET_VALUE(managementOptions_, managementOptions) };
    inline GetScenegroupResponseBody& setManagementOptions(GetScenegroupResponseBody::ManagementOptions && managementOptions) { DARABONBA_PTR_SET_RVALUE(managementOptions_, managementOptions) };


    // openConversationId Field Functions 
    bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
    void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
    inline string getOpenConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
    inline GetScenegroupResponseBody& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


    // ownerStaffId Field Functions 
    bool hasOwnerStaffId() const { return this->ownerStaffId_ != nullptr;};
    void deleteOwnerStaffId() { this->ownerStaffId_ = nullptr;};
    inline string getOwnerStaffId() const { DARABONBA_PTR_GET_DEFAULT(ownerStaffId_, "") };
    inline GetScenegroupResponseBody& setOwnerStaffId(string ownerStaffId) { DARABONBA_PTR_SET_VALUE(ownerStaffId_, ownerStaffId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScenegroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subAdminStaffIds Field Functions 
    bool hasSubAdminStaffIds() const { return this->subAdminStaffIds_ != nullptr;};
    void deleteSubAdminStaffIds() { this->subAdminStaffIds_ = nullptr;};
    inline const vector<string> & getSubAdminStaffIds() const { DARABONBA_PTR_GET_CONST(subAdminStaffIds_, vector<string>) };
    inline vector<string> getSubAdminStaffIds() { DARABONBA_PTR_GET(subAdminStaffIds_, vector<string>) };
    inline GetScenegroupResponseBody& setSubAdminStaffIds(const vector<string> & subAdminStaffIds) { DARABONBA_PTR_SET_VALUE(subAdminStaffIds_, subAdminStaffIds) };
    inline GetScenegroupResponseBody& setSubAdminStaffIds(vector<string> && subAdminStaffIds) { DARABONBA_PTR_SET_RVALUE(subAdminStaffIds_, subAdminStaffIds) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetScenegroupResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetScenegroupResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetScenegroupResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetScenegroupResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> groupUrl_ {};
    shared_ptr<string> icon_ {};
    shared_ptr<GetScenegroupResponseBody::ManagementOptions> managementOptions_ {};
    shared_ptr<string> openConversationId_ {};
    shared_ptr<string> ownerStaffId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<string>> subAdminStaffIds_ {};
    shared_ptr<string> templateId_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
