// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOutgoingDomainResponseBodyDomainList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainList, domainList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOutgoingDomainResponseBody() = default ;
    DescribeOutgoingDomainResponseBody(const DescribeOutgoingDomainResponseBody &) = default ;
    DescribeOutgoingDomainResponseBody(DescribeOutgoingDomainResponseBody &&) = default ;
    DescribeOutgoingDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDomainResponseBody() = default ;
    DescribeOutgoingDomainResponseBody& operator=(const DescribeOutgoingDomainResponseBody &) = default ;
    DescribeOutgoingDomainResponseBody& operator=(DescribeOutgoingDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainList_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // domainList Field Functions 
    bool hasDomainList() const { return this->domainList_ != nullptr;};
    void deleteDomainList() { this->domainList_ = nullptr;};
    inline const vector<DescribeOutgoingDomainResponseBodyDomainList> & domainList() const { DARABONBA_PTR_GET_CONST(domainList_, vector<DescribeOutgoingDomainResponseBodyDomainList>) };
    inline vector<DescribeOutgoingDomainResponseBodyDomainList> domainList() { DARABONBA_PTR_GET(domainList_, vector<DescribeOutgoingDomainResponseBodyDomainList>) };
    inline DescribeOutgoingDomainResponseBody& setDomainList(const vector<DescribeOutgoingDomainResponseBodyDomainList> & domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };
    inline DescribeOutgoingDomainResponseBody& setDomainList(vector<DescribeOutgoingDomainResponseBodyDomainList> && domainList) { DARABONBA_PTR_SET_RVALUE(domainList_, domainList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOutgoingDomainResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The domain names in outbound connections.
    std::shared_ptr<vector<DescribeOutgoingDomainResponseBodyDomainList>> domainList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of the domain names in outbound connections.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
