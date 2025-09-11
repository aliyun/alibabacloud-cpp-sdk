// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSPOINTRESPONSEBODYACCESSPOINT_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSPOINTRESPONSEBODYACCESSPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateAccessPointResponseBodyAccessPoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccessPointResponseBodyAccessPoint& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointDomain, accessPointDomain_);
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccessPointResponseBodyAccessPoint& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointDomain, accessPointDomain_);
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
    };
    CreateAccessPointResponseBodyAccessPoint() = default ;
    CreateAccessPointResponseBodyAccessPoint(const CreateAccessPointResponseBodyAccessPoint &) = default ;
    CreateAccessPointResponseBodyAccessPoint(CreateAccessPointResponseBodyAccessPoint &&) = default ;
    CreateAccessPointResponseBodyAccessPoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccessPointResponseBodyAccessPoint() = default ;
    CreateAccessPointResponseBodyAccessPoint& operator=(const CreateAccessPointResponseBodyAccessPoint &) = default ;
    CreateAccessPointResponseBodyAccessPoint& operator=(CreateAccessPointResponseBodyAccessPoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessPointDomain_ != nullptr
        && this->accessPointId_ != nullptr; };
    // accessPointDomain Field Functions 
    bool hasAccessPointDomain() const { return this->accessPointDomain_ != nullptr;};
    void deleteAccessPointDomain() { this->accessPointDomain_ = nullptr;};
    inline string accessPointDomain() const { DARABONBA_PTR_GET_DEFAULT(accessPointDomain_, "") };
    inline CreateAccessPointResponseBodyAccessPoint& setAccessPointDomain(string accessPointDomain) { DARABONBA_PTR_SET_VALUE(accessPointDomain_, accessPointDomain) };


    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline CreateAccessPointResponseBodyAccessPoint& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


  protected:
    // The domain name of the access point.
    std::shared_ptr<string> accessPointDomain_ = nullptr;
    // The ID of the access point.
    std::shared_ptr<string> accessPointId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
