// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTCALLLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AGENTCALLLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class AgentCallListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentCallListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentTag, agentTag_);
      DARABONBA_PTR_TO_JSON(CallDate, callDate_);
      DARABONBA_PTR_TO_JSON(EndCallDate, endCallDate_);
      DARABONBA_PTR_TO_JSON(NumberMD5s, numberMD5s_);
      DARABONBA_PTR_TO_JSON(Numbers, numbers_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, AgentCallListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentTag, agentTag_);
      DARABONBA_PTR_FROM_JSON(CallDate, callDate_);
      DARABONBA_PTR_FROM_JSON(EndCallDate, endCallDate_);
      DARABONBA_PTR_FROM_JSON(NumberMD5s, numberMD5s_);
      DARABONBA_PTR_FROM_JSON(Numbers, numbers_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    AgentCallListRequest() = default ;
    AgentCallListRequest(const AgentCallListRequest &) = default ;
    AgentCallListRequest(AgentCallListRequest &&) = default ;
    AgentCallListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentCallListRequest() = default ;
    AgentCallListRequest& operator=(const AgentCallListRequest &) = default ;
    AgentCallListRequest& operator=(AgentCallListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentTag_ == nullptr && this->callDate_ == nullptr && this->endCallDate_ == nullptr && this->numberMD5s_ == nullptr && this->numbers_ == nullptr
        && this->ownerId_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->tags_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
    inline AgentCallListRequest& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentTag Field Functions 
    bool hasAgentTag() const { return this->agentTag_ != nullptr;};
    void deleteAgentTag() { this->agentTag_ = nullptr;};
    inline string getAgentTag() const { DARABONBA_PTR_GET_DEFAULT(agentTag_, "") };
    inline AgentCallListRequest& setAgentTag(string agentTag) { DARABONBA_PTR_SET_VALUE(agentTag_, agentTag) };


    // callDate Field Functions 
    bool hasCallDate() const { return this->callDate_ != nullptr;};
    void deleteCallDate() { this->callDate_ = nullptr;};
    inline string getCallDate() const { DARABONBA_PTR_GET_DEFAULT(callDate_, "") };
    inline AgentCallListRequest& setCallDate(string callDate) { DARABONBA_PTR_SET_VALUE(callDate_, callDate) };


    // endCallDate Field Functions 
    bool hasEndCallDate() const { return this->endCallDate_ != nullptr;};
    void deleteEndCallDate() { this->endCallDate_ = nullptr;};
    inline string getEndCallDate() const { DARABONBA_PTR_GET_DEFAULT(endCallDate_, "") };
    inline AgentCallListRequest& setEndCallDate(string endCallDate) { DARABONBA_PTR_SET_VALUE(endCallDate_, endCallDate) };


    // numberMD5s Field Functions 
    bool hasNumberMD5s() const { return this->numberMD5s_ != nullptr;};
    void deleteNumberMD5s() { this->numberMD5s_ = nullptr;};
    inline const vector<string> & getNumberMD5s() const { DARABONBA_PTR_GET_CONST(numberMD5s_, vector<string>) };
    inline vector<string> getNumberMD5s() { DARABONBA_PTR_GET(numberMD5s_, vector<string>) };
    inline AgentCallListRequest& setNumberMD5s(const vector<string> & numberMD5s) { DARABONBA_PTR_SET_VALUE(numberMD5s_, numberMD5s) };
    inline AgentCallListRequest& setNumberMD5s(vector<string> && numberMD5s) { DARABONBA_PTR_SET_RVALUE(numberMD5s_, numberMD5s) };


    // numbers Field Functions 
    bool hasNumbers() const { return this->numbers_ != nullptr;};
    void deleteNumbers() { this->numbers_ = nullptr;};
    inline const vector<string> & getNumbers() const { DARABONBA_PTR_GET_CONST(numbers_, vector<string>) };
    inline vector<string> getNumbers() { DARABONBA_PTR_GET(numbers_, vector<string>) };
    inline AgentCallListRequest& setNumbers(const vector<string> & numbers) { DARABONBA_PTR_SET_VALUE(numbers_, numbers) };
    inline AgentCallListRequest& setNumbers(vector<string> && numbers) { DARABONBA_PTR_SET_RVALUE(numbers_, numbers) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AgentCallListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline AgentCallListRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline AgentCallListRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AgentCallListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AgentCallListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline AgentCallListRequest& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline AgentCallListRequest& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // 坐席ID
    shared_ptr<int64_t> agentId_ {};
    // 坐席标签
    shared_ptr<string> agentTag_ {};
    // 开始外呼时间
    // 
    // This parameter is required.
    shared_ptr<string> callDate_ {};
    // 结束外呼时间
    // 
    // This parameter is required.
    shared_ptr<string> endCallDate_ {};
    // 号码MD5列表
    shared_ptr<vector<string>> numberMD5s_ {};
    // 号码列表
    shared_ptr<vector<string>> numbers_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 页数
    // 
    // This parameter is required.
    shared_ptr<int64_t> page_ {};
    // 每页外呼记录数
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 用户自定义标签列表
    shared_ptr<vector<string>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
