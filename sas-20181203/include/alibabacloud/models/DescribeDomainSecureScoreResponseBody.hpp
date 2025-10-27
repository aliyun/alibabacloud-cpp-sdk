// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURESCORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURESCORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDomainSecureScoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSecureScoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityScore, securityScore_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSecureScoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityScore, securityScore_);
    };
    DescribeDomainSecureScoreResponseBody() = default ;
    DescribeDomainSecureScoreResponseBody(const DescribeDomainSecureScoreResponseBody &) = default ;
    DescribeDomainSecureScoreResponseBody(DescribeDomainSecureScoreResponseBody &&) = default ;
    DescribeDomainSecureScoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSecureScoreResponseBody() = default ;
    DescribeDomainSecureScoreResponseBody& operator=(const DescribeDomainSecureScoreResponseBody &) = default ;
    DescribeDomainSecureScoreResponseBody& operator=(DescribeDomainSecureScoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->securityScore_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainSecureScoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityScore Field Functions 
    bool hasSecurityScore() const { return this->securityScore_ != nullptr;};
    void deleteSecurityScore() { this->securityScore_ = nullptr;};
    inline int32_t securityScore() const { DARABONBA_PTR_GET_DEFAULT(securityScore_, 0) };
    inline DescribeDomainSecureScoreResponseBody& setSecurityScore(int32_t securityScore) { DARABONBA_PTR_SET_VALUE(securityScore_, securityScore) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The security score of the website.
    std::shared_ptr<int32_t> securityScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
