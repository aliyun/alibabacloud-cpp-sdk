// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERAPIKEYSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERAPIKEYSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConsumerAPIKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListConsumerAPIKeysOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerAPIKeysOutput& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerAPIKeysOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListConsumerAPIKeysOutput() = default ;
    ListConsumerAPIKeysOutput(const ListConsumerAPIKeysOutput &) = default ;
    ListConsumerAPIKeysOutput(ListConsumerAPIKeysOutput &&) = default ;
    ListConsumerAPIKeysOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerAPIKeysOutput() = default ;
    ListConsumerAPIKeysOutput& operator=(const ListConsumerAPIKeysOutput &) = default ;
    ListConsumerAPIKeysOutput& operator=(ListConsumerAPIKeysOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ConsumerAPIKey> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ConsumerAPIKey>) };
    inline vector<ConsumerAPIKey> getItems() { DARABONBA_PTR_GET(items_, vector<ConsumerAPIKey>) };
    inline ListConsumerAPIKeysOutput& setItems(const vector<ConsumerAPIKey> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListConsumerAPIKeysOutput& setItems(vector<ConsumerAPIKey> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListConsumerAPIKeysOutput& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListConsumerAPIKeysOutput& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListConsumerAPIKeysOutput& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // 消费者API密钥列表
    shared_ptr<vector<ConsumerAPIKey>> items_ {};
    // 当前页码
    shared_ptr<int32_t> pageNumber_ {};
    // 每页记录数
    shared_ptr<int32_t> pageSize_ {};
    // 符合条件的消费者API密钥总数
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
