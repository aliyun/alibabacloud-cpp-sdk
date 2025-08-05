// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQuotasResponseBodyDataQuotaInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListQuotasResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(marker, marker_);
      DARABONBA_PTR_TO_JSON(maxItem, maxItem_);
      DARABONBA_PTR_TO_JSON(quotaInfoList, quotaInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(marker, marker_);
      DARABONBA_PTR_FROM_JSON(maxItem, maxItem_);
      DARABONBA_PTR_FROM_JSON(quotaInfoList, quotaInfoList_);
    };
    ListQuotasResponseBodyData() = default ;
    ListQuotasResponseBodyData(const ListQuotasResponseBodyData &) = default ;
    ListQuotasResponseBodyData(ListQuotasResponseBodyData &&) = default ;
    ListQuotasResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasResponseBodyData() = default ;
    ListQuotasResponseBodyData& operator=(const ListQuotasResponseBodyData &) = default ;
    ListQuotasResponseBodyData& operator=(ListQuotasResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->marker_ != nullptr && this->maxItem_ != nullptr && this->quotaInfoList_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQuotasResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListQuotasResponseBodyData& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItem Field Functions 
    bool hasMaxItem() const { return this->maxItem_ != nullptr;};
    void deleteMaxItem() { this->maxItem_ = nullptr;};
    inline int64_t maxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0L) };
    inline ListQuotasResponseBodyData& setMaxItem(int64_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


    // quotaInfoList Field Functions 
    bool hasQuotaInfoList() const { return this->quotaInfoList_ != nullptr;};
    void deleteQuotaInfoList() { this->quotaInfoList_ = nullptr;};
    inline const vector<Models::ListQuotasResponseBodyDataQuotaInfoList> & quotaInfoList() const { DARABONBA_PTR_GET_CONST(quotaInfoList_, vector<Models::ListQuotasResponseBodyDataQuotaInfoList>) };
    inline vector<Models::ListQuotasResponseBodyDataQuotaInfoList> quotaInfoList() { DARABONBA_PTR_GET(quotaInfoList_, vector<Models::ListQuotasResponseBodyDataQuotaInfoList>) };
    inline ListQuotasResponseBodyData& setQuotaInfoList(const vector<Models::ListQuotasResponseBodyDataQuotaInfoList> & quotaInfoList) { DARABONBA_PTR_SET_VALUE(quotaInfoList_, quotaInfoList) };
    inline ListQuotasResponseBodyData& setQuotaInfoList(vector<Models::ListQuotasResponseBodyDataQuotaInfoList> && quotaInfoList) { DARABONBA_PTR_SET_RVALUE(quotaInfoList_, quotaInfoList) };


  protected:
    // A pagination token. Only continuous page turning is supported. If NextToken is not empty, the next page exists. The value of NextToken can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Indicates the marker after which the returned list begins.
    std::shared_ptr<string> marker_ = nullptr;
    // The maximum number of entries returned per page.
    std::shared_ptr<int64_t> maxItem_ = nullptr;
    // The list of quotas.
    std::shared_ptr<vector<Models::ListQuotasResponseBodyDataQuotaInfoList>> quotaInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
