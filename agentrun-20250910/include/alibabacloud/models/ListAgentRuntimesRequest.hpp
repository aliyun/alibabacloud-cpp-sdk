// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTRUNTIMESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTRUNTIMESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListAgentRuntimesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentRuntimesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentRuntimeName, agentRuntimeName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentRuntimesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentRuntimeName, agentRuntimeName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListAgentRuntimesRequest() = default ;
    ListAgentRuntimesRequest(const ListAgentRuntimesRequest &) = default ;
    ListAgentRuntimesRequest(ListAgentRuntimesRequest &&) = default ;
    ListAgentRuntimesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentRuntimesRequest() = default ;
    ListAgentRuntimesRequest& operator=(const ListAgentRuntimesRequest &) = default ;
    ListAgentRuntimesRequest& operator=(ListAgentRuntimesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentRuntimeName_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // agentRuntimeName Field Functions 
    bool hasAgentRuntimeName() const { return this->agentRuntimeName_ != nullptr;};
    void deleteAgentRuntimeName() { this->agentRuntimeName_ = nullptr;};
    inline string agentRuntimeName() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeName_, "") };
    inline ListAgentRuntimesRequest& setAgentRuntimeName(string agentRuntimeName) { DARABONBA_PTR_SET_VALUE(agentRuntimeName_, agentRuntimeName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAgentRuntimesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAgentRuntimesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // 根据智能体运行时名称进行模糊匹配过滤
    std::shared_ptr<string> agentRuntimeName_ = nullptr;
    // 当前页码，从1开始计数
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // 每页返回的记录数量
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
