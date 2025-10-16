// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISSOCIATEIPADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISSOCIATEIPADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DissociateIpAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DissociateIpAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EipId, eipId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DissociateIpAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EipId, eipId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DissociateIpAddressRequest() = default ;
    DissociateIpAddressRequest(const DissociateIpAddressRequest &) = default ;
    DissociateIpAddressRequest(DissociateIpAddressRequest &&) = default ;
    DissociateIpAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DissociateIpAddressRequest() = default ;
    DissociateIpAddressRequest& operator=(const DissociateIpAddressRequest &) = default ;
    DissociateIpAddressRequest& operator=(DissociateIpAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipId_ == nullptr
        && return this->regionId_ == nullptr; };
    // eipId Field Functions 
    bool hasEipId() const { return this->eipId_ != nullptr;};
    void deleteEipId() { this->eipId_ = nullptr;};
    inline string eipId() const { DARABONBA_PTR_GET_DEFAULT(eipId_, "") };
    inline DissociateIpAddressRequest& setEipId(string eipId) { DARABONBA_PTR_SET_VALUE(eipId_, eipId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DissociateIpAddressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> eipId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
