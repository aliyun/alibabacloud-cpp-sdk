// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSALEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSALEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckSaleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckSaleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckSaleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetCheckSaleRequest() = default ;
    GetCheckSaleRequest(const GetCheckSaleRequest &) = default ;
    GetCheckSaleRequest(GetCheckSaleRequest &&) = default ;
    GetCheckSaleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckSaleRequest() = default ;
    GetCheckSaleRequest& operator=(const GetCheckSaleRequest &) = default ;
    GetCheckSaleRequest& operator=(GetCheckSaleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetCheckSaleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region in which the Security Center instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou:** inside China
    // *   Global **ap-southeast-1:** outside China
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
