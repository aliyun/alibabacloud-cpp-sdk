// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBIZENTITIESRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTBIZENTITIESRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBizEntitiesResponseBodyPageResultBizEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListBizEntitiesResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBizEntitiesResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(BizEntityList, bizEntityList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBizEntitiesResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(BizEntityList, bizEntityList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBizEntitiesResponseBodyPageResult() = default ;
    ListBizEntitiesResponseBodyPageResult(const ListBizEntitiesResponseBodyPageResult &) = default ;
    ListBizEntitiesResponseBodyPageResult(ListBizEntitiesResponseBodyPageResult &&) = default ;
    ListBizEntitiesResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBizEntitiesResponseBodyPageResult() = default ;
    ListBizEntitiesResponseBodyPageResult& operator=(const ListBizEntitiesResponseBodyPageResult &) = default ;
    ListBizEntitiesResponseBodyPageResult& operator=(ListBizEntitiesResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizEntityList_ != nullptr
        && this->totalCount_ != nullptr; };
    // bizEntityList Field Functions 
    bool hasBizEntityList() const { return this->bizEntityList_ != nullptr;};
    void deleteBizEntityList() { this->bizEntityList_ = nullptr;};
    inline const vector<Models::ListBizEntitiesResponseBodyPageResultBizEntityList> & bizEntityList() const { DARABONBA_PTR_GET_CONST(bizEntityList_, vector<Models::ListBizEntitiesResponseBodyPageResultBizEntityList>) };
    inline vector<Models::ListBizEntitiesResponseBodyPageResultBizEntityList> bizEntityList() { DARABONBA_PTR_GET(bizEntityList_, vector<Models::ListBizEntitiesResponseBodyPageResultBizEntityList>) };
    inline ListBizEntitiesResponseBodyPageResult& setBizEntityList(const vector<Models::ListBizEntitiesResponseBodyPageResultBizEntityList> & bizEntityList) { DARABONBA_PTR_SET_VALUE(bizEntityList_, bizEntityList) };
    inline ListBizEntitiesResponseBodyPageResult& setBizEntityList(vector<Models::ListBizEntitiesResponseBodyPageResultBizEntityList> && bizEntityList) { DARABONBA_PTR_SET_RVALUE(bizEntityList_, bizEntityList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBizEntitiesResponseBodyPageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListBizEntitiesResponseBodyPageResultBizEntityList>> bizEntityList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
