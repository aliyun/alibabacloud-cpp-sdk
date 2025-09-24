// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDPUTILIZATIONDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYDPUTILIZATIONDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDPUtilizationDetailResponseBodyDataDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryDPUtilizationDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDPUtilizationDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DetailList, detailList_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDPUtilizationDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailList, detailList_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    QueryDPUtilizationDetailResponseBodyData() = default ;
    QueryDPUtilizationDetailResponseBodyData(const QueryDPUtilizationDetailResponseBodyData &) = default ;
    QueryDPUtilizationDetailResponseBodyData(QueryDPUtilizationDetailResponseBodyData &&) = default ;
    QueryDPUtilizationDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDPUtilizationDetailResponseBodyData() = default ;
    QueryDPUtilizationDetailResponseBodyData& operator=(const QueryDPUtilizationDetailResponseBodyData &) = default ;
    QueryDPUtilizationDetailResponseBodyData& operator=(QueryDPUtilizationDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detailList_ != nullptr
        && this->nextToken_ != nullptr; };
    // detailList Field Functions 
    bool hasDetailList() const { return this->detailList_ != nullptr;};
    void deleteDetailList() { this->detailList_ = nullptr;};
    inline const Models::QueryDPUtilizationDetailResponseBodyDataDetailList & detailList() const { DARABONBA_PTR_GET_CONST(detailList_, Models::QueryDPUtilizationDetailResponseBodyDataDetailList) };
    inline Models::QueryDPUtilizationDetailResponseBodyDataDetailList detailList() { DARABONBA_PTR_GET(detailList_, Models::QueryDPUtilizationDetailResponseBodyDataDetailList) };
    inline QueryDPUtilizationDetailResponseBodyData& setDetailList(const Models::QueryDPUtilizationDetailResponseBodyDataDetailList & detailList) { DARABONBA_PTR_SET_VALUE(detailList_, detailList) };
    inline QueryDPUtilizationDetailResponseBodyData& setDetailList(Models::QueryDPUtilizationDetailResponseBodyDataDetailList && detailList) { DARABONBA_PTR_SET_RVALUE(detailList_, detailList) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryDPUtilizationDetailResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The detailed resource plan usage.
    std::shared_ptr<Models::QueryDPUtilizationDetailResponseBodyDataDetailList> detailList_ = nullptr;
    // The token that is used to retrieve the next page of results. You can set the LastToken parameter to this value in the next request. If null is returned, all results are queried.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
