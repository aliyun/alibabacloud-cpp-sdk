// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYINFOSRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYINFOSRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListRealtimeLogDeliveryInfosResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRealtimeLogDeliveryInfosResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(RealtimeLogDeliveryInfos, realtimeLogDeliveryInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListRealtimeLogDeliveryInfosResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(RealtimeLogDeliveryInfos, realtimeLogDeliveryInfos_);
    };
    ListRealtimeLogDeliveryInfosResponseBodyContent() = default ;
    ListRealtimeLogDeliveryInfosResponseBodyContent(const ListRealtimeLogDeliveryInfosResponseBodyContent &) = default ;
    ListRealtimeLogDeliveryInfosResponseBodyContent(ListRealtimeLogDeliveryInfosResponseBodyContent &&) = default ;
    ListRealtimeLogDeliveryInfosResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRealtimeLogDeliveryInfosResponseBodyContent() = default ;
    ListRealtimeLogDeliveryInfosResponseBodyContent& operator=(const ListRealtimeLogDeliveryInfosResponseBodyContent &) = default ;
    ListRealtimeLogDeliveryInfosResponseBodyContent& operator=(ListRealtimeLogDeliveryInfosResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->realtimeLogDeliveryInfos_ != nullptr; };
    // realtimeLogDeliveryInfos Field Functions 
    bool hasRealtimeLogDeliveryInfos() const { return this->realtimeLogDeliveryInfos_ != nullptr;};
    void deleteRealtimeLogDeliveryInfos() { this->realtimeLogDeliveryInfos_ = nullptr;};
    inline const vector<Models::ListRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos> & realtimeLogDeliveryInfos() const { DARABONBA_PTR_GET_CONST(realtimeLogDeliveryInfos_, vector<Models::ListRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos>) };
    inline vector<Models::ListRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos> realtimeLogDeliveryInfos() { DARABONBA_PTR_GET(realtimeLogDeliveryInfos_, vector<Models::ListRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos>) };
    inline ListRealtimeLogDeliveryInfosResponseBodyContent& setRealtimeLogDeliveryInfos(const vector<Models::ListRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos> & realtimeLogDeliveryInfos) { DARABONBA_PTR_SET_VALUE(realtimeLogDeliveryInfos_, realtimeLogDeliveryInfos) };
    inline ListRealtimeLogDeliveryInfosResponseBodyContent& setRealtimeLogDeliveryInfos(vector<Models::ListRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos> && realtimeLogDeliveryInfos) { DARABONBA_PTR_SET_RVALUE(realtimeLogDeliveryInfos_, realtimeLogDeliveryInfos) };


  protected:
    std::shared_ptr<vector<Models::ListRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos>> realtimeLogDeliveryInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
