// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsDomainConfigsResponseBodyDomainConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVsDomainConfigsResponseBody() = default ;
    DescribeVsDomainConfigsResponseBody(const DescribeVsDomainConfigsResponseBody &) = default ;
    DescribeVsDomainConfigsResponseBody(DescribeVsDomainConfigsResponseBody &&) = default ;
    DescribeVsDomainConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainConfigsResponseBody() = default ;
    DescribeVsDomainConfigsResponseBody& operator=(const DescribeVsDomainConfigsResponseBody &) = default ;
    DescribeVsDomainConfigsResponseBody& operator=(DescribeVsDomainConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainConfigs_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainConfigs Field Functions 
    bool hasDomainConfigs() const { return this->domainConfigs_ != nullptr;};
    void deleteDomainConfigs() { this->domainConfigs_ = nullptr;};
    inline const vector<DescribeVsDomainConfigsResponseBodyDomainConfigs> & domainConfigs() const { DARABONBA_PTR_GET_CONST(domainConfigs_, vector<DescribeVsDomainConfigsResponseBodyDomainConfigs>) };
    inline vector<DescribeVsDomainConfigsResponseBodyDomainConfigs> domainConfigs() { DARABONBA_PTR_GET(domainConfigs_, vector<DescribeVsDomainConfigsResponseBodyDomainConfigs>) };
    inline DescribeVsDomainConfigsResponseBody& setDomainConfigs(const vector<DescribeVsDomainConfigsResponseBodyDomainConfigs> & domainConfigs) { DARABONBA_PTR_SET_VALUE(domainConfigs_, domainConfigs) };
    inline DescribeVsDomainConfigsResponseBody& setDomainConfigs(vector<DescribeVsDomainConfigsResponseBodyDomainConfigs> && domainConfigs) { DARABONBA_PTR_SET_RVALUE(domainConfigs_, domainConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsDomainConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeVsDomainConfigsResponseBodyDomainConfigs>> domainConfigs_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
