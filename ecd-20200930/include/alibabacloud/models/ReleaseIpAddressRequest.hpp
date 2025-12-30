// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEIPADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASEIPADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ReleaseIpAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseIpAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EipId, eipId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseIpAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EipId, eipId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ReleaseIpAddressRequest() = default ;
    ReleaseIpAddressRequest(const ReleaseIpAddressRequest &) = default ;
    ReleaseIpAddressRequest(ReleaseIpAddressRequest &&) = default ;
    ReleaseIpAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseIpAddressRequest() = default ;
    ReleaseIpAddressRequest& operator=(const ReleaseIpAddressRequest &) = default ;
    ReleaseIpAddressRequest& operator=(ReleaseIpAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipId_ == nullptr
        && this->regionId_ == nullptr; };
    // eipId Field Functions 
    bool hasEipId() const { return this->eipId_ != nullptr;};
    void deleteEipId() { this->eipId_ = nullptr;};
    inline string getEipId() const { DARABONBA_PTR_GET_DEFAULT(eipId_, "") };
    inline ReleaseIpAddressRequest& setEipId(string eipId) { DARABONBA_PTR_SET_VALUE(eipId_, eipId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ReleaseIpAddressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> eipId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
