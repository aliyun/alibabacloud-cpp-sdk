// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTACKPATHWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTATTACKPATHWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAttackPathWhitelistResponseBodyAttackPathWhitelistList.hpp>
#include <alibabacloud/models/ListAttackPathWhitelistResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAttackPathWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttackPathWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathWhitelistList, attackPathWhitelistList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttackPathWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathWhitelistList, attackPathWhitelistList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAttackPathWhitelistResponseBody() = default ;
    ListAttackPathWhitelistResponseBody(const ListAttackPathWhitelistResponseBody &) = default ;
    ListAttackPathWhitelistResponseBody(ListAttackPathWhitelistResponseBody &&) = default ;
    ListAttackPathWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttackPathWhitelistResponseBody() = default ;
    ListAttackPathWhitelistResponseBody& operator=(const ListAttackPathWhitelistResponseBody &) = default ;
    ListAttackPathWhitelistResponseBody& operator=(ListAttackPathWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackPathWhitelistList_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // attackPathWhitelistList Field Functions 
    bool hasAttackPathWhitelistList() const { return this->attackPathWhitelistList_ != nullptr;};
    void deleteAttackPathWhitelistList() { this->attackPathWhitelistList_ = nullptr;};
    inline const vector<ListAttackPathWhitelistResponseBodyAttackPathWhitelistList> & attackPathWhitelistList() const { DARABONBA_PTR_GET_CONST(attackPathWhitelistList_, vector<ListAttackPathWhitelistResponseBodyAttackPathWhitelistList>) };
    inline vector<ListAttackPathWhitelistResponseBodyAttackPathWhitelistList> attackPathWhitelistList() { DARABONBA_PTR_GET(attackPathWhitelistList_, vector<ListAttackPathWhitelistResponseBodyAttackPathWhitelistList>) };
    inline ListAttackPathWhitelistResponseBody& setAttackPathWhitelistList(const vector<ListAttackPathWhitelistResponseBodyAttackPathWhitelistList> & attackPathWhitelistList) { DARABONBA_PTR_SET_VALUE(attackPathWhitelistList_, attackPathWhitelistList) };
    inline ListAttackPathWhitelistResponseBody& setAttackPathWhitelistList(vector<ListAttackPathWhitelistResponseBodyAttackPathWhitelistList> && attackPathWhitelistList) { DARABONBA_PTR_SET_RVALUE(attackPathWhitelistList_, attackPathWhitelistList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListAttackPathWhitelistResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListAttackPathWhitelistResponseBodyPageInfo) };
    inline ListAttackPathWhitelistResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListAttackPathWhitelistResponseBodyPageInfo) };
    inline ListAttackPathWhitelistResponseBody& setPageInfo(const ListAttackPathWhitelistResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListAttackPathWhitelistResponseBody& setPageInfo(ListAttackPathWhitelistResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAttackPathWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of attack path whitelists.
    std::shared_ptr<vector<ListAttackPathWhitelistResponseBodyAttackPathWhitelistList>> attackPathWhitelistList_ = nullptr;
    // Page information for paginated queries.
    std::shared_ptr<ListAttackPathWhitelistResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting and problem localization.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
