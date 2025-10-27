// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBINARYSECURITYPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBINARYSECURITYPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies.hpp>
#include <alibabacloud/models/DescribeBinarySecurityPoliciesResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBinarySecurityPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBinarySecurityPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BinarySecurityPolicies, binarySecurityPolicies_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBinarySecurityPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BinarySecurityPolicies, binarySecurityPolicies_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBinarySecurityPoliciesResponseBody() = default ;
    DescribeBinarySecurityPoliciesResponseBody(const DescribeBinarySecurityPoliciesResponseBody &) = default ;
    DescribeBinarySecurityPoliciesResponseBody(DescribeBinarySecurityPoliciesResponseBody &&) = default ;
    DescribeBinarySecurityPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBinarySecurityPoliciesResponseBody() = default ;
    DescribeBinarySecurityPoliciesResponseBody& operator=(const DescribeBinarySecurityPoliciesResponseBody &) = default ;
    DescribeBinarySecurityPoliciesResponseBody& operator=(DescribeBinarySecurityPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->binarySecurityPolicies_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // binarySecurityPolicies Field Functions 
    bool hasBinarySecurityPolicies() const { return this->binarySecurityPolicies_ != nullptr;};
    void deleteBinarySecurityPolicies() { this->binarySecurityPolicies_ = nullptr;};
    inline const vector<DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies> & binarySecurityPolicies() const { DARABONBA_PTR_GET_CONST(binarySecurityPolicies_, vector<DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies>) };
    inline vector<DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies> binarySecurityPolicies() { DARABONBA_PTR_GET(binarySecurityPolicies_, vector<DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies>) };
    inline DescribeBinarySecurityPoliciesResponseBody& setBinarySecurityPolicies(const vector<DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies> & binarySecurityPolicies) { DARABONBA_PTR_SET_VALUE(binarySecurityPolicies_, binarySecurityPolicies) };
    inline DescribeBinarySecurityPoliciesResponseBody& setBinarySecurityPolicies(vector<DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies> && binarySecurityPolicies) { DARABONBA_PTR_SET_RVALUE(binarySecurityPolicies_, binarySecurityPolicies) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeBinarySecurityPoliciesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeBinarySecurityPoliciesResponseBodyPageInfo) };
    inline DescribeBinarySecurityPoliciesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeBinarySecurityPoliciesResponseBodyPageInfo) };
    inline DescribeBinarySecurityPoliciesResponseBody& setPageInfo(const DescribeBinarySecurityPoliciesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeBinarySecurityPoliciesResponseBody& setPageInfo(DescribeBinarySecurityPoliciesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBinarySecurityPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about security policies.
    std::shared_ptr<vector<DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies>> binarySecurityPolicies_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeBinarySecurityPoliciesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
