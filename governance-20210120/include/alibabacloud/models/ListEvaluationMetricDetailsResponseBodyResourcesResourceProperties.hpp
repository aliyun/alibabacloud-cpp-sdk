// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONMETRICDETAILSRESPONSEBODYRESOURCESRESOURCEPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONMETRICDETAILSRESPONSEBODYRESOURCESRESOURCEPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyName, propertyName_);
      DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyName, propertyName_);
      DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
    };
    ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties() = default ;
    ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties(const ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties &) = default ;
    ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties(ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties &&) = default ;
    ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties() = default ;
    ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties& operator=(const ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties &) = default ;
    ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties& operator=(ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->propertyName_ == nullptr
        && return this->propertyValue_ == nullptr; };
    // propertyName Field Functions 
    bool hasPropertyName() const { return this->propertyName_ != nullptr;};
    void deletePropertyName() { this->propertyName_ = nullptr;};
    inline string propertyName() const { DARABONBA_PTR_GET_DEFAULT(propertyName_, "") };
    inline ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties& setPropertyName(string propertyName) { DARABONBA_PTR_SET_VALUE(propertyName_, propertyName) };


    // propertyValue Field Functions 
    bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
    void deletePropertyValue() { this->propertyValue_ = nullptr;};
    inline string propertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
    inline ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


  protected:
    // The name of the resource attribute.
    std::shared_ptr<string> propertyName_ = nullptr;
    // The value of the resource attribute.
    std::shared_ptr<string> propertyValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
