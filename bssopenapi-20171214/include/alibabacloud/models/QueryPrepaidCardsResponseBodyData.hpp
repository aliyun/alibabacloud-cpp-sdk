// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPREPAIDCARDSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYPREPAIDCARDSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPrepaidCardsResponseBodyDataPrepaidCard.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryPrepaidCardsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPrepaidCardsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PrepaidCard, prepaidCard_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPrepaidCardsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PrepaidCard, prepaidCard_);
    };
    QueryPrepaidCardsResponseBodyData() = default ;
    QueryPrepaidCardsResponseBodyData(const QueryPrepaidCardsResponseBodyData &) = default ;
    QueryPrepaidCardsResponseBodyData(QueryPrepaidCardsResponseBodyData &&) = default ;
    QueryPrepaidCardsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPrepaidCardsResponseBodyData() = default ;
    QueryPrepaidCardsResponseBodyData& operator=(const QueryPrepaidCardsResponseBodyData &) = default ;
    QueryPrepaidCardsResponseBodyData& operator=(QueryPrepaidCardsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->prepaidCard_ != nullptr; };
    // prepaidCard Field Functions 
    bool hasPrepaidCard() const { return this->prepaidCard_ != nullptr;};
    void deletePrepaidCard() { this->prepaidCard_ = nullptr;};
    inline const vector<Models::QueryPrepaidCardsResponseBodyDataPrepaidCard> & prepaidCard() const { DARABONBA_PTR_GET_CONST(prepaidCard_, vector<Models::QueryPrepaidCardsResponseBodyDataPrepaidCard>) };
    inline vector<Models::QueryPrepaidCardsResponseBodyDataPrepaidCard> prepaidCard() { DARABONBA_PTR_GET(prepaidCard_, vector<Models::QueryPrepaidCardsResponseBodyDataPrepaidCard>) };
    inline QueryPrepaidCardsResponseBodyData& setPrepaidCard(const vector<Models::QueryPrepaidCardsResponseBodyDataPrepaidCard> & prepaidCard) { DARABONBA_PTR_SET_VALUE(prepaidCard_, prepaidCard) };
    inline QueryPrepaidCardsResponseBodyData& setPrepaidCard(vector<Models::QueryPrepaidCardsResponseBodyDataPrepaidCard> && prepaidCard) { DARABONBA_PTR_SET_RVALUE(prepaidCard_, prepaidCard) };


  protected:
    std::shared_ptr<vector<Models::QueryPrepaidCardsResponseBodyDataPrepaidCard>> prepaidCard_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
