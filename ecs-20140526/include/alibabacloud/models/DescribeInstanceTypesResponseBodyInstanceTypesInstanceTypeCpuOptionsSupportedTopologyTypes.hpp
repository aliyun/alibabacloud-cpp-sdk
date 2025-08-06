// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPECPUOPTIONSSUPPORTEDTOPOLOGYTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPECPUOPTIONSSUPPORTEDTOPOLOGYTYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedTopologyType, supportedTopologyType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedTopologyType, supportedTopologyType_);
    };
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes &&) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes& operator=(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes& operator=(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedTopologyType_ != nullptr; };
    // supportedTopologyType Field Functions 
    bool hasSupportedTopologyType() const { return this->supportedTopologyType_ != nullptr;};
    void deleteSupportedTopologyType() { this->supportedTopologyType_ = nullptr;};
    inline const vector<string> & supportedTopologyType() const { DARABONBA_PTR_GET_CONST(supportedTopologyType_, vector<string>) };
    inline vector<string> supportedTopologyType() { DARABONBA_PTR_GET(supportedTopologyType_, vector<string>) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes& setSupportedTopologyType(const vector<string> & supportedTopologyType) { DARABONBA_PTR_SET_VALUE(supportedTopologyType_, supportedTopologyType) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptionsSupportedTopologyTypes& setSupportedTopologyType(vector<string> && supportedTopologyType) { DARABONBA_PTR_SET_RVALUE(supportedTopologyType_, supportedTopologyType) };


  protected:
    std::shared_ptr<vector<string>> supportedTopologyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
