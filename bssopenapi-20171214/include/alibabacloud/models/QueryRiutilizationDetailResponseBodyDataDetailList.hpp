// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRIUTILIZATIONDETAILRESPONSEBODYDATADETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRIUTILIZATIONDETAILRESPONSEBODYDATADETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryRIUtilizationDetailResponseBodyDataDetailListDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryRIUtilizationDetailResponseBodyDataDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRIUtilizationDetailResponseBodyDataDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(DetailList, detailList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRIUtilizationDetailResponseBodyDataDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailList, detailList_);
    };
    QueryRIUtilizationDetailResponseBodyDataDetailList() = default ;
    QueryRIUtilizationDetailResponseBodyDataDetailList(const QueryRIUtilizationDetailResponseBodyDataDetailList &) = default ;
    QueryRIUtilizationDetailResponseBodyDataDetailList(QueryRIUtilizationDetailResponseBodyDataDetailList &&) = default ;
    QueryRIUtilizationDetailResponseBodyDataDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRIUtilizationDetailResponseBodyDataDetailList() = default ;
    QueryRIUtilizationDetailResponseBodyDataDetailList& operator=(const QueryRIUtilizationDetailResponseBodyDataDetailList &) = default ;
    QueryRIUtilizationDetailResponseBodyDataDetailList& operator=(QueryRIUtilizationDetailResponseBodyDataDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detailList_ != nullptr; };
    // detailList Field Functions 
    bool hasDetailList() const { return this->detailList_ != nullptr;};
    void deleteDetailList() { this->detailList_ = nullptr;};
    inline const vector<Models::QueryRIUtilizationDetailResponseBodyDataDetailListDetailList> & detailList() const { DARABONBA_PTR_GET_CONST(detailList_, vector<Models::QueryRIUtilizationDetailResponseBodyDataDetailListDetailList>) };
    inline vector<Models::QueryRIUtilizationDetailResponseBodyDataDetailListDetailList> detailList() { DARABONBA_PTR_GET(detailList_, vector<Models::QueryRIUtilizationDetailResponseBodyDataDetailListDetailList>) };
    inline QueryRIUtilizationDetailResponseBodyDataDetailList& setDetailList(const vector<Models::QueryRIUtilizationDetailResponseBodyDataDetailListDetailList> & detailList) { DARABONBA_PTR_SET_VALUE(detailList_, detailList) };
    inline QueryRIUtilizationDetailResponseBodyDataDetailList& setDetailList(vector<Models::QueryRIUtilizationDetailResponseBodyDataDetailListDetailList> && detailList) { DARABONBA_PTR_SET_RVALUE(detailList_, detailList) };


  protected:
    std::shared_ptr<vector<Models::QueryRIUtilizationDetailResponseBodyDataDetailListDetailList>> detailList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
