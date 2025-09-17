// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class CreateAccessTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccessTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(TimeToLiveInDays, timeToLiveInDays_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccessTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(TimeToLiveInDays, timeToLiveInDays_);
    };
    CreateAccessTokenRequest() = default ;
    CreateAccessTokenRequest(const CreateAccessTokenRequest &) = default ;
    CreateAccessTokenRequest(CreateAccessTokenRequest &&) = default ;
    CreateAccessTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccessTokenRequest() = default ;
    CreateAccessTokenRequest& operator=(const CreateAccessTokenRequest &) = default ;
    CreateAccessTokenRequest& operator=(CreateAccessTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->timeToLiveInDays_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline CreateAccessTokenRequest& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAccessTokenRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAccessTokenRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateAccessTokenRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateAccessTokenRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // timeToLiveInDays Field Functions 
    bool hasTimeToLiveInDays() const { return this->timeToLiveInDays_ != nullptr;};
    void deleteTimeToLiveInDays() { this->timeToLiveInDays_ = nullptr;};
    inline string timeToLiveInDays() const { DARABONBA_PTR_GET_DEFAULT(timeToLiveInDays_, "") };
    inline CreateAccessTokenRequest& setTimeToLiveInDays(string timeToLiveInDays) { DARABONBA_PTR_SET_VALUE(timeToLiveInDays_, timeToLiveInDays) };


  protected:
    // The maximum number of times that the activation code can be used to import the information of migration sources. Valid values: 1 to 1000.
    // 
    // Default value: 100.
    std::shared_ptr<string> count_ = nullptr;
    // The description of the activation code.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the activation code. The name must be 2 to 128 characters in length. It must start with a letter and cannot start with http:// or https://. It can contain digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The validity period of the activation code. The activation code can no longer be used to import the information of migration sources after the code expires. Unit: day. Valid values: 1 to 90.
    // 
    // Default value: 30.
    std::shared_ptr<string> timeToLiveInDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
