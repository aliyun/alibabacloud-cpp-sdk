// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCENEDEFENSEPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCENEDEFENSEPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSceneDefensePoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSceneDefensePoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSceneDefensePoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    DescribeSceneDefensePoliciesRequest() = default ;
    DescribeSceneDefensePoliciesRequest(const DescribeSceneDefensePoliciesRequest &) = default ;
    DescribeSceneDefensePoliciesRequest(DescribeSceneDefensePoliciesRequest &&) = default ;
    DescribeSceneDefensePoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSceneDefensePoliciesRequest() = default ;
    DescribeSceneDefensePoliciesRequest& operator=(const DescribeSceneDefensePoliciesRequest &) = default ;
    DescribeSceneDefensePoliciesRequest& operator=(DescribeSceneDefensePoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceGroupId_ != nullptr
        && this->status_ != nullptr && this->template_ != nullptr; };
    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeSceneDefensePoliciesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSceneDefensePoliciesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline DescribeSceneDefensePoliciesRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


  protected:
    // The ID of the resource group to which the instance belongs in Resource Management.
    // 
    // If you do not configure this parameter, the instance belongs to the default resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the policy. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: pending enabling
    // *   **2**: enabled
    // *   **3**: expired
    std::shared_ptr<string> status_ = nullptr;
    // The type of the template that is used to create the policy. Valid values:
    // 
    // *   **promotion**: the Important Activity template
    // *   **bypass**: the Forward All template
    std::shared_ptr<string> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
