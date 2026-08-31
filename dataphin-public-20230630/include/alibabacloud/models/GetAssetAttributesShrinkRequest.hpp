// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETATTRIBUTESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETASSETATTRIBUTESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAssetAttributesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetAttributesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(QueryCommand, queryCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetAttributesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(QueryCommand, queryCommandShrink_);
    };
    GetAssetAttributesShrinkRequest() = default ;
    GetAssetAttributesShrinkRequest(const GetAssetAttributesShrinkRequest &) = default ;
    GetAssetAttributesShrinkRequest(GetAssetAttributesShrinkRequest &&) = default ;
    GetAssetAttributesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetAttributesShrinkRequest() = default ;
    GetAssetAttributesShrinkRequest& operator=(const GetAssetAttributesShrinkRequest &) = default ;
    GetAssetAttributesShrinkRequest& operator=(GetAssetAttributesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->queryCommandShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetAssetAttributesShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline GetAssetAttributesShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // queryCommandShrink Field Functions 
    bool hasQueryCommandShrink() const { return this->queryCommandShrink_ != nullptr;};
    void deleteQueryCommandShrink() { this->queryCommandShrink_ = nullptr;};
    inline string getQueryCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(queryCommandShrink_, "") };
    inline GetAssetAttributesShrinkRequest& setQueryCommandShrink(string queryCommandShrink) { DARABONBA_PTR_SET_VALUE(queryCommandShrink_, queryCommandShrink) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
    // The query instruction.
    // 
    // This parameter is required.
    shared_ptr<string> queryCommandShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
