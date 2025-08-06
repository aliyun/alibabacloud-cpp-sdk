// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTACHMENTATTRIBUTESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTACHMENTATTRIBUTESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceAttachmentAttributesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAttachmentAttributesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAttachmentAttributesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
    };
    DescribeInstanceAttachmentAttributesResponseBodyInstances() = default ;
    DescribeInstanceAttachmentAttributesResponseBodyInstances(const DescribeInstanceAttachmentAttributesResponseBodyInstances &) = default ;
    DescribeInstanceAttachmentAttributesResponseBodyInstances(DescribeInstanceAttachmentAttributesResponseBodyInstances &&) = default ;
    DescribeInstanceAttachmentAttributesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAttachmentAttributesResponseBodyInstances() = default ;
    DescribeInstanceAttachmentAttributesResponseBodyInstances& operator=(const DescribeInstanceAttachmentAttributesResponseBodyInstances &) = default ;
    DescribeInstanceAttachmentAttributesResponseBodyInstances& operator=(DescribeInstanceAttachmentAttributesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instance_ != nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const vector<Models::DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance> & instance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Models::DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance>) };
    inline vector<Models::DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance> instance() { DARABONBA_PTR_GET(instance_, vector<Models::DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance>) };
    inline DescribeInstanceAttachmentAttributesResponseBodyInstances& setInstance(const vector<Models::DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline DescribeInstanceAttachmentAttributesResponseBodyInstances& setInstance(vector<Models::DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance>> instance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
