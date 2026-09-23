// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHORGANIZATIONALUNITPARENTIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PATCHORGANIZATIONALUNITPARENTIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class PatchOrganizationalUnitParentIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchOrganizationalUnitParentIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
    };
    friend void from_json(const Darabonba::Json& j, PatchOrganizationalUnitParentIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
    };
    PatchOrganizationalUnitParentIdRequest() = default ;
    PatchOrganizationalUnitParentIdRequest(const PatchOrganizationalUnitParentIdRequest &) = default ;
    PatchOrganizationalUnitParentIdRequest(PatchOrganizationalUnitParentIdRequest &&) = default ;
    PatchOrganizationalUnitParentIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchOrganizationalUnitParentIdRequest() = default ;
    PatchOrganizationalUnitParentIdRequest& operator=(const PatchOrganizationalUnitParentIdRequest &) = default ;
    PatchOrganizationalUnitParentIdRequest& operator=(PatchOrganizationalUnitParentIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parentId_ == nullptr; };
    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline PatchOrganizationalUnitParentIdRequest& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


  protected:
    // The ID of the parent organizational unit.
    // 
    // This parameter is required.
    shared_ptr<string> parentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
