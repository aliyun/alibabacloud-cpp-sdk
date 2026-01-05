// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINCLASSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINCLASSESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListPluginClassesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginClassesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliasLike, aliasLike_);
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(excludeBuiltinAiProxy, excludeBuiltinAiProxy_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(installed, installed_);
      DARABONBA_PTR_TO_JSON(nameLike, nameLike_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginClassesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliasLike, aliasLike_);
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(excludeBuiltinAiProxy, excludeBuiltinAiProxy_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(installed, installed_);
      DARABONBA_PTR_FROM_JSON(nameLike, nameLike_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListPluginClassesRequest() = default ;
    ListPluginClassesRequest(const ListPluginClassesRequest &) = default ;
    ListPluginClassesRequest(ListPluginClassesRequest &&) = default ;
    ListPluginClassesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginClassesRequest() = default ;
    ListPluginClassesRequest& operator=(const ListPluginClassesRequest &) = default ;
    ListPluginClassesRequest& operator=(ListPluginClassesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasLike_ == nullptr
        && this->direction_ == nullptr && this->excludeBuiltinAiProxy_ == nullptr && this->gatewayId_ == nullptr && this->gatewayType_ == nullptr && this->installed_ == nullptr
        && this->nameLike_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->source_ == nullptr && this->type_ == nullptr; };
    // aliasLike Field Functions 
    bool hasAliasLike() const { return this->aliasLike_ != nullptr;};
    void deleteAliasLike() { this->aliasLike_ = nullptr;};
    inline string getAliasLike() const { DARABONBA_PTR_GET_DEFAULT(aliasLike_, "") };
    inline ListPluginClassesRequest& setAliasLike(string aliasLike) { DARABONBA_PTR_SET_VALUE(aliasLike_, aliasLike) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ListPluginClassesRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // excludeBuiltinAiProxy Field Functions 
    bool hasExcludeBuiltinAiProxy() const { return this->excludeBuiltinAiProxy_ != nullptr;};
    void deleteExcludeBuiltinAiProxy() { this->excludeBuiltinAiProxy_ = nullptr;};
    inline bool getExcludeBuiltinAiProxy() const { DARABONBA_PTR_GET_DEFAULT(excludeBuiltinAiProxy_, false) };
    inline ListPluginClassesRequest& setExcludeBuiltinAiProxy(bool excludeBuiltinAiProxy) { DARABONBA_PTR_SET_VALUE(excludeBuiltinAiProxy_, excludeBuiltinAiProxy) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListPluginClassesRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline ListPluginClassesRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // installed Field Functions 
    bool hasInstalled() const { return this->installed_ != nullptr;};
    void deleteInstalled() { this->installed_ = nullptr;};
    inline bool getInstalled() const { DARABONBA_PTR_GET_DEFAULT(installed_, false) };
    inline ListPluginClassesRequest& setInstalled(bool installed) { DARABONBA_PTR_SET_VALUE(installed_, installed) };


    // nameLike Field Functions 
    bool hasNameLike() const { return this->nameLike_ != nullptr;};
    void deleteNameLike() { this->nameLike_ = nullptr;};
    inline string getNameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
    inline ListPluginClassesRequest& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPluginClassesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPluginClassesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListPluginClassesRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListPluginClassesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> aliasLike_ {};
    shared_ptr<string> direction_ {};
    shared_ptr<bool> excludeBuiltinAiProxy_ {};
    shared_ptr<string> gatewayId_ {};
    shared_ptr<string> gatewayType_ {};
    shared_ptr<bool> installed_ {};
    shared_ptr<string> nameLike_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> source_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
