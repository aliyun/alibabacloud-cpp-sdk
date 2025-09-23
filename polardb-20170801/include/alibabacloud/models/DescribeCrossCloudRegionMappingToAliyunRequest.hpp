// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDREGIONMAPPINGTOALIYUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDREGIONMAPPINGTOALIYUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeCrossCloudRegionMappingToAliyunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossCloudRegionMappingToAliyunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunRegionId, aliyunRegionId_);
      DARABONBA_PTR_TO_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_TO_JSON(CrossCloudRegionId, crossCloudRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossCloudRegionMappingToAliyunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunRegionId, aliyunRegionId_);
      DARABONBA_PTR_FROM_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_FROM_JSON(CrossCloudRegionId, crossCloudRegionId_);
    };
    DescribeCrossCloudRegionMappingToAliyunRequest() = default ;
    DescribeCrossCloudRegionMappingToAliyunRequest(const DescribeCrossCloudRegionMappingToAliyunRequest &) = default ;
    DescribeCrossCloudRegionMappingToAliyunRequest(DescribeCrossCloudRegionMappingToAliyunRequest &&) = default ;
    DescribeCrossCloudRegionMappingToAliyunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossCloudRegionMappingToAliyunRequest() = default ;
    DescribeCrossCloudRegionMappingToAliyunRequest& operator=(const DescribeCrossCloudRegionMappingToAliyunRequest &) = default ;
    DescribeCrossCloudRegionMappingToAliyunRequest& operator=(DescribeCrossCloudRegionMappingToAliyunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunRegionId_ != nullptr
        && this->cloudProvider_ != nullptr && this->crossCloudRegionId_ != nullptr; };
    // aliyunRegionId Field Functions 
    bool hasAliyunRegionId() const { return this->aliyunRegionId_ != nullptr;};
    void deleteAliyunRegionId() { this->aliyunRegionId_ = nullptr;};
    inline string aliyunRegionId() const { DARABONBA_PTR_GET_DEFAULT(aliyunRegionId_, "") };
    inline DescribeCrossCloudRegionMappingToAliyunRequest& setAliyunRegionId(string aliyunRegionId) { DARABONBA_PTR_SET_VALUE(aliyunRegionId_, aliyunRegionId) };


    // cloudProvider Field Functions 
    bool hasCloudProvider() const { return this->cloudProvider_ != nullptr;};
    void deleteCloudProvider() { this->cloudProvider_ = nullptr;};
    inline string cloudProvider() const { DARABONBA_PTR_GET_DEFAULT(cloudProvider_, "") };
    inline DescribeCrossCloudRegionMappingToAliyunRequest& setCloudProvider(string cloudProvider) { DARABONBA_PTR_SET_VALUE(cloudProvider_, cloudProvider) };


    // crossCloudRegionId Field Functions 
    bool hasCrossCloudRegionId() const { return this->crossCloudRegionId_ != nullptr;};
    void deleteCrossCloudRegionId() { this->crossCloudRegionId_ = nullptr;};
    inline string crossCloudRegionId() const { DARABONBA_PTR_GET_DEFAULT(crossCloudRegionId_, "") };
    inline DescribeCrossCloudRegionMappingToAliyunRequest& setCrossCloudRegionId(string crossCloudRegionId) { DARABONBA_PTR_SET_VALUE(crossCloudRegionId_, crossCloudRegionId) };


  protected:
    std::shared_ptr<string> aliyunRegionId_ = nullptr;
    std::shared_ptr<string> cloudProvider_ = nullptr;
    std::shared_ptr<string> crossCloudRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
