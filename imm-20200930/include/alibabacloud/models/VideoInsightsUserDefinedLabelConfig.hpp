// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOINSIGHTSUSERDEFINEDLABELCONFIG_HPP_
#define ALIBABACLOUD_MODELS_VIDEOINSIGHTSUSERDEFINEDLABELCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InsightsLabel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class VideoInsightsUserDefinedLabelConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoInsightsUserDefinedLabelConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, VideoInsightsUserDefinedLabelConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
    };
    VideoInsightsUserDefinedLabelConfig() = default ;
    VideoInsightsUserDefinedLabelConfig(const VideoInsightsUserDefinedLabelConfig &) = default ;
    VideoInsightsUserDefinedLabelConfig(VideoInsightsUserDefinedLabelConfig &&) = default ;
    VideoInsightsUserDefinedLabelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoInsightsUserDefinedLabelConfig() = default ;
    VideoInsightsUserDefinedLabelConfig& operator=(const VideoInsightsUserDefinedLabelConfig &) = default ;
    VideoInsightsUserDefinedLabelConfig& operator=(VideoInsightsUserDefinedLabelConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->labels_ == nullptr && this->mode_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline VideoInsightsUserDefinedLabelConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<InsightsLabel> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<InsightsLabel>) };
    inline vector<InsightsLabel> getLabels() { DARABONBA_PTR_GET(labels_, vector<InsightsLabel>) };
    inline VideoInsightsUserDefinedLabelConfig& setLabels(const vector<InsightsLabel> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline VideoInsightsUserDefinedLabelConfig& setLabels(vector<InsightsLabel> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline VideoInsightsUserDefinedLabelConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    // Specifies whether to enable custom labels.
    shared_ptr<bool> enable_ {};
    // The list of custom labels.
    shared_ptr<vector<InsightsLabel>> labels_ {};
    // The custom label matching mode. The SDK passes this as an optional string.
    shared_ptr<string> mode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
