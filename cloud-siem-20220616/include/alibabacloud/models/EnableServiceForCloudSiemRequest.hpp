// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESERVICEFORCLOUDSIEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLESERVICEFORCLOUDSIEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class EnableServiceForCloudSiemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableServiceForCloudSiemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableServiceForCloudSiemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    EnableServiceForCloudSiemRequest() = default ;
    EnableServiceForCloudSiemRequest(const EnableServiceForCloudSiemRequest &) = default ;
    EnableServiceForCloudSiemRequest(EnableServiceForCloudSiemRequest &&) = default ;
    EnableServiceForCloudSiemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableServiceForCloudSiemRequest() = default ;
    EnableServiceForCloudSiemRequest& operator=(const EnableServiceForCloudSiemRequest &) = default ;
    EnableServiceForCloudSiemRequest& operator=(EnableServiceForCloudSiemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableServiceForCloudSiemRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
