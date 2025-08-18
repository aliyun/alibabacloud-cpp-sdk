// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYDATASERVICEAPPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYDATASERVICEAPPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ApplyDataServiceAppShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyDataServiceAppShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyCommand, applyCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyDataServiceAppShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyCommand, applyCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ApplyDataServiceAppShrinkRequest() = default ;
    ApplyDataServiceAppShrinkRequest(const ApplyDataServiceAppShrinkRequest &) = default ;
    ApplyDataServiceAppShrinkRequest(ApplyDataServiceAppShrinkRequest &&) = default ;
    ApplyDataServiceAppShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyDataServiceAppShrinkRequest() = default ;
    ApplyDataServiceAppShrinkRequest& operator=(const ApplyDataServiceAppShrinkRequest &) = default ;
    ApplyDataServiceAppShrinkRequest& operator=(ApplyDataServiceAppShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyCommandShrink_ != nullptr
        && this->opTenantId_ != nullptr && this->projectId_ != nullptr; };
    // applyCommandShrink Field Functions 
    bool hasApplyCommandShrink() const { return this->applyCommandShrink_ != nullptr;};
    void deleteApplyCommandShrink() { this->applyCommandShrink_ = nullptr;};
    inline string applyCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(applyCommandShrink_, "") };
    inline ApplyDataServiceAppShrinkRequest& setApplyCommandShrink(string applyCommandShrink) { DARABONBA_PTR_SET_VALUE(applyCommandShrink_, applyCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ApplyDataServiceAppShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline ApplyDataServiceAppShrinkRequest& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applyCommandShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
