// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYDEPARTMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYDEPARTMENTRESPONSEBODY_HPP_
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
  class BatchQueryDepartmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryDepartmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryDepartmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    BatchQueryDepartmentResponseBody() = default ;
    BatchQueryDepartmentResponseBody(const BatchQueryDepartmentResponseBody &) = default ;
    BatchQueryDepartmentResponseBody(BatchQueryDepartmentResponseBody &&) = default ;
    BatchQueryDepartmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryDepartmentResponseBody() = default ;
    BatchQueryDepartmentResponseBody& operator=(const BatchQueryDepartmentResponseBody &) = default ;
    BatchQueryDepartmentResponseBody& operator=(BatchQueryDepartmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(has_more, hasMore_);
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(next_cursor_token, nextCursorToken_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(has_more, hasMore_);
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(next_cursor_token, nextCursorToken_);
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
          DARABONBA_PTR_TO_JSON(dept_name, deptName_);
          DARABONBA_PTR_TO_JSON(manager_employee_id_list, managerEmployeeIdList_);
          DARABONBA_PTR_TO_JSON(out_dept_id, outDeptId_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(dept_name, deptName_);
          DARABONBA_PTR_FROM_JSON(manager_employee_id_list, managerEmployeeIdList_);
          DARABONBA_PTR_FROM_JSON(out_dept_id, outDeptId_);
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
        virtual bool empty() const override { return this->deptName_ == nullptr
        && this->managerEmployeeIdList_ == nullptr && this->outDeptId_ == nullptr; };
        // deptName Field Functions 
        bool hasDeptName() const { return this->deptName_ != nullptr;};
        void deleteDeptName() { this->deptName_ = nullptr;};
        inline string getDeptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
        inline Items& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


        // managerEmployeeIdList Field Functions 
        bool hasManagerEmployeeIdList() const { return this->managerEmployeeIdList_ != nullptr;};
        void deleteManagerEmployeeIdList() { this->managerEmployeeIdList_ = nullptr;};
        inline const vector<string> & getManagerEmployeeIdList() const { DARABONBA_PTR_GET_CONST(managerEmployeeIdList_, vector<string>) };
        inline vector<string> getManagerEmployeeIdList() { DARABONBA_PTR_GET(managerEmployeeIdList_, vector<string>) };
        inline Items& setManagerEmployeeIdList(const vector<string> & managerEmployeeIdList) { DARABONBA_PTR_SET_VALUE(managerEmployeeIdList_, managerEmployeeIdList) };
        inline Items& setManagerEmployeeIdList(vector<string> && managerEmployeeIdList) { DARABONBA_PTR_SET_RVALUE(managerEmployeeIdList_, managerEmployeeIdList) };


        // outDeptId Field Functions 
        bool hasOutDeptId() const { return this->outDeptId_ != nullptr;};
        void deleteOutDeptId() { this->outDeptId_ = nullptr;};
        inline string getOutDeptId() const { DARABONBA_PTR_GET_DEFAULT(outDeptId_, "") };
        inline Items& setOutDeptId(string outDeptId) { DARABONBA_PTR_SET_VALUE(outDeptId_, outDeptId) };


      protected:
        shared_ptr<string> deptName_ {};
        shared_ptr<vector<string>> managerEmployeeIdList_ {};
        shared_ptr<string> outDeptId_ {};
      };

      virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->items_ == nullptr && this->nextCursorToken_ == nullptr && this->total_ == nullptr; };
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


      // nextCursorToken Field Functions 
      bool hasNextCursorToken() const { return this->nextCursorToken_ != nullptr;};
      void deleteNextCursorToken() { this->nextCursorToken_ = nullptr;};
      inline string getNextCursorToken() const { DARABONBA_PTR_GET_DEFAULT(nextCursorToken_, "") };
      inline Module& setNextCursorToken(string nextCursorToken) { DARABONBA_PTR_SET_VALUE(nextCursorToken_, nextCursorToken) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Module& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<bool> hasMore_ {};
      shared_ptr<vector<Module::Items>> items_ {};
      shared_ptr<string> nextCursorToken_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchQueryDepartmentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline BatchQueryDepartmentResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchQueryDepartmentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const BatchQueryDepartmentResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, BatchQueryDepartmentResponseBody::Module) };
    inline BatchQueryDepartmentResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, BatchQueryDepartmentResponseBody::Module) };
    inline BatchQueryDepartmentResponseBody& setModule(const BatchQueryDepartmentResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline BatchQueryDepartmentResponseBody& setModule(BatchQueryDepartmentResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchQueryDepartmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchQueryDepartmentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline BatchQueryDepartmentResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<BatchQueryDepartmentResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
