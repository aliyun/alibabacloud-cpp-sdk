// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETOPOLOGYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETOPOLOGYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceTopologyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceTopologyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(LogicInstanceTopology, logicInstanceTopology_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceTopologyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(LogicInstanceTopology, logicInstanceTopology_);
    };
    DescribeDBInstanceTopologyResponseBodyData() = default ;
    DescribeDBInstanceTopologyResponseBodyData(const DescribeDBInstanceTopologyResponseBodyData &) = default ;
    DescribeDBInstanceTopologyResponseBodyData(DescribeDBInstanceTopologyResponseBodyData &&) = default ;
    DescribeDBInstanceTopologyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceTopologyResponseBodyData() = default ;
    DescribeDBInstanceTopologyResponseBodyData& operator=(const DescribeDBInstanceTopologyResponseBodyData &) = default ;
    DescribeDBInstanceTopologyResponseBodyData& operator=(DescribeDBInstanceTopologyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logicInstanceTopology_ != nullptr; };
    // logicInstanceTopology Field Functions 
    bool hasLogicInstanceTopology() const { return this->logicInstanceTopology_ != nullptr;};
    void deleteLogicInstanceTopology() { this->logicInstanceTopology_ = nullptr;};
    inline const Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology & logicInstanceTopology() const { DARABONBA_PTR_GET_CONST(logicInstanceTopology_, Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology) };
    inline Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology logicInstanceTopology() { DARABONBA_PTR_GET(logicInstanceTopology_, Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology) };
    inline DescribeDBInstanceTopologyResponseBodyData& setLogicInstanceTopology(const Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology & logicInstanceTopology) { DARABONBA_PTR_SET_VALUE(logicInstanceTopology_, logicInstanceTopology) };
    inline DescribeDBInstanceTopologyResponseBodyData& setLogicInstanceTopology(Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology && logicInstanceTopology) { DARABONBA_PTR_SET_RVALUE(logicInstanceTopology_, logicInstanceTopology) };


  protected:
    std::shared_ptr<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology> logicInstanceTopology_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
