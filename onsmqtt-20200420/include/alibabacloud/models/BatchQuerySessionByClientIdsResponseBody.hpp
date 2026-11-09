// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYSESSIONBYCLIENTIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYSESSIONBYCLIENTIDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class BatchQuerySessionByClientIdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQuerySessionByClientIdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OnlineStatusList, onlineStatusList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQuerySessionByClientIdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OnlineStatusList, onlineStatusList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchQuerySessionByClientIdsResponseBody() = default ;
    BatchQuerySessionByClientIdsResponseBody(const BatchQuerySessionByClientIdsResponseBody &) = default ;
    BatchQuerySessionByClientIdsResponseBody(BatchQuerySessionByClientIdsResponseBody &&) = default ;
    BatchQuerySessionByClientIdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQuerySessionByClientIdsResponseBody() = default ;
    BatchQuerySessionByClientIdsResponseBody& operator=(const BatchQuerySessionByClientIdsResponseBody &) = default ;
    BatchQuerySessionByClientIdsResponseBody& operator=(BatchQuerySessionByClientIdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OnlineStatusList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OnlineStatusList& obj) { 
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
      };
      friend void from_json(const Darabonba::Json& j, OnlineStatusList& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
      };
      OnlineStatusList() = default ;
      OnlineStatusList(const OnlineStatusList &) = default ;
      OnlineStatusList(OnlineStatusList &&) = default ;
      OnlineStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OnlineStatusList() = default ;
      OnlineStatusList& operator=(const OnlineStatusList &) = default ;
      OnlineStatusList& operator=(OnlineStatusList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientId_ == nullptr
        && this->onlineStatus_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline OnlineStatusList& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // onlineStatus Field Functions 
      bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
      void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
      inline bool getOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, false) };
      inline OnlineStatusList& setOnlineStatus(bool onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


    protected:
      // The client ID of the client. For more information about client IDs, see [Glossary](https://help.aliyun.com/document_detail/42420.html).
      shared_ptr<string> clientId_ {};
      // Indicates whether the device is online. Valid values:
      // 
      // - **true**: Online.
      // - **false**: Offline.
      shared_ptr<bool> onlineStatus_ {};
    };

    virtual bool empty() const override { return this->onlineStatusList_ == nullptr
        && this->requestId_ == nullptr; };
    // onlineStatusList Field Functions 
    bool hasOnlineStatusList() const { return this->onlineStatusList_ != nullptr;};
    void deleteOnlineStatusList() { this->onlineStatusList_ = nullptr;};
    inline const vector<BatchQuerySessionByClientIdsResponseBody::OnlineStatusList> & getOnlineStatusList() const { DARABONBA_PTR_GET_CONST(onlineStatusList_, vector<BatchQuerySessionByClientIdsResponseBody::OnlineStatusList>) };
    inline vector<BatchQuerySessionByClientIdsResponseBody::OnlineStatusList> getOnlineStatusList() { DARABONBA_PTR_GET(onlineStatusList_, vector<BatchQuerySessionByClientIdsResponseBody::OnlineStatusList>) };
    inline BatchQuerySessionByClientIdsResponseBody& setOnlineStatusList(const vector<BatchQuerySessionByClientIdsResponseBody::OnlineStatusList> & onlineStatusList) { DARABONBA_PTR_SET_VALUE(onlineStatusList_, onlineStatusList) };
    inline BatchQuerySessionByClientIdsResponseBody& setOnlineStatusList(vector<BatchQuerySessionByClientIdsResponseBody::OnlineStatusList> && onlineStatusList) { DARABONBA_PTR_SET_RVALUE(onlineStatusList_, onlineStatusList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchQuerySessionByClientIdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of client statuses.
    shared_ptr<vector<BatchQuerySessionByClientIdsResponseBody::OnlineStatusList>> onlineStatusList_ {};
    // The request ID. It is unique for each request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
