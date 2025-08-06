// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVODREALTIMELOGDELIVERYRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTVODREALTIMELOGDELIVERYRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVodRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListVodRealtimeLogDeliveryResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVodRealtimeLogDeliveryResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(RealtimeLogDeliveryInfo, realtimeLogDeliveryInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListVodRealtimeLogDeliveryResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(RealtimeLogDeliveryInfo, realtimeLogDeliveryInfo_);
    };
    ListVodRealtimeLogDeliveryResponseBodyContent() = default ;
    ListVodRealtimeLogDeliveryResponseBodyContent(const ListVodRealtimeLogDeliveryResponseBodyContent &) = default ;
    ListVodRealtimeLogDeliveryResponseBodyContent(ListVodRealtimeLogDeliveryResponseBodyContent &&) = default ;
    ListVodRealtimeLogDeliveryResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVodRealtimeLogDeliveryResponseBodyContent() = default ;
    ListVodRealtimeLogDeliveryResponseBodyContent& operator=(const ListVodRealtimeLogDeliveryResponseBodyContent &) = default ;
    ListVodRealtimeLogDeliveryResponseBodyContent& operator=(ListVodRealtimeLogDeliveryResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->realtimeLogDeliveryInfo_ != nullptr; };
    // realtimeLogDeliveryInfo Field Functions 
    bool hasRealtimeLogDeliveryInfo() const { return this->realtimeLogDeliveryInfo_ != nullptr;};
    void deleteRealtimeLogDeliveryInfo() { this->realtimeLogDeliveryInfo_ = nullptr;};
    inline const vector<Models::ListVodRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo> & realtimeLogDeliveryInfo() const { DARABONBA_PTR_GET_CONST(realtimeLogDeliveryInfo_, vector<Models::ListVodRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo>) };
    inline vector<Models::ListVodRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo> realtimeLogDeliveryInfo() { DARABONBA_PTR_GET(realtimeLogDeliveryInfo_, vector<Models::ListVodRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo>) };
    inline ListVodRealtimeLogDeliveryResponseBodyContent& setRealtimeLogDeliveryInfo(const vector<Models::ListVodRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo> & realtimeLogDeliveryInfo) { DARABONBA_PTR_SET_VALUE(realtimeLogDeliveryInfo_, realtimeLogDeliveryInfo) };
    inline ListVodRealtimeLogDeliveryResponseBodyContent& setRealtimeLogDeliveryInfo(vector<Models::ListVodRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo> && realtimeLogDeliveryInfo) { DARABONBA_PTR_SET_RVALUE(realtimeLogDeliveryInfo_, realtimeLogDeliveryInfo) };


  protected:
    std::shared_ptr<vector<Models::ListVodRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo>> realtimeLogDeliveryInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
