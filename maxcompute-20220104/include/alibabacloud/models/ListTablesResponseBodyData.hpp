// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTablesResponseBodyDataTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListTablesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(marker, marker_);
      DARABONBA_PTR_TO_JSON(maxItem, maxItem_);
      DARABONBA_PTR_TO_JSON(tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(marker, marker_);
      DARABONBA_PTR_FROM_JSON(maxItem, maxItem_);
      DARABONBA_PTR_FROM_JSON(tables, tables_);
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
    virtual bool empty() const override { this->marker_ != nullptr
        && this->maxItem_ != nullptr && this->tables_ != nullptr; };
    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListTablesResponseBodyData& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItem Field Functions 
    bool hasMaxItem() const { return this->maxItem_ != nullptr;};
    void deleteMaxItem() { this->maxItem_ = nullptr;};
    inline int32_t maxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0) };
    inline ListTablesResponseBodyData& setMaxItem(int32_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Models::ListTablesResponseBodyDataTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Models::ListTablesResponseBodyDataTables>) };
    inline vector<Models::ListTablesResponseBodyDataTables> tables() { DARABONBA_PTR_GET(tables_, vector<Models::ListTablesResponseBodyDataTables>) };
    inline ListTablesResponseBodyData& setTables(const vector<Models::ListTablesResponseBodyDataTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline ListTablesResponseBodyData& setTables(vector<Models::ListTablesResponseBodyDataTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    // Indicates the marker after which the returned list begins.
    std::shared_ptr<string> marker_ = nullptr;
    // The maximum number of entries returned per page.
    std::shared_ptr<int32_t> maxItem_ = nullptr;
    // The information about tables.
    std::shared_ptr<vector<Models::ListTablesResponseBodyDataTables>> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
