// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETUSERIDBYOPENDINGTALKIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETUSERIDBYOPENDINGTALKIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class BatchGetUserIdByOpenDingtalkIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetUserIdByOpenDingtalkIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(openDingtalkIds, openDingtalkIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetUserIdByOpenDingtalkIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(openDingtalkIds, openDingtalkIdsShrink_);
    };
    BatchGetUserIdByOpenDingtalkIdShrinkRequest() = default ;
    BatchGetUserIdByOpenDingtalkIdShrinkRequest(const BatchGetUserIdByOpenDingtalkIdShrinkRequest &) = default ;
    BatchGetUserIdByOpenDingtalkIdShrinkRequest(BatchGetUserIdByOpenDingtalkIdShrinkRequest &&) = default ;
    BatchGetUserIdByOpenDingtalkIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetUserIdByOpenDingtalkIdShrinkRequest() = default ;
    BatchGetUserIdByOpenDingtalkIdShrinkRequest& operator=(const BatchGetUserIdByOpenDingtalkIdShrinkRequest &) = default ;
    BatchGetUserIdByOpenDingtalkIdShrinkRequest& operator=(BatchGetUserIdByOpenDingtalkIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContextShrink_ == nullptr
        && this->openDingtalkIdsShrink_ == nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline BatchGetUserIdByOpenDingtalkIdShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // openDingtalkIdsShrink Field Functions 
    bool hasOpenDingtalkIdsShrink() const { return this->openDingtalkIdsShrink_ != nullptr;};
    void deleteOpenDingtalkIdsShrink() { this->openDingtalkIdsShrink_ = nullptr;};
    inline string getOpenDingtalkIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(openDingtalkIdsShrink_, "") };
    inline BatchGetUserIdByOpenDingtalkIdShrinkRequest& setOpenDingtalkIdsShrink(string openDingtalkIdsShrink) { DARABONBA_PTR_SET_VALUE(openDingtalkIdsShrink_, openDingtalkIdsShrink) };


  protected:
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> openDingtalkIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
