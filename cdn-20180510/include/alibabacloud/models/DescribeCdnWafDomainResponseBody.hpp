// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNWAFDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNWAFDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnWafDomainResponseBodyOutPutDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnWafDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnWafDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OutPutDomains, outPutDomains_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnWafDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OutPutDomains, outPutDomains_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCdnWafDomainResponseBody() = default ;
    DescribeCdnWafDomainResponseBody(const DescribeCdnWafDomainResponseBody &) = default ;
    DescribeCdnWafDomainResponseBody(DescribeCdnWafDomainResponseBody &&) = default ;
    DescribeCdnWafDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnWafDomainResponseBody() = default ;
    DescribeCdnWafDomainResponseBody& operator=(const DescribeCdnWafDomainResponseBody &) = default ;
    DescribeCdnWafDomainResponseBody& operator=(DescribeCdnWafDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outPutDomains_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // outPutDomains Field Functions 
    bool hasOutPutDomains() const { return this->outPutDomains_ != nullptr;};
    void deleteOutPutDomains() { this->outPutDomains_ = nullptr;};
    inline const vector<DescribeCdnWafDomainResponseBodyOutPutDomains> & outPutDomains() const { DARABONBA_PTR_GET_CONST(outPutDomains_, vector<DescribeCdnWafDomainResponseBodyOutPutDomains>) };
    inline vector<DescribeCdnWafDomainResponseBodyOutPutDomains> outPutDomains() { DARABONBA_PTR_GET(outPutDomains_, vector<DescribeCdnWafDomainResponseBodyOutPutDomains>) };
    inline DescribeCdnWafDomainResponseBody& setOutPutDomains(const vector<DescribeCdnWafDomainResponseBodyOutPutDomains> & outPutDomains) { DARABONBA_PTR_SET_VALUE(outPutDomains_, outPutDomains) };
    inline DescribeCdnWafDomainResponseBody& setOutPutDomains(vector<DescribeCdnWafDomainResponseBodyOutPutDomains> && outPutDomains) { DARABONBA_PTR_SET_RVALUE(outPutDomains_, outPutDomains) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnWafDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCdnWafDomainResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the accelerated domain name.
    std::shared_ptr<vector<DescribeCdnWafDomainResponseBodyOutPutDomains>> outPutDomains_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of accelerated domain names.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
