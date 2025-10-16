// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAclAppsResponseBodyAclApps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclApps, aclApps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclApps, aclApps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAclAppsResponseBody() = default ;
    DescribeAclAppsResponseBody(const DescribeAclAppsResponseBody &) = default ;
    DescribeAclAppsResponseBody(DescribeAclAppsResponseBody &&) = default ;
    DescribeAclAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclAppsResponseBody() = default ;
    DescribeAclAppsResponseBody& operator=(const DescribeAclAppsResponseBody &) = default ;
    DescribeAclAppsResponseBody& operator=(DescribeAclAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclApps_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // aclApps Field Functions 
    bool hasAclApps() const { return this->aclApps_ != nullptr;};
    void deleteAclApps() { this->aclApps_ = nullptr;};
    inline const vector<DescribeAclAppsResponseBodyAclApps> & aclApps() const { DARABONBA_PTR_GET_CONST(aclApps_, vector<DescribeAclAppsResponseBodyAclApps>) };
    inline vector<DescribeAclAppsResponseBodyAclApps> aclApps() { DARABONBA_PTR_GET(aclApps_, vector<DescribeAclAppsResponseBodyAclApps>) };
    inline DescribeAclAppsResponseBody& setAclApps(const vector<DescribeAclAppsResponseBodyAclApps> & aclApps) { DARABONBA_PTR_SET_VALUE(aclApps_, aclApps) };
    inline DescribeAclAppsResponseBody& setAclApps(vector<DescribeAclAppsResponseBodyAclApps> && aclApps) { DARABONBA_PTR_SET_RVALUE(aclApps_, aclApps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAclAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAclAppsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeAclAppsResponseBodyAclApps>> aclApps_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
