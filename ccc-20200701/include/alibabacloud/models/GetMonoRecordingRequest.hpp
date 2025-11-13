// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMONORECORDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMONORECORDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetMonoRecordingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMonoRecordingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ExpireSeconds, expireSeconds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMonoRecordingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ExpireSeconds, expireSeconds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetMonoRecordingRequest() = default ;
    GetMonoRecordingRequest(const GetMonoRecordingRequest &) = default ;
    GetMonoRecordingRequest(GetMonoRecordingRequest &&) = default ;
    GetMonoRecordingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMonoRecordingRequest() = default ;
    GetMonoRecordingRequest& operator=(const GetMonoRecordingRequest &) = default ;
    GetMonoRecordingRequest& operator=(GetMonoRecordingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && return this->expireSeconds_ == nullptr && return this->instanceId_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline GetMonoRecordingRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // expireSeconds Field Functions 
    bool hasExpireSeconds() const { return this->expireSeconds_ != nullptr;};
    void deleteExpireSeconds() { this->expireSeconds_ = nullptr;};
    inline int64_t expireSeconds() const { DARABONBA_PTR_GET_DEFAULT(expireSeconds_, 0L) };
    inline GetMonoRecordingRequest& setExpireSeconds(int64_t expireSeconds) { DARABONBA_PTR_SET_VALUE(expireSeconds_, expireSeconds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetMonoRecordingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<int64_t> expireSeconds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
