// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDDRIVESERVICERESPONSEBODYCONFLICTCDSANDORDERCONFLICTCDS_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDDRIVESERVICERESPONSEBODYCONFLICTCDSANDORDERCONFLICTCDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds() = default ;
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds(const CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds &) = default ;
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds(CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds &&) = default ;
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds() = default ;
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds& operator=(const CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds &) = default ;
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds& operator=(CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && return this->regionId_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string cdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the enterprise drive.
    std::shared_ptr<string> cdsId_ = nullptr;
    // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
