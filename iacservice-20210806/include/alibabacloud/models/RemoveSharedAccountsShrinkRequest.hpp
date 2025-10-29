// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESHAREDACCOUNTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVESHAREDACCOUNTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class RemoveSharedAccountsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveSharedAccountsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accountIds, accountIdsShrink_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveSharedAccountsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accountIds, accountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    RemoveSharedAccountsShrinkRequest() = default ;
    RemoveSharedAccountsShrinkRequest(const RemoveSharedAccountsShrinkRequest &) = default ;
    RemoveSharedAccountsShrinkRequest(RemoveSharedAccountsShrinkRequest &&) = default ;
    RemoveSharedAccountsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveSharedAccountsShrinkRequest() = default ;
    RemoveSharedAccountsShrinkRequest& operator=(const RemoveSharedAccountsShrinkRequest &) = default ;
    RemoveSharedAccountsShrinkRequest& operator=(RemoveSharedAccountsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIdsShrink_ == nullptr
        && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr; };
    // accountIdsShrink Field Functions 
    bool hasAccountIdsShrink() const { return this->accountIdsShrink_ != nullptr;};
    void deleteAccountIdsShrink() { this->accountIdsShrink_ = nullptr;};
    inline string accountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(accountIdsShrink_, "") };
    inline RemoveSharedAccountsShrinkRequest& setAccountIdsShrink(string accountIdsShrink) { DARABONBA_PTR_SET_VALUE(accountIdsShrink_, accountIdsShrink) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline RemoveSharedAccountsShrinkRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline RemoveSharedAccountsShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accountIdsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
