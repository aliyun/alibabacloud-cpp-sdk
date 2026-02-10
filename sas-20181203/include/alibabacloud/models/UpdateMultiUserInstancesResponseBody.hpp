// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIUSERINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIUSERINSTANCESRESPONSEBODY_HPP_
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
  class UpdateMultiUserInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMultiUserInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMultiUserInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    UpdateMultiUserInstancesResponseBody() = default ;
    UpdateMultiUserInstancesResponseBody(const UpdateMultiUserInstancesResponseBody &) = default ;
    UpdateMultiUserInstancesResponseBody(UpdateMultiUserInstancesResponseBody &&) = default ;
    UpdateMultiUserInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMultiUserInstancesResponseBody() = default ;
    UpdateMultiUserInstancesResponseBody& operator=(const UpdateMultiUserInstancesResponseBody &) = default ;
    UpdateMultiUserInstancesResponseBody& operator=(UpdateMultiUserInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(UpdateStatus, updateStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(UpdateStatus, updateStatus_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->errorMessage_ == nullptr && this->instanceId_ == nullptr && this->updateStatus_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Result& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Result& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // updateStatus Field Functions 
      bool hasUpdateStatus() const { return this->updateStatus_ != nullptr;};
      void deleteUpdateStatus() { this->updateStatus_ = nullptr;};
      inline string getUpdateStatus() const { DARABONBA_PTR_GET_DEFAULT(updateStatus_, "") };
      inline Result& setUpdateStatus(string updateStatus) { DARABONBA_PTR_SET_VALUE(updateStatus_, updateStatus) };


    protected:
      // User UID.
      shared_ptr<int64_t> aliUid_ {};
      // Error message returned when the call fails.
      shared_ptr<string> errorMessage_ {};
      // The Cloud Security Center instance ID purchased by the member account.
      shared_ptr<string> instanceId_ {};
      // Update status. Values:  
      // - **1**：Success 
      // - **2**：Failure
      shared_ptr<string> updateStatus_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMultiUserInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<UpdateMultiUserInstancesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<UpdateMultiUserInstancesResponseBody::Result>) };
    inline vector<UpdateMultiUserInstancesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<UpdateMultiUserInstancesResponseBody::Result>) };
    inline UpdateMultiUserInstancesResponseBody& setResult(const vector<UpdateMultiUserInstancesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdateMultiUserInstancesResponseBody& setResult(vector<UpdateMultiUserInstancesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of this call request, which is a unique identifier generated by Alibaba Cloud for this request and can be used for troubleshooting and problem location.
    shared_ptr<string> requestId_ {};
    // Request processing result.
    shared_ptr<vector<UpdateMultiUserInstancesResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
