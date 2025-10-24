// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTEMPLATERESPONSEBODYTEMPLATEVIDEONARROWBAND_HPP_
#define ALIBABACLOUD_MODELS_ADDTEMPLATERESPONSEBODYTEMPLATEVIDEONARROWBAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddTemplateResponseBodyTemplateVideoNarrowBand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTemplateResponseBodyTemplateVideoNarrowBand& obj) { 
      DARABONBA_PTR_TO_JSON(Abrmax, abrmax_);
      DARABONBA_PTR_TO_JSON(MaxAbrRatio, maxAbrRatio_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, AddTemplateResponseBodyTemplateVideoNarrowBand& obj) { 
      DARABONBA_PTR_FROM_JSON(Abrmax, abrmax_);
      DARABONBA_PTR_FROM_JSON(MaxAbrRatio, maxAbrRatio_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    AddTemplateResponseBodyTemplateVideoNarrowBand() = default ;
    AddTemplateResponseBodyTemplateVideoNarrowBand(const AddTemplateResponseBodyTemplateVideoNarrowBand &) = default ;
    AddTemplateResponseBodyTemplateVideoNarrowBand(AddTemplateResponseBodyTemplateVideoNarrowBand &&) = default ;
    AddTemplateResponseBodyTemplateVideoNarrowBand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTemplateResponseBodyTemplateVideoNarrowBand() = default ;
    AddTemplateResponseBodyTemplateVideoNarrowBand& operator=(const AddTemplateResponseBodyTemplateVideoNarrowBand &) = default ;
    AddTemplateResponseBodyTemplateVideoNarrowBand& operator=(AddTemplateResponseBodyTemplateVideoNarrowBand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abrmax_ == nullptr
        && return this->maxAbrRatio_ == nullptr && return this->version_ == nullptr; };
    // abrmax Field Functions 
    bool hasAbrmax() const { return this->abrmax_ != nullptr;};
    void deleteAbrmax() { this->abrmax_ = nullptr;};
    inline float abrmax() const { DARABONBA_PTR_GET_DEFAULT(abrmax_, 0.0) };
    inline AddTemplateResponseBodyTemplateVideoNarrowBand& setAbrmax(float abrmax) { DARABONBA_PTR_SET_VALUE(abrmax_, abrmax) };


    // maxAbrRatio Field Functions 
    bool hasMaxAbrRatio() const { return this->maxAbrRatio_ != nullptr;};
    void deleteMaxAbrRatio() { this->maxAbrRatio_ = nullptr;};
    inline float maxAbrRatio() const { DARABONBA_PTR_GET_DEFAULT(maxAbrRatio_, 0.0) };
    inline AddTemplateResponseBodyTemplateVideoNarrowBand& setMaxAbrRatio(float maxAbrRatio) { DARABONBA_PTR_SET_VALUE(maxAbrRatio_, maxAbrRatio) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline AddTemplateResponseBodyTemplateVideoNarrowBand& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The upper limit of the dynamic bitrate. If this parameter is set, the average bitrate is in the range of (0, 1000000].
    std::shared_ptr<float> abrmax_ = nullptr;
    // The maximum ratio of the upper limit of dynamic bitrate. If this parameter is set, the value of Abrmax does not exceed x times of the source video bitrate. Valid values: (0,1.0].
    std::shared_ptr<float> maxAbrRatio_ = nullptr;
    // The Narrowband HD version. Only 1.0 may be returned.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
