// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTICKETMEMOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTICKETMEMOREQUEST_HPP_
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
  class AddTicketMemoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTicketMemoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_TO_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(TicketMemo, ticketMemo_);
    };
    friend void from_json(const Darabonba::Json& j, AddTicketMemoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_FROM_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(TicketMemo, ticketMemo_);
    };
    AddTicketMemoRequest() = default ;
    AddTicketMemoRequest(const AddTicketMemoRequest &) = default ;
    AddTicketMemoRequest(AddTicketMemoRequest &&) = default ;
    AddTicketMemoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTicketMemoRequest() = default ;
    AddTicketMemoRequest& operator=(const AddTicketMemoRequest &) = default ;
    AddTicketMemoRequest& operator=(AddTicketMemoRequest &&) = default ;
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

    virtual bool empty() const override { return this->openTeamId_ == nullptr
        && this->openTicketId_ == nullptr && this->tenantContext_ == nullptr && this->ticketMemo_ == nullptr; };
    // openTeamId Field Functions 
    bool hasOpenTeamId() const { return this->openTeamId_ != nullptr;};
    void deleteOpenTeamId() { this->openTeamId_ = nullptr;};
    inline string getOpenTeamId() const { DARABONBA_PTR_GET_DEFAULT(openTeamId_, "") };
    inline AddTicketMemoRequest& setOpenTeamId(string openTeamId) { DARABONBA_PTR_SET_VALUE(openTeamId_, openTeamId) };


    // openTicketId Field Functions 
    bool hasOpenTicketId() const { return this->openTicketId_ != nullptr;};
    void deleteOpenTicketId() { this->openTicketId_ = nullptr;};
    inline string getOpenTicketId() const { DARABONBA_PTR_GET_DEFAULT(openTicketId_, "") };
    inline AddTicketMemoRequest& setOpenTicketId(string openTicketId) { DARABONBA_PTR_SET_VALUE(openTicketId_, openTicketId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const AddTicketMemoRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, AddTicketMemoRequest::TenantContext) };
    inline AddTicketMemoRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, AddTicketMemoRequest::TenantContext) };
    inline AddTicketMemoRequest& setTenantContext(const AddTicketMemoRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline AddTicketMemoRequest& setTenantContext(AddTicketMemoRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // ticketMemo Field Functions 
    bool hasTicketMemo() const { return this->ticketMemo_ != nullptr;};
    void deleteTicketMemo() { this->ticketMemo_ = nullptr;};
    inline const AddTicketMemoRequest::TicketMemo & getTicketMemo() const { DARABONBA_PTR_GET_CONST(ticketMemo_, AddTicketMemoRequest::TicketMemo) };
    inline AddTicketMemoRequest::TicketMemo getTicketMemo() { DARABONBA_PTR_GET(ticketMemo_, AddTicketMemoRequest::TicketMemo) };
    inline AddTicketMemoRequest& setTicketMemo(const AddTicketMemoRequest::TicketMemo & ticketMemo) { DARABONBA_PTR_SET_VALUE(ticketMemo_, ticketMemo) };
    inline AddTicketMemoRequest& setTicketMemo(AddTicketMemoRequest::TicketMemo && ticketMemo) { DARABONBA_PTR_SET_RVALUE(ticketMemo_, ticketMemo) };


  protected:
    // This parameter is required.
    shared_ptr<string> openTeamId_ {};
    // This parameter is required.
    shared_ptr<string> openTicketId_ {};
    shared_ptr<AddTicketMemoRequest::TenantContext> tenantContext_ {};
    shared_ptr<AddTicketMemoRequest::TicketMemo> ticketMemo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
