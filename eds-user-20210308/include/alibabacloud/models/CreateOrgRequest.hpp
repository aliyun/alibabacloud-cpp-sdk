// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class CreateOrgRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrgRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrgName, orgName_);
      DARABONBA_PTR_TO_JSON(ParentOrgId, parentOrgId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrgRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrgName, orgName_);
      DARABONBA_PTR_FROM_JSON(ParentOrgId, parentOrgId_);
    };
    CreateOrgRequest() = default ;
    CreateOrgRequest(const CreateOrgRequest &) = default ;
    CreateOrgRequest(CreateOrgRequest &&) = default ;
    CreateOrgRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrgRequest() = default ;
    CreateOrgRequest& operator=(const CreateOrgRequest &) = default ;
    CreateOrgRequest& operator=(CreateOrgRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orgName_ != nullptr
        && this->parentOrgId_ != nullptr; };
    // orgName Field Functions 
    bool hasOrgName() const { return this->orgName_ != nullptr;};
    void deleteOrgName() { this->orgName_ = nullptr;};
    inline string orgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
    inline CreateOrgRequest& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


    // parentOrgId Field Functions 
    bool hasParentOrgId() const { return this->parentOrgId_ != nullptr;};
    void deleteParentOrgId() { this->parentOrgId_ = nullptr;};
    inline string parentOrgId() const { DARABONBA_PTR_GET_DEFAULT(parentOrgId_, "") };
    inline CreateOrgRequest& setParentOrgId(string parentOrgId) { DARABONBA_PTR_SET_VALUE(parentOrgId_, parentOrgId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> orgName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> parentOrgId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
