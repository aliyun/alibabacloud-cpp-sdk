// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONNLBSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONNLBSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataInstancesValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationNlbsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationNlbsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationNlbsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
    };
    DescribeApplicationNlbsResponseBodyData() = default ;
    DescribeApplicationNlbsResponseBodyData(const DescribeApplicationNlbsResponseBodyData &) = default ;
    DescribeApplicationNlbsResponseBodyData(DescribeApplicationNlbsResponseBodyData &&) = default ;
    DescribeApplicationNlbsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationNlbsResponseBodyData() = default ;
    DescribeApplicationNlbsResponseBodyData& operator=(const DescribeApplicationNlbsResponseBodyData &) = default ;
    DescribeApplicationNlbsResponseBodyData& operator=(DescribeApplicationNlbsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instances_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const map<string, Models::DataInstancesValue> & instances() const { DARABONBA_PTR_GET_CONST(instances_, map<string, Models::DataInstancesValue>) };
    inline map<string, Models::DataInstancesValue> instances() { DARABONBA_PTR_GET(instances_, map<string, Models::DataInstancesValue>) };
    inline DescribeApplicationNlbsResponseBodyData& setInstances(const map<string, Models::DataInstancesValue> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeApplicationNlbsResponseBodyData& setInstances(map<string, Models::DataInstancesValue> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    // The details of the instance.
    std::shared_ptr<map<string, Models::DataInstancesValue>> instances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
