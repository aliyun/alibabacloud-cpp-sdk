// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNTICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNTICKETREQUEST_HPP_
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
  class AssignTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Notify, notify_);
      DARABONBA_PTR_TO_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_TO_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_TO_JSON(ProcessorUserIds, processorUserIds_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(TicketMemo, ticketMemo_);
    };
    friend void from_json(const Darabonba::Json& j, AssignTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Notify, notify_);
      DARABONBA_PTR_FROM_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_FROM_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_FROM_JSON(ProcessorUserIds, processorUserIds_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(TicketMemo, ticketMemo_);
    };
    AssignTicketRequest() = default ;
    AssignTicketRequest(const AssignTicketRequest &) = default ;
    AssignTicketRequest(AssignTicketRequest &&) = default ;
    AssignTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignTicketRequest() = default ;
    AssignTicketRequest& operator=(const AssignTicketRequest &) = default ;
    AssignTicketRequest& operator=(AssignTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TicketMemo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TicketMemo& obj) { 
        DARABONBA_PTR_TO_JSON(Attachments, attachments_);
        DARABONBA_PTR_TO_JSON(Memo, memo_);
      };
      friend void from_json(const Darabonba::Json& j, TicketMemo& obj) { 
        DARABONBA_PTR_FROM_JSON(Attachments, attachments_);
        DARABONBA_PTR_FROM_JSON(Memo, memo_);
      };
      TicketMemo() = default ;
      TicketMemo(const TicketMemo &) = default ;
      TicketMemo(TicketMemo &&) = default ;
      TicketMemo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TicketMemo() = default ;
      TicketMemo& operator=(const TicketMemo &) = default ;
      TicketMemo& operator=(TicketMemo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Attachments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Attachments& obj) { 
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(Key, key_);
        };
        friend void from_json(const Darabonba::Json& j, Attachments& obj) { 
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
        };
        Attachments() = default ;
        Attachments(const Attachments &) = default ;
        Attachments(Attachments &&) = default ;
        Attachments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Attachments() = default ;
        Attachments& operator=(const Attachments &) = default ;
        Attachments& operator=(Attachments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileName_ == nullptr
        && this->key_ == nullptr; };
        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline Attachments& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Attachments& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      protected:
        shared_ptr<string> fileName_ {};
        shared_ptr<string> key_ {};
      };

      virtual bool empty() const override { return this->attachments_ == nullptr
        && this->memo_ == nullptr; };
      // attachments Field Functions 
      bool hasAttachments() const { return this->attachments_ != nullptr;};
      void deleteAttachments() { this->attachments_ = nullptr;};
      inline const vector<TicketMemo::Attachments> & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<TicketMemo::Attachments>) };
      inline vector<TicketMemo::Attachments> getAttachments() { DARABONBA_PTR_GET(attachments_, vector<TicketMemo::Attachments>) };
      inline TicketMemo& setAttachments(const vector<TicketMemo::Attachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
      inline TicketMemo& setAttachments(vector<TicketMemo::Attachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


      // memo Field Functions 
      bool hasMemo() const { return this->memo_ != nullptr;};
      void deleteMemo() { this->memo_ = nullptr;};
      inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
      inline TicketMemo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    protected:
      shared_ptr<vector<TicketMemo::Attachments>> attachments_ {};
      shared_ptr<string> memo_ {};
    };

    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    class Notify : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Notify& obj) { 
        DARABONBA_PTR_TO_JSON(GroupNoticeReceiverUserIds, groupNoticeReceiverUserIds_);
        DARABONBA_PTR_TO_JSON(NoticeAllGroupMember, noticeAllGroupMember_);
        DARABONBA_PTR_TO_JSON(WorkNoticeReceiverUserIds, workNoticeReceiverUserIds_);
      };
      friend void from_json(const Darabonba::Json& j, Notify& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupNoticeReceiverUserIds, groupNoticeReceiverUserIds_);
        DARABONBA_PTR_FROM_JSON(NoticeAllGroupMember, noticeAllGroupMember_);
        DARABONBA_PTR_FROM_JSON(WorkNoticeReceiverUserIds, workNoticeReceiverUserIds_);
      };
      Notify() = default ;
      Notify(const Notify &) = default ;
      Notify(Notify &&) = default ;
      Notify(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Notify() = default ;
      Notify& operator=(const Notify &) = default ;
      Notify& operator=(Notify &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupNoticeReceiverUserIds_ == nullptr
        && this->noticeAllGroupMember_ == nullptr && this->workNoticeReceiverUserIds_ == nullptr; };
      // groupNoticeReceiverUserIds Field Functions 
      bool hasGroupNoticeReceiverUserIds() const { return this->groupNoticeReceiverUserIds_ != nullptr;};
      void deleteGroupNoticeReceiverUserIds() { this->groupNoticeReceiverUserIds_ = nullptr;};
      inline const vector<string> & getGroupNoticeReceiverUserIds() const { DARABONBA_PTR_GET_CONST(groupNoticeReceiverUserIds_, vector<string>) };
      inline vector<string> getGroupNoticeReceiverUserIds() { DARABONBA_PTR_GET(groupNoticeReceiverUserIds_, vector<string>) };
      inline Notify& setGroupNoticeReceiverUserIds(const vector<string> & groupNoticeReceiverUserIds) { DARABONBA_PTR_SET_VALUE(groupNoticeReceiverUserIds_, groupNoticeReceiverUserIds) };
      inline Notify& setGroupNoticeReceiverUserIds(vector<string> && groupNoticeReceiverUserIds) { DARABONBA_PTR_SET_RVALUE(groupNoticeReceiverUserIds_, groupNoticeReceiverUserIds) };


      // noticeAllGroupMember Field Functions 
      bool hasNoticeAllGroupMember() const { return this->noticeAllGroupMember_ != nullptr;};
      void deleteNoticeAllGroupMember() { this->noticeAllGroupMember_ = nullptr;};
      inline bool getNoticeAllGroupMember() const { DARABONBA_PTR_GET_DEFAULT(noticeAllGroupMember_, false) };
      inline Notify& setNoticeAllGroupMember(bool noticeAllGroupMember) { DARABONBA_PTR_SET_VALUE(noticeAllGroupMember_, noticeAllGroupMember) };


      // workNoticeReceiverUserIds Field Functions 
      bool hasWorkNoticeReceiverUserIds() const { return this->workNoticeReceiverUserIds_ != nullptr;};
      void deleteWorkNoticeReceiverUserIds() { this->workNoticeReceiverUserIds_ = nullptr;};
      inline const vector<string> & getWorkNoticeReceiverUserIds() const { DARABONBA_PTR_GET_CONST(workNoticeReceiverUserIds_, vector<string>) };
      inline vector<string> getWorkNoticeReceiverUserIds() { DARABONBA_PTR_GET(workNoticeReceiverUserIds_, vector<string>) };
      inline Notify& setWorkNoticeReceiverUserIds(const vector<string> & workNoticeReceiverUserIds) { DARABONBA_PTR_SET_VALUE(workNoticeReceiverUserIds_, workNoticeReceiverUserIds) };
      inline Notify& setWorkNoticeReceiverUserIds(vector<string> && workNoticeReceiverUserIds) { DARABONBA_PTR_SET_RVALUE(workNoticeReceiverUserIds_, workNoticeReceiverUserIds) };


    protected:
      shared_ptr<vector<string>> groupNoticeReceiverUserIds_ {};
      shared_ptr<bool> noticeAllGroupMember_ {};
      shared_ptr<vector<string>> workNoticeReceiverUserIds_ {};
    };

    virtual bool empty() const override { return this->notify_ == nullptr
        && this->openTeamId_ == nullptr && this->openTicketId_ == nullptr && this->processorUserIds_ == nullptr && this->tenantContext_ == nullptr && this->ticketMemo_ == nullptr; };
    // notify Field Functions 
    bool hasNotify() const { return this->notify_ != nullptr;};
    void deleteNotify() { this->notify_ = nullptr;};
    inline const AssignTicketRequest::Notify & getNotify() const { DARABONBA_PTR_GET_CONST(notify_, AssignTicketRequest::Notify) };
    inline AssignTicketRequest::Notify getNotify() { DARABONBA_PTR_GET(notify_, AssignTicketRequest::Notify) };
    inline AssignTicketRequest& setNotify(const AssignTicketRequest::Notify & notify) { DARABONBA_PTR_SET_VALUE(notify_, notify) };
    inline AssignTicketRequest& setNotify(AssignTicketRequest::Notify && notify) { DARABONBA_PTR_SET_RVALUE(notify_, notify) };


    // openTeamId Field Functions 
    bool hasOpenTeamId() const { return this->openTeamId_ != nullptr;};
    void deleteOpenTeamId() { this->openTeamId_ = nullptr;};
    inline string getOpenTeamId() const { DARABONBA_PTR_GET_DEFAULT(openTeamId_, "") };
    inline AssignTicketRequest& setOpenTeamId(string openTeamId) { DARABONBA_PTR_SET_VALUE(openTeamId_, openTeamId) };


    // openTicketId Field Functions 
    bool hasOpenTicketId() const { return this->openTicketId_ != nullptr;};
    void deleteOpenTicketId() { this->openTicketId_ = nullptr;};
    inline string getOpenTicketId() const { DARABONBA_PTR_GET_DEFAULT(openTicketId_, "") };
    inline AssignTicketRequest& setOpenTicketId(string openTicketId) { DARABONBA_PTR_SET_VALUE(openTicketId_, openTicketId) };


    // processorUserIds Field Functions 
    bool hasProcessorUserIds() const { return this->processorUserIds_ != nullptr;};
    void deleteProcessorUserIds() { this->processorUserIds_ = nullptr;};
    inline const vector<string> & getProcessorUserIds() const { DARABONBA_PTR_GET_CONST(processorUserIds_, vector<string>) };
    inline vector<string> getProcessorUserIds() { DARABONBA_PTR_GET(processorUserIds_, vector<string>) };
    inline AssignTicketRequest& setProcessorUserIds(const vector<string> & processorUserIds) { DARABONBA_PTR_SET_VALUE(processorUserIds_, processorUserIds) };
    inline AssignTicketRequest& setProcessorUserIds(vector<string> && processorUserIds) { DARABONBA_PTR_SET_RVALUE(processorUserIds_, processorUserIds) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const AssignTicketRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, AssignTicketRequest::TenantContext) };
    inline AssignTicketRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, AssignTicketRequest::TenantContext) };
    inline AssignTicketRequest& setTenantContext(const AssignTicketRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline AssignTicketRequest& setTenantContext(AssignTicketRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // ticketMemo Field Functions 
    bool hasTicketMemo() const { return this->ticketMemo_ != nullptr;};
    void deleteTicketMemo() { this->ticketMemo_ = nullptr;};
    inline const AssignTicketRequest::TicketMemo & getTicketMemo() const { DARABONBA_PTR_GET_CONST(ticketMemo_, AssignTicketRequest::TicketMemo) };
    inline AssignTicketRequest::TicketMemo getTicketMemo() { DARABONBA_PTR_GET(ticketMemo_, AssignTicketRequest::TicketMemo) };
    inline AssignTicketRequest& setTicketMemo(const AssignTicketRequest::TicketMemo & ticketMemo) { DARABONBA_PTR_SET_VALUE(ticketMemo_, ticketMemo) };
    inline AssignTicketRequest& setTicketMemo(AssignTicketRequest::TicketMemo && ticketMemo) { DARABONBA_PTR_SET_RVALUE(ticketMemo_, ticketMemo) };


  protected:
    shared_ptr<AssignTicketRequest::Notify> notify_ {};
    // This parameter is required.
    shared_ptr<string> openTeamId_ {};
    // This parameter is required.
    shared_ptr<string> openTicketId_ {};
    shared_ptr<vector<string>> processorUserIds_ {};
    shared_ptr<AssignTicketRequest::TenantContext> tenantContext_ {};
    shared_ptr<AssignTicketRequest::TicketMemo> ticketMemo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
