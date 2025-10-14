// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEHOSTAVAILABILITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEHOSTAVAILABILITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DisableHostAvailabilityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableHostAvailabilityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableHostAvailabilityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DisableHostAvailabilityRequest() = default ;
    DisableHostAvailabilityRequest(const DisableHostAvailabilityRequest &) = default ;
    DisableHostAvailabilityRequest(DisableHostAvailabilityRequest &&) = default ;
    DisableHostAvailabilityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableHostAvailabilityRequest() = default ;
    DisableHostAvailabilityRequest& operator=(const DisableHostAvailabilityRequest &) = default ;
    DisableHostAvailabilityRequest& operator=(DisableHostAvailabilityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->regionId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline const vector<int64_t> & id() const { DARABONBA_PTR_GET_CONST(id_, vector<int64_t>) };
    inline vector<int64_t> id() { DARABONBA_PTR_GET(id_, vector<int64_t>) };
    inline DisableHostAvailabilityRequest& setId(const vector<int64_t> & id) { DARABONBA_PTR_SET_VALUE(id_, id) };
    inline DisableHostAvailabilityRequest& setId(vector<int64_t> && id) { DARABONBA_PTR_SET_RVALUE(id_, id) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DisableHostAvailabilityRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the availability monitoring task. Valid values of N: 1 to 20.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> id_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
