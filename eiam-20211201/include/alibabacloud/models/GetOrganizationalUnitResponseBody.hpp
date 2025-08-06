// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGANIZATIONALUNITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETORGANIZATIONALUNITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOrganizationalUnitResponseBodyOrganizationalUnit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetOrganizationalUnitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrganizationalUnit, organizationalUnit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrganizationalUnit, organizationalUnit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOrganizationalUnitResponseBody() = default ;
    GetOrganizationalUnitResponseBody(const GetOrganizationalUnitResponseBody &) = default ;
    GetOrganizationalUnitResponseBody(GetOrganizationalUnitResponseBody &&) = default ;
    GetOrganizationalUnitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrganizationalUnitResponseBody() = default ;
    GetOrganizationalUnitResponseBody& operator=(const GetOrganizationalUnitResponseBody &) = default ;
    GetOrganizationalUnitResponseBody& operator=(GetOrganizationalUnitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->organizationalUnit_ != nullptr
        && this->requestId_ != nullptr; };
    // organizationalUnit Field Functions 
    bool hasOrganizationalUnit() const { return this->organizationalUnit_ != nullptr;};
    void deleteOrganizationalUnit() { this->organizationalUnit_ = nullptr;};
    inline const GetOrganizationalUnitResponseBodyOrganizationalUnit & organizationalUnit() const { DARABONBA_PTR_GET_CONST(organizationalUnit_, GetOrganizationalUnitResponseBodyOrganizationalUnit) };
    inline GetOrganizationalUnitResponseBodyOrganizationalUnit organizationalUnit() { DARABONBA_PTR_GET(organizationalUnit_, GetOrganizationalUnitResponseBodyOrganizationalUnit) };
    inline GetOrganizationalUnitResponseBody& setOrganizationalUnit(const GetOrganizationalUnitResponseBodyOrganizationalUnit & organizationalUnit) { DARABONBA_PTR_SET_VALUE(organizationalUnit_, organizationalUnit) };
    inline GetOrganizationalUnitResponseBody& setOrganizationalUnit(GetOrganizationalUnitResponseBodyOrganizationalUnit && organizationalUnit) { DARABONBA_PTR_SET_RVALUE(organizationalUnit_, organizationalUnit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOrganizationalUnitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data object of the organizational unit.
    std::shared_ptr<GetOrganizationalUnitResponseBodyOrganizationalUnit> organizationalUnit_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
