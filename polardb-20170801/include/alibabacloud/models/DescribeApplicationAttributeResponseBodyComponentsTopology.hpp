// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONATTRIBUTERESPONSEBODYCOMPONENTSTOPOLOGY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONATTRIBUTERESPONSEBODYCOMPONENTSTOPOLOGY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationAttributeResponseBodyComponentsTopology : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationAttributeResponseBodyComponentsTopology& obj) { 
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(Layer, layer_);
      DARABONBA_PTR_TO_JSON(Parents, parents_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationAttributeResponseBodyComponentsTopology& obj) { 
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(Layer, layer_);
      DARABONBA_PTR_FROM_JSON(Parents, parents_);
    };
    DescribeApplicationAttributeResponseBodyComponentsTopology() = default ;
    DescribeApplicationAttributeResponseBodyComponentsTopology(const DescribeApplicationAttributeResponseBodyComponentsTopology &) = default ;
    DescribeApplicationAttributeResponseBodyComponentsTopology(DescribeApplicationAttributeResponseBodyComponentsTopology &&) = default ;
    DescribeApplicationAttributeResponseBodyComponentsTopology(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationAttributeResponseBodyComponentsTopology() = default ;
    DescribeApplicationAttributeResponseBodyComponentsTopology& operator=(const DescribeApplicationAttributeResponseBodyComponentsTopology &) = default ;
    DescribeApplicationAttributeResponseBodyComponentsTopology& operator=(DescribeApplicationAttributeResponseBodyComponentsTopology &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->children_ != nullptr
        && this->layer_ != nullptr && this->parents_ != nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<string> & children() const { DARABONBA_PTR_GET_CONST(children_, vector<string>) };
    inline vector<string> children() { DARABONBA_PTR_GET(children_, vector<string>) };
    inline DescribeApplicationAttributeResponseBodyComponentsTopology& setChildren(const vector<string> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline DescribeApplicationAttributeResponseBodyComponentsTopology& setChildren(vector<string> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // layer Field Functions 
    bool hasLayer() const { return this->layer_ != nullptr;};
    void deleteLayer() { this->layer_ = nullptr;};
    inline string layer() const { DARABONBA_PTR_GET_DEFAULT(layer_, "") };
    inline DescribeApplicationAttributeResponseBodyComponentsTopology& setLayer(string layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


    // parents Field Functions 
    bool hasParents() const { return this->parents_ != nullptr;};
    void deleteParents() { this->parents_ = nullptr;};
    inline const vector<string> & parents() const { DARABONBA_PTR_GET_CONST(parents_, vector<string>) };
    inline vector<string> parents() { DARABONBA_PTR_GET(parents_, vector<string>) };
    inline DescribeApplicationAttributeResponseBodyComponentsTopology& setParents(const vector<string> & parents) { DARABONBA_PTR_SET_VALUE(parents_, parents) };
    inline DescribeApplicationAttributeResponseBodyComponentsTopology& setParents(vector<string> && parents) { DARABONBA_PTR_SET_RVALUE(parents_, parents) };


  protected:
    std::shared_ptr<vector<string>> children_ = nullptr;
    std::shared_ptr<string> layer_ = nullptr;
    std::shared_ptr<vector<string>> parents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
