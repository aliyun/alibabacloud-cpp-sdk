// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafLogsResponseBodyDomainLogDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnWafLogsResponseBody() = default ;
    DescribeDcdnWafLogsResponseBody(const DescribeDcdnWafLogsResponseBody &) = default ;
    DescribeDcdnWafLogsResponseBody(DescribeDcdnWafLogsResponseBody &&) = default ;
    DescribeDcdnWafLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafLogsResponseBody() = default ;
    DescribeDcdnWafLogsResponseBody& operator=(const DescribeDcdnWafLogsResponseBody &) = default ;
    DescribeDcdnWafLogsResponseBody& operator=(DescribeDcdnWafLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainLogDetails_ != nullptr
        && this->requestId_ != nullptr; };
    // domainLogDetails Field Functions 
    bool hasDomainLogDetails() const { return this->domainLogDetails_ != nullptr;};
    void deleteDomainLogDetails() { this->domainLogDetails_ = nullptr;};
    inline const vector<DescribeDcdnWafLogsResponseBodyDomainLogDetails> & domainLogDetails() const { DARABONBA_PTR_GET_CONST(domainLogDetails_, vector<DescribeDcdnWafLogsResponseBodyDomainLogDetails>) };
    inline vector<DescribeDcdnWafLogsResponseBodyDomainLogDetails> domainLogDetails() { DARABONBA_PTR_GET(domainLogDetails_, vector<DescribeDcdnWafLogsResponseBodyDomainLogDetails>) };
    inline DescribeDcdnWafLogsResponseBody& setDomainLogDetails(const vector<DescribeDcdnWafLogsResponseBodyDomainLogDetails> & domainLogDetails) { DARABONBA_PTR_SET_VALUE(domainLogDetails_, domainLogDetails) };
    inline DescribeDcdnWafLogsResponseBody& setDomainLogDetails(vector<DescribeDcdnWafLogsResponseBodyDomainLogDetails> && domainLogDetails) { DARABONBA_PTR_SET_RVALUE(domainLogDetails_, domainLogDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about logs returned.
    std::shared_ptr<vector<DescribeDcdnWafLogsResponseBodyDomainLogDetails>> domainLogDetails_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
