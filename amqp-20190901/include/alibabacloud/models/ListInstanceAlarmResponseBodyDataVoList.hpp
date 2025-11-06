// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEALARMRESPONSEBODYDATAVOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEALARMRESPONSEBODYDATAVOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListInstanceAlarmResponseBodyDataVoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceAlarmResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityInstanceAlarmVO, commodityInstanceAlarmVO_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceAlarmResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityInstanceAlarmVO, commodityInstanceAlarmVO_);
    };
    ListInstanceAlarmResponseBodyDataVoList() = default ;
    ListInstanceAlarmResponseBodyDataVoList(const ListInstanceAlarmResponseBodyDataVoList &) = default ;
    ListInstanceAlarmResponseBodyDataVoList(ListInstanceAlarmResponseBodyDataVoList &&) = default ;
    ListInstanceAlarmResponseBodyDataVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceAlarmResponseBodyDataVoList() = default ;
    ListInstanceAlarmResponseBodyDataVoList& operator=(const ListInstanceAlarmResponseBodyDataVoList &) = default ;
    ListInstanceAlarmResponseBodyDataVoList& operator=(ListInstanceAlarmResponseBodyDataVoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityInstanceAlarmVO_ == nullptr; };
    // commodityInstanceAlarmVO Field Functions 
    bool hasCommodityInstanceAlarmVO() const { return this->commodityInstanceAlarmVO_ != nullptr;};
    void deleteCommodityInstanceAlarmVO() { this->commodityInstanceAlarmVO_ = nullptr;};
    inline const vector<Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO> & commodityInstanceAlarmVO() const { DARABONBA_PTR_GET_CONST(commodityInstanceAlarmVO_, vector<Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO>) };
    inline vector<Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO> commodityInstanceAlarmVO() { DARABONBA_PTR_GET(commodityInstanceAlarmVO_, vector<Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO>) };
    inline ListInstanceAlarmResponseBodyDataVoList& setCommodityInstanceAlarmVO(const vector<Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO> & commodityInstanceAlarmVO) { DARABONBA_PTR_SET_VALUE(commodityInstanceAlarmVO_, commodityInstanceAlarmVO) };
    inline ListInstanceAlarmResponseBodyDataVoList& setCommodityInstanceAlarmVO(vector<Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO> && commodityInstanceAlarmVO) { DARABONBA_PTR_SET_RVALUE(commodityInstanceAlarmVO_, commodityInstanceAlarmVO) };


  protected:
    std::shared_ptr<vector<Models::ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVO>> commodityInstanceAlarmVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
