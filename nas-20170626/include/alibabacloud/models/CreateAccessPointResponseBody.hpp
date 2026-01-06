// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateAccessPointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccessPointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPoint, accessPoint_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccessPointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPoint, accessPoint_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAccessPointResponseBody() = default ;
    CreateAccessPointResponseBody(const CreateAccessPointResponseBody &) = default ;
    CreateAccessPointResponseBody(CreateAccessPointResponseBody &&) = default ;
    CreateAccessPointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccessPointResponseBody() = default ;
    CreateAccessPointResponseBody& operator=(const CreateAccessPointResponseBody &) = default ;
    CreateAccessPointResponseBody& operator=(CreateAccessPointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessPoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessPoint& obj) { 
        DARABONBA_PTR_TO_JSON(AccessPointDomain, accessPointDomain_);
        DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      };
      friend void from_json(const Darabonba::Json& j, AccessPoint& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessPointDomain, accessPointDomain_);
        DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      };
      AccessPoint() = default ;
      AccessPoint(const AccessPoint &) = default ;
      AccessPoint(AccessPoint &&) = default ;
      AccessPoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessPoint() = default ;
      AccessPoint& operator=(const AccessPoint &) = default ;
      AccessPoint& operator=(AccessPoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessPointDomain_ == nullptr
        && this->accessPointId_ == nullptr; };
      // accessPointDomain Field Functions 
      bool hasAccessPointDomain() const { return this->accessPointDomain_ != nullptr;};
      void deleteAccessPointDomain() { this->accessPointDomain_ = nullptr;};
      inline string getAccessPointDomain() const { DARABONBA_PTR_GET_DEFAULT(accessPointDomain_, "") };
      inline AccessPoint& setAccessPointDomain(string accessPointDomain) { DARABONBA_PTR_SET_VALUE(accessPointDomain_, accessPointDomain) };


      // accessPointId Field Functions 
      bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
      void deleteAccessPointId() { this->accessPointId_ = nullptr;};
      inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
      inline AccessPoint& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    protected:
      // The domain name of the access point.
      shared_ptr<string> accessPointDomain_ {};
      // The ID of the access point.
      shared_ptr<string> accessPointId_ {};
    };

    virtual bool empty() const override { return this->accessPoint_ == nullptr
        && this->requestId_ == nullptr; };
    // accessPoint Field Functions 
    bool hasAccessPoint() const { return this->accessPoint_ != nullptr;};
    void deleteAccessPoint() { this->accessPoint_ = nullptr;};
    inline const CreateAccessPointResponseBody::AccessPoint & getAccessPoint() const { DARABONBA_PTR_GET_CONST(accessPoint_, CreateAccessPointResponseBody::AccessPoint) };
    inline CreateAccessPointResponseBody::AccessPoint getAccessPoint() { DARABONBA_PTR_GET(accessPoint_, CreateAccessPointResponseBody::AccessPoint) };
    inline CreateAccessPointResponseBody& setAccessPoint(const CreateAccessPointResponseBody::AccessPoint & accessPoint) { DARABONBA_PTR_SET_VALUE(accessPoint_, accessPoint) };
    inline CreateAccessPointResponseBody& setAccessPoint(CreateAccessPointResponseBody::AccessPoint && accessPoint) { DARABONBA_PTR_SET_RVALUE(accessPoint_, accessPoint) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAccessPointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The access point.
    shared_ptr<CreateAccessPointResponseBody::AccessPoint> accessPoint_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
