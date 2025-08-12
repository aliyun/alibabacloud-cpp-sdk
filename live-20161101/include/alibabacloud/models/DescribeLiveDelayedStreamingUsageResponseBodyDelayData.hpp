// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDELAYEDSTREAMINGUSAGERESPONSEBODYDELAYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDELAYEDSTREAMINGUSAGERESPONSEBODYDELAYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDelayedStreamingUsageResponseBodyDelayData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDelayedStreamingUsageResponseBodyDelayData& obj) { 
      DARABONBA_PTR_TO_JSON(DelayDataItem, delayDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDelayedStreamingUsageResponseBodyDelayData& obj) { 
      DARABONBA_PTR_FROM_JSON(DelayDataItem, delayDataItem_);
    };
    DescribeLiveDelayedStreamingUsageResponseBodyDelayData() = default ;
    DescribeLiveDelayedStreamingUsageResponseBodyDelayData(const DescribeLiveDelayedStreamingUsageResponseBodyDelayData &) = default ;
    DescribeLiveDelayedStreamingUsageResponseBodyDelayData(DescribeLiveDelayedStreamingUsageResponseBodyDelayData &&) = default ;
    DescribeLiveDelayedStreamingUsageResponseBodyDelayData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDelayedStreamingUsageResponseBodyDelayData() = default ;
    DescribeLiveDelayedStreamingUsageResponseBodyDelayData& operator=(const DescribeLiveDelayedStreamingUsageResponseBodyDelayData &) = default ;
    DescribeLiveDelayedStreamingUsageResponseBodyDelayData& operator=(DescribeLiveDelayedStreamingUsageResponseBodyDelayData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delayDataItem_ != nullptr; };
    // delayDataItem Field Functions 
    bool hasDelayDataItem() const { return this->delayDataItem_ != nullptr;};
    void deleteDelayDataItem() { this->delayDataItem_ = nullptr;};
    inline const vector<Models::DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem> & delayDataItem() const { DARABONBA_PTR_GET_CONST(delayDataItem_, vector<Models::DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem>) };
    inline vector<Models::DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem> delayDataItem() { DARABONBA_PTR_GET(delayDataItem_, vector<Models::DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem>) };
    inline DescribeLiveDelayedStreamingUsageResponseBodyDelayData& setDelayDataItem(const vector<Models::DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem> & delayDataItem) { DARABONBA_PTR_SET_VALUE(delayDataItem_, delayDataItem) };
    inline DescribeLiveDelayedStreamingUsageResponseBodyDelayData& setDelayDataItem(vector<Models::DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem> && delayDataItem) { DARABONBA_PTR_SET_RVALUE(delayDataItem_, delayDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem>> delayDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
