// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_USERQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class UserQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UserQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, UserQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    UserQueryResponseBody() = default ;
    UserQueryResponseBody(const UserQueryResponseBody &) = default ;
    UserQueryResponseBody(UserQueryResponseBody &&) = default ;
    UserQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UserQueryResponseBody() = default ;
    UserQueryResponseBody& operator=(const UserQueryResponseBody &) = default ;
    UserQueryResponseBody& operator=(UserQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(has_more, hasMore_);
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(page_token, pageToken_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(has_more, hasMore_);
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(page_token, pageToken_);
        DARABONBA_PTR_FROM_JSON(total, total_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(employee_nick, employeeNick_);
          DARABONBA_PTR_TO_JSON(leave_status, leaveStatus_);
          DARABONBA_PTR_TO_JSON(third_part_employee_id, thirdPartEmployeeId_);
          DARABONBA_PTR_TO_JSON(third_part_job_no, thirdPartJobNo_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(employee_nick, employeeNick_);
          DARABONBA_PTR_FROM_JSON(leave_status, leaveStatus_);
          DARABONBA_PTR_FROM_JSON(third_part_employee_id, thirdPartEmployeeId_);
          DARABONBA_PTR_FROM_JSON(third_part_job_no, thirdPartJobNo_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->employeeNick_ == nullptr
        && this->leaveStatus_ == nullptr && this->thirdPartEmployeeId_ == nullptr && this->thirdPartJobNo_ == nullptr; };
        // employeeNick Field Functions 
        bool hasEmployeeNick() const { return this->employeeNick_ != nullptr;};
        void deleteEmployeeNick() { this->employeeNick_ = nullptr;};
        inline string getEmployeeNick() const { DARABONBA_PTR_GET_DEFAULT(employeeNick_, "") };
        inline Items& setEmployeeNick(string employeeNick) { DARABONBA_PTR_SET_VALUE(employeeNick_, employeeNick) };


        // leaveStatus Field Functions 
        bool hasLeaveStatus() const { return this->leaveStatus_ != nullptr;};
        void deleteLeaveStatus() { this->leaveStatus_ = nullptr;};
        inline int32_t getLeaveStatus() const { DARABONBA_PTR_GET_DEFAULT(leaveStatus_, 0) };
        inline Items& setLeaveStatus(int32_t leaveStatus) { DARABONBA_PTR_SET_VALUE(leaveStatus_, leaveStatus) };


        // thirdPartEmployeeId Field Functions 
        bool hasThirdPartEmployeeId() const { return this->thirdPartEmployeeId_ != nullptr;};
        void deleteThirdPartEmployeeId() { this->thirdPartEmployeeId_ = nullptr;};
        inline string getThirdPartEmployeeId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartEmployeeId_, "") };
        inline Items& setThirdPartEmployeeId(string thirdPartEmployeeId) { DARABONBA_PTR_SET_VALUE(thirdPartEmployeeId_, thirdPartEmployeeId) };


        // thirdPartJobNo Field Functions 
        bool hasThirdPartJobNo() const { return this->thirdPartJobNo_ != nullptr;};
        void deleteThirdPartJobNo() { this->thirdPartJobNo_ = nullptr;};
        inline string getThirdPartJobNo() const { DARABONBA_PTR_GET_DEFAULT(thirdPartJobNo_, "") };
        inline Items& setThirdPartJobNo(string thirdPartJobNo) { DARABONBA_PTR_SET_VALUE(thirdPartJobNo_, thirdPartJobNo) };


      protected:
        shared_ptr<string> employeeNick_ {};
        shared_ptr<int32_t> leaveStatus_ {};
        shared_ptr<string> thirdPartEmployeeId_ {};
        shared_ptr<string> thirdPartJobNo_ {};
      };

      virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->items_ == nullptr && this->pageToken_ == nullptr && this->total_ == nullptr; };
      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
      inline Module& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Module::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Module::Items>) };
      inline vector<Module::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Module::Items>) };
      inline Module& setItems(const vector<Module::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Module& setItems(vector<Module::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageToken Field Functions 
      bool hasPageToken() const { return this->pageToken_ != nullptr;};
      void deletePageToken() { this->pageToken_ = nullptr;};
      inline string getPageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
      inline Module& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Module& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<bool> hasMore_ {};
      shared_ptr<vector<Module::Items>> items_ {};
      shared_ptr<string> pageToken_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UserQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UserQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const UserQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, UserQueryResponseBody::Module) };
    inline UserQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, UserQueryResponseBody::Module) };
    inline UserQueryResponseBody& setModule(const UserQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline UserQueryResponseBody& setModule(UserQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UserQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UserQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline UserQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<UserQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
