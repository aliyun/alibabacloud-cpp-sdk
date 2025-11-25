// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGUREDDOMAINNAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGUREDDOMAINNAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeConfiguredDomainNamesResponseBodyDomainNames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeConfiguredDomainNamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfiguredDomainNamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfiguredDomainNamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeConfiguredDomainNamesResponseBody() = default ;
    DescribeConfiguredDomainNamesResponseBody(const DescribeConfiguredDomainNamesResponseBody &) = default ;
    DescribeConfiguredDomainNamesResponseBody(DescribeConfiguredDomainNamesResponseBody &&) = default ;
    DescribeConfiguredDomainNamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfiguredDomainNamesResponseBody() = default ;
    DescribeConfiguredDomainNamesResponseBody& operator=(const DescribeConfiguredDomainNamesResponseBody &) = default ;
    DescribeConfiguredDomainNamesResponseBody& operator=(DescribeConfiguredDomainNamesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainNames_ == nullptr
        && return this->module_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline const vector<DescribeConfiguredDomainNamesResponseBodyDomainNames> & domainNames() const { DARABONBA_PTR_GET_CONST(domainNames_, vector<DescribeConfiguredDomainNamesResponseBodyDomainNames>) };
    inline vector<DescribeConfiguredDomainNamesResponseBodyDomainNames> domainNames() { DARABONBA_PTR_GET(domainNames_, vector<DescribeConfiguredDomainNamesResponseBodyDomainNames>) };
    inline DescribeConfiguredDomainNamesResponseBody& setDomainNames(const vector<DescribeConfiguredDomainNamesResponseBodyDomainNames> & domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };
    inline DescribeConfiguredDomainNamesResponseBody& setDomainNames(vector<DescribeConfiguredDomainNamesResponseBodyDomainNames> && domainNames) { DARABONBA_PTR_SET_RVALUE(domainNames_, domainNames) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline DescribeConfiguredDomainNamesResponseBody& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConfiguredDomainNamesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeConfiguredDomainNamesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeConfiguredDomainNamesResponseBodyDomainNames>> domainNames_ = nullptr;
    std::shared_ptr<string> module_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
