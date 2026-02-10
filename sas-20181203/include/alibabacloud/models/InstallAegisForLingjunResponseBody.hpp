// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLAEGISFORLINGJUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSTALLAEGISFORLINGJUNRESPONSEBODY_HPP_
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
  class InstallAegisForLingjunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallAegisForLingjunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InvokeTasks, invokeTasks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, InstallAegisForLingjunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InvokeTasks, invokeTasks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    InstallAegisForLingjunResponseBody() = default ;
    InstallAegisForLingjunResponseBody(const InstallAegisForLingjunResponseBody &) = default ;
    InstallAegisForLingjunResponseBody(InstallAegisForLingjunResponseBody &&) = default ;
    InstallAegisForLingjunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallAegisForLingjunResponseBody() = default ;
    InstallAegisForLingjunResponseBody& operator=(const InstallAegisForLingjunResponseBody &) = default ;
    InstallAegisForLingjunResponseBody& operator=(InstallAegisForLingjunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InvokeTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InvokeTasks& obj) { 
        DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
        DARABONBA_PTR_TO_JSON(Uuids, uuids_);
      };
      friend void from_json(const Darabonba::Json& j, InvokeTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
        DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
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
        && this->uuids_ == nullptr; };
      // invokeId Field Functions 
      bool hasInvokeId() const { return this->invokeId_ != nullptr;};
      void deleteInvokeId() { this->invokeId_ = nullptr;};
      inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
      inline InvokeTasks& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


      // uuids Field Functions 
      bool hasUuids() const { return this->uuids_ != nullptr;};
      void deleteUuids() { this->uuids_ = nullptr;};
      inline const vector<string> & getUuids() const { DARABONBA_PTR_GET_CONST(uuids_, vector<string>) };
      inline vector<string> getUuids() { DARABONBA_PTR_GET(uuids_, vector<string>) };
      inline InvokeTasks& setUuids(const vector<string> & uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };
      inline InvokeTasks& setUuids(vector<string> && uuids) { DARABONBA_PTR_SET_RVALUE(uuids_, uuids) };


    protected:
      // Installation task ID for the Lingjun machine.
      shared_ptr<string> invokeId_ {};
      // List of unique UUIDs for Lingjun bare metal.
      shared_ptr<vector<string>> uuids_ {};
    };

    virtual bool empty() const override { return this->invokeTasks_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // invokeTasks Field Functions 
    bool hasInvokeTasks() const { return this->invokeTasks_ != nullptr;};
    void deleteInvokeTasks() { this->invokeTasks_ = nullptr;};
    inline const vector<InstallAegisForLingjunResponseBody::InvokeTasks> & getInvokeTasks() const { DARABONBA_PTR_GET_CONST(invokeTasks_, vector<InstallAegisForLingjunResponseBody::InvokeTasks>) };
    inline vector<InstallAegisForLingjunResponseBody::InvokeTasks> getInvokeTasks() { DARABONBA_PTR_GET(invokeTasks_, vector<InstallAegisForLingjunResponseBody::InvokeTasks>) };
    inline InstallAegisForLingjunResponseBody& setInvokeTasks(const vector<InstallAegisForLingjunResponseBody::InvokeTasks> & invokeTasks) { DARABONBA_PTR_SET_VALUE(invokeTasks_, invokeTasks) };
    inline InstallAegisForLingjunResponseBody& setInvokeTasks(vector<InstallAegisForLingjunResponseBody::InvokeTasks> && invokeTasks) { DARABONBA_PTR_SET_RVALUE(invokeTasks_, invokeTasks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InstallAegisForLingjunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline InstallAegisForLingjunResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // List of installation tasks returned.
    shared_ptr<vector<InstallAegisForLingjunResponseBody::InvokeTasks>> invokeTasks_ {};
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for this request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call was successful. Values:
    // 
    // - **true**: The API call was successful.
    // - **false**: The API call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
