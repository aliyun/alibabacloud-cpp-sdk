// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RISKSCENECONFIG_HPP_
#define ALIBABACLOUD_MODELS_RISKSCENECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class RiskSceneConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RiskSceneConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DetectChannel, detectChannel_);
      DARABONBA_PTR_TO_JSON(OfficeChannel, officeChannel_);
    };
    friend void from_json(const Darabonba::Json& j, RiskSceneConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DetectChannel, detectChannel_);
      DARABONBA_PTR_FROM_JSON(OfficeChannel, officeChannel_);
    };
    RiskSceneConfig() = default ;
    RiskSceneConfig(const RiskSceneConfig &) = default ;
    RiskSceneConfig(RiskSceneConfig &&) = default ;
    RiskSceneConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RiskSceneConfig() = default ;
    RiskSceneConfig& operator=(const RiskSceneConfig &) = default ;
    RiskSceneConfig& operator=(RiskSceneConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectChannel_ == nullptr
        && return this->officeChannel_ == nullptr; };
    // detectChannel Field Functions 
    bool hasDetectChannel() const { return this->detectChannel_ != nullptr;};
    void deleteDetectChannel() { this->detectChannel_ = nullptr;};
    inline const vector<string> & detectChannel() const { DARABONBA_PTR_GET_CONST(detectChannel_, vector<string>) };
    inline vector<string> detectChannel() { DARABONBA_PTR_GET(detectChannel_, vector<string>) };
    inline RiskSceneConfig& setDetectChannel(const vector<string> & detectChannel) { DARABONBA_PTR_SET_VALUE(detectChannel_, detectChannel) };
    inline RiskSceneConfig& setDetectChannel(vector<string> && detectChannel) { DARABONBA_PTR_SET_RVALUE(detectChannel_, detectChannel) };


    // officeChannel Field Functions 
    bool hasOfficeChannel() const { return this->officeChannel_ != nullptr;};
    void deleteOfficeChannel() { this->officeChannel_ = nullptr;};
    inline const vector<string> & officeChannel() const { DARABONBA_PTR_GET_CONST(officeChannel_, vector<string>) };
    inline vector<string> officeChannel() { DARABONBA_PTR_GET(officeChannel_, vector<string>) };
    inline RiskSceneConfig& setOfficeChannel(const vector<string> & officeChannel) { DARABONBA_PTR_SET_VALUE(officeChannel_, officeChannel) };
    inline RiskSceneConfig& setOfficeChannel(vector<string> && officeChannel) { DARABONBA_PTR_SET_RVALUE(officeChannel_, officeChannel) };


  protected:
    std::shared_ptr<vector<string>> detectChannel_ = nullptr;
    std::shared_ptr<vector<string>> officeChannel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
