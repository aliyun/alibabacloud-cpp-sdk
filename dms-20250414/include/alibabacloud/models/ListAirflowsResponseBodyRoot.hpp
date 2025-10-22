// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIRFLOWSRESPONSEBODYROOT_HPP_
#define ALIBABACLOUD_MODELS_LISTAIRFLOWSRESPONSEBODYROOT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAirflowsResponseBodyRootList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListAirflowsResponseBodyRoot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAirflowsResponseBodyRoot& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAirflowsResponseBodyRoot& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAirflowsResponseBodyRoot() = default ;
    ListAirflowsResponseBodyRoot(const ListAirflowsResponseBodyRoot &) = default ;
    ListAirflowsResponseBodyRoot(ListAirflowsResponseBodyRoot &&) = default ;
    ListAirflowsResponseBodyRoot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAirflowsResponseBodyRoot() = default ;
    ListAirflowsResponseBodyRoot& operator=(const ListAirflowsResponseBodyRoot &) = default ;
    ListAirflowsResponseBodyRoot& operator=(ListAirflowsResponseBodyRoot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->totalCount_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::ListAirflowsResponseBodyRootList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::ListAirflowsResponseBodyRootList>) };
    inline vector<Models::ListAirflowsResponseBodyRootList> list() { DARABONBA_PTR_GET(list_, vector<Models::ListAirflowsResponseBodyRootList>) };
    inline ListAirflowsResponseBodyRoot& setList(const vector<Models::ListAirflowsResponseBodyRootList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListAirflowsResponseBodyRoot& setList(vector<Models::ListAirflowsResponseBodyRootList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAirflowsResponseBodyRoot& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListAirflowsResponseBodyRootList>> list_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
