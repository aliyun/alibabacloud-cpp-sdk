// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORGANIZATIONALUNITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORGANIZATIONALUNITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateOrganizationalUnitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrganizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    virtual bool empty() const override { return this->organizationalUnitId_ == nullptr
        && return this->requestId_ == nullptr; };
    // organizationalUnitId Field Functions 
    bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
    void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
    inline string organizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
    inline CreateOrganizationalUnitResponseBody& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrganizationalUnitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The organization ID.
    std::shared_ptr<string> organizationalUnitId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
