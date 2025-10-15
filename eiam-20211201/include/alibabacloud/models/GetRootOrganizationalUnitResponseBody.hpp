// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROOTORGANIZATIONALUNITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROOTORGANIZATIONALUNITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRootOrganizationalUnitResponseBodyOrganizationalUnit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetRootOrganizationalUnitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRootOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrganizationalUnit, organizationalUnit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRootOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrganizationalUnit, organizationalUnit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRootOrganizationalUnitResponseBody() = default ;
    GetRootOrganizationalUnitResponseBody(const GetRootOrganizationalUnitResponseBody &) = default ;
    GetRootOrganizationalUnitResponseBody(GetRootOrganizationalUnitResponseBody &&) = default ;
    GetRootOrganizationalUnitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRootOrganizationalUnitResponseBody() = default ;
    GetRootOrganizationalUnitResponseBody& operator=(const GetRootOrganizationalUnitResponseBody &) = default ;
    GetRootOrganizationalUnitResponseBody& operator=(GetRootOrganizationalUnitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationalUnit_ == nullptr
        && return this->requestId_ == nullptr; };
    // organizationalUnit Field Functions 
    bool hasOrganizationalUnit() const { return this->organizationalUnit_ != nullptr;};
    void deleteOrganizationalUnit() { this->organizationalUnit_ = nullptr;};
    inline const GetRootOrganizationalUnitResponseBodyOrganizationalUnit & organizationalUnit() const { DARABONBA_PTR_GET_CONST(organizationalUnit_, GetRootOrganizationalUnitResponseBodyOrganizationalUnit) };
    inline GetRootOrganizationalUnitResponseBodyOrganizationalUnit organizationalUnit() { DARABONBA_PTR_GET(organizationalUnit_, GetRootOrganizationalUnitResponseBodyOrganizationalUnit) };
    inline GetRootOrganizationalUnitResponseBody& setOrganizationalUnit(const GetRootOrganizationalUnitResponseBodyOrganizationalUnit & organizationalUnit) { DARABONBA_PTR_SET_VALUE(organizationalUnit_, organizationalUnit) };
    inline GetRootOrganizationalUnitResponseBody& setOrganizationalUnit(GetRootOrganizationalUnitResponseBodyOrganizationalUnit && organizationalUnit) { DARABONBA_PTR_SET_RVALUE(organizationalUnit_, organizationalUnit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRootOrganizationalUnitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data object of the organizational unit.
    std::shared_ptr<GetRootOrganizationalUnitResponseBodyOrganizationalUnit> organizationalUnit_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
