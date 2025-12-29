// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeCustomAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DescribeCustomAgentRequest() = default ;
    DescribeCustomAgentRequest(const DescribeCustomAgentRequest &) = default ;
    DescribeCustomAgentRequest(DescribeCustomAgentRequest &&) = default ;
    DescribeCustomAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomAgentRequest() = default ;
    DescribeCustomAgentRequest& operator=(const DescribeCustomAgentRequest &) = default ;
    DescribeCustomAgentRequest& operator=(DescribeCustomAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customAgentId_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // customAgentId Field Functions 
    bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
    void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
    inline string customAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
    inline DescribeCustomAgentRequest& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DescribeCustomAgentRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> customAgentId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
