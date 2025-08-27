// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESPONSEBODYCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESPONSEBODYCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeClusterResponseBodyComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResponseBodyComponents& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResponseBodyComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
    };
    DescribeClusterResponseBodyComponents() = default ;
    DescribeClusterResponseBodyComponents(const DescribeClusterResponseBodyComponents &) = default ;
    DescribeClusterResponseBodyComponents(DescribeClusterResponseBodyComponents &&) = default ;
    DescribeClusterResponseBodyComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResponseBodyComponents() = default ;
    DescribeClusterResponseBodyComponents& operator=(const DescribeClusterResponseBodyComponents &) = default ;
    DescribeClusterResponseBodyComponents& operator=(DescribeClusterResponseBodyComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentId_ != nullptr
        && this->componentType_ != nullptr; };
    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline string componentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
    inline DescribeClusterResponseBodyComponents& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string componentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline DescribeClusterResponseBodyComponents& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


  protected:
    // The component ID.
    std::shared_ptr<string> componentId_ = nullptr;
    // The component type.
    // 
    // Valid values:
    // 
    // *   ARMS
    // *   ACKEdge
    std::shared_ptr<string> componentType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
