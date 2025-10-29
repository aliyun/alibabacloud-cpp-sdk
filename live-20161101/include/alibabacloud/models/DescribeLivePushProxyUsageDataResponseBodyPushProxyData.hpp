// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPUSHPROXYUSAGEDATARESPONSEBODYPUSHPROXYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPUSHPROXYUSAGEDATARESPONSEBODYPUSHPROXYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePushProxyUsageDataResponseBodyPushProxyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePushProxyUsageDataResponseBodyPushProxyData& obj) { 
      DARABONBA_PTR_TO_JSON(PushProxyDataItem, pushProxyDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePushProxyUsageDataResponseBodyPushProxyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PushProxyDataItem, pushProxyDataItem_);
    };
    DescribeLivePushProxyUsageDataResponseBodyPushProxyData() = default ;
    DescribeLivePushProxyUsageDataResponseBodyPushProxyData(const DescribeLivePushProxyUsageDataResponseBodyPushProxyData &) = default ;
    DescribeLivePushProxyUsageDataResponseBodyPushProxyData(DescribeLivePushProxyUsageDataResponseBodyPushProxyData &&) = default ;
    DescribeLivePushProxyUsageDataResponseBodyPushProxyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePushProxyUsageDataResponseBodyPushProxyData() = default ;
    DescribeLivePushProxyUsageDataResponseBodyPushProxyData& operator=(const DescribeLivePushProxyUsageDataResponseBodyPushProxyData &) = default ;
    DescribeLivePushProxyUsageDataResponseBodyPushProxyData& operator=(DescribeLivePushProxyUsageDataResponseBodyPushProxyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pushProxyDataItem_ == nullptr; };
    // pushProxyDataItem Field Functions 
    bool hasPushProxyDataItem() const { return this->pushProxyDataItem_ != nullptr;};
    void deletePushProxyDataItem() { this->pushProxyDataItem_ = nullptr;};
    inline const vector<Models::DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem> & pushProxyDataItem() const { DARABONBA_PTR_GET_CONST(pushProxyDataItem_, vector<Models::DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem>) };
    inline vector<Models::DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem> pushProxyDataItem() { DARABONBA_PTR_GET(pushProxyDataItem_, vector<Models::DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem>) };
    inline DescribeLivePushProxyUsageDataResponseBodyPushProxyData& setPushProxyDataItem(const vector<Models::DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem> & pushProxyDataItem) { DARABONBA_PTR_SET_VALUE(pushProxyDataItem_, pushProxyDataItem) };
    inline DescribeLivePushProxyUsageDataResponseBodyPushProxyData& setPushProxyDataItem(vector<Models::DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem> && pushProxyDataItem) { DARABONBA_PTR_SET_RVALUE(pushProxyDataItem_, pushProxyDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem>> pushProxyDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
