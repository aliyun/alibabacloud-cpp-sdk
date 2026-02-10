// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAEGISFORLINGJUNSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAEGISFORLINGJUNSTATUSRESPONSEBODY_HPP_
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
  class ListAegisForLingjunStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAegisForLingjunStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InvokeTasks, invokeTasks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAegisForLingjunStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InvokeTasks, invokeTasks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAegisForLingjunStatusResponseBody() = default ;
    ListAegisForLingjunStatusResponseBody(const ListAegisForLingjunStatusResponseBody &) = default ;
    ListAegisForLingjunStatusResponseBody(ListAegisForLingjunStatusResponseBody &&) = default ;
    ListAegisForLingjunStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAegisForLingjunStatusResponseBody() = default ;
    ListAegisForLingjunStatusResponseBody& operator=(const ListAegisForLingjunStatusResponseBody &) = default ;
    ListAegisForLingjunStatusResponseBody& operator=(ListAegisForLingjunStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InvokeTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InvokeTasks& obj) { 
        DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, InvokeTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      InvokeTasks() = default ;
      InvokeTasks(const InvokeTasks &) = default ;
      InvokeTasks(InvokeTasks &&) = default ;
      InvokeTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InvokeTasks() = default ;
      InvokeTasks& operator=(const InvokeTasks &) = default ;
      InvokeTasks& operator=(InvokeTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->invokeId_ == nullptr
        && this->result_ == nullptr && this->status_ == nullptr && this->uuid_ == nullptr; };
      // invokeId Field Functions 
      bool hasInvokeId() const { return this->invokeId_ != nullptr;};
      void deleteInvokeId() { this->invokeId_ = nullptr;};
      inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
      inline InvokeTasks& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline InvokeTasks& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline InvokeTasks& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline InvokeTasks& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // Installation task ID for the Lingjun machine.
      shared_ptr<string> invokeId_ {};
      // Installation processing result. Values:
      // - success: Installation successful
      // - fail: Installation failed
      shared_ptr<string> result_ {};
      // Installation status. Values:
      // - **1**: Installation successful
      // - **0**: Installation failed
      shared_ptr<int32_t> status_ {};
      // Unique UUID for Lingjun bare metal.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->invokeTasks_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // invokeTasks Field Functions 
    bool hasInvokeTasks() const { return this->invokeTasks_ != nullptr;};
    void deleteInvokeTasks() { this->invokeTasks_ = nullptr;};
    inline const vector<ListAegisForLingjunStatusResponseBody::InvokeTasks> & getInvokeTasks() const { DARABONBA_PTR_GET_CONST(invokeTasks_, vector<ListAegisForLingjunStatusResponseBody::InvokeTasks>) };
    inline vector<ListAegisForLingjunStatusResponseBody::InvokeTasks> getInvokeTasks() { DARABONBA_PTR_GET(invokeTasks_, vector<ListAegisForLingjunStatusResponseBody::InvokeTasks>) };
    inline ListAegisForLingjunStatusResponseBody& setInvokeTasks(const vector<ListAegisForLingjunStatusResponseBody::InvokeTasks> & invokeTasks) { DARABONBA_PTR_SET_VALUE(invokeTasks_, invokeTasks) };
    inline ListAegisForLingjunStatusResponseBody& setInvokeTasks(vector<ListAegisForLingjunStatusResponseBody::InvokeTasks> && invokeTasks) { DARABONBA_PTR_SET_RVALUE(invokeTasks_, invokeTasks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAegisForLingjunStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAegisForLingjunStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // List of returned installation tasks.
    shared_ptr<vector<ListAegisForLingjunStatusResponseBody::InvokeTasks>> invokeTasks_ {};
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for this request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call was successful. Values:
    // - **true**: Success
    // - **false**: Failure
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
