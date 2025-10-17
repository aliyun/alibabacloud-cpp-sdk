// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETOPOLOGYRESPONSEBODYTOPOLOGYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETOPOLOGYRESPONSEBODYTOPOLOGYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceTopologyResponseBodyTopologysTopology.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTopologyResponseBodyTopologys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTopologyResponseBodyTopologys& obj) { 
      DARABONBA_PTR_TO_JSON(Topology, topology_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTopologyResponseBodyTopologys& obj) { 
      DARABONBA_PTR_FROM_JSON(Topology, topology_);
    };
    DescribeInstanceTopologyResponseBodyTopologys() = default ;
    DescribeInstanceTopologyResponseBodyTopologys(const DescribeInstanceTopologyResponseBodyTopologys &) = default ;
    DescribeInstanceTopologyResponseBodyTopologys(DescribeInstanceTopologyResponseBodyTopologys &&) = default ;
    DescribeInstanceTopologyResponseBodyTopologys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTopologyResponseBodyTopologys() = default ;
    DescribeInstanceTopologyResponseBodyTopologys& operator=(const DescribeInstanceTopologyResponseBodyTopologys &) = default ;
    DescribeInstanceTopologyResponseBodyTopologys& operator=(DescribeInstanceTopologyResponseBodyTopologys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->topology_ == nullptr; };
    // topology Field Functions 
    bool hasTopology() const { return this->topology_ != nullptr;};
    void deleteTopology() { this->topology_ = nullptr;};
    inline const vector<Models::DescribeInstanceTopologyResponseBodyTopologysTopology> & topology() const { DARABONBA_PTR_GET_CONST(topology_, vector<Models::DescribeInstanceTopologyResponseBodyTopologysTopology>) };
    inline vector<Models::DescribeInstanceTopologyResponseBodyTopologysTopology> topology() { DARABONBA_PTR_GET(topology_, vector<Models::DescribeInstanceTopologyResponseBodyTopologysTopology>) };
    inline DescribeInstanceTopologyResponseBodyTopologys& setTopology(const vector<Models::DescribeInstanceTopologyResponseBodyTopologysTopology> & topology) { DARABONBA_PTR_SET_VALUE(topology_, topology) };
    inline DescribeInstanceTopologyResponseBodyTopologys& setTopology(vector<Models::DescribeInstanceTopologyResponseBodyTopologysTopology> && topology) { DARABONBA_PTR_SET_RVALUE(topology_, topology) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceTopologyResponseBodyTopologysTopology>> topology_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
