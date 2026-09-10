// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLHMDWRESOURCEGROUPSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLHMDWRESOURCEGROUPSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetLhmDWResourceGroupStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLhmDWResourceGroupStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLhmDWResourceGroupStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    GetLhmDWResourceGroupStatusRequest() = default ;
    GetLhmDWResourceGroupStatusRequest(const GetLhmDWResourceGroupStatusRequest &) = default ;
    GetLhmDWResourceGroupStatusRequest(GetLhmDWResourceGroupStatusRequest &&) = default ;
    GetLhmDWResourceGroupStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLhmDWResourceGroupStatusRequest() = default ;
    GetLhmDWResourceGroupStatusRequest& operator=(const GetLhmDWResourceGroupStatusRequest &) = default ;
    GetLhmDWResourceGroupStatusRequest& operator=(GetLhmDWResourceGroupStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetLhmDWResourceGroupStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
