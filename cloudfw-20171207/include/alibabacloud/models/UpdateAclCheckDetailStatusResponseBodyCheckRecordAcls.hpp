// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACLCHECKDETAILSTATUSRESPONSEBODYCHECKRECORDACLS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACLCHECKDETAILSTATUSRESPONSEBODYCHECKRECORDACLS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAclCheckDetailStatusResponseBodyCheckRecordAclsAcl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls& obj) { 
      DARABONBA_PTR_TO_JSON(Acl, acl_);
      DARABONBA_PTR_TO_JSON(AclAssessmentDetail, aclAssessmentDetail_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls& obj) { 
      DARABONBA_PTR_FROM_JSON(Acl, acl_);
      DARABONBA_PTR_FROM_JSON(AclAssessmentDetail, aclAssessmentDetail_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
    };
    UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls() = default ;
    UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls(const UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls &) = default ;
    UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls(UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls &&) = default ;
    UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls() = default ;
    UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls& operator=(const UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls &) = default ;
    UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls& operator=(UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acl_ == nullptr
        && return this->aclAssessmentDetail_ == nullptr && return this->aclStatus_ == nullptr; };
    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline const Models::UpdateAclCheckDetailStatusResponseBodyCheckRecordAclsAcl & acl() const { DARABONBA_PTR_GET_CONST(acl_, Models::UpdateAclCheckDetailStatusResponseBodyCheckRecordAclsAcl) };
    inline Models::UpdateAclCheckDetailStatusResponseBodyCheckRecordAclsAcl acl() { DARABONBA_PTR_GET(acl_, Models::UpdateAclCheckDetailStatusResponseBodyCheckRecordAclsAcl) };
    inline UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls& setAcl(const Models::UpdateAclCheckDetailStatusResponseBodyCheckRecordAclsAcl & acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };
    inline UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls& setAcl(Models::UpdateAclCheckDetailStatusResponseBodyCheckRecordAclsAcl && acl) { DARABONBA_PTR_SET_RVALUE(acl_, acl) };


    // aclAssessmentDetail Field Functions 
    bool hasAclAssessmentDetail() const { return this->aclAssessmentDetail_ != nullptr;};
    void deleteAclAssessmentDetail() { this->aclAssessmentDetail_ = nullptr;};
    inline string aclAssessmentDetail() const { DARABONBA_PTR_GET_DEFAULT(aclAssessmentDetail_, "") };
    inline UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls& setAclAssessmentDetail(string aclAssessmentDetail) { DARABONBA_PTR_SET_VALUE(aclAssessmentDetail_, aclAssessmentDetail) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string aclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


  protected:
    std::shared_ptr<Models::UpdateAclCheckDetailStatusResponseBodyCheckRecordAclsAcl> acl_ = nullptr;
    std::shared_ptr<string> aclAssessmentDetail_ = nullptr;
    std::shared_ptr<string> aclStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
