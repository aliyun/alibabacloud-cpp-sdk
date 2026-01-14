// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDBLACKWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDBLACKWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddBlackWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddBlackWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(IsWhite, isWhite_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(ResourceIdJsonList, resourceIdJsonList_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddBlackWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(IsWhite, isWhite_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(ResourceIdJsonList, resourceIdJsonList_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddBlackWhiteListRequest() = default ;
    AddBlackWhiteListRequest(const AddBlackWhiteListRequest &) = default ;
    AddBlackWhiteListRequest(AddBlackWhiteListRequest &&) = default ;
    AddBlackWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddBlackWhiteListRequest() = default ;
    AddBlackWhiteListRequest& operator=(const AddBlackWhiteListRequest &) = default ;
    AddBlackWhiteListRequest& operator=(AddBlackWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->content_ == nullptr && this->gatewayUniqueId_ == nullptr && this->isWhite_ == nullptr && this->name_ == nullptr && this->note_ == nullptr
        && this->resourceIdJsonList_ == nullptr && this->resourceType_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddBlackWhiteListRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline AddBlackWhiteListRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddBlackWhiteListRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // isWhite Field Functions 
    bool hasIsWhite() const { return this->isWhite_ != nullptr;};
    void deleteIsWhite() { this->isWhite_ = nullptr;};
    inline bool getIsWhite() const { DARABONBA_PTR_GET_DEFAULT(isWhite_, false) };
    inline AddBlackWhiteListRequest& setIsWhite(bool isWhite) { DARABONBA_PTR_SET_VALUE(isWhite_, isWhite) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddBlackWhiteListRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline AddBlackWhiteListRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // resourceIdJsonList Field Functions 
    bool hasResourceIdJsonList() const { return this->resourceIdJsonList_ != nullptr;};
    void deleteResourceIdJsonList() { this->resourceIdJsonList_ = nullptr;};
    inline string getResourceIdJsonList() const { DARABONBA_PTR_GET_DEFAULT(resourceIdJsonList_, "") };
    inline AddBlackWhiteListRequest& setResourceIdJsonList(string resourceIdJsonList) { DARABONBA_PTR_SET_VALUE(resourceIdJsonList_, resourceIdJsonList) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline AddBlackWhiteListRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AddBlackWhiteListRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddBlackWhiteListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The content of the blacklist.
    shared_ptr<string> content_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
    // The whitelist. Default value: No.
    shared_ptr<bool> isWhite_ {};
    // The name.
    shared_ptr<string> name_ {};
    // The description.
    shared_ptr<string> note_ {};
    // The resource IDs in the JSON format.
    shared_ptr<string> resourceIdJsonList_ {};
    // The effective scope of the blacklist or whitelist. Valid values:
    // 
    // *   GATEWAY
    // *   DOMAIN
    // *   ROUTE
    shared_ptr<string> resourceType_ {};
    // The status of the blacklist.
    // 
    // *   on: enabled
    // *   off: disabled
    shared_ptr<string> status_ {};
    // The type of object in the blacklist or whitelist.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
