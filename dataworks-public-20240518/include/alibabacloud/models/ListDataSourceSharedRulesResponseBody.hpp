// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESHAREDRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESHAREDRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataSourceSharedRulesResponseBodyDataSourceSharedRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataSourceSharedRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceSharedRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceSharedRules, dataSourceSharedRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceSharedRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceSharedRules, dataSourceSharedRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataSourceSharedRulesResponseBody() = default ;
    ListDataSourceSharedRulesResponseBody(const ListDataSourceSharedRulesResponseBody &) = default ;
    ListDataSourceSharedRulesResponseBody(ListDataSourceSharedRulesResponseBody &&) = default ;
    ListDataSourceSharedRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceSharedRulesResponseBody() = default ;
    ListDataSourceSharedRulesResponseBody& operator=(const ListDataSourceSharedRulesResponseBody &) = default ;
    ListDataSourceSharedRulesResponseBody& operator=(ListDataSourceSharedRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceSharedRules_ != nullptr
        && this->requestId_ != nullptr; };
    // dataSourceSharedRules Field Functions 
    bool hasDataSourceSharedRules() const { return this->dataSourceSharedRules_ != nullptr;};
    void deleteDataSourceSharedRules() { this->dataSourceSharedRules_ = nullptr;};
    inline const vector<ListDataSourceSharedRulesResponseBodyDataSourceSharedRules> & dataSourceSharedRules() const { DARABONBA_PTR_GET_CONST(dataSourceSharedRules_, vector<ListDataSourceSharedRulesResponseBodyDataSourceSharedRules>) };
    inline vector<ListDataSourceSharedRulesResponseBodyDataSourceSharedRules> dataSourceSharedRules() { DARABONBA_PTR_GET(dataSourceSharedRules_, vector<ListDataSourceSharedRulesResponseBodyDataSourceSharedRules>) };
    inline ListDataSourceSharedRulesResponseBody& setDataSourceSharedRules(const vector<ListDataSourceSharedRulesResponseBodyDataSourceSharedRules> & dataSourceSharedRules) { DARABONBA_PTR_SET_VALUE(dataSourceSharedRules_, dataSourceSharedRules) };
    inline ListDataSourceSharedRulesResponseBody& setDataSourceSharedRules(vector<ListDataSourceSharedRulesResponseBodyDataSourceSharedRules> && dataSourceSharedRules) { DARABONBA_PTR_SET_RVALUE(dataSourceSharedRules_, dataSourceSharedRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSourceSharedRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The sharing rules of the data source.
    std::shared_ptr<vector<ListDataSourceSharedRulesResponseBodyDataSourceSharedRules>> dataSourceSharedRules_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
