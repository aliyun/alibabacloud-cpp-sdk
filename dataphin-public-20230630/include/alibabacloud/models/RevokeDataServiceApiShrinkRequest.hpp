// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEDATASERVICEAPISHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEDATASERVICEAPISHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RevokeDataServiceApiShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeDataServiceApiShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RevokeCommand, revokeCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeDataServiceApiShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RevokeCommand, revokeCommandShrink_);
    };
    RevokeDataServiceApiShrinkRequest() = default ;
    RevokeDataServiceApiShrinkRequest(const RevokeDataServiceApiShrinkRequest &) = default ;
    RevokeDataServiceApiShrinkRequest(RevokeDataServiceApiShrinkRequest &&) = default ;
    RevokeDataServiceApiShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeDataServiceApiShrinkRequest() = default ;
    RevokeDataServiceApiShrinkRequest& operator=(const RevokeDataServiceApiShrinkRequest &) = default ;
    RevokeDataServiceApiShrinkRequest& operator=(RevokeDataServiceApiShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->projectId_ == nullptr && return this->revokeCommandShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RevokeDataServiceApiShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline RevokeDataServiceApiShrinkRequest& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // revokeCommandShrink Field Functions 
    bool hasRevokeCommandShrink() const { return this->revokeCommandShrink_ != nullptr;};
    void deleteRevokeCommandShrink() { this->revokeCommandShrink_ = nullptr;};
    inline string revokeCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(revokeCommandShrink_, "") };
    inline RevokeDataServiceApiShrinkRequest& setRevokeCommandShrink(string revokeCommandShrink) { DARABONBA_PTR_SET_VALUE(revokeCommandShrink_, revokeCommandShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> revokeCommandShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
