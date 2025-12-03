// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERINFORESPONSEBODYINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERINFORESPONSEBODYINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceClusterInfoResponseBodyInstanceListInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceClusterInfoResponseBodyInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceClusterInfoResponseBodyInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceClusterInfoResponseBodyInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
    };
    DescribeInstanceClusterInfoResponseBodyInstanceList() = default ;
    DescribeInstanceClusterInfoResponseBodyInstanceList(const DescribeInstanceClusterInfoResponseBodyInstanceList &) = default ;
    DescribeInstanceClusterInfoResponseBodyInstanceList(DescribeInstanceClusterInfoResponseBodyInstanceList &&) = default ;
    DescribeInstanceClusterInfoResponseBodyInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceClusterInfoResponseBodyInstanceList() = default ;
    DescribeInstanceClusterInfoResponseBodyInstanceList& operator=(const DescribeInstanceClusterInfoResponseBodyInstanceList &) = default ;
    DescribeInstanceClusterInfoResponseBodyInstanceList& operator=(DescribeInstanceClusterInfoResponseBodyInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instance_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const vector<Models::DescribeInstanceClusterInfoResponseBodyInstanceListInstance> & instance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Models::DescribeInstanceClusterInfoResponseBodyInstanceListInstance>) };
    inline vector<Models::DescribeInstanceClusterInfoResponseBodyInstanceListInstance> instance() { DARABONBA_PTR_GET(instance_, vector<Models::DescribeInstanceClusterInfoResponseBodyInstanceListInstance>) };
    inline DescribeInstanceClusterInfoResponseBodyInstanceList& setInstance(const vector<Models::DescribeInstanceClusterInfoResponseBodyInstanceListInstance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline DescribeInstanceClusterInfoResponseBodyInstanceList& setInstance(vector<Models::DescribeInstanceClusterInfoResponseBodyInstanceListInstance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceClusterInfoResponseBodyInstanceListInstance>> instance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
