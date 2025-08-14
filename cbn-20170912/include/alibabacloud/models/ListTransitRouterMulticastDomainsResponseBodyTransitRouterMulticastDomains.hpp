// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTDOMAINSRESPONSEBODYTRANSITROUTERMULTICASTDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTDOMAINSRESPONSEBODYTRANSITROUTERMULTICASTDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainDescription, transitRouterMulticastDomainDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainName, transitRouterMulticastDomainName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainDescription, transitRouterMulticastDomainDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainName, transitRouterMulticastDomainName_);
    };
    ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains() = default ;
    ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains(const ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains &) = default ;
    ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains(ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains &&) = default ;
    ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains() = default ;
    ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains& operator=(const ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains &) = default ;
    ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains& operator=(ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->options_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->transitRouterId_ != nullptr
        && this->transitRouterMulticastDomainDescription_ != nullptr && this->transitRouterMulticastDomainId_ != nullptr && this->transitRouterMulticastDomainName_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const Models::ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions & options() const { DARABONBA_PTR_GET_CONST(options_, Models::ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions) };
    inline Models::ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions options() { DARABONBA_PTR_GET(options_, Models::ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions) };
    inline ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains& setOptions(const Models::ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains& setOptions(Models::ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsTags>) };
    inline vector<Models::ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsTags>) };
    inline ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains& setTags(const vector<Models::ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains& setTags(vector<Models::ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterMulticastDomainDescription Field Functions 
    bool hasTransitRouterMulticastDomainDescription() const { return this->transitRouterMulticastDomainDescription_ != nullptr;};
    void deleteTransitRouterMulticastDomainDescription() { this->transitRouterMulticastDomainDescription_ = nullptr;};
    inline string transitRouterMulticastDomainDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainDescription_, "") };
    inline ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains& setTransitRouterMulticastDomainDescription(string transitRouterMulticastDomainDescription) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainDescription_, transitRouterMulticastDomainDescription) };


    // transitRouterMulticastDomainId Field Functions 
    bool hasTransitRouterMulticastDomainId() const { return this->transitRouterMulticastDomainId_ != nullptr;};
    void deleteTransitRouterMulticastDomainId() { this->transitRouterMulticastDomainId_ = nullptr;};
    inline string transitRouterMulticastDomainId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainId_, "") };
    inline ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains& setTransitRouterMulticastDomainId(string transitRouterMulticastDomainId) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainId_, transitRouterMulticastDomainId) };


    // transitRouterMulticastDomainName Field Functions 
    bool hasTransitRouterMulticastDomainName() const { return this->transitRouterMulticastDomainName_ != nullptr;};
    void deleteTransitRouterMulticastDomainName() { this->transitRouterMulticastDomainName_ = nullptr;};
    inline string transitRouterMulticastDomainName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainName_, "") };
    inline ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains& setTransitRouterMulticastDomainName(string transitRouterMulticastDomainName) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainName_, transitRouterMulticastDomainName) };


  protected:
    // The CEN instance ID.
    std::shared_ptr<string> cenId_ = nullptr;
    // Multicast domain feature.
    std::shared_ptr<Models::ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsOptions> options_ = nullptr;
    // The region ID of the transit router.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the multicast domain.
    // 
    // The valid value is **Active**, which indicates that the multicast domain is available.
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomainsTags>> tags_ = nullptr;
    // The transit router ID.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The description of the multicast domain.
    std::shared_ptr<string> transitRouterMulticastDomainDescription_ = nullptr;
    // The ID of the multicast domain.
    std::shared_ptr<string> transitRouterMulticastDomainId_ = nullptr;
    // The name of the multicast domain.
    std::shared_ptr<string> transitRouterMulticastDomainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
