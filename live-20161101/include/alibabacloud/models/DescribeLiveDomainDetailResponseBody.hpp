// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainDetailResponseBodyDomainDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainDetail, domainDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainDetail, domainDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDomainDetailResponseBody() = default ;
    DescribeLiveDomainDetailResponseBody(const DescribeLiveDomainDetailResponseBody &) = default ;
    DescribeLiveDomainDetailResponseBody(DescribeLiveDomainDetailResponseBody &&) = default ;
    DescribeLiveDomainDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainDetailResponseBody() = default ;
    DescribeLiveDomainDetailResponseBody& operator=(const DescribeLiveDomainDetailResponseBody &) = default ;
    DescribeLiveDomainDetailResponseBody& operator=(DescribeLiveDomainDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainDetail_ != nullptr
        && this->requestId_ != nullptr; };
    // domainDetail Field Functions 
    bool hasDomainDetail() const { return this->domainDetail_ != nullptr;};
    void deleteDomainDetail() { this->domainDetail_ = nullptr;};
    inline const DescribeLiveDomainDetailResponseBodyDomainDetail & domainDetail() const { DARABONBA_PTR_GET_CONST(domainDetail_, DescribeLiveDomainDetailResponseBodyDomainDetail) };
    inline DescribeLiveDomainDetailResponseBodyDomainDetail domainDetail() { DARABONBA_PTR_GET(domainDetail_, DescribeLiveDomainDetailResponseBodyDomainDetail) };
    inline DescribeLiveDomainDetailResponseBody& setDomainDetail(const DescribeLiveDomainDetailResponseBodyDomainDetail & domainDetail) { DARABONBA_PTR_SET_VALUE(domainDetail_, domainDetail) };
    inline DescribeLiveDomainDetailResponseBody& setDomainDetail(DescribeLiveDomainDetailResponseBodyDomainDetail && domainDetail) { DARABONBA_PTR_SET_RVALUE(domainDetail_, domainDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration details of the domain name.
    std::shared_ptr<DescribeLiveDomainDetailResponseBodyDomainDetail> domainDetail_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
