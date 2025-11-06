// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYAUTHREQUESTAUTHRESOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYAUTHREQUESTAUTHRESOURCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddGatewayAuthRequestAuthResourceListAuthResourceHeaderList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddGatewayAuthRequestAuthResourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayAuthRequestAuthResourceList& obj) { 
      DARABONBA_PTR_TO_JSON(AuthResourceHeaderList, authResourceHeaderList_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(IgnoreCase, ignoreCase_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayAuthRequestAuthResourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthResourceHeaderList, authResourceHeaderList_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(IgnoreCase, ignoreCase_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    AddGatewayAuthRequestAuthResourceList() = default ;
    AddGatewayAuthRequestAuthResourceList(const AddGatewayAuthRequestAuthResourceList &) = default ;
    AddGatewayAuthRequestAuthResourceList(AddGatewayAuthRequestAuthResourceList &&) = default ;
    AddGatewayAuthRequestAuthResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayAuthRequestAuthResourceList() = default ;
    AddGatewayAuthRequestAuthResourceList& operator=(const AddGatewayAuthRequestAuthResourceList &) = default ;
    AddGatewayAuthRequestAuthResourceList& operator=(AddGatewayAuthRequestAuthResourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authResourceHeaderList_ == nullptr
        && return this->domainId_ == nullptr && return this->ignoreCase_ == nullptr && return this->matchType_ == nullptr && return this->path_ == nullptr; };
    // authResourceHeaderList Field Functions 
    bool hasAuthResourceHeaderList() const { return this->authResourceHeaderList_ != nullptr;};
    void deleteAuthResourceHeaderList() { this->authResourceHeaderList_ = nullptr;};
    inline const vector<Models::AddGatewayAuthRequestAuthResourceListAuthResourceHeaderList> & authResourceHeaderList() const { DARABONBA_PTR_GET_CONST(authResourceHeaderList_, vector<Models::AddGatewayAuthRequestAuthResourceListAuthResourceHeaderList>) };
    inline vector<Models::AddGatewayAuthRequestAuthResourceListAuthResourceHeaderList> authResourceHeaderList() { DARABONBA_PTR_GET(authResourceHeaderList_, vector<Models::AddGatewayAuthRequestAuthResourceListAuthResourceHeaderList>) };
    inline AddGatewayAuthRequestAuthResourceList& setAuthResourceHeaderList(const vector<Models::AddGatewayAuthRequestAuthResourceListAuthResourceHeaderList> & authResourceHeaderList) { DARABONBA_PTR_SET_VALUE(authResourceHeaderList_, authResourceHeaderList) };
    inline AddGatewayAuthRequestAuthResourceList& setAuthResourceHeaderList(vector<Models::AddGatewayAuthRequestAuthResourceListAuthResourceHeaderList> && authResourceHeaderList) { DARABONBA_PTR_SET_RVALUE(authResourceHeaderList_, authResourceHeaderList) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline AddGatewayAuthRequestAuthResourceList& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // ignoreCase Field Functions 
    bool hasIgnoreCase() const { return this->ignoreCase_ != nullptr;};
    void deleteIgnoreCase() { this->ignoreCase_ = nullptr;};
    inline bool ignoreCase() const { DARABONBA_PTR_GET_DEFAULT(ignoreCase_, false) };
    inline AddGatewayAuthRequestAuthResourceList& setIgnoreCase(bool ignoreCase) { DARABONBA_PTR_SET_VALUE(ignoreCase_, ignoreCase) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline AddGatewayAuthRequestAuthResourceList& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline AddGatewayAuthRequestAuthResourceList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    std::shared_ptr<vector<Models::AddGatewayAuthRequestAuthResourceListAuthResourceHeaderList>> authResourceHeaderList_ = nullptr;
    // The domain ID.
    std::shared_ptr<int64_t> domainId_ = nullptr;
    std::shared_ptr<bool> ignoreCase_ = nullptr;
    std::shared_ptr<string> matchType_ = nullptr;
    // The request path.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
