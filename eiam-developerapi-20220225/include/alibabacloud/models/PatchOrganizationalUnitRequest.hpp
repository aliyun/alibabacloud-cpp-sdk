// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHORGANIZATIONALUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PATCHORGANIZATIONALUNITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class PatchOrganizationalUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchOrganizationalUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(organizationalUnitName, organizationalUnitName_);
    };
    friend void from_json(const Darabonba::Json& j, PatchOrganizationalUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(organizationalUnitName, organizationalUnitName_);
    };
    PatchOrganizationalUnitRequest() = default ;
    PatchOrganizationalUnitRequest(const PatchOrganizationalUnitRequest &) = default ;
    PatchOrganizationalUnitRequest(PatchOrganizationalUnitRequest &&) = default ;
    PatchOrganizationalUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchOrganizationalUnitRequest() = default ;
    PatchOrganizationalUnitRequest& operator=(const PatchOrganizationalUnitRequest &) = default ;
    PatchOrganizationalUnitRequest& operator=(PatchOrganizationalUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->organizationalUnitName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PatchOrganizationalUnitRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // organizationalUnitName Field Functions 
    bool hasOrganizationalUnitName() const { return this->organizationalUnitName_ != nullptr;};
    void deleteOrganizationalUnitName() { this->organizationalUnitName_ = nullptr;};
    inline string getOrganizationalUnitName() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitName_, "") };
    inline PatchOrganizationalUnitRequest& setOrganizationalUnitName(string organizationalUnitName) { DARABONBA_PTR_SET_VALUE(organizationalUnitName_, organizationalUnitName) };


  protected:
    // The description of the organizational unit.
    shared_ptr<string> description_ {};
    // The name of the organizational unit.
    shared_ptr<string> organizationalUnitName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
