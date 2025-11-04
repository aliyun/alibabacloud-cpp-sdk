// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSVIDEOSETTINGSVIDEOCODECSETTINGGOP_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSVIDEOSETTINGSVIDEOCODECSETTINGGOP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop& obj) { 
      DARABONBA_PTR_TO_JSON(BframesNum, bframesNum_);
      DARABONBA_PTR_TO_JSON(GopSize, gopSize_);
      DARABONBA_PTR_TO_JSON(GopSizeUnits, gopSizeUnits_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop& obj) { 
      DARABONBA_PTR_FROM_JSON(BframesNum, bframesNum_);
      DARABONBA_PTR_FROM_JSON(GopSize, gopSize_);
      DARABONBA_PTR_FROM_JSON(GopSizeUnits, gopSizeUnits_);
    };
    ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop() = default ;
    ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop(const ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop(ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop &&) = default ;
    ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop() = default ;
    ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop& operator=(const ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop& operator=(ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bframesNum_ == nullptr
        && return this->gopSize_ == nullptr && return this->gopSizeUnits_ == nullptr; };
    // bframesNum Field Functions 
    bool hasBframesNum() const { return this->bframesNum_ != nullptr;};
    void deleteBframesNum() { this->bframesNum_ = nullptr;};
    inline int32_t bframesNum() const { DARABONBA_PTR_GET_DEFAULT(bframesNum_, 0) };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop& setBframesNum(int32_t bframesNum) { DARABONBA_PTR_SET_VALUE(bframesNum_, bframesNum) };


    // gopSize Field Functions 
    bool hasGopSize() const { return this->gopSize_ != nullptr;};
    void deleteGopSize() { this->gopSize_ = nullptr;};
    inline int32_t gopSize() const { DARABONBA_PTR_GET_DEFAULT(gopSize_, 0) };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop& setGopSize(int32_t gopSize) { DARABONBA_PTR_SET_VALUE(gopSize_, gopSize) };


    // gopSizeUnits Field Functions 
    bool hasGopSizeUnits() const { return this->gopSizeUnits_ != nullptr;};
    void deleteGopSizeUnits() { this->gopSizeUnits_ = nullptr;};
    inline string gopSizeUnits() const { DARABONBA_PTR_GET_DEFAULT(gopSizeUnits_, "") };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop& setGopSizeUnits(string gopSizeUnits) { DARABONBA_PTR_SET_VALUE(gopSizeUnits_, gopSizeUnits) };


  protected:
    // The number of B frames.
    std::shared_ptr<int32_t> bframesNum_ = nullptr;
    // The GOP size.
    std::shared_ptr<int32_t> gopSize_ = nullptr;
    // The GOP size unit.
    std::shared_ptr<string> gopSizeUnits_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
