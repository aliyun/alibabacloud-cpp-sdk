// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYBLACKWHITELISTRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYBLACKWHITELISTRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GatewayBlackWhiteListResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GatewayBlackWhiteListResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsWhite, isWhite_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceIdJsonList, resourceIdJsonList_);
      DARABONBA_PTR_TO_JSON(ResourceIdNameJson, resourceIdNameJson_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GatewayBlackWhiteListResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsWhite, isWhite_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceIdJsonList, resourceIdJsonList_);
      DARABONBA_PTR_FROM_JSON(ResourceIdNameJson, resourceIdNameJson_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GatewayBlackWhiteListResponseBodyDataResult() = default ;
    GatewayBlackWhiteListResponseBodyDataResult(const GatewayBlackWhiteListResponseBodyDataResult &) = default ;
    GatewayBlackWhiteListResponseBodyDataResult(GatewayBlackWhiteListResponseBodyDataResult &&) = default ;
    GatewayBlackWhiteListResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GatewayBlackWhiteListResponseBodyDataResult() = default ;
    GatewayBlackWhiteListResponseBodyDataResult& operator=(const GatewayBlackWhiteListResponseBodyDataResult &) = default ;
    GatewayBlackWhiteListResponseBodyDataResult& operator=(GatewayBlackWhiteListResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->gatewayId_ != nullptr && this->gatewayUniqueId_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr
        && this->isWhite_ != nullptr && this->name_ != nullptr && this->note_ != nullptr && this->resourceId_ != nullptr && this->resourceIdJsonList_ != nullptr
        && this->resourceIdNameJson_ != nullptr && this->resourceType_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GatewayBlackWhiteListResponseBodyDataResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline GatewayBlackWhiteListResponseBodyDataResult& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GatewayBlackWhiteListResponseBodyDataResult& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GatewayBlackWhiteListResponseBodyDataResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GatewayBlackWhiteListResponseBodyDataResult& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GatewayBlackWhiteListResponseBodyDataResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isWhite Field Functions 
    bool hasIsWhite() const { return this->isWhite_ != nullptr;};
    void deleteIsWhite() { this->isWhite_ = nullptr;};
    inline bool isWhite() const { DARABONBA_PTR_GET_DEFAULT(isWhite_, false) };
    inline GatewayBlackWhiteListResponseBodyDataResult& setIsWhite(bool isWhite) { DARABONBA_PTR_SET_VALUE(isWhite_, isWhite) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GatewayBlackWhiteListResponseBodyDataResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline GatewayBlackWhiteListResponseBodyDataResult& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline int64_t resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, 0L) };
    inline GatewayBlackWhiteListResponseBodyDataResult& setResourceId(int64_t resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceIdJsonList Field Functions 
    bool hasResourceIdJsonList() const { return this->resourceIdJsonList_ != nullptr;};
    void deleteResourceIdJsonList() { this->resourceIdJsonList_ = nullptr;};
    inline string resourceIdJsonList() const { DARABONBA_PTR_GET_DEFAULT(resourceIdJsonList_, "") };
    inline GatewayBlackWhiteListResponseBodyDataResult& setResourceIdJsonList(string resourceIdJsonList) { DARABONBA_PTR_SET_VALUE(resourceIdJsonList_, resourceIdJsonList) };


    // resourceIdNameJson Field Functions 
    bool hasResourceIdNameJson() const { return this->resourceIdNameJson_ != nullptr;};
    void deleteResourceIdNameJson() { this->resourceIdNameJson_ = nullptr;};
    inline string resourceIdNameJson() const { DARABONBA_PTR_GET_DEFAULT(resourceIdNameJson_, "") };
    inline GatewayBlackWhiteListResponseBodyDataResult& setResourceIdNameJson(string resourceIdNameJson) { DARABONBA_PTR_SET_VALUE(resourceIdNameJson_, resourceIdNameJson) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GatewayBlackWhiteListResponseBodyDataResult& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GatewayBlackWhiteListResponseBodyDataResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GatewayBlackWhiteListResponseBodyDataResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The content of the blacklist.
    std::shared_ptr<string> content_ = nullptr;
    // The gateway ID.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The time when the blacklist or whitelist was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the rule was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the blacklist and whitelist.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Specifies whether to enable the whitelist feature.
    std::shared_ptr<bool> isWhite_ = nullptr;
    // The name of the blacklist.
    std::shared_ptr<string> name_ = nullptr;
    // The comment.
    std::shared_ptr<string> note_ = nullptr;
    // The resource ID.
    std::shared_ptr<int64_t> resourceId_ = nullptr;
    // The list of resource IDs in the JSON format.
    // 
    // *   If the value of the ResourceType parameter is ROUTE, the value of this parameter is the list of route IDs.
    // *   If the value of the ResourceType parameter is DOMAIN, the value of this parameter is the list of domain names.
    std::shared_ptr<string> resourceIdJsonList_ = nullptr;
    // The description of the resource name.
    std::shared_ptr<string> resourceIdNameJson_ = nullptr;
    // The effective scope of the blacklist or whitelist. Valid values:
    // 
    // *   GATEWAY
    // *   DOMAIN
    // *   ROUTE
    std::shared_ptr<string> resourceType_ = nullptr;
    // The status of the blacklist or whitelist.
    // 
    // *   on
    // *   off
    std::shared_ptr<string> status_ = nullptr;
    // The type of the blacklist and whitelist. The value is fixed to IP address blacklist and whitelist.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
