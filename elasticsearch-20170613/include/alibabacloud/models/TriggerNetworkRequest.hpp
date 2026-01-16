// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERNETWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERNETWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class TriggerNetworkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerNetworkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(actionType, actionType_);
      DARABONBA_PTR_TO_JSON(networkType, networkType_);
      DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerNetworkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(actionType, actionType_);
      DARABONBA_PTR_FROM_JSON(networkType, networkType_);
      DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    TriggerNetworkRequest() = default ;
    TriggerNetworkRequest(const TriggerNetworkRequest &) = default ;
    TriggerNetworkRequest(TriggerNetworkRequest &&) = default ;
    TriggerNetworkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerNetworkRequest() = default ;
    TriggerNetworkRequest& operator=(const TriggerNetworkRequest &) = default ;
    TriggerNetworkRequest& operator=(TriggerNetworkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && this->networkType_ == nullptr && this->nodeType_ == nullptr && this->clientToken_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline TriggerNetworkRequest& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline TriggerNetworkRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline TriggerNetworkRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline TriggerNetworkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> actionType_ {};
    // This parameter is required.
    shared_ptr<string> networkType_ {};
    // This parameter is required.
    shared_ptr<string> nodeType_ {};
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
