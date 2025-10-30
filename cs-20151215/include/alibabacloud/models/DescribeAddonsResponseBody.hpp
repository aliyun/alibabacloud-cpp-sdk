// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAddonsResponseBodyComponentGroups.hpp>
#include <map>
#include <alibabacloud/models/StandardComponentsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeAddonsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentGroups, componentGroups_);
      DARABONBA_PTR_TO_JSON(StandardComponents, standardComponents_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentGroups, componentGroups_);
      DARABONBA_PTR_FROM_JSON(StandardComponents, standardComponents_);
    };
    DescribeAddonsResponseBody() = default ;
    DescribeAddonsResponseBody(const DescribeAddonsResponseBody &) = default ;
    DescribeAddonsResponseBody(DescribeAddonsResponseBody &&) = default ;
    DescribeAddonsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonsResponseBody() = default ;
    DescribeAddonsResponseBody& operator=(const DescribeAddonsResponseBody &) = default ;
    DescribeAddonsResponseBody& operator=(DescribeAddonsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentGroups_ == nullptr
        && return this->standardComponents_ == nullptr; };
    // componentGroups Field Functions 
    bool hasComponentGroups() const { return this->componentGroups_ != nullptr;};
    void deleteComponentGroups() { this->componentGroups_ = nullptr;};
    inline const vector<DescribeAddonsResponseBodyComponentGroups> & componentGroups() const { DARABONBA_PTR_GET_CONST(componentGroups_, vector<DescribeAddonsResponseBodyComponentGroups>) };
    inline vector<DescribeAddonsResponseBodyComponentGroups> componentGroups() { DARABONBA_PTR_GET(componentGroups_, vector<DescribeAddonsResponseBodyComponentGroups>) };
    inline DescribeAddonsResponseBody& setComponentGroups(const vector<DescribeAddonsResponseBodyComponentGroups> & componentGroups) { DARABONBA_PTR_SET_VALUE(componentGroups_, componentGroups) };
    inline DescribeAddonsResponseBody& setComponentGroups(vector<DescribeAddonsResponseBodyComponentGroups> && componentGroups) { DARABONBA_PTR_SET_RVALUE(componentGroups_, componentGroups) };


    // standardComponents Field Functions 
    bool hasStandardComponents() const { return this->standardComponents_ != nullptr;};
    void deleteStandardComponents() { this->standardComponents_ = nullptr;};
    inline const map<string, StandardComponentsValue> & standardComponents() const { DARABONBA_PTR_GET_CONST(standardComponents_, map<string, StandardComponentsValue>) };
    inline map<string, StandardComponentsValue> standardComponents() { DARABONBA_PTR_GET(standardComponents_, map<string, StandardComponentsValue>) };
    inline DescribeAddonsResponseBody& setStandardComponents(const map<string, StandardComponentsValue> & standardComponents) { DARABONBA_PTR_SET_VALUE(standardComponents_, standardComponents) };
    inline DescribeAddonsResponseBody& setStandardComponents(map<string, StandardComponentsValue> && standardComponents) { DARABONBA_PTR_SET_RVALUE(standardComponents_, standardComponents) };


  protected:
    // The list of the returned components.
    std::shared_ptr<vector<DescribeAddonsResponseBodyComponentGroups>> componentGroups_ = nullptr;
    // Standard components.
    std::shared_ptr<map<string, StandardComponentsValue>> standardComponents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
