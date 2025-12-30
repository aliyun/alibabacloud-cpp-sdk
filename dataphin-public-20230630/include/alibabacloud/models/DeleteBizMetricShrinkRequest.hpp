// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBIZMETRICSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBIZMETRICSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteBizMetricShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBizMetricShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteBizMetricCommand, deleteBizMetricCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBizMetricShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteBizMetricCommand, deleteBizMetricCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteBizMetricShrinkRequest() = default ;
    DeleteBizMetricShrinkRequest(const DeleteBizMetricShrinkRequest &) = default ;
    DeleteBizMetricShrinkRequest(DeleteBizMetricShrinkRequest &&) = default ;
    DeleteBizMetricShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBizMetricShrinkRequest() = default ;
    DeleteBizMetricShrinkRequest& operator=(const DeleteBizMetricShrinkRequest &) = default ;
    DeleteBizMetricShrinkRequest& operator=(DeleteBizMetricShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteBizMetricCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteBizMetricCommandShrink Field Functions 
    bool hasDeleteBizMetricCommandShrink() const { return this->deleteBizMetricCommandShrink_ != nullptr;};
    void deleteDeleteBizMetricCommandShrink() { this->deleteBizMetricCommandShrink_ = nullptr;};
    inline string getDeleteBizMetricCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(deleteBizMetricCommandShrink_, "") };
    inline DeleteBizMetricShrinkRequest& setDeleteBizMetricCommandShrink(string deleteBizMetricCommandShrink) { DARABONBA_PTR_SET_VALUE(deleteBizMetricCommandShrink_, deleteBizMetricCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteBizMetricShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<string> deleteBizMetricCommandShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
