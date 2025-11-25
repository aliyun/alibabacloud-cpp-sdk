// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBAREABLOCKCONFIGSRESPONSEBODYAREABLOCKCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBAREABLOCKCONFIGSRESPONSEBODYAREABLOCKCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(RegionList, regionList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(RegionList, regionList_);
    };
    DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs() = default ;
    DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs(const DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs &) = default ;
    DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs(DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs &&) = default ;
    DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs() = default ;
    DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs& operator=(const DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs &) = default ;
    DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs& operator=(DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->regionList_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // regionList Field Functions 
    bool hasRegionList() const { return this->regionList_ != nullptr;};
    void deleteRegionList() { this->regionList_ = nullptr;};
    inline const vector<Models::DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList> & regionList() const { DARABONBA_PTR_GET_CONST(regionList_, vector<Models::DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList>) };
    inline vector<Models::DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList> regionList() { DARABONBA_PTR_GET(regionList_, vector<Models::DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList>) };
    inline DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs& setRegionList(const vector<Models::DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList> & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
    inline DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigs& setRegionList(vector<Models::DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList> && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


  protected:
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
    // The configuration of the blocked locations.
    std::shared_ptr<vector<Models::DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList>> regionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
