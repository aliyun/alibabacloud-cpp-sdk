// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKGROUPSRESPONSEBODYWORKGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKGROUPSRESPONSEBODYWORKGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeWorkgroupsResponseBodyWorkgroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkgroupsResponseBodyWorkgroups& obj) { 
      DARABONBA_PTR_TO_JSON(Workgroup, workgroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkgroupsResponseBodyWorkgroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Workgroup, workgroup_);
    };
    DescribeWorkgroupsResponseBodyWorkgroups() = default ;
    DescribeWorkgroupsResponseBodyWorkgroups(const DescribeWorkgroupsResponseBodyWorkgroups &) = default ;
    DescribeWorkgroupsResponseBodyWorkgroups(DescribeWorkgroupsResponseBodyWorkgroups &&) = default ;
    DescribeWorkgroupsResponseBodyWorkgroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkgroupsResponseBodyWorkgroups() = default ;
    DescribeWorkgroupsResponseBodyWorkgroups& operator=(const DescribeWorkgroupsResponseBodyWorkgroups &) = default ;
    DescribeWorkgroupsResponseBodyWorkgroups& operator=(DescribeWorkgroupsResponseBodyWorkgroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->workgroup_ != nullptr; };
    // workgroup Field Functions 
    bool hasWorkgroup() const { return this->workgroup_ != nullptr;};
    void deleteWorkgroup() { this->workgroup_ = nullptr;};
    inline const vector<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup> & workgroup() const { DARABONBA_PTR_GET_CONST(workgroup_, vector<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup>) };
    inline vector<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup> workgroup() { DARABONBA_PTR_GET(workgroup_, vector<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup>) };
    inline DescribeWorkgroupsResponseBodyWorkgroups& setWorkgroup(const vector<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup> & workgroup) { DARABONBA_PTR_SET_VALUE(workgroup_, workgroup) };
    inline DescribeWorkgroupsResponseBodyWorkgroups& setWorkgroup(vector<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup> && workgroup) { DARABONBA_PTR_SET_RVALUE(workgroup_, workgroup) };


  protected:
    std::shared_ptr<vector<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup>> workgroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
