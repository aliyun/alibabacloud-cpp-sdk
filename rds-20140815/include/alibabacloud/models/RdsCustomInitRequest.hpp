// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RDSCUSTOMINITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RDSCUSTOMINITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RdsCustomInitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RdsCustomInitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceLinkedRole, serviceLinkedRole_);
    };
    friend void from_json(const Darabonba::Json& j, RdsCustomInitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceLinkedRole, serviceLinkedRole_);
    };
    RdsCustomInitRequest() = default ;
    RdsCustomInitRequest(const RdsCustomInitRequest &) = default ;
    RdsCustomInitRequest(RdsCustomInitRequest &&) = default ;
    RdsCustomInitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RdsCustomInitRequest() = default ;
    RdsCustomInitRequest& operator=(const RdsCustomInitRequest &) = default ;
    RdsCustomInitRequest& operator=(RdsCustomInitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->serviceLinkedRole_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RdsCustomInitRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceLinkedRole Field Functions 
    bool hasServiceLinkedRole() const { return this->serviceLinkedRole_ != nullptr;};
    void deleteServiceLinkedRole() { this->serviceLinkedRole_ = nullptr;};
    inline string serviceLinkedRole() const { DARABONBA_PTR_GET_DEFAULT(serviceLinkedRole_, "") };
    inline RdsCustomInitRequest& setServiceLinkedRole(string serviceLinkedRole) { DARABONBA_PTR_SET_VALUE(serviceLinkedRole_, serviceLinkedRole) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> serviceLinkedRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
