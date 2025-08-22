// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOMMERCIALUSAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOMMERCIALUSAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class QueryCommercialUsageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCommercialUsageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Complete, complete_);
      DARABONBA_PTR_TO_JSON(Items, items_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCommercialUsageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Complete, complete_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
    };
    QueryCommercialUsageResponseBodyData() = default ;
    QueryCommercialUsageResponseBodyData(const QueryCommercialUsageResponseBodyData &) = default ;
    QueryCommercialUsageResponseBodyData(QueryCommercialUsageResponseBodyData &&) = default ;
    QueryCommercialUsageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCommercialUsageResponseBodyData() = default ;
    QueryCommercialUsageResponseBodyData& operator=(const QueryCommercialUsageResponseBodyData &) = default ;
    QueryCommercialUsageResponseBodyData& operator=(QueryCommercialUsageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->complete_ != nullptr
        && this->items_ != nullptr; };
    // complete Field Functions 
    bool hasComplete() const { return this->complete_ != nullptr;};
    void deleteComplete() { this->complete_ = nullptr;};
    inline bool complete() const { DARABONBA_PTR_GET_DEFAULT(complete_, false) };
    inline QueryCommercialUsageResponseBodyData& setComplete(bool complete) { DARABONBA_PTR_SET_VALUE(complete_, complete) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Darabonba::Json> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> items() { DARABONBA_PTR_GET(items_, vector<Darabonba::Json>) };
    inline QueryCommercialUsageResponseBodyData& setItems(const vector<Darabonba::Json> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QueryCommercialUsageResponseBodyData& setItems(vector<Darabonba::Json> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    // Indicates whether a multi-region query is complete. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> complete_ = nullptr;
    // The returned struct.
    std::shared_ptr<vector<Darabonba::Json>> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
