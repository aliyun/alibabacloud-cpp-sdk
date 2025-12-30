// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCOMPUTESOURCECONNECTIVITYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKCOMPUTESOURCECONNECTIVITYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CheckComputeSourceConnectivityShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckComputeSourceConnectivityShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCommand, checkCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckComputeSourceConnectivityShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCommand, checkCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CheckComputeSourceConnectivityShrinkRequest() = default ;
    CheckComputeSourceConnectivityShrinkRequest(const CheckComputeSourceConnectivityShrinkRequest &) = default ;
    CheckComputeSourceConnectivityShrinkRequest(CheckComputeSourceConnectivityShrinkRequest &&) = default ;
    CheckComputeSourceConnectivityShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckComputeSourceConnectivityShrinkRequest() = default ;
    CheckComputeSourceConnectivityShrinkRequest& operator=(const CheckComputeSourceConnectivityShrinkRequest &) = default ;
    CheckComputeSourceConnectivityShrinkRequest& operator=(CheckComputeSourceConnectivityShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr; };
    // checkCommandShrink Field Functions 
    bool hasCheckCommandShrink() const { return this->checkCommandShrink_ != nullptr;};
    void deleteCheckCommandShrink() { this->checkCommandShrink_ = nullptr;};
    inline string getCheckCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(checkCommandShrink_, "") };
    inline CheckComputeSourceConnectivityShrinkRequest& setCheckCommandShrink(string checkCommandShrink) { DARABONBA_PTR_SET_VALUE(checkCommandShrink_, checkCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CheckComputeSourceConnectivityShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<string> checkCommandShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
