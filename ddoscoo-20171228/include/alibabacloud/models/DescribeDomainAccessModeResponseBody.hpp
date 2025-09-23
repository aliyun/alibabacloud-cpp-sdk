// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINACCESSMODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINACCESSMODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainAccessModeResponseBodyDomainModeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDomainAccessModeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainAccessModeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainModeList, domainModeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainAccessModeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainModeList, domainModeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainAccessModeResponseBody() = default ;
    DescribeDomainAccessModeResponseBody(const DescribeDomainAccessModeResponseBody &) = default ;
    DescribeDomainAccessModeResponseBody(DescribeDomainAccessModeResponseBody &&) = default ;
    DescribeDomainAccessModeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainAccessModeResponseBody() = default ;
    DescribeDomainAccessModeResponseBody& operator=(const DescribeDomainAccessModeResponseBody &) = default ;
    DescribeDomainAccessModeResponseBody& operator=(DescribeDomainAccessModeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainModeList_ != nullptr
        && this->requestId_ != nullptr; };
    // domainModeList Field Functions 
    bool hasDomainModeList() const { return this->domainModeList_ != nullptr;};
    void deleteDomainModeList() { this->domainModeList_ = nullptr;};
    inline const vector<DescribeDomainAccessModeResponseBodyDomainModeList> & domainModeList() const { DARABONBA_PTR_GET_CONST(domainModeList_, vector<DescribeDomainAccessModeResponseBodyDomainModeList>) };
    inline vector<DescribeDomainAccessModeResponseBodyDomainModeList> domainModeList() { DARABONBA_PTR_GET(domainModeList_, vector<DescribeDomainAccessModeResponseBodyDomainModeList>) };
    inline DescribeDomainAccessModeResponseBody& setDomainModeList(const vector<DescribeDomainAccessModeResponseBodyDomainModeList> & domainModeList) { DARABONBA_PTR_SET_VALUE(domainModeList_, domainModeList) };
    inline DescribeDomainAccessModeResponseBody& setDomainModeList(vector<DescribeDomainAccessModeResponseBodyDomainModeList> && domainModeList) { DARABONBA_PTR_SET_RVALUE(domainModeList_, domainModeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainAccessModeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeDomainAccessModeResponseBodyDomainModeList>> domainModeList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
