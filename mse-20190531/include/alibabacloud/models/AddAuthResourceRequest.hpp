// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAUTHRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAUTHRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddAuthResourceRequestAuthResourceHeaderList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddAuthResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAuthResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AuthId, authId_);
      DARABONBA_PTR_TO_JSON(AuthResourceHeaderList, authResourceHeaderList_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(IgnoreCase, ignoreCase_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, AddAuthResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AuthId, authId_);
      DARABONBA_PTR_FROM_JSON(AuthResourceHeaderList, authResourceHeaderList_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(IgnoreCase, ignoreCase_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    AddAuthResourceRequest() = default ;
    AddAuthResourceRequest(const AddAuthResourceRequest &) = default ;
    AddAuthResourceRequest(AddAuthResourceRequest &&) = default ;
    AddAuthResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAuthResourceRequest() = default ;
    AddAuthResourceRequest& operator=(const AddAuthResourceRequest &) = default ;
    AddAuthResourceRequest& operator=(AddAuthResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->authId_ != nullptr && this->authResourceHeaderList_ != nullptr && this->domainId_ != nullptr && this->gatewayUniqueId_ != nullptr && this->ignoreCase_ != nullptr
        && this->matchType_ != nullptr && this->path_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddAuthResourceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // authId Field Functions 
    bool hasAuthId() const { return this->authId_ != nullptr;};
    void deleteAuthId() { this->authId_ = nullptr;};
    inline int64_t authId() const { DARABONBA_PTR_GET_DEFAULT(authId_, 0L) };
    inline AddAuthResourceRequest& setAuthId(int64_t authId) { DARABONBA_PTR_SET_VALUE(authId_, authId) };


    // authResourceHeaderList Field Functions 
    bool hasAuthResourceHeaderList() const { return this->authResourceHeaderList_ != nullptr;};
    void deleteAuthResourceHeaderList() { this->authResourceHeaderList_ = nullptr;};
    inline const vector<AddAuthResourceRequestAuthResourceHeaderList> & authResourceHeaderList() const { DARABONBA_PTR_GET_CONST(authResourceHeaderList_, vector<AddAuthResourceRequestAuthResourceHeaderList>) };
    inline vector<AddAuthResourceRequestAuthResourceHeaderList> authResourceHeaderList() { DARABONBA_PTR_GET(authResourceHeaderList_, vector<AddAuthResourceRequestAuthResourceHeaderList>) };
    inline AddAuthResourceRequest& setAuthResourceHeaderList(const vector<AddAuthResourceRequestAuthResourceHeaderList> & authResourceHeaderList) { DARABONBA_PTR_SET_VALUE(authResourceHeaderList_, authResourceHeaderList) };
    inline AddAuthResourceRequest& setAuthResourceHeaderList(vector<AddAuthResourceRequestAuthResourceHeaderList> && authResourceHeaderList) { DARABONBA_PTR_SET_RVALUE(authResourceHeaderList_, authResourceHeaderList) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline AddAuthResourceRequest& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddAuthResourceRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // ignoreCase Field Functions 
    bool hasIgnoreCase() const { return this->ignoreCase_ != nullptr;};
    void deleteIgnoreCase() { this->ignoreCase_ = nullptr;};
    inline bool ignoreCase() const { DARABONBA_PTR_GET_DEFAULT(ignoreCase_, false) };
    inline AddAuthResourceRequest& setIgnoreCase(bool ignoreCase) { DARABONBA_PTR_SET_VALUE(ignoreCase_, ignoreCase) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline AddAuthResourceRequest& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline AddAuthResourceRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the authorization record.
    std::shared_ptr<int64_t> authId_ = nullptr;
    // The authentication resource headers.
    std::shared_ptr<vector<AddAuthResourceRequestAuthResourceHeaderList>> authResourceHeaderList_ = nullptr;
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
