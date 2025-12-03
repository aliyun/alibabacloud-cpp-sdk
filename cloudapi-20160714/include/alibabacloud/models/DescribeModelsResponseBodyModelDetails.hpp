// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELSRESPONSEBODYMODELDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELSRESPONSEBODYMODELDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeModelsResponseBodyModelDetailsModelDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeModelsResponseBodyModelDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelsResponseBodyModelDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ModelDetail, modelDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelsResponseBodyModelDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelDetail, modelDetail_);
    };
    DescribeModelsResponseBodyModelDetails() = default ;
    DescribeModelsResponseBodyModelDetails(const DescribeModelsResponseBodyModelDetails &) = default ;
    DescribeModelsResponseBodyModelDetails(DescribeModelsResponseBodyModelDetails &&) = default ;
    DescribeModelsResponseBodyModelDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelsResponseBodyModelDetails() = default ;
    DescribeModelsResponseBodyModelDetails& operator=(const DescribeModelsResponseBodyModelDetails &) = default ;
    DescribeModelsResponseBodyModelDetails& operator=(DescribeModelsResponseBodyModelDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelDetail_ == nullptr; };
    // modelDetail Field Functions 
    bool hasModelDetail() const { return this->modelDetail_ != nullptr;};
    void deleteModelDetail() { this->modelDetail_ = nullptr;};
    inline const vector<Models::DescribeModelsResponseBodyModelDetailsModelDetail> & modelDetail() const { DARABONBA_PTR_GET_CONST(modelDetail_, vector<Models::DescribeModelsResponseBodyModelDetailsModelDetail>) };
    inline vector<Models::DescribeModelsResponseBodyModelDetailsModelDetail> modelDetail() { DARABONBA_PTR_GET(modelDetail_, vector<Models::DescribeModelsResponseBodyModelDetailsModelDetail>) };
    inline DescribeModelsResponseBodyModelDetails& setModelDetail(const vector<Models::DescribeModelsResponseBodyModelDetailsModelDetail> & modelDetail) { DARABONBA_PTR_SET_VALUE(modelDetail_, modelDetail) };
    inline DescribeModelsResponseBodyModelDetails& setModelDetail(vector<Models::DescribeModelsResponseBodyModelDetailsModelDetail> && modelDetail) { DARABONBA_PTR_SET_RVALUE(modelDetail_, modelDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeModelsResponseBodyModelDetailsModelDetail>> modelDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
