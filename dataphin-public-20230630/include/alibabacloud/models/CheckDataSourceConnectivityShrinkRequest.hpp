// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDATASOURCECONNECTIVITYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKDATASOURCECONNECTIVITYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CheckDataSourceConnectivityShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDataSourceConnectivityShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCommand, checkCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDataSourceConnectivityShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCommand, checkCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CheckDataSourceConnectivityShrinkRequest() = default ;
    CheckDataSourceConnectivityShrinkRequest(const CheckDataSourceConnectivityShrinkRequest &) = default ;
    CheckDataSourceConnectivityShrinkRequest(CheckDataSourceConnectivityShrinkRequest &&) = default ;
    CheckDataSourceConnectivityShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDataSourceConnectivityShrinkRequest() = default ;
    CheckDataSourceConnectivityShrinkRequest& operator=(const CheckDataSourceConnectivityShrinkRequest &) = default ;
    CheckDataSourceConnectivityShrinkRequest& operator=(CheckDataSourceConnectivityShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkCommandShrink_ != nullptr
        && this->opTenantId_ != nullptr; };
    // checkCommandShrink Field Functions 
    bool hasCheckCommandShrink() const { return this->checkCommandShrink_ != nullptr;};
    void deleteCheckCommandShrink() { this->checkCommandShrink_ = nullptr;};
    inline string checkCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(checkCommandShrink_, "") };
    inline CheckDataSourceConnectivityShrinkRequest& setCheckCommandShrink(string checkCommandShrink) { DARABONBA_PTR_SET_VALUE(checkCommandShrink_, checkCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CheckDataSourceConnectivityShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> checkCommandShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
