// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECTIFYFLOWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRECTIFYFLOWSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetRectifyFlowShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRectifyFlowShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GetQuery, getQueryShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRectifyFlowShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GetQuery, getQueryShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    GetRectifyFlowShrinkRequest() = default ;
    GetRectifyFlowShrinkRequest(const GetRectifyFlowShrinkRequest &) = default ;
    GetRectifyFlowShrinkRequest(GetRectifyFlowShrinkRequest &&) = default ;
    GetRectifyFlowShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRectifyFlowShrinkRequest() = default ;
    GetRectifyFlowShrinkRequest& operator=(const GetRectifyFlowShrinkRequest &) = default ;
    GetRectifyFlowShrinkRequest& operator=(GetRectifyFlowShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->getQueryShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // getQueryShrink Field Functions 
    bool hasGetQueryShrink() const { return this->getQueryShrink_ != nullptr;};
    void deleteGetQueryShrink() { this->getQueryShrink_ = nullptr;};
    inline string getGetQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(getQueryShrink_, "") };
    inline GetRectifyFlowShrinkRequest& setGetQueryShrink(string getQueryShrink) { DARABONBA_PTR_SET_VALUE(getQueryShrink_, getQueryShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetRectifyFlowShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline GetRectifyFlowShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The business request parameters.
    // 
    // This parameter is required.
    shared_ptr<string> getQueryShrink_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The operator ID.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
