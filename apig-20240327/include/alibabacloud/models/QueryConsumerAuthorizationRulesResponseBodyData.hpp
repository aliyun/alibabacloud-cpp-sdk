// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONSUMERAUTHORIZATIONRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONSUMERAUTHORIZATIONRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryConsumerAuthorizationRulesResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class QueryConsumerAuthorizationRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConsumerAuthorizationRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConsumerAuthorizationRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
    };
    QueryConsumerAuthorizationRulesResponseBodyData() = default ;
    QueryConsumerAuthorizationRulesResponseBodyData(const QueryConsumerAuthorizationRulesResponseBodyData &) = default ;
    QueryConsumerAuthorizationRulesResponseBodyData(QueryConsumerAuthorizationRulesResponseBodyData &&) = default ;
    QueryConsumerAuthorizationRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConsumerAuthorizationRulesResponseBodyData() = default ;
    QueryConsumerAuthorizationRulesResponseBodyData& operator=(const QueryConsumerAuthorizationRulesResponseBodyData &) = default ;
    QueryConsumerAuthorizationRulesResponseBodyData& operator=(QueryConsumerAuthorizationRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalSize_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::QueryConsumerAuthorizationRulesResponseBodyDataItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::QueryConsumerAuthorizationRulesResponseBodyDataItems>) };
    inline vector<Models::QueryConsumerAuthorizationRulesResponseBodyDataItems> items() { DARABONBA_PTR_GET(items_, vector<Models::QueryConsumerAuthorizationRulesResponseBodyDataItems>) };
    inline QueryConsumerAuthorizationRulesResponseBodyData& setItems(const vector<Models::QueryConsumerAuthorizationRulesResponseBodyDataItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QueryConsumerAuthorizationRulesResponseBodyData& setItems(vector<Models::QueryConsumerAuthorizationRulesResponseBodyDataItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryConsumerAuthorizationRulesResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryConsumerAuthorizationRulesResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline string totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, "") };
    inline QueryConsumerAuthorizationRulesResponseBodyData& setTotalSize(string totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The rules.
    std::shared_ptr<vector<Models::QueryConsumerAuthorizationRulesResponseBodyDataItems>> items_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
