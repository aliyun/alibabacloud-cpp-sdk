// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupPoliciesResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupPoliciesResponseBodyPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupPoliciesResponseBody() = default ;
    DescribeBackupPoliciesResponseBody(const DescribeBackupPoliciesResponseBody &) = default ;
    DescribeBackupPoliciesResponseBody(DescribeBackupPoliciesResponseBody &&) = default ;
    DescribeBackupPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPoliciesResponseBody() = default ;
    DescribeBackupPoliciesResponseBody& operator=(const DescribeBackupPoliciesResponseBody &) = default ;
    DescribeBackupPoliciesResponseBody& operator=(DescribeBackupPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->policies_ != nullptr && this->requestId_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeBackupPoliciesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeBackupPoliciesResponseBodyPageInfo) };
    inline DescribeBackupPoliciesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeBackupPoliciesResponseBodyPageInfo) };
    inline DescribeBackupPoliciesResponseBody& setPageInfo(const DescribeBackupPoliciesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeBackupPoliciesResponseBody& setPageInfo(DescribeBackupPoliciesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<DescribeBackupPoliciesResponseBodyPolicies> & policies() const { DARABONBA_PTR_GET_CONST(policies_, vector<DescribeBackupPoliciesResponseBodyPolicies>) };
    inline vector<DescribeBackupPoliciesResponseBodyPolicies> policies() { DARABONBA_PTR_GET(policies_, vector<DescribeBackupPoliciesResponseBodyPolicies>) };
    inline DescribeBackupPoliciesResponseBody& setPolicies(const vector<DescribeBackupPoliciesResponseBodyPolicies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline DescribeBackupPoliciesResponseBody& setPolicies(vector<DescribeBackupPoliciesResponseBodyPolicies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeBackupPoliciesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The details of the anti-ransomware policy.
    std::shared_ptr<vector<DescribeBackupPoliciesResponseBodyPolicies>> policies_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
