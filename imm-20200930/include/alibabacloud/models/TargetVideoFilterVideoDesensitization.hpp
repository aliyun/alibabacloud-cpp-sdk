// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETVIDEOFILTERVIDEODESENSITIZATION_HPP_
#define ALIBABACLOUD_MODELS_TARGETVIDEOFILTERVIDEODESENSITIZATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TargetVideoFilterVideoDesensitizationFace.hpp>
#include <alibabacloud/models/TargetVideoFilterVideoDesensitizationLicensePlate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetVideoFilterVideoDesensitization : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetVideoFilterVideoDesensitization& obj) { 
      DARABONBA_PTR_TO_JSON(Face, face_);
      DARABONBA_PTR_TO_JSON(LicensePlate, licensePlate_);
    };
    friend void from_json(const Darabonba::Json& j, TargetVideoFilterVideoDesensitization& obj) { 
      DARABONBA_PTR_FROM_JSON(Face, face_);
      DARABONBA_PTR_FROM_JSON(LicensePlate, licensePlate_);
    };
    TargetVideoFilterVideoDesensitization() = default ;
    TargetVideoFilterVideoDesensitization(const TargetVideoFilterVideoDesensitization &) = default ;
    TargetVideoFilterVideoDesensitization(TargetVideoFilterVideoDesensitization &&) = default ;
    TargetVideoFilterVideoDesensitization(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetVideoFilterVideoDesensitization() = default ;
    TargetVideoFilterVideoDesensitization& operator=(const TargetVideoFilterVideoDesensitization &) = default ;
    TargetVideoFilterVideoDesensitization& operator=(TargetVideoFilterVideoDesensitization &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->face_ != nullptr
        && this->licensePlate_ != nullptr; };
    // face Field Functions 
    bool hasFace() const { return this->face_ != nullptr;};
    void deleteFace() { this->face_ = nullptr;};
    inline const Models::TargetVideoFilterVideoDesensitizationFace & face() const { DARABONBA_PTR_GET_CONST(face_, Models::TargetVideoFilterVideoDesensitizationFace) };
    inline Models::TargetVideoFilterVideoDesensitizationFace face() { DARABONBA_PTR_GET(face_, Models::TargetVideoFilterVideoDesensitizationFace) };
    inline TargetVideoFilterVideoDesensitization& setFace(const Models::TargetVideoFilterVideoDesensitizationFace & face) { DARABONBA_PTR_SET_VALUE(face_, face) };
    inline TargetVideoFilterVideoDesensitization& setFace(Models::TargetVideoFilterVideoDesensitizationFace && face) { DARABONBA_PTR_SET_RVALUE(face_, face) };


    // licensePlate Field Functions 
    bool hasLicensePlate() const { return this->licensePlate_ != nullptr;};
    void deleteLicensePlate() { this->licensePlate_ = nullptr;};
    inline const Models::TargetVideoFilterVideoDesensitizationLicensePlate & licensePlate() const { DARABONBA_PTR_GET_CONST(licensePlate_, Models::TargetVideoFilterVideoDesensitizationLicensePlate) };
    inline Models::TargetVideoFilterVideoDesensitizationLicensePlate licensePlate() { DARABONBA_PTR_GET(licensePlate_, Models::TargetVideoFilterVideoDesensitizationLicensePlate) };
    inline TargetVideoFilterVideoDesensitization& setLicensePlate(const Models::TargetVideoFilterVideoDesensitizationLicensePlate & licensePlate) { DARABONBA_PTR_SET_VALUE(licensePlate_, licensePlate) };
    inline TargetVideoFilterVideoDesensitization& setLicensePlate(Models::TargetVideoFilterVideoDesensitizationLicensePlate && licensePlate) { DARABONBA_PTR_SET_RVALUE(licensePlate_, licensePlate) };


  protected:
    std::shared_ptr<Models::TargetVideoFilterVideoDesensitizationFace> face_ = nullptr;
    std::shared_ptr<Models::TargetVideoFilterVideoDesensitizationLicensePlate> licensePlate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
