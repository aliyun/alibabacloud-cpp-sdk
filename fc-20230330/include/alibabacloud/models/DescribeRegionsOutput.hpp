// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRegionsOutputRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class DescribeRegionsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
    };
    DescribeRegionsOutput() = default ;
    DescribeRegionsOutput(const DescribeRegionsOutput &) = default ;
    DescribeRegionsOutput(DescribeRegionsOutput &&) = default ;
    DescribeRegionsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsOutput() = default ;
    DescribeRegionsOutput& operator=(const DescribeRegionsOutput &) = default ;
    DescribeRegionsOutput& operator=(DescribeRegionsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regions_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const DescribeRegionsOutputRegions & regions() const { DARABONBA_PTR_GET_CONST(regions_, DescribeRegionsOutputRegions) };
    inline DescribeRegionsOutputRegions regions() { DARABONBA_PTR_GET(regions_, DescribeRegionsOutputRegions) };
    inline DescribeRegionsOutput& setRegions(const DescribeRegionsOutputRegions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeRegionsOutput& setRegions(DescribeRegionsOutputRegions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


  protected:
    std::shared_ptr<DescribeRegionsOutputRegions> regions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
