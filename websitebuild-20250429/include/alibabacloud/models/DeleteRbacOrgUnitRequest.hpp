// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERBACORGUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERBACORGUNITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class DeleteRbacOrgUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRbacOrgUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(OrgUnitId, orgUnitId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRbacOrgUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(OrgUnitId, orgUnitId_);
    };
    DeleteRbacOrgUnitRequest() = default ;
    DeleteRbacOrgUnitRequest(const DeleteRbacOrgUnitRequest &) = default ;
    DeleteRbacOrgUnitRequest(DeleteRbacOrgUnitRequest &&) = default ;
    DeleteRbacOrgUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRbacOrgUnitRequest() = default ;
    DeleteRbacOrgUnitRequest& operator=(const DeleteRbacOrgUnitRequest &) = default ;
    DeleteRbacOrgUnitRequest& operator=(DeleteRbacOrgUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->orgUnitId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline DeleteRbacOrgUnitRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // orgUnitId Field Functions 
    bool hasOrgUnitId() const { return this->orgUnitId_ != nullptr;};
    void deleteOrgUnitId() { this->orgUnitId_ = nullptr;};
    inline string getOrgUnitId() const { DARABONBA_PTR_GET_DEFAULT(orgUnitId_, "") };
    inline DeleteRbacOrgUnitRequest& setOrgUnitId(string orgUnitId) { DARABONBA_PTR_SET_VALUE(orgUnitId_, orgUnitId) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> orgUnitId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
