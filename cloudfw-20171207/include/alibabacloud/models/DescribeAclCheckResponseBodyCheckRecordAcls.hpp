// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLCHECKRESPONSEBODYCHECKRECORDACLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLCHECKRESPONSEBODYCHECKRECORDACLS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAclCheckResponseBodyCheckRecordAclsAcl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclCheckResponseBodyCheckRecordAcls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclCheckResponseBodyCheckRecordAcls& obj) { 
      DARABONBA_PTR_TO_JSON(Acl, acl_);
      DARABONBA_PTR_TO_JSON(AclAssessmentDetail, aclAssessmentDetail_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclCheckResponseBodyCheckRecordAcls& obj) { 
      DARABONBA_PTR_FROM_JSON(Acl, acl_);
      DARABONBA_PTR_FROM_JSON(AclAssessmentDetail, aclAssessmentDetail_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
    };
    DescribeAclCheckResponseBodyCheckRecordAcls() = default ;
    DescribeAclCheckResponseBodyCheckRecordAcls(const DescribeAclCheckResponseBodyCheckRecordAcls &) = default ;
    DescribeAclCheckResponseBodyCheckRecordAcls(DescribeAclCheckResponseBodyCheckRecordAcls &&) = default ;
    DescribeAclCheckResponseBodyCheckRecordAcls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclCheckResponseBodyCheckRecordAcls() = default ;
    DescribeAclCheckResponseBodyCheckRecordAcls& operator=(const DescribeAclCheckResponseBodyCheckRecordAcls &) = default ;
    DescribeAclCheckResponseBodyCheckRecordAcls& operator=(DescribeAclCheckResponseBodyCheckRecordAcls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acl_ == nullptr
        && return this->aclAssessmentDetail_ == nullptr && return this->aclStatus_ == nullptr; };
    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline const Models::DescribeAclCheckResponseBodyCheckRecordAclsAcl & acl() const { DARABONBA_PTR_GET_CONST(acl_, Models::DescribeAclCheckResponseBodyCheckRecordAclsAcl) };
    inline Models::DescribeAclCheckResponseBodyCheckRecordAclsAcl acl() { DARABONBA_PTR_GET(acl_, Models::DescribeAclCheckResponseBodyCheckRecordAclsAcl) };
    inline DescribeAclCheckResponseBodyCheckRecordAcls& setAcl(const Models::DescribeAclCheckResponseBodyCheckRecordAclsAcl & acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };
    inline DescribeAclCheckResponseBodyCheckRecordAcls& setAcl(Models::DescribeAclCheckResponseBodyCheckRecordAclsAcl && acl) { DARABONBA_PTR_SET_RVALUE(acl_, acl) };


    // aclAssessmentDetail Field Functions 
    bool hasAclAssessmentDetail() const { return this->aclAssessmentDetail_ != nullptr;};
    void deleteAclAssessmentDetail() { this->aclAssessmentDetail_ = nullptr;};
    inline string aclAssessmentDetail() const { DARABONBA_PTR_GET_DEFAULT(aclAssessmentDetail_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAcls& setAclAssessmentDetail(string aclAssessmentDetail) { DARABONBA_PTR_SET_VALUE(aclAssessmentDetail_, aclAssessmentDetail) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string aclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAcls& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


  protected:
    std::shared_ptr<Models::DescribeAclCheckResponseBodyCheckRecordAclsAcl> acl_ = nullptr;
    std::shared_ptr<string> aclAssessmentDetail_ = nullptr;
    std::shared_ptr<string> aclStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
