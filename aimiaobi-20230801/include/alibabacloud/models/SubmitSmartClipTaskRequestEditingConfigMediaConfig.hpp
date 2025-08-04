// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTEDITINGCONFIGMEDIACONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTEDITINGCONFIGMEDIACONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitSmartClipTaskRequestEditingConfigMediaConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmartClipTaskRequestEditingConfigMediaConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmartClipTaskRequestEditingConfigMediaConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    SubmitSmartClipTaskRequestEditingConfigMediaConfig() = default ;
    SubmitSmartClipTaskRequestEditingConfigMediaConfig(const SubmitSmartClipTaskRequestEditingConfigMediaConfig &) = default ;
    SubmitSmartClipTaskRequestEditingConfigMediaConfig(SubmitSmartClipTaskRequestEditingConfigMediaConfig &&) = default ;
    SubmitSmartClipTaskRequestEditingConfigMediaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmartClipTaskRequestEditingConfigMediaConfig() = default ;
    SubmitSmartClipTaskRequestEditingConfigMediaConfig& operator=(const SubmitSmartClipTaskRequestEditingConfigMediaConfig &) = default ;
    SubmitSmartClipTaskRequestEditingConfigMediaConfig& operator=(SubmitSmartClipTaskRequestEditingConfigMediaConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->volume_ != nullptr; };
    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline double volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0.0) };
    inline SubmitSmartClipTaskRequestEditingConfigMediaConfig& setVolume(double volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<double> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
