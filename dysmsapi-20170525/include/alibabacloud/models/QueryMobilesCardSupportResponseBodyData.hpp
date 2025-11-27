// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMOBILESCARDSUPPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYMOBILESCARDSUPPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMobilesCardSupportResponseBodyDataQueryResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryMobilesCardSupportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMobilesCardSupportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(QueryResult, queryResult_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMobilesCardSupportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryResult, queryResult_);
    };
    QueryMobilesCardSupportResponseBodyData() = default ;
    QueryMobilesCardSupportResponseBodyData(const QueryMobilesCardSupportResponseBodyData &) = default ;
    QueryMobilesCardSupportResponseBodyData(QueryMobilesCardSupportResponseBodyData &&) = default ;
    QueryMobilesCardSupportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMobilesCardSupportResponseBodyData() = default ;
    QueryMobilesCardSupportResponseBodyData& operator=(const QueryMobilesCardSupportResponseBodyData &) = default ;
    QueryMobilesCardSupportResponseBodyData& operator=(QueryMobilesCardSupportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryResult_ == nullptr; };
    // queryResult Field Functions 
    bool hasQueryResult() const { return this->queryResult_ != nullptr;};
    void deleteQueryResult() { this->queryResult_ = nullptr;};
    inline const vector<Models::QueryMobilesCardSupportResponseBodyDataQueryResult> & queryResult() const { DARABONBA_PTR_GET_CONST(queryResult_, vector<Models::QueryMobilesCardSupportResponseBodyDataQueryResult>) };
    inline vector<Models::QueryMobilesCardSupportResponseBodyDataQueryResult> queryResult() { DARABONBA_PTR_GET(queryResult_, vector<Models::QueryMobilesCardSupportResponseBodyDataQueryResult>) };
    inline QueryMobilesCardSupportResponseBodyData& setQueryResult(const vector<Models::QueryMobilesCardSupportResponseBodyDataQueryResult> & queryResult) { DARABONBA_PTR_SET_VALUE(queryResult_, queryResult) };
    inline QueryMobilesCardSupportResponseBodyData& setQueryResult(vector<Models::QueryMobilesCardSupportResponseBodyDataQueryResult> && queryResult) { DARABONBA_PTR_SET_RVALUE(queryResult_, queryResult) };


  protected:
    // The list of returned results.
    std::shared_ptr<vector<Models::QueryMobilesCardSupportResponseBodyDataQueryResult>> queryResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
