// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTICHANNELRECORDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMULTICHANNELRECORDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetMultiChannelRecordingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiChannelRecordingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiChannelRecordingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetMultiChannelRecordingRequest() = default ;
    GetMultiChannelRecordingRequest(const GetMultiChannelRecordingRequest &) = default ;
    GetMultiChannelRecordingRequest(GetMultiChannelRecordingRequest &&) = default ;
    GetMultiChannelRecordingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiChannelRecordingRequest() = default ;
    GetMultiChannelRecordingRequest& operator=(const GetMultiChannelRecordingRequest &) = default ;
    GetMultiChannelRecordingRequest& operator=(GetMultiChannelRecordingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactId_ != nullptr
        && this->instanceId_ != nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline GetMultiChannelRecordingRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetMultiChannelRecordingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


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
