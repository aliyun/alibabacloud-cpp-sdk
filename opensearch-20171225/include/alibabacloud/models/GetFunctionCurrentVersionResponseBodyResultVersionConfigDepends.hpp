// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONCURRENTVERSIONRESPONSEBODYRESULTVERSIONCONFIGDEPENDS_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONCURRENTVERSIONRESPONSEBODYRESULTVERSIONCONFIGDEPENDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Dependency, dependency_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Dependency, dependency_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends() = default ;
    GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends(const GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends &) = default ;
    GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends(GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends &&) = default ;
    GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends() = default ;
    GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends& operator=(const GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends &) = default ;
    GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends& operator=(GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->dependency_ == nullptr && return this->description_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // dependency Field Functions 
    bool hasDependency() const { return this->dependency_ != nullptr;};
    void deleteDependency() { this->dependency_ = nullptr;};
    inline string dependency() const { DARABONBA_PTR_GET_DEFAULT(dependency_, "") };
    inline GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends& setDependency(string dependency) { DARABONBA_PTR_SET_VALUE(dependency_, dependency) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The condition.
    std::shared_ptr<string> condition_ = nullptr;
    // The dependency.
    std::shared_ptr<string> dependency_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
