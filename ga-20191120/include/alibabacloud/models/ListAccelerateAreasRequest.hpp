// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCELERATEAREASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACCELERATEAREASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListAccelerateAreasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccelerateAreasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccelerateAreasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListAccelerateAreasRequest() = default ;
    ListAccelerateAreasRequest(const ListAccelerateAreasRequest &) = default ;
    ListAccelerateAreasRequest(ListAccelerateAreasRequest &&) = default ;
    ListAccelerateAreasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccelerateAreasRequest() = default ;
    ListAccelerateAreasRequest& operator=(const ListAccelerateAreasRequest &) = default ;
    ListAccelerateAreasRequest& operator=(ListAccelerateAreasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAccelerateAreasRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region ID of the Global Accelerator (GA) instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
