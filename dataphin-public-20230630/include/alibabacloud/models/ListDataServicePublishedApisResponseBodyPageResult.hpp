// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServicePublishedApisResponseBodyPageResultApiList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServicePublishedApisResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServicePublishedApisResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(ApiList, apiList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServicePublishedApisResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiList, apiList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataServicePublishedApisResponseBodyPageResult() = default ;
    ListDataServicePublishedApisResponseBodyPageResult(const ListDataServicePublishedApisResponseBodyPageResult &) = default ;
    ListDataServicePublishedApisResponseBodyPageResult(ListDataServicePublishedApisResponseBodyPageResult &&) = default ;
    ListDataServicePublishedApisResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServicePublishedApisResponseBodyPageResult() = default ;
    ListDataServicePublishedApisResponseBodyPageResult& operator=(const ListDataServicePublishedApisResponseBodyPageResult &) = default ;
    ListDataServicePublishedApisResponseBodyPageResult& operator=(ListDataServicePublishedApisResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiList_ != nullptr
        && this->totalCount_ != nullptr; };
    // apiList Field Functions 
    bool hasApiList() const { return this->apiList_ != nullptr;};
    void deleteApiList() { this->apiList_ = nullptr;};
    inline const vector<Models::ListDataServicePublishedApisResponseBodyPageResultApiList> & apiList() const { DARABONBA_PTR_GET_CONST(apiList_, vector<Models::ListDataServicePublishedApisResponseBodyPageResultApiList>) };
    inline vector<Models::ListDataServicePublishedApisResponseBodyPageResultApiList> apiList() { DARABONBA_PTR_GET(apiList_, vector<Models::ListDataServicePublishedApisResponseBodyPageResultApiList>) };
    inline ListDataServicePublishedApisResponseBodyPageResult& setApiList(const vector<Models::ListDataServicePublishedApisResponseBodyPageResultApiList> & apiList) { DARABONBA_PTR_SET_VALUE(apiList_, apiList) };
    inline ListDataServicePublishedApisResponseBodyPageResult& setApiList(vector<Models::ListDataServicePublishedApisResponseBodyPageResultApiList> && apiList) { DARABONBA_PTR_SET_RVALUE(apiList_, apiList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataServicePublishedApisResponseBodyPageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListDataServicePublishedApisResponseBodyPageResultApiList>> apiList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
