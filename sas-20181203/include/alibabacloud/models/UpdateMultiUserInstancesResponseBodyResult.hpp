// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIUSERINSTANCESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIUSERINSTANCESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateMultiUserInstancesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMultiUserInstancesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UpdateStatus, updateStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMultiUserInstancesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UpdateStatus, updateStatus_);
    };
    UpdateMultiUserInstancesResponseBodyResult() = default ;
    UpdateMultiUserInstancesResponseBodyResult(const UpdateMultiUserInstancesResponseBodyResult &) = default ;
    UpdateMultiUserInstancesResponseBodyResult(UpdateMultiUserInstancesResponseBodyResult &&) = default ;
    UpdateMultiUserInstancesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMultiUserInstancesResponseBodyResult() = default ;
    UpdateMultiUserInstancesResponseBodyResult& operator=(const UpdateMultiUserInstancesResponseBodyResult &) = default ;
    UpdateMultiUserInstancesResponseBodyResult& operator=(UpdateMultiUserInstancesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->errorMessage_ == nullptr && return this->instanceId_ == nullptr && return this->updateStatus_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline UpdateMultiUserInstancesResponseBodyResult& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline UpdateMultiUserInstancesResponseBodyResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateMultiUserInstancesResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // updateStatus Field Functions 
    bool hasUpdateStatus() const { return this->updateStatus_ != nullptr;};
    void deleteUpdateStatus() { this->updateStatus_ = nullptr;};
    inline string updateStatus() const { DARABONBA_PTR_GET_DEFAULT(updateStatus_, "") };
    inline UpdateMultiUserInstancesResponseBodyResult& setUpdateStatus(string updateStatus) { DARABONBA_PTR_SET_VALUE(updateStatus_, updateStatus) };


  protected:
    // User UID.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // Error message returned when the call fails.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The Cloud Security Center instance ID purchased by the member account.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Update status. Values:  
    // - **1**：Success 
    // - **2**：Failure
    std::shared_ptr<string> updateStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
