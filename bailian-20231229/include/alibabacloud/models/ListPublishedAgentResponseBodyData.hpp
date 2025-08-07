// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDAGENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDAGENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPublishedAgentResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListPublishedAgentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedAgentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(pageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedAgentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(pageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListPublishedAgentResponseBodyData() = default ;
    ListPublishedAgentResponseBodyData(const ListPublishedAgentResponseBodyData &) = default ;
    ListPublishedAgentResponseBodyData(ListPublishedAgentResponseBodyData &&) = default ;
    ListPublishedAgentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedAgentResponseBodyData() = default ;
    ListPublishedAgentResponseBodyData& operator=(const ListPublishedAgentResponseBodyData &) = default ;
    ListPublishedAgentResponseBodyData& operator=(ListPublishedAgentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->total_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::ListPublishedAgentResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::ListPublishedAgentResponseBodyDataList>) };
    inline vector<Models::ListPublishedAgentResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::ListPublishedAgentResponseBodyDataList>) };
    inline ListPublishedAgentResponseBodyData& setList(const vector<Models::ListPublishedAgentResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListPublishedAgentResponseBodyData& setList(vector<Models::ListPublishedAgentResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListPublishedAgentResponseBodyData& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPublishedAgentResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListPublishedAgentResponseBodyData& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<Models::ListPublishedAgentResponseBodyDataList>> list_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
