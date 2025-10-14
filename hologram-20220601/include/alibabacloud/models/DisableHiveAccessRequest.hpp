// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEHIVEACCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEHIVEACCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class DisableHiveAccessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableHiveAccessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableHiveAccessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DisableHiveAccessRequest() = default ;
    DisableHiveAccessRequest(const DisableHiveAccessRequest &) = default ;
    DisableHiveAccessRequest(DisableHiveAccessRequest &&) = default ;
    DisableHiveAccessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableHiveAccessRequest() = default ;
    DisableHiveAccessRequest& operator=(const DisableHiveAccessRequest &) = default ;
    DisableHiveAccessRequest& operator=(DisableHiveAccessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DisableHiveAccessRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
