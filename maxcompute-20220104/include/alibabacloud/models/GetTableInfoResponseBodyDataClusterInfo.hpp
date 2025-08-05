// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEINFORESPONSEBODYDATACLUSTERINFO_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEINFORESPONSEBODYDATACLUSTERINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTableInfoResponseBodyDataClusterInfoSortCols.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetTableInfoResponseBodyDataClusterInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableInfoResponseBodyDataClusterInfo& obj) { 
      DARABONBA_PTR_TO_JSON(bucketNum, bucketNum_);
      DARABONBA_PTR_TO_JSON(clusterCols, clusterCols_);
      DARABONBA_PTR_TO_JSON(clusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(sortCols, sortCols_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableInfoResponseBodyDataClusterInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(bucketNum, bucketNum_);
      DARABONBA_PTR_FROM_JSON(clusterCols, clusterCols_);
      DARABONBA_PTR_FROM_JSON(clusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(sortCols, sortCols_);
    };
    GetTableInfoResponseBodyDataClusterInfo() = default ;
    GetTableInfoResponseBodyDataClusterInfo(const GetTableInfoResponseBodyDataClusterInfo &) = default ;
    GetTableInfoResponseBodyDataClusterInfo(GetTableInfoResponseBodyDataClusterInfo &&) = default ;
    GetTableInfoResponseBodyDataClusterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableInfoResponseBodyDataClusterInfo() = default ;
    GetTableInfoResponseBodyDataClusterInfo& operator=(const GetTableInfoResponseBodyDataClusterInfo &) = default ;
    GetTableInfoResponseBodyDataClusterInfo& operator=(GetTableInfoResponseBodyDataClusterInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketNum_ != nullptr
        && this->clusterCols_ != nullptr && this->clusterType_ != nullptr && this->sortCols_ != nullptr; };
    // bucketNum Field Functions 
    bool hasBucketNum() const { return this->bucketNum_ != nullptr;};
    void deleteBucketNum() { this->bucketNum_ = nullptr;};
    inline int64_t bucketNum() const { DARABONBA_PTR_GET_DEFAULT(bucketNum_, 0L) };
    inline GetTableInfoResponseBodyDataClusterInfo& setBucketNum(int64_t bucketNum) { DARABONBA_PTR_SET_VALUE(bucketNum_, bucketNum) };


    // clusterCols Field Functions 
    bool hasClusterCols() const { return this->clusterCols_ != nullptr;};
    void deleteClusterCols() { this->clusterCols_ = nullptr;};
    inline const vector<string> & clusterCols() const { DARABONBA_PTR_GET_CONST(clusterCols_, vector<string>) };
    inline vector<string> clusterCols() { DARABONBA_PTR_GET(clusterCols_, vector<string>) };
    inline GetTableInfoResponseBodyDataClusterInfo& setClusterCols(const vector<string> & clusterCols) { DARABONBA_PTR_SET_VALUE(clusterCols_, clusterCols) };
    inline GetTableInfoResponseBodyDataClusterInfo& setClusterCols(vector<string> && clusterCols) { DARABONBA_PTR_SET_RVALUE(clusterCols_, clusterCols) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline GetTableInfoResponseBodyDataClusterInfo& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // sortCols Field Functions 
    bool hasSortCols() const { return this->sortCols_ != nullptr;};
    void deleteSortCols() { this->sortCols_ = nullptr;};
    inline const vector<Models::GetTableInfoResponseBodyDataClusterInfoSortCols> & sortCols() const { DARABONBA_PTR_GET_CONST(sortCols_, vector<Models::GetTableInfoResponseBodyDataClusterInfoSortCols>) };
    inline vector<Models::GetTableInfoResponseBodyDataClusterInfoSortCols> sortCols() { DARABONBA_PTR_GET(sortCols_, vector<Models::GetTableInfoResponseBodyDataClusterInfoSortCols>) };
    inline GetTableInfoResponseBodyDataClusterInfo& setSortCols(const vector<Models::GetTableInfoResponseBodyDataClusterInfoSortCols> & sortCols) { DARABONBA_PTR_SET_VALUE(sortCols_, sortCols) };
    inline GetTableInfoResponseBodyDataClusterInfo& setSortCols(vector<Models::GetTableInfoResponseBodyDataClusterInfoSortCols> && sortCols) { DARABONBA_PTR_SET_RVALUE(sortCols_, sortCols) };


  protected:
    // Optional. The number of buckets in the clustered table. The value 0 indicates that the number of buckets dynamically changes when a job is running.
    std::shared_ptr<int64_t> bucketNum_ = nullptr;
    // The cluster keys.
    std::shared_ptr<vector<string>> clusterCols_ = nullptr;
    // The clustering type of the table. MaxCompute supports [hash clustering](https://www.alibabacloud.com/help/maxcompute/use-cases/hash-clustering) and
    // 
    // [range clustering](https://www.alibabacloud.com/help/maxcompute/use-cases/range-clustering).
    std::shared_ptr<string> clusterType_ = nullptr;
    // The condition by which the results are sorted.
    std::shared_ptr<vector<Models::GetTableInfoResponseBodyDataClusterInfoSortCols>> sortCols_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
