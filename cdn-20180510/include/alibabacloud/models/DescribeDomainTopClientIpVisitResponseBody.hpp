// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPCLIENTIPVISITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPCLIENTIPVISITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainTopClientIpVisitResponseBodyClientIpList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainTopClientIpVisitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopClientIpVisitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIpList, clientIpList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopClientIpVisitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIpList, clientIpList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainTopClientIpVisitResponseBody() = default ;
    DescribeDomainTopClientIpVisitResponseBody(const DescribeDomainTopClientIpVisitResponseBody &) = default ;
    DescribeDomainTopClientIpVisitResponseBody(DescribeDomainTopClientIpVisitResponseBody &&) = default ;
    DescribeDomainTopClientIpVisitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopClientIpVisitResponseBody() = default ;
    DescribeDomainTopClientIpVisitResponseBody& operator=(const DescribeDomainTopClientIpVisitResponseBody &) = default ;
    DescribeDomainTopClientIpVisitResponseBody& operator=(DescribeDomainTopClientIpVisitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIpList_ == nullptr
        && return this->requestId_ == nullptr; };
    // clientIpList Field Functions 
    bool hasClientIpList() const { return this->clientIpList_ != nullptr;};
    void deleteClientIpList() { this->clientIpList_ = nullptr;};
    inline const vector<DescribeDomainTopClientIpVisitResponseBodyClientIpList> & clientIpList() const { DARABONBA_PTR_GET_CONST(clientIpList_, vector<DescribeDomainTopClientIpVisitResponseBodyClientIpList>) };
    inline vector<DescribeDomainTopClientIpVisitResponseBodyClientIpList> clientIpList() { DARABONBA_PTR_GET(clientIpList_, vector<DescribeDomainTopClientIpVisitResponseBodyClientIpList>) };
    inline DescribeDomainTopClientIpVisitResponseBody& setClientIpList(const vector<DescribeDomainTopClientIpVisitResponseBodyClientIpList> & clientIpList) { DARABONBA_PTR_SET_VALUE(clientIpList_, clientIpList) };
    inline DescribeDomainTopClientIpVisitResponseBody& setClientIpList(vector<DescribeDomainTopClientIpVisitResponseBodyClientIpList> && clientIpList) { DARABONBA_PTR_SET_RVALUE(clientIpList_, clientIpList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainTopClientIpVisitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of client IP addresses.
    std::shared_ptr<vector<DescribeDomainTopClientIpVisitResponseBodyClientIpList>> clientIpList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
