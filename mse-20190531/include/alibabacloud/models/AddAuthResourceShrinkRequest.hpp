// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAUTHRESOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAUTHRESOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddAuthResourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAuthResourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AuthId, authId_);
      DARABONBA_PTR_TO_JSON(AuthResourceHeaderList, authResourceHeaderListShrink_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(IgnoreCase, ignoreCase_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, AddAuthResourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AuthId, authId_);
      DARABONBA_PTR_FROM_JSON(AuthResourceHeaderList, authResourceHeaderListShrink_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(IgnoreCase, ignoreCase_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    AddAuthResourceShrinkRequest() = default ;
    AddAuthResourceShrinkRequest(const AddAuthResourceShrinkRequest &) = default ;
    AddAuthResourceShrinkRequest(AddAuthResourceShrinkRequest &&) = default ;
    AddAuthResourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAuthResourceShrinkRequest() = default ;
    AddAuthResourceShrinkRequest& operator=(const AddAuthResourceShrinkRequest &) = default ;
    AddAuthResourceShrinkRequest& operator=(AddAuthResourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->authId_ == nullptr && return this->authResourceHeaderListShrink_ == nullptr && return this->domainId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->ignoreCase_ == nullptr
        && return this->matchType_ == nullptr && return this->path_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddAuthResourceShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // authId Field Functions 
    bool hasAuthId() const { return this->authId_ != nullptr;};
    void deleteAuthId() { this->authId_ = nullptr;};
    inline int64_t authId() const { DARABONBA_PTR_GET_DEFAULT(authId_, 0L) };
    inline AddAuthResourceShrinkRequest& setAuthId(int64_t authId) { DARABONBA_PTR_SET_VALUE(authId_, authId) };


    // authResourceHeaderListShrink Field Functions 
    bool hasAuthResourceHeaderListShrink() const { return this->authResourceHeaderListShrink_ != nullptr;};
    void deleteAuthResourceHeaderListShrink() { this->authResourceHeaderListShrink_ = nullptr;};
    inline string authResourceHeaderListShrink() const { DARABONBA_PTR_GET_DEFAULT(authResourceHeaderListShrink_, "") };
    inline AddAuthResourceShrinkRequest& setAuthResourceHeaderListShrink(string authResourceHeaderListShrink) { DARABONBA_PTR_SET_VALUE(authResourceHeaderListShrink_, authResourceHeaderListShrink) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline AddAuthResourceShrinkRequest& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddAuthResourceShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // ignoreCase Field Functions 
    bool hasIgnoreCase() const { return this->ignoreCase_ != nullptr;};
    void deleteIgnoreCase() { this->ignoreCase_ = nullptr;};
    inline bool ignoreCase() const { DARABONBA_PTR_GET_DEFAULT(ignoreCase_, false) };
    inline AddAuthResourceShrinkRequest& setIgnoreCase(bool ignoreCase) { DARABONBA_PTR_SET_VALUE(ignoreCase_, ignoreCase) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline AddAuthResourceShrinkRequest& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline AddAuthResourceShrinkRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the authorization record.
    std::shared_ptr<int64_t> authId_ = nullptr;
    // The authentication resource headers.
    std::shared_ptr<string> authResourceHeaderListShrink_ = nullptr;
    // The domain ID.
    std::shared_ptr<int64_t> domainId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // Specifies whether the matching is not case-sensitive. Default value: true.
    std::shared_ptr<bool> ignoreCase_ = nullptr;
    // The matching type. Valid values:
    // 
    // *   EQUAL
    // *   PRE
    // *   ERGULAR
    std::shared_ptr<string> matchType_ = nullptr;
    // The path.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
