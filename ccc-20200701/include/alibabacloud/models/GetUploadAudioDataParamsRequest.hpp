// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADAUDIODATAPARAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADAUDIODATAPARAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetUploadAudioDataParamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadAudioDataParamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadAudioDataParamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetUploadAudioDataParamsRequest() = default ;
    GetUploadAudioDataParamsRequest(const GetUploadAudioDataParamsRequest &) = default ;
    GetUploadAudioDataParamsRequest(GetUploadAudioDataParamsRequest &&) = default ;
    GetUploadAudioDataParamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadAudioDataParamsRequest() = default ;
    GetUploadAudioDataParamsRequest& operator=(const GetUploadAudioDataParamsRequest &) = default ;
    GetUploadAudioDataParamsRequest& operator=(GetUploadAudioDataParamsRequest &&) = default ;
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
    inline GetUploadAudioDataParamsRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetUploadAudioDataParamsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
