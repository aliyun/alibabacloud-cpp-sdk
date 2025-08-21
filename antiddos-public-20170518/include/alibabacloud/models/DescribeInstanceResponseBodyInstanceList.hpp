// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceResponseBodyInstanceListInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeInstanceResponseBodyInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBodyInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBodyInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
    };
    DescribeInstanceResponseBodyInstanceList() = default ;
    DescribeInstanceResponseBodyInstanceList(const DescribeInstanceResponseBodyInstanceList &) = default ;
    DescribeInstanceResponseBodyInstanceList(DescribeInstanceResponseBodyInstanceList &&) = default ;
    DescribeInstanceResponseBodyInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBodyInstanceList() = default ;
    DescribeInstanceResponseBodyInstanceList& operator=(const DescribeInstanceResponseBodyInstanceList &) = default ;
    DescribeInstanceResponseBodyInstanceList& operator=(DescribeInstanceResponseBodyInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instance_ != nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const vector<Models::DescribeInstanceResponseBodyInstanceListInstance> & instance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Models::DescribeInstanceResponseBodyInstanceListInstance>) };
    inline vector<Models::DescribeInstanceResponseBodyInstanceListInstance> instance() { DARABONBA_PTR_GET(instance_, vector<Models::DescribeInstanceResponseBodyInstanceListInstance>) };
    inline DescribeInstanceResponseBodyInstanceList& setInstance(const vector<Models::DescribeInstanceResponseBodyInstanceListInstance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline DescribeInstanceResponseBodyInstanceList& setInstance(vector<Models::DescribeInstanceResponseBodyInstanceListInstance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceResponseBodyInstanceListInstance>> instance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
