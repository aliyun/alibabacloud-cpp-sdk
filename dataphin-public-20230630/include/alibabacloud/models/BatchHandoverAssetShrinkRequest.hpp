// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHHANDOVERASSETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHHANDOVERASSETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class BatchHandoverAssetShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchHandoverAssetShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HandoverCommand, handoverCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchHandoverAssetShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HandoverCommand, handoverCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    BatchHandoverAssetShrinkRequest() = default ;
    BatchHandoverAssetShrinkRequest(const BatchHandoverAssetShrinkRequest &) = default ;
    BatchHandoverAssetShrinkRequest(BatchHandoverAssetShrinkRequest &&) = default ;
    BatchHandoverAssetShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchHandoverAssetShrinkRequest() = default ;
    BatchHandoverAssetShrinkRequest& operator=(const BatchHandoverAssetShrinkRequest &) = default ;
    BatchHandoverAssetShrinkRequest& operator=(BatchHandoverAssetShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->handoverCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // handoverCommandShrink Field Functions 
    bool hasHandoverCommandShrink() const { return this->handoverCommandShrink_ != nullptr;};
    void deleteHandoverCommandShrink() { this->handoverCommandShrink_ = nullptr;};
    inline string getHandoverCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(handoverCommandShrink_, "") };
    inline BatchHandoverAssetShrinkRequest& setHandoverCommandShrink(string handoverCommandShrink) { DARABONBA_PTR_SET_VALUE(handoverCommandShrink_, handoverCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline BatchHandoverAssetShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline BatchHandoverAssetShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // This parameter is required.
    shared_ptr<string> handoverCommandShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
