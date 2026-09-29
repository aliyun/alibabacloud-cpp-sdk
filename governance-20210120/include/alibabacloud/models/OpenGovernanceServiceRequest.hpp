// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENGOVERNANCESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENGOVERNANCESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class OpenGovernanceServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenGovernanceServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenGovernanceServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    OpenGovernanceServiceRequest() = default ;
    OpenGovernanceServiceRequest(const OpenGovernanceServiceRequest &) = default ;
    OpenGovernanceServiceRequest(OpenGovernanceServiceRequest &&) = default ;
    OpenGovernanceServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenGovernanceServiceRequest() = default ;
    OpenGovernanceServiceRequest& operator=(const OpenGovernanceServiceRequest &) = default ;
    OpenGovernanceServiceRequest& operator=(OpenGovernanceServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline OpenGovernanceServiceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // RegionId
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
