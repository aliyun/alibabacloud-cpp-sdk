// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIMPLEDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIMPLEDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeSimpleDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSimpleDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainList, domainList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSimpleDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSimpleDomainsResponseBody() = default ;
    DescribeSimpleDomainsResponseBody(const DescribeSimpleDomainsResponseBody &) = default ;
    DescribeSimpleDomainsResponseBody(DescribeSimpleDomainsResponseBody &&) = default ;
    DescribeSimpleDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSimpleDomainsResponseBody() = default ;
    DescribeSimpleDomainsResponseBody& operator=(const DescribeSimpleDomainsResponseBody &) = default ;
    DescribeSimpleDomainsResponseBody& operator=(DescribeSimpleDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainList_ != nullptr
        && this->requestId_ != nullptr; };
    // domainList Field Functions 
    bool hasDomainList() const { return this->domainList_ != nullptr;};
    void deleteDomainList() { this->domainList_ = nullptr;};
    inline const vector<string> & domainList() const { DARABONBA_PTR_GET_CONST(domainList_, vector<string>) };
    inline vector<string> domainList() { DARABONBA_PTR_GET(domainList_, vector<string>) };
    inline DescribeSimpleDomainsResponseBody& setDomainList(const vector<string> & domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };
    inline DescribeSimpleDomainsResponseBody& setDomainList(vector<string> && domainList) { DARABONBA_PTR_SET_RVALUE(domainList_, domainList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSimpleDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> domainList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
