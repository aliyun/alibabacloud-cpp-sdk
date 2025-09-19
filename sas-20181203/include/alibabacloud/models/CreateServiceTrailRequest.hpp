// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICETRAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICETRAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateServiceTrailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceTrailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceTrailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateServiceTrailRequest() = default ;
    CreateServiceTrailRequest(const CreateServiceTrailRequest &) = default ;
    CreateServiceTrailRequest(CreateServiceTrailRequest &&) = default ;
    CreateServiceTrailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceTrailRequest() = default ;
    CreateServiceTrailRequest& operator=(const CreateServiceTrailRequest &) = default ;
    CreateServiceTrailRequest& operator=(CreateServiceTrailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateServiceTrailRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region ID of the instance. Valid values:
    // 
    // *   **cn-hangzhou**: International
    // *   **ap-southeast-1**: Singapore
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
