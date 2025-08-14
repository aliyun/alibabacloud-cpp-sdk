// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSPNSUMMARYINFORESPONSEBODYREGIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSPNSUMMARYINFORESPONSEBODYREGIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DescribeUserSpnSummaryInfoResponseBodyRegionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserSpnSummaryInfoResponseBodyRegionList& obj) { 
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserSpnSummaryInfoResponseBodyRegionList& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
    };
    DescribeUserSpnSummaryInfoResponseBodyRegionList() = default ;
    DescribeUserSpnSummaryInfoResponseBodyRegionList(const DescribeUserSpnSummaryInfoResponseBodyRegionList &) = default ;
    DescribeUserSpnSummaryInfoResponseBodyRegionList(DescribeUserSpnSummaryInfoResponseBodyRegionList &&) = default ;
    DescribeUserSpnSummaryInfoResponseBodyRegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserSpnSummaryInfoResponseBodyRegionList() = default ;
    DescribeUserSpnSummaryInfoResponseBodyRegionList& operator=(const DescribeUserSpnSummaryInfoResponseBodyRegionList &) = default ;
    DescribeUserSpnSummaryInfoResponseBodyRegionList& operator=(DescribeUserSpnSummaryInfoResponseBodyRegionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionCode_ != nullptr
        && this->regionName_ != nullptr; };
    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string regionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline DescribeUserSpnSummaryInfoResponseBodyRegionList& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline DescribeUserSpnSummaryInfoResponseBodyRegionList& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


  protected:
    std::shared_ptr<string> regionCode_ = nullptr;
    std::shared_ptr<string> regionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
