// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMANUALTASKINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMANUALTASKINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class DescribeManualTaskInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeManualTaskInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeManualTaskInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    DescribeManualTaskInstanceRequest() = default ;
    DescribeManualTaskInstanceRequest(const DescribeManualTaskInstanceRequest &) = default ;
    DescribeManualTaskInstanceRequest(DescribeManualTaskInstanceRequest &&) = default ;
    DescribeManualTaskInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeManualTaskInstanceRequest() = default ;
    DescribeManualTaskInstanceRequest& operator=(const DescribeManualTaskInstanceRequest &) = default ;
    DescribeManualTaskInstanceRequest& operator=(DescribeManualTaskInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspaceId_ == nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DescribeManualTaskInstanceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
