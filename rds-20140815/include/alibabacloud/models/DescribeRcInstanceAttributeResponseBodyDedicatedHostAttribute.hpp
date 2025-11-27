// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODYDEDICATEDHOSTATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODYDEDICATEDHOSTATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostName, dedicatedHostName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostName, dedicatedHostName_);
    };
    DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute() = default ;
    DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute(const DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute &) = default ;
    DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute(DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute &&) = default ;
    DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute() = default ;
    DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute& operator=(const DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute &) = default ;
    DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute& operator=(DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHostId_ == nullptr
        && return this->dedicatedHostName_ == nullptr; };
    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string dedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // dedicatedHostName Field Functions 
    bool hasDedicatedHostName() const { return this->dedicatedHostName_ != nullptr;};
    void deleteDedicatedHostName() { this->dedicatedHostName_ = nullptr;};
    inline string dedicatedHostName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostName_, "") };
    inline DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute& setDedicatedHostName(string dedicatedHostName) { DARABONBA_PTR_SET_VALUE(dedicatedHostName_, dedicatedHostName) };


  protected:
    // The ID of the dedicated host.
    std::shared_ptr<string> dedicatedHostId_ = nullptr;
    // The name of the dedicated host.
    std::shared_ptr<string> dedicatedHostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
