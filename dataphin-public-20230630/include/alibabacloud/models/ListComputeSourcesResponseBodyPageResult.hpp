// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTESOURCESRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTESOURCESRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListComputeSourcesResponseBodyPageResultComputeSourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListComputeSourcesResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeSourcesResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeSourceList, computeSourceList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeSourcesResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeSourceList, computeSourceList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListComputeSourcesResponseBodyPageResult() = default ;
    ListComputeSourcesResponseBodyPageResult(const ListComputeSourcesResponseBodyPageResult &) = default ;
    ListComputeSourcesResponseBodyPageResult(ListComputeSourcesResponseBodyPageResult &&) = default ;
    ListComputeSourcesResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeSourcesResponseBodyPageResult() = default ;
    ListComputeSourcesResponseBodyPageResult& operator=(const ListComputeSourcesResponseBodyPageResult &) = default ;
    ListComputeSourcesResponseBodyPageResult& operator=(ListComputeSourcesResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeSourceList_ == nullptr
        && return this->totalCount_ == nullptr; };
    // computeSourceList Field Functions 
    bool hasComputeSourceList() const { return this->computeSourceList_ != nullptr;};
    void deleteComputeSourceList() { this->computeSourceList_ = nullptr;};
    inline const vector<Models::ListComputeSourcesResponseBodyPageResultComputeSourceList> & computeSourceList() const { DARABONBA_PTR_GET_CONST(computeSourceList_, vector<Models::ListComputeSourcesResponseBodyPageResultComputeSourceList>) };
    inline vector<Models::ListComputeSourcesResponseBodyPageResultComputeSourceList> computeSourceList() { DARABONBA_PTR_GET(computeSourceList_, vector<Models::ListComputeSourcesResponseBodyPageResultComputeSourceList>) };
    inline ListComputeSourcesResponseBodyPageResult& setComputeSourceList(const vector<Models::ListComputeSourcesResponseBodyPageResultComputeSourceList> & computeSourceList) { DARABONBA_PTR_SET_VALUE(computeSourceList_, computeSourceList) };
    inline ListComputeSourcesResponseBodyPageResult& setComputeSourceList(vector<Models::ListComputeSourcesResponseBodyPageResultComputeSourceList> && computeSourceList) { DARABONBA_PTR_SET_RVALUE(computeSourceList_, computeSourceList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListComputeSourcesResponseBodyPageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListComputeSourcesResponseBodyPageResultComputeSourceList>> computeSourceList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
