// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMEPHYSICALNODESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESUMEPHYSICALNODESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ResumePhysicalNodeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumePhysicalNodeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ResumeCommand, resumeCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ResumePhysicalNodeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ResumeCommand, resumeCommandShrink_);
    };
    ResumePhysicalNodeShrinkRequest() = default ;
    ResumePhysicalNodeShrinkRequest(const ResumePhysicalNodeShrinkRequest &) = default ;
    ResumePhysicalNodeShrinkRequest(ResumePhysicalNodeShrinkRequest &&) = default ;
    ResumePhysicalNodeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumePhysicalNodeShrinkRequest() = default ;
    ResumePhysicalNodeShrinkRequest& operator=(const ResumePhysicalNodeShrinkRequest &) = default ;
    ResumePhysicalNodeShrinkRequest& operator=(ResumePhysicalNodeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->env_ != nullptr
        && this->opTenantId_ != nullptr && this->resumeCommandShrink_ != nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ResumePhysicalNodeShrinkRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ResumePhysicalNodeShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // resumeCommandShrink Field Functions 
    bool hasResumeCommandShrink() const { return this->resumeCommandShrink_ != nullptr;};
    void deleteResumeCommandShrink() { this->resumeCommandShrink_ = nullptr;};
    inline string resumeCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(resumeCommandShrink_, "") };
    inline ResumePhysicalNodeShrinkRequest& setResumeCommandShrink(string resumeCommandShrink) { DARABONBA_PTR_SET_VALUE(resumeCommandShrink_, resumeCommandShrink) };


  protected:
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resumeCommandShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
