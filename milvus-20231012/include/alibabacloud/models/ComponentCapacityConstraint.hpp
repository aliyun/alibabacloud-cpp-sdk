// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPONENTCAPACITYCONSTRAINT_HPP_
#define ALIBABACLOUD_MODELS_COMPONENTCAPACITYCONSTRAINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class ComponentCapacityConstraint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ComponentCapacityConstraint& obj) { 
      DARABONBA_PTR_TO_JSON(componentType, componentType_);
      DARABONBA_PTR_TO_JSON(maxCapacity, maxCapacity_);
      DARABONBA_PTR_TO_JSON(minCapacity, minCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, ComponentCapacityConstraint& obj) { 
      DARABONBA_PTR_FROM_JSON(componentType, componentType_);
      DARABONBA_PTR_FROM_JSON(maxCapacity, maxCapacity_);
      DARABONBA_PTR_FROM_JSON(minCapacity, minCapacity_);
    };
    ComponentCapacityConstraint() = default ;
    ComponentCapacityConstraint(const ComponentCapacityConstraint &) = default ;
    ComponentCapacityConstraint(ComponentCapacityConstraint &&) = default ;
    ComponentCapacityConstraint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ComponentCapacityConstraint() = default ;
    ComponentCapacityConstraint& operator=(const ComponentCapacityConstraint &) = default ;
    ComponentCapacityConstraint& operator=(ComponentCapacityConstraint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentType_ == nullptr
        && this->maxCapacity_ == nullptr && this->minCapacity_ == nullptr; };
    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline ComponentCapacityConstraint& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // maxCapacity Field Functions 
    bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
    void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
    inline int32_t getMaxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0) };
    inline ComponentCapacityConstraint& setMaxCapacity(int32_t maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


    // minCapacity Field Functions 
    bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
    void deleteMinCapacity() { this->minCapacity_ = nullptr;};
    inline int32_t getMinCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0) };
    inline ComponentCapacityConstraint& setMinCapacity(int32_t minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


  protected:
    shared_ptr<string> componentType_ {};
    shared_ptr<int32_t> maxCapacity_ {};
    shared_ptr<int32_t> minCapacity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
