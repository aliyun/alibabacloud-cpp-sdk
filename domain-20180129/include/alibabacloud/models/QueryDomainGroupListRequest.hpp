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
      DARABONBA_PTR_TO_JSON(OrderByType, orderByType_);
      DARABONBA_PTR_TO_JSON(OrderKeyType, orderKeyType_);
      DARABONBA_PTR_TO_JSON(ShowDeletingGroup, showDeletingGroup_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainGroupListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainGroupName, domainGroupName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OrderByType, orderByType_);
      DARABONBA_PTR_FROM_JSON(OrderKeyType, orderKeyType_);
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
        && this->lang_ == nullptr && this->orderByType_ == nullptr && this->orderKeyType_ == nullptr && this->showDeletingGroup_ == nullptr && this->userClientIp_ == nullptr; };
    // domainGroupName Field Functions 
    bool hasDomainGroupName() const { return this->domainGroupName_ != nullptr;};
    void deleteDomainGroupName() { this->domainGroupName_ = nullptr;};
    inline string getDomainGroupName() const { DARABONBA_PTR_GET_DEFAULT(domainGroupName_, "") };
    inline QueryDomainGroupListRequest& setDomainGroupName(string domainGroupName) { DARABONBA_PTR_SET_VALUE(domainGroupName_, domainGroupName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryDomainGroupListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // orderByType Field Functions 
    bool hasOrderByType() const { return this->orderByType_ != nullptr;};
    void deleteOrderByType() { this->orderByType_ = nullptr;};
    inline string getOrderByType() const { DARABONBA_PTR_GET_DEFAULT(orderByType_, "") };
    inline QueryDomainGroupListRequest& setOrderByType(string orderByType) { DARABONBA_PTR_SET_VALUE(orderByType_, orderByType) };


    // orderKeyType Field Functions 
    bool hasOrderKeyType() const { return this->orderKeyType_ != nullptr;};
    void deleteOrderKeyType() { this->orderKeyType_ = nullptr;};
    inline string getOrderKeyType() const { DARABONBA_PTR_GET_DEFAULT(orderKeyType_, "") };
    inline QueryDomainGroupListRequest& setOrderKeyType(string orderKeyType) { DARABONBA_PTR_SET_VALUE(orderKeyType_, orderKeyType) };


    // showDeletingGroup Field Functions 
    bool hasShowDeletingGroup() const { return this->showDeletingGroup_ != nullptr;};
    void deleteShowDeletingGroup() { this->showDeletingGroup_ = nullptr;};
    inline bool getShowDeletingGroup() const { DARABONBA_PTR_GET_DEFAULT(showDeletingGroup_, false) };
    inline QueryDomainGroupListRequest& setShowDeletingGroup(bool showDeletingGroup) { DARABONBA_PTR_SET_VALUE(showDeletingGroup_, showDeletingGroup) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryDomainGroupListRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    shared_ptr<string> domainGroupName_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> orderByType_ {};
    shared_ptr<string> orderKeyType_ {};
    shared_ptr<bool> showDeletingGroup_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
