// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINSBYSOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINSBYSOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainsBySourceResponseBodyDomainInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainsBySourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainsBySourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainInfo, domainInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainsBySourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainInfo, domainInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainsBySourceResponseBody() = default ;
    DescribeDcdnDomainsBySourceResponseBody(const DescribeDcdnDomainsBySourceResponseBody &) = default ;
    DescribeDcdnDomainsBySourceResponseBody(DescribeDcdnDomainsBySourceResponseBody &&) = default ;
    DescribeDcdnDomainsBySourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainsBySourceResponseBody() = default ;
    DescribeDcdnDomainsBySourceResponseBody& operator=(const DescribeDcdnDomainsBySourceResponseBody &) = default ;
    DescribeDcdnDomainsBySourceResponseBody& operator=(DescribeDcdnDomainsBySourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // domainInfo Field Functions 
    bool hasDomainInfo() const { return this->domainInfo_ != nullptr;};
    void deleteDomainInfo() { this->domainInfo_ = nullptr;};
    inline const vector<DescribeDcdnDomainsBySourceResponseBodyDomainInfo> & domainInfo() const { DARABONBA_PTR_GET_CONST(domainInfo_, vector<DescribeDcdnDomainsBySourceResponseBodyDomainInfo>) };
    inline vector<DescribeDcdnDomainsBySourceResponseBodyDomainInfo> domainInfo() { DARABONBA_PTR_GET(domainInfo_, vector<DescribeDcdnDomainsBySourceResponseBodyDomainInfo>) };
    inline DescribeDcdnDomainsBySourceResponseBody& setDomainInfo(const vector<DescribeDcdnDomainsBySourceResponseBodyDomainInfo> & domainInfo) { DARABONBA_PTR_SET_VALUE(domainInfo_, domainInfo) };
    inline DescribeDcdnDomainsBySourceResponseBody& setDomainInfo(vector<DescribeDcdnDomainsBySourceResponseBodyDomainInfo> && domainInfo) { DARABONBA_PTR_SET_RVALUE(domainInfo_, domainInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainsBySourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about each origin server and the corresponding domain names.
    // 
    // This parameter is required.
    std::shared_ptr<vector<DescribeDcdnDomainsBySourceResponseBodyDomainInfo>> domainInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
