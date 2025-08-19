// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSFORREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSFORREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClustersForRegionResponseBodyClusters.hpp>
#include <alibabacloud/models/DescribeClustersForRegionResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClustersForRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersForRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(clusters, clusters_);
      DARABONBA_PTR_TO_JSON(page_info, pageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersForRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(page_info, pageInfo_);
    };
    DescribeClustersForRegionResponseBody() = default ;
    DescribeClustersForRegionResponseBody(const DescribeClustersForRegionResponseBody &) = default ;
    DescribeClustersForRegionResponseBody(DescribeClustersForRegionResponseBody &&) = default ;
    DescribeClustersForRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersForRegionResponseBody() = default ;
    DescribeClustersForRegionResponseBody& operator=(const DescribeClustersForRegionResponseBody &) = default ;
    DescribeClustersForRegionResponseBody& operator=(DescribeClustersForRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusters_ != nullptr
        && this->pageInfo_ != nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<DescribeClustersForRegionResponseBodyClusters> & clusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<DescribeClustersForRegionResponseBodyClusters>) };
    inline vector<DescribeClustersForRegionResponseBodyClusters> clusters() { DARABONBA_PTR_GET(clusters_, vector<DescribeClustersForRegionResponseBodyClusters>) };
    inline DescribeClustersForRegionResponseBody& setClusters(const vector<DescribeClustersForRegionResponseBodyClusters> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline DescribeClustersForRegionResponseBody& setClusters(vector<DescribeClustersForRegionResponseBodyClusters> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeClustersForRegionResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeClustersForRegionResponseBodyPageInfo) };
    inline DescribeClustersForRegionResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeClustersForRegionResponseBodyPageInfo) };
    inline DescribeClustersForRegionResponseBody& setPageInfo(const DescribeClustersForRegionResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeClustersForRegionResponseBody& setPageInfo(DescribeClustersForRegionResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


  protected:
    // The information about the queried clusters.
    std::shared_ptr<vector<DescribeClustersForRegionResponseBodyClusters>> clusters_ = nullptr;
    // The pagination details.
    std::shared_ptr<DescribeClustersForRegionResponseBodyPageInfo> pageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
