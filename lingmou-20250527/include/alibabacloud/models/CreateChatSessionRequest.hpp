// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateChatSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(license, license_);
      DARABONBA_PTR_TO_JSON(platform, platform_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(license, license_);
      DARABONBA_PTR_FROM_JSON(platform, platform_);
    };
    CreateChatSessionRequest() = default ;
    CreateChatSessionRequest(const CreateChatSessionRequest &) = default ;
    CreateChatSessionRequest(CreateChatSessionRequest &&) = default ;
    CreateChatSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatSessionRequest() = default ;
    CreateChatSessionRequest& operator=(const CreateChatSessionRequest &) = default ;
    CreateChatSessionRequest& operator=(CreateChatSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->license_ == nullptr && return this->platform_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateChatSessionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // license Field Functions 
    bool hasLicense() const { return this->license_ != nullptr;};
    void deleteLicense() { this->license_ = nullptr;};
    inline string license() const { DARABONBA_PTR_GET_DEFAULT(license_, "") };
    inline CreateChatSessionRequest& setLicense(string license) { DARABONBA_PTR_SET_VALUE(license_, license) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateChatSessionRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> license_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
