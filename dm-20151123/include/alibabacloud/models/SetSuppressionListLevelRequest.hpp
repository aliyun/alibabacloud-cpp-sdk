// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSUPPRESSIONLISTLEVELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSUPPRESSIONLISTLEVELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SetSuppressionListLevelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSuppressionListLevelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SuppressionListLevel, suppressionListLevel_);
    };
    friend void from_json(const Darabonba::Json& j, SetSuppressionListLevelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SuppressionListLevel, suppressionListLevel_);
    };
    SetSuppressionListLevelRequest() = default ;
    SetSuppressionListLevelRequest(const SetSuppressionListLevelRequest &) = default ;
    SetSuppressionListLevelRequest(SetSuppressionListLevelRequest &&) = default ;
    SetSuppressionListLevelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSuppressionListLevelRequest() = default ;
    SetSuppressionListLevelRequest& operator=(const SetSuppressionListLevelRequest &) = default ;
    SetSuppressionListLevelRequest& operator=(SetSuppressionListLevelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->suppressionListLevel_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetSuppressionListLevelRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SetSuppressionListLevelRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SetSuppressionListLevelRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // suppressionListLevel Field Functions 
    bool hasSuppressionListLevel() const { return this->suppressionListLevel_ != nullptr;};
    void deleteSuppressionListLevel() { this->suppressionListLevel_ = nullptr;};
    inline string getSuppressionListLevel() const { DARABONBA_PTR_GET_DEFAULT(suppressionListLevel_, "") };
    inline SetSuppressionListLevelRequest& setSuppressionListLevel(string suppressionListLevel) { DARABONBA_PTR_SET_VALUE(suppressionListLevel_, suppressionListLevel) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> suppressionListLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
