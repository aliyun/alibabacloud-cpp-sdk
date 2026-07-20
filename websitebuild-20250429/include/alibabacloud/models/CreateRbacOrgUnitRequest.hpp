// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERBACORGUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERBACORGUNITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateRbacOrgUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRbacOrgUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(OrgUnitData, orgUnitData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRbacOrgUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(OrgUnitData, orgUnitData_);
    };
    CreateRbacOrgUnitRequest() = default ;
    CreateRbacOrgUnitRequest(const CreateRbacOrgUnitRequest &) = default ;
    CreateRbacOrgUnitRequest(CreateRbacOrgUnitRequest &&) = default ;
    CreateRbacOrgUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRbacOrgUnitRequest() = default ;
    CreateRbacOrgUnitRequest& operator=(const CreateRbacOrgUnitRequest &) = default ;
    CreateRbacOrgUnitRequest& operator=(CreateRbacOrgUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->orgUnitData_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline CreateRbacOrgUnitRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // orgUnitData Field Functions 
    bool hasOrgUnitData() const { return this->orgUnitData_ != nullptr;};
    void deleteOrgUnitData() { this->orgUnitData_ = nullptr;};
    inline string getOrgUnitData() const { DARABONBA_PTR_GET_DEFAULT(orgUnitData_, "") };
    inline CreateRbacOrgUnitRequest& setOrgUnitData(string orgUnitData) { DARABONBA_PTR_SET_VALUE(orgUnitData_, orgUnitData) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> orgUnitData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
