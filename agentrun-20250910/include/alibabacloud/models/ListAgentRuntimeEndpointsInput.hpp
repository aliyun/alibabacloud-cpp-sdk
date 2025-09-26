// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTRUNTIMEENDPOINTSINPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTRUNTIMEENDPOINTSINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListAgentRuntimeEndpointsInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentRuntimeEndpointsInput& obj) { 
      DARABONBA_PTR_TO_JSON(endpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(statuses, statuses_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentRuntimeEndpointsInput& obj) { 
      DARABONBA_PTR_FROM_JSON(endpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(statuses, statuses_);
    };
    ListAgentRuntimeEndpointsInput() = default ;
    ListAgentRuntimeEndpointsInput(const ListAgentRuntimeEndpointsInput &) = default ;
    ListAgentRuntimeEndpointsInput(ListAgentRuntimeEndpointsInput &&) = default ;
    ListAgentRuntimeEndpointsInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentRuntimeEndpointsInput() = default ;
    ListAgentRuntimeEndpointsInput& operator=(const ListAgentRuntimeEndpointsInput &) = default ;
    ListAgentRuntimeEndpointsInput& operator=(ListAgentRuntimeEndpointsInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpointName_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->statuses_ != nullptr; };
    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string endpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline ListAgentRuntimeEndpointsInput& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAgentRuntimeEndpointsInput& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAgentRuntimeEndpointsInput& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & statuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> statuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListAgentRuntimeEndpointsInput& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListAgentRuntimeEndpointsInput& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


  protected:
    // 按端点名称过滤
    std::shared_ptr<string> endpointName_ = nullptr;
    // 页码
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // 每页记录数
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // 按状态过滤
    std::shared_ptr<vector<string>> statuses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
