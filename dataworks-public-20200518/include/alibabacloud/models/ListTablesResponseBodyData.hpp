// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTablesResponseBodyDataTableEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListTablesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TableEntityList, tableEntityList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TableEntityList, tableEntityList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListTablesResponseBodyData() = default ;
    ListTablesResponseBodyData(const ListTablesResponseBodyData &) = default ;
    ListTablesResponseBodyData(ListTablesResponseBodyData &&) = default ;
    ListTablesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesResponseBodyData() = default ;
    ListTablesResponseBodyData& operator=(const ListTablesResponseBodyData &) = default ;
    ListTablesResponseBodyData& operator=(ListTablesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->tableEntityList_ != nullptr && this->total_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTablesResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // tableEntityList Field Functions 
    bool hasTableEntityList() const { return this->tableEntityList_ != nullptr;};
    void deleteTableEntityList() { this->tableEntityList_ = nullptr;};
    inline const vector<Models::ListTablesResponseBodyDataTableEntityList> & tableEntityList() const { DARABONBA_PTR_GET_CONST(tableEntityList_, vector<Models::ListTablesResponseBodyDataTableEntityList>) };
    inline vector<Models::ListTablesResponseBodyDataTableEntityList> tableEntityList() { DARABONBA_PTR_GET(tableEntityList_, vector<Models::ListTablesResponseBodyDataTableEntityList>) };
    inline ListTablesResponseBodyData& setTableEntityList(const vector<Models::ListTablesResponseBodyDataTableEntityList> & tableEntityList) { DARABONBA_PTR_SET_VALUE(tableEntityList_, tableEntityList) };
    inline ListTablesResponseBodyData& setTableEntityList(vector<Models::ListTablesResponseBodyDataTableEntityList> && tableEntityList) { DARABONBA_PTR_SET_RVALUE(tableEntityList_, tableEntityList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListTablesResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Pagination information, which specifies the starting point of the next read.
    std::shared_ptr<string> nextToken_ = nullptr;
    // An array of entities.
    std::shared_ptr<vector<Models::ListTablesResponseBodyDataTableEntityList>> tableEntityList_ = nullptr;
    // The total number.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
