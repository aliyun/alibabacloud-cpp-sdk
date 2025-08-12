// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveRealtimeLogDeliveryResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRealtimeLogDeliveryResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(RealtimeLogDeliveryInfo, realtimeLogDeliveryInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRealtimeLogDeliveryResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(RealtimeLogDeliveryInfo, realtimeLogDeliveryInfo_);
    };
    ListLiveRealtimeLogDeliveryResponseBodyContent() = default ;
    ListLiveRealtimeLogDeliveryResponseBodyContent(const ListLiveRealtimeLogDeliveryResponseBodyContent &) = default ;
    ListLiveRealtimeLogDeliveryResponseBodyContent(ListLiveRealtimeLogDeliveryResponseBodyContent &&) = default ;
    ListLiveRealtimeLogDeliveryResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRealtimeLogDeliveryResponseBodyContent() = default ;
    ListLiveRealtimeLogDeliveryResponseBodyContent& operator=(const ListLiveRealtimeLogDeliveryResponseBodyContent &) = default ;
    ListLiveRealtimeLogDeliveryResponseBodyContent& operator=(ListLiveRealtimeLogDeliveryResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->realtimeLogDeliveryInfo_ != nullptr; };
    // realtimeLogDeliveryInfo Field Functions 
    bool hasRealtimeLogDeliveryInfo() const { return this->realtimeLogDeliveryInfo_ != nullptr;};
    void deleteRealtimeLogDeliveryInfo() { this->realtimeLogDeliveryInfo_ = nullptr;};
    inline const vector<Models::ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo> & realtimeLogDeliveryInfo() const { DARABONBA_PTR_GET_CONST(realtimeLogDeliveryInfo_, vector<Models::ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo>) };
    inline vector<Models::ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo> realtimeLogDeliveryInfo() { DARABONBA_PTR_GET(realtimeLogDeliveryInfo_, vector<Models::ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo>) };
    inline ListLiveRealtimeLogDeliveryResponseBodyContent& setRealtimeLogDeliveryInfo(const vector<Models::ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo> & realtimeLogDeliveryInfo) { DARABONBA_PTR_SET_VALUE(realtimeLogDeliveryInfo_, realtimeLogDeliveryInfo) };
    inline ListLiveRealtimeLogDeliveryResponseBodyContent& setRealtimeLogDeliveryInfo(vector<Models::ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo> && realtimeLogDeliveryInfo) { DARABONBA_PTR_SET_RVALUE(realtimeLogDeliveryInfo_, realtimeLogDeliveryInfo) };


  protected:
    std::shared_ptr<vector<Models::ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo>> realtimeLogDeliveryInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
