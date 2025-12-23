// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class DescribeWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    DescribeWorkflowRequest() = default ;
    DescribeWorkflowRequest(const DescribeWorkflowRequest &) = default ;
    DescribeWorkflowRequest(DescribeWorkflowRequest &&) = default ;
    DescribeWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkflowRequest() = default ;
    DescribeWorkflowRequest& operator=(const DescribeWorkflowRequest &) = default ;
    DescribeWorkflowRequest& operator=(DescribeWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspaceId_ == nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DescribeWorkflowRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
