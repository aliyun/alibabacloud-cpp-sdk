// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINGROUPLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINGROUPLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainGroupListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainGroupListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainGroupName, domainGroupName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ShowDeletingGroup, showDeletingGroup_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainGroupListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainGroupName, domainGroupName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ShowDeletingGroup, showDeletingGroup_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    QueryDomainGroupListRequest() = default ;
    QueryDomainGroupListRequest(const QueryDomainGroupListRequest &) = default ;
    QueryDomainGroupListRequest(QueryDomainGroupListRequest &&) = default ;
    QueryDomainGroupListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainGroupListRequest() = default ;
    QueryDomainGroupListRequest& operator=(const QueryDomainGroupListRequest &) = default ;
    QueryDomainGroupListRequest& operator=(QueryDomainGroupListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainGroupName_ == nullptr
        && return this->lang_ == nullptr && return this->showDeletingGroup_ == nullptr && return this->userClientIp_ == nullptr; };
    // domainGroupName Field Functions 
    bool hasDomainGroupName() const { return this->domainGroupName_ != nullptr;};
    void deleteDomainGroupName() { this->domainGroupName_ = nullptr;};
    inline string domainGroupName() const { DARABONBA_PTR_GET_DEFAULT(domainGroupName_, "") };
    inline QueryDomainGroupListRequest& setDomainGroupName(string domainGroupName) { DARABONBA_PTR_SET_VALUE(domainGroupName_, domainGroupName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryDomainGroupListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // showDeletingGroup Field Functions 
    bool hasShowDeletingGroup() const { return this->showDeletingGroup_ != nullptr;};
    void deleteShowDeletingGroup() { this->showDeletingGroup_ = nullptr;};
    inline bool showDeletingGroup() const { DARABONBA_PTR_GET_DEFAULT(showDeletingGroup_, false) };
    inline QueryDomainGroupListRequest& setShowDeletingGroup(bool showDeletingGroup) { DARABONBA_PTR_SET_VALUE(showDeletingGroup_, showDeletingGroup) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryDomainGroupListRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    std::shared_ptr<string> domainGroupName_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<bool> showDeletingGroup_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
