// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUDITSECURITYIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUDITSECURITYIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAuditSecurityIpResponseBodySecurityIpList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAuditSecurityIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuditSecurityIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityIpList, securityIpList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuditSecurityIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityIpList, securityIpList_);
    };
    ListAuditSecurityIpResponseBody() = default ;
    ListAuditSecurityIpResponseBody(const ListAuditSecurityIpResponseBody &) = default ;
    ListAuditSecurityIpResponseBody(ListAuditSecurityIpResponseBody &&) = default ;
    ListAuditSecurityIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuditSecurityIpResponseBody() = default ;
    ListAuditSecurityIpResponseBody& operator=(const ListAuditSecurityIpResponseBody &) = default ;
    ListAuditSecurityIpResponseBody& operator=(ListAuditSecurityIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->securityIpList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuditSecurityIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityIpList Field Functions 
    bool hasSecurityIpList() const { return this->securityIpList_ != nullptr;};
    void deleteSecurityIpList() { this->securityIpList_ = nullptr;};
    inline const vector<ListAuditSecurityIpResponseBodySecurityIpList> & securityIpList() const { DARABONBA_PTR_GET_CONST(securityIpList_, vector<ListAuditSecurityIpResponseBodySecurityIpList>) };
    inline vector<ListAuditSecurityIpResponseBodySecurityIpList> securityIpList() { DARABONBA_PTR_GET(securityIpList_, vector<ListAuditSecurityIpResponseBodySecurityIpList>) };
    inline ListAuditSecurityIpResponseBody& setSecurityIpList(const vector<ListAuditSecurityIpResponseBodySecurityIpList> & securityIpList) { DARABONBA_PTR_SET_VALUE(securityIpList_, securityIpList) };
    inline ListAuditSecurityIpResponseBody& setSecurityIpList(vector<ListAuditSecurityIpResponseBodySecurityIpList> && securityIpList) { DARABONBA_PTR_SET_RVALUE(securityIpList_, securityIpList) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the review security group.
    std::shared_ptr<vector<ListAuditSecurityIpResponseBodySecurityIpList>> securityIpList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
