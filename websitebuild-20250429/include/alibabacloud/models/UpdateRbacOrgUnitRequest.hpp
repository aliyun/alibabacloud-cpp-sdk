// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERBACORGUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERBACORGUNITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class UpdateRbacOrgUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRbacOrgUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(OrgUnitData, orgUnitData_);
      DARABONBA_PTR_TO_JSON(OrgUnitId, orgUnitId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRbacOrgUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(OrgUnitData, orgUnitData_);
      DARABONBA_PTR_FROM_JSON(OrgUnitId, orgUnitId_);
    };
    UpdateRbacOrgUnitRequest() = default ;
    UpdateRbacOrgUnitRequest(const UpdateRbacOrgUnitRequest &) = default ;
    UpdateRbacOrgUnitRequest(UpdateRbacOrgUnitRequest &&) = default ;
    UpdateRbacOrgUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRbacOrgUnitRequest() = default ;
    UpdateRbacOrgUnitRequest& operator=(const UpdateRbacOrgUnitRequest &) = default ;
    UpdateRbacOrgUnitRequest& operator=(UpdateRbacOrgUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->orgUnitData_ == nullptr && this->orgUnitId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline UpdateRbacOrgUnitRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // orgUnitData Field Functions 
    bool hasOrgUnitData() const { return this->orgUnitData_ != nullptr;};
    void deleteOrgUnitData() { this->orgUnitData_ = nullptr;};
    inline string getOrgUnitData() const { DARABONBA_PTR_GET_DEFAULT(orgUnitData_, "") };
    inline UpdateRbacOrgUnitRequest& setOrgUnitData(string orgUnitData) { DARABONBA_PTR_SET_VALUE(orgUnitData_, orgUnitData) };


    // orgUnitId Field Functions 
    bool hasOrgUnitId() const { return this->orgUnitId_ != nullptr;};
    void deleteOrgUnitId() { this->orgUnitId_ = nullptr;};
    inline string getOrgUnitId() const { DARABONBA_PTR_GET_DEFAULT(orgUnitId_, "") };
    inline UpdateRbacOrgUnitRequest& setOrgUnitId(string orgUnitId) { DARABONBA_PTR_SET_VALUE(orgUnitId_, orgUnitId) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> orgUnitData_ {};
    shared_ptr<string> orgUnitId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
