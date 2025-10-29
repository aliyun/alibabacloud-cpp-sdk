// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKREQUESTSEIPARAMS_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKREQUESTSEIPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateLiveMPUTaskRequestSeiParamsLayoutVolume.hpp>
#include <alibabacloud/models/UpdateLiveMPUTaskRequestSeiParamsPassThrough.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveMPUTaskRequestSeiParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveMPUTaskRequestSeiParams& obj) { 
      DARABONBA_PTR_TO_JSON(LayoutVolume, layoutVolume_);
      DARABONBA_PTR_TO_JSON(PassThrough, passThrough_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveMPUTaskRequestSeiParams& obj) { 
      DARABONBA_PTR_FROM_JSON(LayoutVolume, layoutVolume_);
      DARABONBA_PTR_FROM_JSON(PassThrough, passThrough_);
    };
    UpdateLiveMPUTaskRequestSeiParams() = default ;
    UpdateLiveMPUTaskRequestSeiParams(const UpdateLiveMPUTaskRequestSeiParams &) = default ;
    UpdateLiveMPUTaskRequestSeiParams(UpdateLiveMPUTaskRequestSeiParams &&) = default ;
    UpdateLiveMPUTaskRequestSeiParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveMPUTaskRequestSeiParams() = default ;
    UpdateLiveMPUTaskRequestSeiParams& operator=(const UpdateLiveMPUTaskRequestSeiParams &) = default ;
    UpdateLiveMPUTaskRequestSeiParams& operator=(UpdateLiveMPUTaskRequestSeiParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->layoutVolume_ == nullptr
        && return this->passThrough_ == nullptr; };
    // layoutVolume Field Functions 
    bool hasLayoutVolume() const { return this->layoutVolume_ != nullptr;};
    void deleteLayoutVolume() { this->layoutVolume_ = nullptr;};
    inline const Models::UpdateLiveMPUTaskRequestSeiParamsLayoutVolume & layoutVolume() const { DARABONBA_PTR_GET_CONST(layoutVolume_, Models::UpdateLiveMPUTaskRequestSeiParamsLayoutVolume) };
    inline Models::UpdateLiveMPUTaskRequestSeiParamsLayoutVolume layoutVolume() { DARABONBA_PTR_GET(layoutVolume_, Models::UpdateLiveMPUTaskRequestSeiParamsLayoutVolume) };
    inline UpdateLiveMPUTaskRequestSeiParams& setLayoutVolume(const Models::UpdateLiveMPUTaskRequestSeiParamsLayoutVolume & layoutVolume) { DARABONBA_PTR_SET_VALUE(layoutVolume_, layoutVolume) };
    inline UpdateLiveMPUTaskRequestSeiParams& setLayoutVolume(Models::UpdateLiveMPUTaskRequestSeiParamsLayoutVolume && layoutVolume) { DARABONBA_PTR_SET_RVALUE(layoutVolume_, layoutVolume) };


    // passThrough Field Functions 
    bool hasPassThrough() const { return this->passThrough_ != nullptr;};
    void deletePassThrough() { this->passThrough_ = nullptr;};
    inline const Models::UpdateLiveMPUTaskRequestSeiParamsPassThrough & passThrough() const { DARABONBA_PTR_GET_CONST(passThrough_, Models::UpdateLiveMPUTaskRequestSeiParamsPassThrough) };
    inline Models::UpdateLiveMPUTaskRequestSeiParamsPassThrough passThrough() { DARABONBA_PTR_GET(passThrough_, Models::UpdateLiveMPUTaskRequestSeiParamsPassThrough) };
    inline UpdateLiveMPUTaskRequestSeiParams& setPassThrough(const Models::UpdateLiveMPUTaskRequestSeiParamsPassThrough & passThrough) { DARABONBA_PTR_SET_VALUE(passThrough_, passThrough) };
    inline UpdateLiveMPUTaskRequestSeiParams& setPassThrough(Models::UpdateLiveMPUTaskRequestSeiParamsPassThrough && passThrough) { DARABONBA_PTR_SET_RVALUE(passThrough_, passThrough) };


  protected:
    // The layout and volume SEI. If you leave this parameter empty, the default layout and volume SEI is used.
    std::shared_ptr<Models::UpdateLiveMPUTaskRequestSeiParamsLayoutVolume> layoutVolume_ = nullptr;
    // Specifies whether to pass through the SEI.
    std::shared_ptr<Models::UpdateLiveMPUTaskRequestSeiParamsPassThrough> passThrough_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
