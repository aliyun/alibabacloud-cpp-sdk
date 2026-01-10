// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTRUNTIMEENDPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTRUNTIMEENDPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListAgentRuntimeEndpointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentRuntimeEndpointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(searchMode, searchMode_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentRuntimeEndpointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(searchMode, searchMode_);
    };
    ListAgentRuntimeEndpointsRequest() = default ;
    ListAgentRuntimeEndpointsRequest(const ListAgentRuntimeEndpointsRequest &) = default ;
    ListAgentRuntimeEndpointsRequest(ListAgentRuntimeEndpointsRequest &&) = default ;
    ListAgentRuntimeEndpointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentRuntimeEndpointsRequest() = default ;
    ListAgentRuntimeEndpointsRequest& operator=(const ListAgentRuntimeEndpointsRequest &) = default ;
    ListAgentRuntimeEndpointsRequest& operator=(ListAgentRuntimeEndpointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointName_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->searchMode_ == nullptr; };
    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline ListAgentRuntimeEndpointsRequest& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAgentRuntimeEndpointsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAgentRuntimeEndpointsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline string getSearchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, "") };
    inline ListAgentRuntimeEndpointsRequest& setSearchMode(string searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


  protected:
    // 根据端点名称进行模糊匹配过滤
    shared_ptr<string> endpointName_ {};
    // 当前页码，从1开始计数
    shared_ptr<int32_t> pageNumber_ {};
    // 每页返回的记录数量
    shared_ptr<int32_t> pageSize_ {};
    // 查询模式，支持精确查询和模糊查询
    shared_ptr<string> searchMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
