// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTQUALITYWATCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPSERTQUALITYWATCHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpsertQualityWatchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertQualityWatchShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpsertCommand, upsertCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertQualityWatchShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpsertCommand, upsertCommandShrink_);
    };
    UpsertQualityWatchShrinkRequest() = default ;
    UpsertQualityWatchShrinkRequest(const UpsertQualityWatchShrinkRequest &) = default ;
    UpsertQualityWatchShrinkRequest(UpsertQualityWatchShrinkRequest &&) = default ;
    UpsertQualityWatchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertQualityWatchShrinkRequest() = default ;
    UpsertQualityWatchShrinkRequest& operator=(const UpsertQualityWatchShrinkRequest &) = default ;
    UpsertQualityWatchShrinkRequest& operator=(UpsertQualityWatchShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->upsertCommandShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpsertQualityWatchShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // upsertCommandShrink Field Functions 
    bool hasUpsertCommandShrink() const { return this->upsertCommandShrink_ != nullptr;};
    void deleteUpsertCommandShrink() { this->upsertCommandShrink_ = nullptr;};
    inline string getUpsertCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(upsertCommandShrink_, "") };
    inline UpsertQualityWatchShrinkRequest& setUpsertCommandShrink(string upsertCommandShrink) { DARABONBA_PTR_SET_VALUE(upsertCommandShrink_, upsertCommandShrink) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> upsertCommandShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
