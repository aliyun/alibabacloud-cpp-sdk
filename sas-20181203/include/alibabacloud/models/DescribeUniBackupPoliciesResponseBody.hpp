// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUniBackupPoliciesResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUniBackupPoliciesResponseBodyUniBackupPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUniBackupPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniBackupPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UniBackupPolicies, uniBackupPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniBackupPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UniBackupPolicies, uniBackupPolicies_);
    };
    DescribeUniBackupPoliciesResponseBody() = default ;
    DescribeUniBackupPoliciesResponseBody(const DescribeUniBackupPoliciesResponseBody &) = default ;
    DescribeUniBackupPoliciesResponseBody(DescribeUniBackupPoliciesResponseBody &&) = default ;
    DescribeUniBackupPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniBackupPoliciesResponseBody() = default ;
    DescribeUniBackupPoliciesResponseBody& operator=(const DescribeUniBackupPoliciesResponseBody &) = default ;
    DescribeUniBackupPoliciesResponseBody& operator=(DescribeUniBackupPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->uniBackupPolicies_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeUniBackupPoliciesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeUniBackupPoliciesResponseBodyPageInfo) };
    inline DescribeUniBackupPoliciesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeUniBackupPoliciesResponseBodyPageInfo) };
    inline DescribeUniBackupPoliciesResponseBody& setPageInfo(const DescribeUniBackupPoliciesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeUniBackupPoliciesResponseBody& setPageInfo(DescribeUniBackupPoliciesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUniBackupPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uniBackupPolicies Field Functions 
    bool hasUniBackupPolicies() const { return this->uniBackupPolicies_ != nullptr;};
    void deleteUniBackupPolicies() { this->uniBackupPolicies_ = nullptr;};
    inline const vector<DescribeUniBackupPoliciesResponseBodyUniBackupPolicies> & uniBackupPolicies() const { DARABONBA_PTR_GET_CONST(uniBackupPolicies_, vector<DescribeUniBackupPoliciesResponseBodyUniBackupPolicies>) };
    inline vector<DescribeUniBackupPoliciesResponseBodyUniBackupPolicies> uniBackupPolicies() { DARABONBA_PTR_GET(uniBackupPolicies_, vector<DescribeUniBackupPoliciesResponseBodyUniBackupPolicies>) };
    inline DescribeUniBackupPoliciesResponseBody& setUniBackupPolicies(const vector<DescribeUniBackupPoliciesResponseBodyUniBackupPolicies> & uniBackupPolicies) { DARABONBA_PTR_SET_VALUE(uniBackupPolicies_, uniBackupPolicies) };
    inline DescribeUniBackupPoliciesResponseBody& setUniBackupPolicies(vector<DescribeUniBackupPoliciesResponseBodyUniBackupPolicies> && uniBackupPolicies) { DARABONBA_PTR_SET_RVALUE(uniBackupPolicies_, uniBackupPolicies) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeUniBackupPoliciesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the anti-ransomware policies.
    std::shared_ptr<vector<DescribeUniBackupPoliciesResponseBodyUniBackupPolicies>> uniBackupPolicies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
