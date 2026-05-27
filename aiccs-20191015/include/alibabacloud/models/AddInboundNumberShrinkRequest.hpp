// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDINBOUNDNUMBERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDINBOUNDNUMBERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class AddInboundNumberShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddInboundNumberShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationCode, applicationCode_);
      DARABONBA_PTR_TO_JSON(InboundNumbers, inboundNumbersShrink_);
      DARABONBA_PTR_TO_JSON(InboundType, inboundType_);
      DARABONBA_PTR_TO_JSON(LineCode, lineCode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, AddInboundNumberShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationCode, applicationCode_);
      DARABONBA_PTR_FROM_JSON(InboundNumbers, inboundNumbersShrink_);
      DARABONBA_PTR_FROM_JSON(InboundType, inboundType_);
      DARABONBA_PTR_FROM_JSON(LineCode, lineCode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    AddInboundNumberShrinkRequest() = default ;
    AddInboundNumberShrinkRequest(const AddInboundNumberShrinkRequest &) = default ;
    AddInboundNumberShrinkRequest(AddInboundNumberShrinkRequest &&) = default ;
    AddInboundNumberShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddInboundNumberShrinkRequest() = default ;
    AddInboundNumberShrinkRequest& operator=(const AddInboundNumberShrinkRequest &) = default ;
    AddInboundNumberShrinkRequest& operator=(AddInboundNumberShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationCode_ == nullptr
        && this->inboundNumbersShrink_ == nullptr && this->inboundType_ == nullptr && this->lineCode_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // applicationCode Field Functions 
    bool hasApplicationCode() const { return this->applicationCode_ != nullptr;};
    void deleteApplicationCode() { this->applicationCode_ = nullptr;};
    inline string getApplicationCode() const { DARABONBA_PTR_GET_DEFAULT(applicationCode_, "") };
    inline AddInboundNumberShrinkRequest& setApplicationCode(string applicationCode) { DARABONBA_PTR_SET_VALUE(applicationCode_, applicationCode) };


    // inboundNumbersShrink Field Functions 
    bool hasInboundNumbersShrink() const { return this->inboundNumbersShrink_ != nullptr;};
    void deleteInboundNumbersShrink() { this->inboundNumbersShrink_ = nullptr;};
    inline string getInboundNumbersShrink() const { DARABONBA_PTR_GET_DEFAULT(inboundNumbersShrink_, "") };
    inline AddInboundNumberShrinkRequest& setInboundNumbersShrink(string inboundNumbersShrink) { DARABONBA_PTR_SET_VALUE(inboundNumbersShrink_, inboundNumbersShrink) };


    // inboundType Field Functions 
    bool hasInboundType() const { return this->inboundType_ != nullptr;};
    void deleteInboundType() { this->inboundType_ = nullptr;};
    inline int64_t getInboundType() const { DARABONBA_PTR_GET_DEFAULT(inboundType_, 0L) };
    inline AddInboundNumberShrinkRequest& setInboundType(int64_t inboundType) { DARABONBA_PTR_SET_VALUE(inboundType_, inboundType) };


    // lineCode Field Functions 
    bool hasLineCode() const { return this->lineCode_ != nullptr;};
    void deleteLineCode() { this->lineCode_ = nullptr;};
    inline string getLineCode() const { DARABONBA_PTR_GET_DEFAULT(lineCode_, "") };
    inline AddInboundNumberShrinkRequest& setLineCode(string lineCode) { DARABONBA_PTR_SET_VALUE(lineCode_, lineCode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddInboundNumberShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddInboundNumberShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddInboundNumberShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationCode_ {};
    // This parameter is required.
    shared_ptr<string> inboundNumbersShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> inboundType_ {};
    shared_ptr<string> lineCode_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
