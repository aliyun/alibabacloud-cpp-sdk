// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVODREALTIMELOGDELIVERYINFOSRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTVODREALTIMELOGDELIVERYINFOSRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListVodRealtimeLogDeliveryInfosResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVodRealtimeLogDeliveryInfosResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(RealtimeLogDeliveryInfos, realtimeLogDeliveryInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListVodRealtimeLogDeliveryInfosResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(RealtimeLogDeliveryInfos, realtimeLogDeliveryInfos_);
    };
    ListVodRealtimeLogDeliveryInfosResponseBodyContent() = default ;
    ListVodRealtimeLogDeliveryInfosResponseBodyContent(const ListVodRealtimeLogDeliveryInfosResponseBodyContent &) = default ;
    ListVodRealtimeLogDeliveryInfosResponseBodyContent(ListVodRealtimeLogDeliveryInfosResponseBodyContent &&) = default ;
    ListVodRealtimeLogDeliveryInfosResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVodRealtimeLogDeliveryInfosResponseBodyContent() = default ;
    ListVodRealtimeLogDeliveryInfosResponseBodyContent& operator=(const ListVodRealtimeLogDeliveryInfosResponseBodyContent &) = default ;
    ListVodRealtimeLogDeliveryInfosResponseBodyContent& operator=(ListVodRealtimeLogDeliveryInfosResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->realtimeLogDeliveryInfos_ != nullptr; };
    // realtimeLogDeliveryInfos Field Functions 
    bool hasRealtimeLogDeliveryInfos() const { return this->realtimeLogDeliveryInfos_ != nullptr;};
    void deleteRealtimeLogDeliveryInfos() { this->realtimeLogDeliveryInfos_ = nullptr;};
    inline const vector<Models::ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos> & realtimeLogDeliveryInfos() const { DARABONBA_PTR_GET_CONST(realtimeLogDeliveryInfos_, vector<Models::ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos>) };
    inline vector<Models::ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos> realtimeLogDeliveryInfos() { DARABONBA_PTR_GET(realtimeLogDeliveryInfos_, vector<Models::ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos>) };
    inline ListVodRealtimeLogDeliveryInfosResponseBodyContent& setRealtimeLogDeliveryInfos(const vector<Models::ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos> & realtimeLogDeliveryInfos) { DARABONBA_PTR_SET_VALUE(realtimeLogDeliveryInfos_, realtimeLogDeliveryInfos) };
    inline ListVodRealtimeLogDeliveryInfosResponseBodyContent& setRealtimeLogDeliveryInfos(vector<Models::ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos> && realtimeLogDeliveryInfos) { DARABONBA_PTR_SET_RVALUE(realtimeLogDeliveryInfos_, realtimeLogDeliveryInfos) };


  protected:
    std::shared_ptr<vector<Models::ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos>> realtimeLogDeliveryInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
