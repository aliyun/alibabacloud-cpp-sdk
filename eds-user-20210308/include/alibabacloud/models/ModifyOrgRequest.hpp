// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYORGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYORGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class ModifyOrgRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOrgRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(OrgName, orgName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOrgRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(OrgName, orgName_);
    };
    ModifyOrgRequest() = default ;
    ModifyOrgRequest(const ModifyOrgRequest &) = default ;
    ModifyOrgRequest(ModifyOrgRequest &&) = default ;
    ModifyOrgRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOrgRequest() = default ;
    ModifyOrgRequest& operator=(const ModifyOrgRequest &) = default ;
    ModifyOrgRequest& operator=(ModifyOrgRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orgId_ == nullptr
        && return this->orgName_ == nullptr; };
    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline ModifyOrgRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // orgName Field Functions 
    bool hasOrgName() const { return this->orgName_ != nullptr;};
    void deleteOrgName() { this->orgName_ = nullptr;};
    inline string orgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
    inline ModifyOrgRequest& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


  protected:
    // The ID of the organization.
    // 
    // This parameter is required.
    std::shared_ptr<string> orgId_ = nullptr;
    // The name of the organization.
    // 
    // This parameter is required.
    std::shared_ptr<string> orgName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
