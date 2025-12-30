// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBIZMETRICSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBIZMETRICSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateBizMetricShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBizMetricShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateBizMetricCommand, updateBizMetricCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBizMetricShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateBizMetricCommand, updateBizMetricCommandShrink_);
    };
    UpdateBizMetricShrinkRequest() = default ;
    UpdateBizMetricShrinkRequest(const UpdateBizMetricShrinkRequest &) = default ;
    UpdateBizMetricShrinkRequest(UpdateBizMetricShrinkRequest &&) = default ;
    UpdateBizMetricShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBizMetricShrinkRequest() = default ;
    UpdateBizMetricShrinkRequest& operator=(const UpdateBizMetricShrinkRequest &) = default ;
    UpdateBizMetricShrinkRequest& operator=(UpdateBizMetricShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateBizMetricCommandShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateBizMetricShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateBizMetricCommandShrink Field Functions 
    bool hasUpdateBizMetricCommandShrink() const { return this->updateBizMetricCommandShrink_ != nullptr;};
    void deleteUpdateBizMetricCommandShrink() { this->updateBizMetricCommandShrink_ = nullptr;};
    inline string getUpdateBizMetricCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(updateBizMetricCommandShrink_, "") };
    inline UpdateBizMetricShrinkRequest& setUpdateBizMetricCommandShrink(string updateBizMetricCommandShrink) { DARABONBA_PTR_SET_VALUE(updateBizMetricCommandShrink_, updateBizMetricCommandShrink) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> updateBizMetricCommandShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
