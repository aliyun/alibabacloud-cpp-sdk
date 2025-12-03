// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKVERSIONSOFCOMPONENTSRESPONSEBODYCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_CHECKVERSIONSOFCOMPONENTSRESPONSEBODYCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckVersionsOfComponentsResponseBodyComponentsComponents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class CheckVersionsOfComponentsResponseBodyComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckVersionsOfComponentsResponseBodyComponents& obj) { 
      DARABONBA_PTR_TO_JSON(Components, components_);
    };
    friend void from_json(const Darabonba::Json& j, CheckVersionsOfComponentsResponseBodyComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(Components, components_);
    };
    CheckVersionsOfComponentsResponseBodyComponents() = default ;
    CheckVersionsOfComponentsResponseBodyComponents(const CheckVersionsOfComponentsResponseBodyComponents &) = default ;
    CheckVersionsOfComponentsResponseBodyComponents(CheckVersionsOfComponentsResponseBodyComponents &&) = default ;
    CheckVersionsOfComponentsResponseBodyComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckVersionsOfComponentsResponseBodyComponents() = default ;
    CheckVersionsOfComponentsResponseBodyComponents& operator=(const CheckVersionsOfComponentsResponseBodyComponents &) = default ;
    CheckVersionsOfComponentsResponseBodyComponents& operator=(CheckVersionsOfComponentsResponseBodyComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->components_ == nullptr; };
    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<Models::CheckVersionsOfComponentsResponseBodyComponentsComponents> & components() const { DARABONBA_PTR_GET_CONST(components_, vector<Models::CheckVersionsOfComponentsResponseBodyComponentsComponents>) };
    inline vector<Models::CheckVersionsOfComponentsResponseBodyComponentsComponents> components() { DARABONBA_PTR_GET(components_, vector<Models::CheckVersionsOfComponentsResponseBodyComponentsComponents>) };
    inline CheckVersionsOfComponentsResponseBodyComponents& setComponents(const vector<Models::CheckVersionsOfComponentsResponseBodyComponentsComponents> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline CheckVersionsOfComponentsResponseBodyComponents& setComponents(vector<Models::CheckVersionsOfComponentsResponseBodyComponentsComponents> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


  protected:
    std::shared_ptr<vector<Models::CheckVersionsOfComponentsResponseBodyComponentsComponents>> components_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
