// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATEIMAGEPROTOCOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MIGRATEIMAGEPROTOCOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class MigrateImageProtocolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateImageProtocolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetProtocolType, targetProtocolType_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateImageProtocolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetProtocolType, targetProtocolType_);
    };
    MigrateImageProtocolRequest() = default ;
    MigrateImageProtocolRequest(const MigrateImageProtocolRequest &) = default ;
    MigrateImageProtocolRequest(MigrateImageProtocolRequest &&) = default ;
    MigrateImageProtocolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateImageProtocolRequest() = default ;
    MigrateImageProtocolRequest& operator=(const MigrateImageProtocolRequest &) = default ;
    MigrateImageProtocolRequest& operator=(MigrateImageProtocolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageId_ != nullptr
        && this->regionId_ != nullptr && this->targetProtocolType_ != nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline const vector<string> & imageId() const { DARABONBA_PTR_GET_CONST(imageId_, vector<string>) };
    inline vector<string> imageId() { DARABONBA_PTR_GET(imageId_, vector<string>) };
    inline MigrateImageProtocolRequest& setImageId(const vector<string> & imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };
    inline MigrateImageProtocolRequest& setImageId(vector<string> && imageId) { DARABONBA_PTR_SET_RVALUE(imageId_, imageId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline MigrateImageProtocolRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetProtocolType Field Functions 
    bool hasTargetProtocolType() const { return this->targetProtocolType_ != nullptr;};
    void deleteTargetProtocolType() { this->targetProtocolType_ = nullptr;};
    inline string targetProtocolType() const { DARABONBA_PTR_GET_DEFAULT(targetProtocolType_, "") };
    inline MigrateImageProtocolRequest& setTargetProtocolType(string targetProtocolType) { DARABONBA_PTR_SET_VALUE(targetProtocolType_, targetProtocolType) };


  protected:
    // The image IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> imageId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The protocol to which you want to update the image protocols. Set the value to ASP.
    std::shared_ptr<string> targetProtocolType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
