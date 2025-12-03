// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKVERSIONSOFCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_CHECKVERSIONSOFCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class CheckVersionsOfComponentsResponseBodyComponentsComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckVersionsOfComponentsResponseBodyComponentsComponents& obj) { 
      DARABONBA_PTR_TO_JSON(Component, component_);
      DARABONBA_PTR_TO_JSON(IsLatestVersion, isLatestVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CheckVersionsOfComponentsResponseBodyComponentsComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(Component, component_);
      DARABONBA_PTR_FROM_JSON(IsLatestVersion, isLatestVersion_);
    };
    CheckVersionsOfComponentsResponseBodyComponentsComponents() = default ;
    CheckVersionsOfComponentsResponseBodyComponentsComponents(const CheckVersionsOfComponentsResponseBodyComponentsComponents &) = default ;
    CheckVersionsOfComponentsResponseBodyComponentsComponents(CheckVersionsOfComponentsResponseBodyComponentsComponents &&) = default ;
    CheckVersionsOfComponentsResponseBodyComponentsComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckVersionsOfComponentsResponseBodyComponentsComponents() = default ;
    CheckVersionsOfComponentsResponseBodyComponentsComponents& operator=(const CheckVersionsOfComponentsResponseBodyComponentsComponents &) = default ;
    CheckVersionsOfComponentsResponseBodyComponentsComponents& operator=(CheckVersionsOfComponentsResponseBodyComponentsComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->component_ == nullptr
        && return this->isLatestVersion_ == nullptr; };
    // component Field Functions 
    bool hasComponent() const { return this->component_ != nullptr;};
    void deleteComponent() { this->component_ = nullptr;};
    inline string component() const { DARABONBA_PTR_GET_DEFAULT(component_, "") };
    inline CheckVersionsOfComponentsResponseBodyComponentsComponents& setComponent(string component) { DARABONBA_PTR_SET_VALUE(component_, component) };


    // isLatestVersion Field Functions 
    bool hasIsLatestVersion() const { return this->isLatestVersion_ != nullptr;};
    void deleteIsLatestVersion() { this->isLatestVersion_ = nullptr;};
    inline string isLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isLatestVersion_, "") };
    inline CheckVersionsOfComponentsResponseBodyComponentsComponents& setIsLatestVersion(string isLatestVersion) { DARABONBA_PTR_SET_VALUE(isLatestVersion_, isLatestVersion) };


  protected:
    std::shared_ptr<string> component_ = nullptr;
    std::shared_ptr<string> isLatestVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
