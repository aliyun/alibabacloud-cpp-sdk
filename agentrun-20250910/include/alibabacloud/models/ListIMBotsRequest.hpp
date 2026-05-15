// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMBOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMBOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListIMBotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIMBotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentRuntimeId, agentRuntimeId_);
      DARABONBA_PTR_TO_JSON(botBizType, botBizType_);
      DARABONBA_PTR_TO_JSON(botName, botName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListIMBotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentRuntimeId, agentRuntimeId_);
      DARABONBA_PTR_FROM_JSON(botBizType, botBizType_);
      DARABONBA_PTR_FROM_JSON(botName, botName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListIMBotsRequest() = default ;
    ListIMBotsRequest(const ListIMBotsRequest &) = default ;
    ListIMBotsRequest(ListIMBotsRequest &&) = default ;
    ListIMBotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIMBotsRequest() = default ;
    ListIMBotsRequest& operator=(const ListIMBotsRequest &) = default ;
    ListIMBotsRequest& operator=(ListIMBotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentRuntimeId_ == nullptr
        && this->botBizType_ == nullptr && this->botName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr; };
    // agentRuntimeId Field Functions 
    bool hasAgentRuntimeId() const { return this->agentRuntimeId_ != nullptr;};
    void deleteAgentRuntimeId() { this->agentRuntimeId_ = nullptr;};
    inline string getAgentRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeId_, "") };
    inline ListIMBotsRequest& setAgentRuntimeId(string agentRuntimeId) { DARABONBA_PTR_SET_VALUE(agentRuntimeId_, agentRuntimeId) };


    // botBizType Field Functions 
    bool hasBotBizType() const { return this->botBizType_ != nullptr;};
    void deleteBotBizType() { this->botBizType_ = nullptr;};
    inline string getBotBizType() const { DARABONBA_PTR_GET_DEFAULT(botBizType_, "") };
    inline ListIMBotsRequest& setBotBizType(string botBizType) { DARABONBA_PTR_SET_VALUE(botBizType_, botBizType) };


    // botName Field Functions 
    bool hasBotName() const { return this->botName_ != nullptr;};
    void deleteBotName() { this->botName_ = nullptr;};
    inline string getBotName() const { DARABONBA_PTR_GET_DEFAULT(botName_, "") };
    inline ListIMBotsRequest& setBotName(string botName) { DARABONBA_PTR_SET_VALUE(botName_, botName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListIMBotsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIMBotsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIMBotsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> agentRuntimeId_ {};
    shared_ptr<string> botBizType_ {};
    shared_ptr<string> botName_ {};
    // 默认 1；传入时须 ≥ 1
    shared_ptr<int32_t> pageNumber_ {};
    // 默认 20；传入时须 1–100
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
