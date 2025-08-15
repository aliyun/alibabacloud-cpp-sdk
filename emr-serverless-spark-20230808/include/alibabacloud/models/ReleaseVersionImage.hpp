// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEVERSIONIMAGE_HPP_
#define ALIBABACLOUD_MODELS_RELEASEVERSIONIMAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ReleaseVersionImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseVersionImage& obj) { 
      DARABONBA_PTR_TO_JSON(cpuArchitecture, cpuArchitecture_);
      DARABONBA_PTR_TO_JSON(imageId, imageId_);
      DARABONBA_PTR_TO_JSON(runtimeEngineType, runtimeEngineType_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseVersionImage& obj) { 
      DARABONBA_PTR_FROM_JSON(cpuArchitecture, cpuArchitecture_);
      DARABONBA_PTR_FROM_JSON(imageId, imageId_);
      DARABONBA_PTR_FROM_JSON(runtimeEngineType, runtimeEngineType_);
    };
    ReleaseVersionImage() = default ;
    ReleaseVersionImage(const ReleaseVersionImage &) = default ;
    ReleaseVersionImage(ReleaseVersionImage &&) = default ;
    ReleaseVersionImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseVersionImage() = default ;
    ReleaseVersionImage& operator=(const ReleaseVersionImage &) = default ;
    ReleaseVersionImage& operator=(ReleaseVersionImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpuArchitecture_ != nullptr
        && this->imageId_ != nullptr && this->runtimeEngineType_ != nullptr; };
    // cpuArchitecture Field Functions 
    bool hasCpuArchitecture() const { return this->cpuArchitecture_ != nullptr;};
    void deleteCpuArchitecture() { this->cpuArchitecture_ = nullptr;};
    inline string cpuArchitecture() const { DARABONBA_PTR_GET_DEFAULT(cpuArchitecture_, "") };
    inline ReleaseVersionImage& setCpuArchitecture(string cpuArchitecture) { DARABONBA_PTR_SET_VALUE(cpuArchitecture_, cpuArchitecture) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ReleaseVersionImage& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // runtimeEngineType Field Functions 
    bool hasRuntimeEngineType() const { return this->runtimeEngineType_ != nullptr;};
    void deleteRuntimeEngineType() { this->runtimeEngineType_ = nullptr;};
    inline string runtimeEngineType() const { DARABONBA_PTR_GET_DEFAULT(runtimeEngineType_, "") };
    inline ReleaseVersionImage& setRuntimeEngineType(string runtimeEngineType) { DARABONBA_PTR_SET_VALUE(runtimeEngineType_, runtimeEngineType) };


  protected:
    std::shared_ptr<string> cpuArchitecture_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> runtimeEngineType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
