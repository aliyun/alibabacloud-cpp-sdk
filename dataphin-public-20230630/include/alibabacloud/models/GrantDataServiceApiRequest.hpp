// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTDATASERVICEAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTDATASERVICEAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GrantDataServiceApiRequestGrantCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GrantDataServiceApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantDataServiceApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GrantCommand, grantCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GrantDataServiceApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantCommand, grantCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GrantDataServiceApiRequest() = default ;
    GrantDataServiceApiRequest(const GrantDataServiceApiRequest &) = default ;
    GrantDataServiceApiRequest(GrantDataServiceApiRequest &&) = default ;
    GrantDataServiceApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantDataServiceApiRequest() = default ;
    GrantDataServiceApiRequest& operator=(const GrantDataServiceApiRequest &) = default ;
    GrantDataServiceApiRequest& operator=(GrantDataServiceApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->grantCommand_ != nullptr
        && this->opTenantId_ != nullptr && this->projectId_ != nullptr; };
    // grantCommand Field Functions 
    bool hasGrantCommand() const { return this->grantCommand_ != nullptr;};
    void deleteGrantCommand() { this->grantCommand_ = nullptr;};
    inline const GrantDataServiceApiRequestGrantCommand & grantCommand() const { DARABONBA_PTR_GET_CONST(grantCommand_, GrantDataServiceApiRequestGrantCommand) };
    inline GrantDataServiceApiRequestGrantCommand grantCommand() { DARABONBA_PTR_GET(grantCommand_, GrantDataServiceApiRequestGrantCommand) };
    inline GrantDataServiceApiRequest& setGrantCommand(const GrantDataServiceApiRequestGrantCommand & grantCommand) { DARABONBA_PTR_SET_VALUE(grantCommand_, grantCommand) };
    inline GrantDataServiceApiRequest& setGrantCommand(GrantDataServiceApiRequestGrantCommand && grantCommand) { DARABONBA_PTR_SET_RVALUE(grantCommand_, grantCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GrantDataServiceApiRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline GrantDataServiceApiRequest& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<GrantDataServiceApiRequestGrantCommand> grantCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
