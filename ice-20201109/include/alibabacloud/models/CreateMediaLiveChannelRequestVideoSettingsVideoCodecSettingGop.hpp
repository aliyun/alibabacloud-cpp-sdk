// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTVIDEOSETTINGSVIDEOCODECSETTINGGOP_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTVIDEOSETTINGSVIDEOCODECSETTINGGOP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop& obj) { 
      DARABONBA_PTR_TO_JSON(BframesNum, bframesNum_);
      DARABONBA_PTR_TO_JSON(GopSize, gopSize_);
      DARABONBA_PTR_TO_JSON(GopSizeUnits, gopSizeUnits_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop& obj) { 
      DARABONBA_PTR_FROM_JSON(BframesNum, bframesNum_);
      DARABONBA_PTR_FROM_JSON(GopSize, gopSize_);
      DARABONBA_PTR_FROM_JSON(GopSizeUnits, gopSizeUnits_);
    };
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop() = default ;
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop(const CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop &) = default ;
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop(CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop &&) = default ;
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop() = default ;
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop& operator=(const CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop &) = default ;
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop& operator=(CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bframesNum_ != nullptr
        && this->gopSize_ != nullptr && this->gopSizeUnits_ != nullptr; };
    // bframesNum Field Functions 
    bool hasBframesNum() const { return this->bframesNum_ != nullptr;};
    void deleteBframesNum() { this->bframesNum_ = nullptr;};
    inline int32_t bframesNum() const { DARABONBA_PTR_GET_DEFAULT(bframesNum_, 0) };
    inline CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop& setBframesNum(int32_t bframesNum) { DARABONBA_PTR_SET_VALUE(bframesNum_, bframesNum) };


    // gopSize Field Functions 
    bool hasGopSize() const { return this->gopSize_ != nullptr;};
    void deleteGopSize() { this->gopSize_ = nullptr;};
    inline int32_t gopSize() const { DARABONBA_PTR_GET_DEFAULT(gopSize_, 0) };
    inline CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop& setGopSize(int32_t gopSize) { DARABONBA_PTR_SET_VALUE(gopSize_, gopSize) };


    // gopSizeUnits Field Functions 
    bool hasGopSizeUnits() const { return this->gopSizeUnits_ != nullptr;};
    void deleteGopSizeUnits() { this->gopSizeUnits_ = nullptr;};
    inline string gopSizeUnits() const { DARABONBA_PTR_GET_DEFAULT(gopSizeUnits_, "") };
    inline CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop& setGopSizeUnits(string gopSizeUnits) { DARABONBA_PTR_SET_VALUE(gopSizeUnits_, gopSizeUnits) };


  protected:
    // The number of B frames. Valid values: 1 to 3.
    std::shared_ptr<int32_t> bframesNum_ = nullptr;
    // The GOP size. When GopSizeUnits is set to SECONDS, the value range is from 1 to 20. When GopSizeUnits is set to FRAMES, the value range is from 1 to 3000.
    std::shared_ptr<int32_t> gopSize_ = nullptr;
    // The GOP size unit. Valid values: FRAMES and SECONDS.
    std::shared_ptr<string> gopSizeUnits_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
