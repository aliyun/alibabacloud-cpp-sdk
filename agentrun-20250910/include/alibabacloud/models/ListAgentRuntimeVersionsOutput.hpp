// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTRUNTIMEVERSIONSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTRUNTIMEVERSIONSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AgentRuntimeVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListAgentRuntimeVersionsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentRuntimeVersionsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentRuntimeVersionsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAgentRuntimeVersionsOutput() = default ;
    ListAgentRuntimeVersionsOutput(const ListAgentRuntimeVersionsOutput &) = default ;
    ListAgentRuntimeVersionsOutput(ListAgentRuntimeVersionsOutput &&) = default ;
    ListAgentRuntimeVersionsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentRuntimeVersionsOutput() = default ;
    ListAgentRuntimeVersionsOutput& operator=(const ListAgentRuntimeVersionsOutput &) = default ;
    ListAgentRuntimeVersionsOutput& operator=(ListAgentRuntimeVersionsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<AgentRuntimeVersion> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<AgentRuntimeVersion>) };
    inline vector<AgentRuntimeVersion> getItems() { DARABONBA_PTR_GET(items_, vector<AgentRuntimeVersion>) };
    inline ListAgentRuntimeVersionsOutput& setItems(const vector<AgentRuntimeVersion> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListAgentRuntimeVersionsOutput& setItems(vector<AgentRuntimeVersion> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAgentRuntimeVersionsOutput& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAgentRuntimeVersionsOutput& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListAgentRuntimeVersionsOutput& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<AgentRuntimeVersion>> items_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
