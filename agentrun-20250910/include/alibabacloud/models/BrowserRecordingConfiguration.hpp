// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BROWSERRECORDINGCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_BROWSERRECORDINGCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BrowserOssLocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class BrowserRecordingConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BrowserRecordingConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ossLocation, ossLocation_);
    };
    friend void from_json(const Darabonba::Json& j, BrowserRecordingConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ossLocation, ossLocation_);
    };
    BrowserRecordingConfiguration() = default ;
    BrowserRecordingConfiguration(const BrowserRecordingConfiguration &) = default ;
    BrowserRecordingConfiguration(BrowserRecordingConfiguration &&) = default ;
    BrowserRecordingConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BrowserRecordingConfiguration() = default ;
    BrowserRecordingConfiguration& operator=(const BrowserRecordingConfiguration &) = default ;
    BrowserRecordingConfiguration& operator=(BrowserRecordingConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->ossLocation_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline BrowserRecordingConfiguration& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // ossLocation Field Functions 
    bool hasOssLocation() const { return this->ossLocation_ != nullptr;};
    void deleteOssLocation() { this->ossLocation_ = nullptr;};
    inline const BrowserOssLocation & ossLocation() const { DARABONBA_PTR_GET_CONST(ossLocation_, BrowserOssLocation) };
    inline BrowserOssLocation ossLocation() { DARABONBA_PTR_GET(ossLocation_, BrowserOssLocation) };
    inline BrowserRecordingConfiguration& setOssLocation(const BrowserOssLocation & ossLocation) { DARABONBA_PTR_SET_VALUE(ossLocation_, ossLocation) };
    inline BrowserRecordingConfiguration& setOssLocation(BrowserOssLocation && ossLocation) { DARABONBA_PTR_SET_RVALUE(ossLocation_, ossLocation) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<BrowserOssLocation> ossLocation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
