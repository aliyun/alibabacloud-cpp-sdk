// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIMAGELIBFREEINSPECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIMAGELIBFREEINSPECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateImageLibFreeInspectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateImageLibFreeInspectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateImageLibFreeInspectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateImageLibFreeInspectionRequest() = default ;
    UpdateImageLibFreeInspectionRequest(const UpdateImageLibFreeInspectionRequest &) = default ;
    UpdateImageLibFreeInspectionRequest(UpdateImageLibFreeInspectionRequest &&) = default ;
    UpdateImageLibFreeInspectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateImageLibFreeInspectionRequest() = default ;
    UpdateImageLibFreeInspectionRequest& operator=(const UpdateImageLibFreeInspectionRequest &) = default ;
    UpdateImageLibFreeInspectionRequest& operator=(UpdateImageLibFreeInspectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->regionId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const map<string, int32_t> & config() const { DARABONBA_PTR_GET_CONST(config_, map<string, int32_t>) };
    inline map<string, int32_t> config() { DARABONBA_PTR_GET(config_, map<string, int32_t>) };
    inline UpdateImageLibFreeInspectionRequest& setConfig(const map<string, int32_t> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline UpdateImageLibFreeInspectionRequest& setConfig(map<string, int32_t> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateImageLibFreeInspectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Configuration.
    std::shared_ptr<map<string, int32_t>> config_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
