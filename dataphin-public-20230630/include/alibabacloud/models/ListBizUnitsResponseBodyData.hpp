// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBIZUNITSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBIZUNITSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBizUnitsResponseBodyDataBizUnitList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListBizUnitsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBizUnitsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BizUnitList, bizUnitList_);
    };
    friend void from_json(const Darabonba::Json& j, ListBizUnitsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizUnitList, bizUnitList_);
    };
    ListBizUnitsResponseBodyData() = default ;
    ListBizUnitsResponseBodyData(const ListBizUnitsResponseBodyData &) = default ;
    ListBizUnitsResponseBodyData(ListBizUnitsResponseBodyData &&) = default ;
    ListBizUnitsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBizUnitsResponseBodyData() = default ;
    ListBizUnitsResponseBodyData& operator=(const ListBizUnitsResponseBodyData &) = default ;
    ListBizUnitsResponseBodyData& operator=(ListBizUnitsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizUnitList_ != nullptr; };
    // bizUnitList Field Functions 
    bool hasBizUnitList() const { return this->bizUnitList_ != nullptr;};
    void deleteBizUnitList() { this->bizUnitList_ = nullptr;};
    inline const vector<Models::ListBizUnitsResponseBodyDataBizUnitList> & bizUnitList() const { DARABONBA_PTR_GET_CONST(bizUnitList_, vector<Models::ListBizUnitsResponseBodyDataBizUnitList>) };
    inline vector<Models::ListBizUnitsResponseBodyDataBizUnitList> bizUnitList() { DARABONBA_PTR_GET(bizUnitList_, vector<Models::ListBizUnitsResponseBodyDataBizUnitList>) };
    inline ListBizUnitsResponseBodyData& setBizUnitList(const vector<Models::ListBizUnitsResponseBodyDataBizUnitList> & bizUnitList) { DARABONBA_PTR_SET_VALUE(bizUnitList_, bizUnitList) };
    inline ListBizUnitsResponseBodyData& setBizUnitList(vector<Models::ListBizUnitsResponseBodyDataBizUnitList> && bizUnitList) { DARABONBA_PTR_SET_RVALUE(bizUnitList_, bizUnitList) };


  protected:
    std::shared_ptr<vector<Models::ListBizUnitsResponseBodyDataBizUnitList>> bizUnitList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
