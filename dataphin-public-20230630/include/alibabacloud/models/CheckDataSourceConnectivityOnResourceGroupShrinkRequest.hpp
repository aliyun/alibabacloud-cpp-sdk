// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDATASOURCECONNECTIVITYONRESOURCEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKDATASOURCECONNECTIVITYONRESOURCEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CheckDataSourceConnectivityOnResourceGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDataSourceConnectivityOnResourceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCommand, checkCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDataSourceConnectivityOnResourceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCommand, checkCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    CheckDataSourceConnectivityOnResourceGroupShrinkRequest() = default ;
    CheckDataSourceConnectivityOnResourceGroupShrinkRequest(const CheckDataSourceConnectivityOnResourceGroupShrinkRequest &) = default ;
    CheckDataSourceConnectivityOnResourceGroupShrinkRequest(CheckDataSourceConnectivityOnResourceGroupShrinkRequest &&) = default ;
    CheckDataSourceConnectivityOnResourceGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDataSourceConnectivityOnResourceGroupShrinkRequest() = default ;
    CheckDataSourceConnectivityOnResourceGroupShrinkRequest& operator=(const CheckDataSourceConnectivityOnResourceGroupShrinkRequest &) = default ;
    CheckDataSourceConnectivityOnResourceGroupShrinkRequest& operator=(CheckDataSourceConnectivityOnResourceGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // checkCommandShrink Field Functions 
    bool hasCheckCommandShrink() const { return this->checkCommandShrink_ != nullptr;};
    void deleteCheckCommandShrink() { this->checkCommandShrink_ = nullptr;};
    inline string getCheckCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(checkCommandShrink_, "") };
    inline CheckDataSourceConnectivityOnResourceGroupShrinkRequest& setCheckCommandShrink(string checkCommandShrink) { DARABONBA_PTR_SET_VALUE(checkCommandShrink_, checkCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CheckDataSourceConnectivityOnResourceGroupShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline CheckDataSourceConnectivityOnResourceGroupShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // This parameter is required.
    shared_ptr<string> checkCommandShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
