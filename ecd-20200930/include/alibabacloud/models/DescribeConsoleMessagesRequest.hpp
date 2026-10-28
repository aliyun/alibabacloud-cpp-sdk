// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONSOLEMESSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONSOLEMESSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeConsoleMessagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConsoleMessagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(ClientTypes, clientTypes_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MessageIds, messageIds_);
      DARABONBA_PTR_TO_JSON(MessageLevel, messageLevel_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TargetIds, targetIds_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConsoleMessagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(ClientTypes, clientTypes_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MessageIds, messageIds_);
      DARABONBA_PTR_FROM_JSON(MessageLevel, messageLevel_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TargetIds, targetIds_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    DescribeConsoleMessagesRequest() = default ;
    DescribeConsoleMessagesRequest(const DescribeConsoleMessagesRequest &) = default ;
    DescribeConsoleMessagesRequest(DescribeConsoleMessagesRequest &&) = default ;
    DescribeConsoleMessagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConsoleMessagesRequest() = default ;
    DescribeConsoleMessagesRequest& operator=(const DescribeConsoleMessagesRequest &) = default ;
    DescribeConsoleMessagesRequest& operator=(DescribeConsoleMessagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessChannel_ == nullptr
        && this->clientTypes_ == nullptr && this->keyword_ == nullptr && this->messageIds_ == nullptr && this->messageLevel_ == nullptr && this->messageType_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->targetIds_ == nullptr && this->targetType_ == nullptr; };
    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline DescribeConsoleMessagesRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // clientTypes Field Functions 
    bool hasClientTypes() const { return this->clientTypes_ != nullptr;};
    void deleteClientTypes() { this->clientTypes_ = nullptr;};
    inline const vector<string> & getClientTypes() const { DARABONBA_PTR_GET_CONST(clientTypes_, vector<string>) };
    inline vector<string> getClientTypes() { DARABONBA_PTR_GET(clientTypes_, vector<string>) };
    inline DescribeConsoleMessagesRequest& setClientTypes(const vector<string> & clientTypes) { DARABONBA_PTR_SET_VALUE(clientTypes_, clientTypes) };
    inline DescribeConsoleMessagesRequest& setClientTypes(vector<string> && clientTypes) { DARABONBA_PTR_SET_RVALUE(clientTypes_, clientTypes) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeConsoleMessagesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // messageIds Field Functions 
    bool hasMessageIds() const { return this->messageIds_ != nullptr;};
    void deleteMessageIds() { this->messageIds_ = nullptr;};
    inline const vector<string> & getMessageIds() const { DARABONBA_PTR_GET_CONST(messageIds_, vector<string>) };
    inline vector<string> getMessageIds() { DARABONBA_PTR_GET(messageIds_, vector<string>) };
    inline DescribeConsoleMessagesRequest& setMessageIds(const vector<string> & messageIds) { DARABONBA_PTR_SET_VALUE(messageIds_, messageIds) };
    inline DescribeConsoleMessagesRequest& setMessageIds(vector<string> && messageIds) { DARABONBA_PTR_SET_RVALUE(messageIds_, messageIds) };


    // messageLevel Field Functions 
    bool hasMessageLevel() const { return this->messageLevel_ != nullptr;};
    void deleteMessageLevel() { this->messageLevel_ = nullptr;};
    inline string getMessageLevel() const { DARABONBA_PTR_GET_DEFAULT(messageLevel_, "") };
    inline DescribeConsoleMessagesRequest& setMessageLevel(string messageLevel) { DARABONBA_PTR_SET_VALUE(messageLevel_, messageLevel) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline DescribeConsoleMessagesRequest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeConsoleMessagesRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeConsoleMessagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // targetIds Field Functions 
    bool hasTargetIds() const { return this->targetIds_ != nullptr;};
    void deleteTargetIds() { this->targetIds_ = nullptr;};
    inline const vector<string> & getTargetIds() const { DARABONBA_PTR_GET_CONST(targetIds_, vector<string>) };
    inline vector<string> getTargetIds() { DARABONBA_PTR_GET(targetIds_, vector<string>) };
    inline DescribeConsoleMessagesRequest& setTargetIds(const vector<string> & targetIds) { DARABONBA_PTR_SET_VALUE(targetIds_, targetIds) };
    inline DescribeConsoleMessagesRequest& setTargetIds(vector<string> && targetIds) { DARABONBA_PTR_SET_RVALUE(targetIds_, targetIds) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeConsoleMessagesRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The business channel, which is used to restrict the business to which the messages to query belong. Valid values: enterprise, standard, office, business, lincore_team, and AGENTIC_CLOUD_COMPUTER. The values are not case-sensitive. Default value: enterprise. Unrecognized channel values are also processed as enterprise.
    shared_ptr<string> businessChannel_ {};
    // The filter list of client types to which operational messages apply. A maximum of 100 items can be included. Valid values: Windows (Windows client), Mac (macOS client), Web (web client), and Hardware (hardware terminal). For Mac, macOS is also supported. The matching is not case-sensitive. If multiple types are specified, a match occurs if any type matches. Do not pass the same type repeatedly. To filter by client type, provide a non-empty list. If this parameter is not specified, messages are not filtered by client type. Do not specify this parameter when querying NOTIFICATION messages.
    shared_ptr<vector<string>> clientTypes_ {};
    // The search keyword, which is used to perform a fuzzy match on the message title or body. A match occurs if either the title or the body matches the keyword. If this parameter is not specified or an empty string is provided, messages are not filtered by keyword.
    shared_ptr<string> keyword_ {};
    // The list of message IDs to query. A maximum of 100 message IDs can be included. If multiple IDs are provided, a match occurs if any ID matches. If this parameter is not specified or an empty list is provided, messages are not filtered by message ID. If no message ID matches, an empty list is returned.
    shared_ptr<vector<string>> messageIds_ {};
    // The message level filter condition for notification messages. Valid values: STRONG (strong message) and WEAK (weak message). The values are not case-sensitive. If this parameter is not specified or the value is unrecognized, messages are not filtered by message level. Do not specify this parameter when querying OPERATIONAL messages.
    shared_ptr<string> messageLevel_ {};
    // The message type. Valid values: OPERATIONAL (client operational message), WALLPAPER (desktop wallpaper text message), NOTIFICATION (message center notification), and CUSTOM_WALLPAPER (custom desktop wallpaper). The values are not case-sensitive. If this parameter is not specified or the value is unrecognized, messages are not filtered by message type.
    shared_ptr<string> messageType_ {};
    // The page number of the query result. Pages start from 1. Default value: 1. If the value is less than 1, it is processed as 1.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page. Valid values: 1 to 200. Default value: 200. If the value is less than 1 or greater than 200, it is processed as 200.
    shared_ptr<int32_t> pageSize_ {};
    // The list of target IDs to match. A maximum of 100 items can be included. To filter by target, provide a non-empty list and specify TargetType at the same time. Currently, only the first ID is used for Organization, EndUser, and AdUser. Queries for EndUser and AdUser also match messages targeted at the organization to which the user belongs and all users. Queries for Organization include messages for all convenience users and are compatible with fuzzy matching of organization IDs. Other target matching methods match based on target IDs, and the target type of the returned records is not guaranteed to be consistent with TargetType. Currently, Tag does not perform target ID filtering.
    shared_ptr<vector<string>> targetIds_ {};
    // The target matching method. Valid values: AllUsers (all convenience users), EndUser (specified convenience user), Organization (convenience user organization), Desktop (cloud computer), ResourceGroup (resource group), Region (region), Tag (tag), AdAllUsers (all AD users), AdUser (specified AD user), and AdOrg (AD organization). The values are not case-sensitive. If TargetIds is specified, this parameter must also be specified. The target type in the query results is not guaranteed to be consistent with this parameter. If only this parameter is specified without target IDs, no target filtering is applied. Currently, Tag does not perform target filtering.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
