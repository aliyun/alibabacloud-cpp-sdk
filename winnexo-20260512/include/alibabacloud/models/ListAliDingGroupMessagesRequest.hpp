// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIDINGGROUPMESSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALIDINGGROUPMESSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListAliDingGroupMessagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliDingGroupMessagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chatId, chatId_);
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliDingGroupMessagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chatId, chatId_);
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    ListAliDingGroupMessagesRequest() = default ;
    ListAliDingGroupMessagesRequest(const ListAliDingGroupMessagesRequest &) = default ;
    ListAliDingGroupMessagesRequest(ListAliDingGroupMessagesRequest &&) = default ;
    ListAliDingGroupMessagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliDingGroupMessagesRequest() = default ;
    ListAliDingGroupMessagesRequest& operator=(const ListAliDingGroupMessagesRequest &) = default ;
    ListAliDingGroupMessagesRequest& operator=(ListAliDingGroupMessagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatId_ == nullptr
        && this->direction_ == nullptr && this->pageSize_ == nullptr && this->tenantId_ == nullptr && this->time_ == nullptr; };
    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline ListAliDingGroupMessagesRequest& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ListAliDingGroupMessagesRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAliDingGroupMessagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListAliDingGroupMessagesRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline ListAliDingGroupMessagesRequest& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The session ID, typically used for JSSDK.
    // 
    // This parameter is required.
    shared_ptr<string> chatId_ {};
    // The traffic direction. Valid values:
    // - OutBound: outbound.
    // - InBound: inbound.
    // - Both: bidirectional.
    shared_ptr<string> direction_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The tenant ID. This is a common parameter. Pass it explicitly through `--tenant-id` in winnexo-cli.
    shared_ptr<string> tenantId_ {};
    // The relationship information.
    // 
    // This parameter is required.
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
