// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODAIDATARESPONSEBODYAIDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODAIDATARESPONSEBODYAIDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodAIDataResponseBodyAIDataAIDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodAIDataResponseBodyAIData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodAIDataResponseBodyAIData& obj) { 
      DARABONBA_PTR_TO_JSON(AIDataItem, AIDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodAIDataResponseBodyAIData& obj) { 
      DARABONBA_PTR_FROM_JSON(AIDataItem, AIDataItem_);
    };
    DescribeVodAIDataResponseBodyAIData() = default ;
    DescribeVodAIDataResponseBodyAIData(const DescribeVodAIDataResponseBodyAIData &) = default ;
    DescribeVodAIDataResponseBodyAIData(DescribeVodAIDataResponseBodyAIData &&) = default ;
    DescribeVodAIDataResponseBodyAIData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodAIDataResponseBodyAIData() = default ;
    DescribeVodAIDataResponseBodyAIData& operator=(const DescribeVodAIDataResponseBodyAIData &) = default ;
    DescribeVodAIDataResponseBodyAIData& operator=(DescribeVodAIDataResponseBodyAIData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIDataItem_ != nullptr; };
    // AIDataItem Field Functions 
    bool hasAIDataItem() const { return this->AIDataItem_ != nullptr;};
    void deleteAIDataItem() { this->AIDataItem_ = nullptr;};
    inline const vector<Models::DescribeVodAIDataResponseBodyAIDataAIDataItem> & AIDataItem() const { DARABONBA_PTR_GET_CONST(AIDataItem_, vector<Models::DescribeVodAIDataResponseBodyAIDataAIDataItem>) };
    inline vector<Models::DescribeVodAIDataResponseBodyAIDataAIDataItem> AIDataItem() { DARABONBA_PTR_GET(AIDataItem_, vector<Models::DescribeVodAIDataResponseBodyAIDataAIDataItem>) };
    inline DescribeVodAIDataResponseBodyAIData& setAIDataItem(const vector<Models::DescribeVodAIDataResponseBodyAIDataAIDataItem> & AIDataItem) { DARABONBA_PTR_SET_VALUE(AIDataItem_, AIDataItem) };
    inline DescribeVodAIDataResponseBodyAIData& setAIDataItem(vector<Models::DescribeVodAIDataResponseBodyAIDataAIDataItem> && AIDataItem) { DARABONBA_PTR_SET_RVALUE(AIDataItem_, AIDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodAIDataResponseBodyAIDataAIDataItem>> AIDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
