// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEARLYMEDIARECORDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEARLYMEDIARECORDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetEarlyMediaRecordingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEarlyMediaRecordingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEarlyMediaRecordingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetEarlyMediaRecordingRequest() = default ;
    GetEarlyMediaRecordingRequest(const GetEarlyMediaRecordingRequest &) = default ;
    GetEarlyMediaRecordingRequest(GetEarlyMediaRecordingRequest &&) = default ;
    GetEarlyMediaRecordingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEarlyMediaRecordingRequest() = default ;
    GetEarlyMediaRecordingRequest& operator=(const GetEarlyMediaRecordingRequest &) = default ;
    GetEarlyMediaRecordingRequest& operator=(GetEarlyMediaRecordingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && return this->instanceId_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline GetEarlyMediaRecordingRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetEarlyMediaRecordingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> contactId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
