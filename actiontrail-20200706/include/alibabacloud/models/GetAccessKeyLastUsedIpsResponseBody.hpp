// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAccessKeyLastUsedIpsResponseBodyIps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetAccessKeyLastUsedIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccessKeyLastUsedIpsResponseBody() = default ;
    GetAccessKeyLastUsedIpsResponseBody(const GetAccessKeyLastUsedIpsResponseBody &) = default ;
    GetAccessKeyLastUsedIpsResponseBody(GetAccessKeyLastUsedIpsResponseBody &&) = default ;
    GetAccessKeyLastUsedIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedIpsResponseBody() = default ;
    GetAccessKeyLastUsedIpsResponseBody& operator=(const GetAccessKeyLastUsedIpsResponseBody &) = default ;
    GetAccessKeyLastUsedIpsResponseBody& operator=(GetAccessKeyLastUsedIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ips_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<GetAccessKeyLastUsedIpsResponseBodyIps> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<GetAccessKeyLastUsedIpsResponseBodyIps>) };
    inline vector<GetAccessKeyLastUsedIpsResponseBodyIps> ips() { DARABONBA_PTR_GET(ips_, vector<GetAccessKeyLastUsedIpsResponseBodyIps>) };
    inline GetAccessKeyLastUsedIpsResponseBody& setIps(const vector<GetAccessKeyLastUsedIpsResponseBodyIps> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline GetAccessKeyLastUsedIpsResponseBody& setIps(vector<GetAccessKeyLastUsedIpsResponseBodyIps> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetAccessKeyLastUsedIpsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccessKeyLastUsedIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IP addresses.
    // 
    // This parameter is required.
    std::shared_ptr<vector<GetAccessKeyLastUsedIpsResponseBodyIps>> ips_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
