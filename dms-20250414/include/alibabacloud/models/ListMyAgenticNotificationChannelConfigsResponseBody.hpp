// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMYAGENTICNOTIFICATIONCHANNELCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMYAGENTICNOTIFICATIONCHANNELCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListMyAgenticNotificationChannelConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMyAgenticNotificationChannelConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListMyAgenticNotificationChannelConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListMyAgenticNotificationChannelConfigsResponseBody() = default ;
    ListMyAgenticNotificationChannelConfigsResponseBody(const ListMyAgenticNotificationChannelConfigsResponseBody &) = default ;
    ListMyAgenticNotificationChannelConfigsResponseBody(ListMyAgenticNotificationChannelConfigsResponseBody &&) = default ;
    ListMyAgenticNotificationChannelConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMyAgenticNotificationChannelConfigsResponseBody() = default ;
    ListMyAgenticNotificationChannelConfigsResponseBody& operator=(const ListMyAgenticNotificationChannelConfigsResponseBody &) = default ;
    ListMyAgenticNotificationChannelConfigsResponseBody& operator=(ListMyAgenticNotificationChannelConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Channel, channel_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Channel, channel_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channel_ == nullptr
        && this->config_ == nullptr && this->enabled_ == nullptr; };
      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
      inline Data& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const map<string, string> & getConfig() const { DARABONBA_PTR_GET_CONST(config_, map<string, string>) };
      inline map<string, string> getConfig() { DARABONBA_PTR_GET(config_, map<string, string>) };
      inline Data& setConfig(const map<string, string> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Data& setConfig(map<string, string> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Data& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    protected:
      // The notification channel type. Valid values: FEISHU (Lark).
      shared_ptr<string> channel_ {};
      // The channel configuration information. Both keys and values are strings, which include bound identity information such as openId, mobile, or email. Sensitive values are always displayed as ****** and are not returned in plaintext.
      shared_ptr<map<string, string>> config_ {};
      // Indicates whether the notification channel is enabled. If the channel has never been configured, false is returned.
      shared_ptr<bool> enabled_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListMyAgenticNotificationChannelConfigsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListMyAgenticNotificationChannelConfigsResponseBody::Data>) };
    inline vector<ListMyAgenticNotificationChannelConfigsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListMyAgenticNotificationChannelConfigsResponseBody::Data>) };
    inline ListMyAgenticNotificationChannelConfigsResponseBody& setData(const vector<ListMyAgenticNotificationChannelConfigsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMyAgenticNotificationChannelConfigsResponseBody& setData(vector<ListMyAgenticNotificationChannelConfigsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListMyAgenticNotificationChannelConfigsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListMyAgenticNotificationChannelConfigsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMyAgenticNotificationChannelConfigsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMyAgenticNotificationChannelConfigsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMyAgenticNotificationChannelConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMyAgenticNotificationChannelConfigsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of notification channel configurations for the current user.
    shared_ptr<vector<ListMyAgenticNotificationChannelConfigsResponseBody::Data>> data_ {};
    // The error code returned when the request fails.
    shared_ptr<string> errorCode_ {};
    // The error message returned when the request fails.
    shared_ptr<string> errorMessage_ {};
    // The maximum number of records per page used for this query.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. This parameter is empty if no more data is available.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values: true and false.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
