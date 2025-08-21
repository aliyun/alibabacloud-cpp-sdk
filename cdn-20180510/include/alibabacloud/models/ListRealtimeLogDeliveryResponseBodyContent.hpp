// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListRealtimeLogDeliveryResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRealtimeLogDeliveryResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(RealtimeLogDeliveryInfo, realtimeLogDeliveryInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListRealtimeLogDeliveryResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(RealtimeLogDeliveryInfo, realtimeLogDeliveryInfo_);
    };
    ListRealtimeLogDeliveryResponseBodyContent() = default ;
    ListRealtimeLogDeliveryResponseBodyContent(const ListRealtimeLogDeliveryResponseBodyContent &) = default ;
    ListRealtimeLogDeliveryResponseBodyContent(ListRealtimeLogDeliveryResponseBodyContent &&) = default ;
    ListRealtimeLogDeliveryResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRealtimeLogDeliveryResponseBodyContent() = default ;
    ListRealtimeLogDeliveryResponseBodyContent& operator=(const ListRealtimeLogDeliveryResponseBodyContent &) = default ;
    ListRealtimeLogDeliveryResponseBodyContent& operator=(ListRealtimeLogDeliveryResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->realtimeLogDeliveryInfo_ != nullptr; };
    // realtimeLogDeliveryInfo Field Functions 
    bool hasRealtimeLogDeliveryInfo() const { return this->realtimeLogDeliveryInfo_ != nullptr;};
    void deleteRealtimeLogDeliveryInfo() { this->realtimeLogDeliveryInfo_ = nullptr;};
    inline const vector<Models::ListRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo> & realtimeLogDeliveryInfo() const { DARABONBA_PTR_GET_CONST(realtimeLogDeliveryInfo_, vector<Models::ListRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo>) };
    inline vector<Models::ListRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo> realtimeLogDeliveryInfo() { DARABONBA_PTR_GET(realtimeLogDeliveryInfo_, vector<Models::ListRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo>) };
    inline ListRealtimeLogDeliveryResponseBodyContent& setRealtimeLogDeliveryInfo(const vector<Models::ListRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo> & realtimeLogDeliveryInfo) { DARABONBA_PTR_SET_VALUE(realtimeLogDeliveryInfo_, realtimeLogDeliveryInfo) };
    inline ListRealtimeLogDeliveryResponseBodyContent& setRealtimeLogDeliveryInfo(vector<Models::ListRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo> && realtimeLogDeliveryInfo) { DARABONBA_PTR_SET_RVALUE(realtimeLogDeliveryInfo_, realtimeLogDeliveryInfo) };


  protected:
    std::shared_ptr<vector<Models::ListRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo>> realtimeLogDeliveryInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
