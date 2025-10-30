// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSV1RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSV1RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClustersV1ResponseBodyClusters.hpp>
#include <alibabacloud/models/DescribeClustersV1ResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClustersV1ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersV1ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(clusters, clusters_);
      DARABONBA_PTR_TO_JSON(page_info, pageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersV1ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(page_info, pageInfo_);
    };
    DescribeClustersV1ResponseBody() = default ;
    DescribeClustersV1ResponseBody(const DescribeClustersV1ResponseBody &) = default ;
    DescribeClustersV1ResponseBody(DescribeClustersV1ResponseBody &&) = default ;
    DescribeClustersV1ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersV1ResponseBody() = default ;
    DescribeClustersV1ResponseBody& operator=(const DescribeClustersV1ResponseBody &) = default ;
    DescribeClustersV1ResponseBody& operator=(DescribeClustersV1ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusters_ == nullptr
        && return this->pageInfo_ == nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<DescribeClustersV1ResponseBodyClusters> & clusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<DescribeClustersV1ResponseBodyClusters>) };
    inline vector<DescribeClustersV1ResponseBodyClusters> clusters() { DARABONBA_PTR_GET(clusters_, vector<DescribeClustersV1ResponseBodyClusters>) };
    inline DescribeClustersV1ResponseBody& setClusters(const vector<DescribeClustersV1ResponseBodyClusters> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline DescribeClustersV1ResponseBody& setClusters(vector<DescribeClustersV1ResponseBodyClusters> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeClustersV1ResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeClustersV1ResponseBodyPageInfo) };
    inline DescribeClustersV1ResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeClustersV1ResponseBodyPageInfo) };
    inline DescribeClustersV1ResponseBody& setPageInfo(const DescribeClustersV1ResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeClustersV1ResponseBody& setPageInfo(DescribeClustersV1ResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


  protected:
    // The queried cluster details.
    std::shared_ptr<vector<DescribeClustersV1ResponseBodyClusters>> clusters_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeClustersV1ResponseBodyPageInfo> pageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
