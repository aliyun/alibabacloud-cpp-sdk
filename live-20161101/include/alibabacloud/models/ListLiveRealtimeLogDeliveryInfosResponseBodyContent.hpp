// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYINFOSRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYINFOSRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveRealtimeLogDeliveryInfosResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRealtimeLogDeliveryInfosResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(RealtimeLogDeliveryInfos, realtimeLogDeliveryInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRealtimeLogDeliveryInfosResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(RealtimeLogDeliveryInfos, realtimeLogDeliveryInfos_);
    };
    ListLiveRealtimeLogDeliveryInfosResponseBodyContent() = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBodyContent(const ListLiveRealtimeLogDeliveryInfosResponseBodyContent &) = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBodyContent(ListLiveRealtimeLogDeliveryInfosResponseBodyContent &&) = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRealtimeLogDeliveryInfosResponseBodyContent() = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBodyContent& operator=(const ListLiveRealtimeLogDeliveryInfosResponseBodyContent &) = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBodyContent& operator=(ListLiveRealtimeLogDeliveryInfosResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->realtimeLogDeliveryInfos_ != nullptr; };
    // realtimeLogDeliveryInfos Field Functions 
    bool hasRealtimeLogDeliveryInfos() const { return this->realtimeLogDeliveryInfos_ != nullptr;};
    void deleteRealtimeLogDeliveryInfos() { this->realtimeLogDeliveryInfos_ = nullptr;};
    inline const vector<Models::ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos> & realtimeLogDeliveryInfos() const { DARABONBA_PTR_GET_CONST(realtimeLogDeliveryInfos_, vector<Models::ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos>) };
    inline vector<Models::ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos> realtimeLogDeliveryInfos() { DARABONBA_PTR_GET(realtimeLogDeliveryInfos_, vector<Models::ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos>) };
    inline ListLiveRealtimeLogDeliveryInfosResponseBodyContent& setRealtimeLogDeliveryInfos(const vector<Models::ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos> & realtimeLogDeliveryInfos) { DARABONBA_PTR_SET_VALUE(realtimeLogDeliveryInfos_, realtimeLogDeliveryInfos) };
    inline ListLiveRealtimeLogDeliveryInfosResponseBodyContent& setRealtimeLogDeliveryInfos(vector<Models::ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos> && realtimeLogDeliveryInfos) { DARABONBA_PTR_SET_RVALUE(realtimeLogDeliveryInfos_, realtimeLogDeliveryInfos) };


  protected:
    std::shared_ptr<vector<Models::ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos>> realtimeLogDeliveryInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
