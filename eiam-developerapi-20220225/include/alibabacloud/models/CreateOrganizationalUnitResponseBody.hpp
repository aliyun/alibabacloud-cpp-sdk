// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORGANIZATIONALUNITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORGANIZATIONALUNITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class CreateOrganizationalUnitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(organizationalUnitId, organizationalUnitId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(organizationalUnitId, organizationalUnitId_);
    };
    CreateOrganizationalUnitResponseBody() = default ;
    CreateOrganizationalUnitResponseBody(const CreateOrganizationalUnitResponseBody &) = default ;
    CreateOrganizationalUnitResponseBody(CreateOrganizationalUnitResponseBody &&) = default ;
    CreateOrganizationalUnitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrganizationalUnitResponseBody() = default ;
    CreateOrganizationalUnitResponseBody& operator=(const CreateOrganizationalUnitResponseBody &) = default ;
    CreateOrganizationalUnitResponseBody& operator=(CreateOrganizationalUnitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationalUnitId_ == nullptr; };
    // organizationalUnitId Field Functions 
    bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
    void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
    inline string getOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
    inline CreateOrganizationalUnitResponseBody& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


  protected:
    // The ID of the organizational unit.
    shared_ptr<string> organizationalUnitId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
