// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEADHOCTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEADHOCTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ExecuteAdHocTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAdHocTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecuteCommand, executeCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAdHocTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecuteCommand, executeCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ExecuteAdHocTaskShrinkRequest() = default ;
    ExecuteAdHocTaskShrinkRequest(const ExecuteAdHocTaskShrinkRequest &) = default ;
    ExecuteAdHocTaskShrinkRequest(ExecuteAdHocTaskShrinkRequest &&) = default ;
    ExecuteAdHocTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAdHocTaskShrinkRequest() = default ;
    ExecuteAdHocTaskShrinkRequest& operator=(const ExecuteAdHocTaskShrinkRequest &) = default ;
    ExecuteAdHocTaskShrinkRequest& operator=(ExecuteAdHocTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executeCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr; };
    // executeCommandShrink Field Functions 
    bool hasExecuteCommandShrink() const { return this->executeCommandShrink_ != nullptr;};
    void deleteExecuteCommandShrink() { this->executeCommandShrink_ = nullptr;};
    inline string getExecuteCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(executeCommandShrink_, "") };
    inline ExecuteAdHocTaskShrinkRequest& setExecuteCommandShrink(string executeCommandShrink) { DARABONBA_PTR_SET_VALUE(executeCommandShrink_, executeCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ExecuteAdHocTaskShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<string> executeCommandShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
