// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBATCHRESULTDETAILRESPONSEBODYBATCHRESULTDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBATCHRESULTDETAILRESPONSEBODYBATCHRESULTDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeBatchResultDetailResponseBodyBatchResultDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBatchResultDetailResponseBodyBatchResultDetails& obj) { 
      DARABONBA_PTR_TO_JSON(BatchResultDetail, batchResultDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBatchResultDetailResponseBodyBatchResultDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchResultDetail, batchResultDetail_);
    };
    DescribeBatchResultDetailResponseBodyBatchResultDetails() = default ;
    DescribeBatchResultDetailResponseBodyBatchResultDetails(const DescribeBatchResultDetailResponseBodyBatchResultDetails &) = default ;
    DescribeBatchResultDetailResponseBodyBatchResultDetails(DescribeBatchResultDetailResponseBodyBatchResultDetails &&) = default ;
    DescribeBatchResultDetailResponseBodyBatchResultDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBatchResultDetailResponseBodyBatchResultDetails() = default ;
    DescribeBatchResultDetailResponseBodyBatchResultDetails& operator=(const DescribeBatchResultDetailResponseBodyBatchResultDetails &) = default ;
    DescribeBatchResultDetailResponseBodyBatchResultDetails& operator=(DescribeBatchResultDetailResponseBodyBatchResultDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchResultDetail_ != nullptr; };
    // batchResultDetail Field Functions 
    bool hasBatchResultDetail() const { return this->batchResultDetail_ != nullptr;};
    void deleteBatchResultDetail() { this->batchResultDetail_ = nullptr;};
    inline const vector<Models::DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail> & batchResultDetail() const { DARABONBA_PTR_GET_CONST(batchResultDetail_, vector<Models::DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail>) };
    inline vector<Models::DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail> batchResultDetail() { DARABONBA_PTR_GET(batchResultDetail_, vector<Models::DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail>) };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetails& setBatchResultDetail(const vector<Models::DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail> & batchResultDetail) { DARABONBA_PTR_SET_VALUE(batchResultDetail_, batchResultDetail) };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetails& setBatchResultDetail(vector<Models::DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail> && batchResultDetail) { DARABONBA_PTR_SET_RVALUE(batchResultDetail_, batchResultDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeBatchResultDetailResponseBodyBatchResultDetailsBatchResultDetail>> batchResultDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
