// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTEDCLUSTERSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTEDCLUSTERSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConnectedClustersResponseBodyResultResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListConnectedClustersResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectedClustersResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectedClustersResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListConnectedClustersResponseBodyResult() = default ;
    ListConnectedClustersResponseBodyResult(const ListConnectedClustersResponseBodyResult &) = default ;
    ListConnectedClustersResponseBodyResult(ListConnectedClustersResponseBodyResult &&) = default ;
    ListConnectedClustersResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectedClustersResponseBodyResult() = default ;
    ListConnectedClustersResponseBodyResult& operator=(const ListConnectedClustersResponseBodyResult &) = default ;
    ListConnectedClustersResponseBodyResult& operator=(ListConnectedClustersResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->result_ != nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::ListConnectedClustersResponseBodyResultResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::ListConnectedClustersResponseBodyResultResult>) };
    inline vector<Models::ListConnectedClustersResponseBodyResultResult> result() { DARABONBA_PTR_GET(result_, vector<Models::ListConnectedClustersResponseBodyResultResult>) };
    inline ListConnectedClustersResponseBodyResult& setResult(const vector<Models::ListConnectedClustersResponseBodyResultResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListConnectedClustersResponseBodyResult& setResult(vector<Models::ListConnectedClustersResponseBodyResultResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<vector<Models::ListConnectedClustersResponseBodyResultResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
