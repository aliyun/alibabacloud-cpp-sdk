// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCOMPONENTSRESPONSEBODYCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCOMPONENTSRESPONSEBODYCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCasterComponentsResponseBodyComponentsComponent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterComponentsResponseBodyComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterComponentsResponseBodyComponents& obj) { 
      DARABONBA_PTR_TO_JSON(Component, component_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterComponentsResponseBodyComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(Component, component_);
    };
    DescribeCasterComponentsResponseBodyComponents() = default ;
    DescribeCasterComponentsResponseBodyComponents(const DescribeCasterComponentsResponseBodyComponents &) = default ;
    DescribeCasterComponentsResponseBodyComponents(DescribeCasterComponentsResponseBodyComponents &&) = default ;
    DescribeCasterComponentsResponseBodyComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterComponentsResponseBodyComponents() = default ;
    DescribeCasterComponentsResponseBodyComponents& operator=(const DescribeCasterComponentsResponseBodyComponents &) = default ;
    DescribeCasterComponentsResponseBodyComponents& operator=(DescribeCasterComponentsResponseBodyComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->component_ == nullptr; };
    // component Field Functions 
    bool hasComponent() const { return this->component_ != nullptr;};
    void deleteComponent() { this->component_ = nullptr;};
    inline const vector<Models::DescribeCasterComponentsResponseBodyComponentsComponent> & component() const { DARABONBA_PTR_GET_CONST(component_, vector<Models::DescribeCasterComponentsResponseBodyComponentsComponent>) };
    inline vector<Models::DescribeCasterComponentsResponseBodyComponentsComponent> component() { DARABONBA_PTR_GET(component_, vector<Models::DescribeCasterComponentsResponseBodyComponentsComponent>) };
    inline DescribeCasterComponentsResponseBodyComponents& setComponent(const vector<Models::DescribeCasterComponentsResponseBodyComponentsComponent> & component) { DARABONBA_PTR_SET_VALUE(component_, component) };
    inline DescribeCasterComponentsResponseBodyComponents& setComponent(vector<Models::DescribeCasterComponentsResponseBodyComponentsComponent> && component) { DARABONBA_PTR_SET_RVALUE(component_, component) };


  protected:
    std::shared_ptr<vector<Models::DescribeCasterComponentsResponseBodyComponentsComponent>> component_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
