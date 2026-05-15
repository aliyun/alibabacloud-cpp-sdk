// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELCONNECTIONSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELCONNECTIONSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelConnection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListModelConnectionsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelConnectionsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelConnectionsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListModelConnectionsOutput() = default ;
    ListModelConnectionsOutput(const ListModelConnectionsOutput &) = default ;
    ListModelConnectionsOutput(ListModelConnectionsOutput &&) = default ;
    ListModelConnectionsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelConnectionsOutput() = default ;
    ListModelConnectionsOutput& operator=(const ListModelConnectionsOutput &) = default ;
    ListModelConnectionsOutput& operator=(ListModelConnectionsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ModelConnection> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ModelConnection>) };
    inline vector<ModelConnection> getItems() { DARABONBA_PTR_GET(items_, vector<ModelConnection>) };
    inline ListModelConnectionsOutput& setItems(const vector<ModelConnection> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListModelConnectionsOutput& setItems(vector<ModelConnection> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListModelConnectionsOutput& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListModelConnectionsOutput& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListModelConnectionsOutput& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // 模型连接列表
    shared_ptr<vector<ModelConnection>> items_ {};
    // 当前页码
    shared_ptr<int32_t> pageNumber_ {};
    // 每页记录数
    shared_ptr<int32_t> pageSize_ {};
    // 符合条件的模型连接总数
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
