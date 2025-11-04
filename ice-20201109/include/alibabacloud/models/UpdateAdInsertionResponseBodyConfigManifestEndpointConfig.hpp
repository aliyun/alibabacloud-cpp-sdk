// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEADINSERTIONRESPONSEBODYCONFIGMANIFESTENDPOINTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEADINSERTIONRESPONSEBODYCONFIGMANIFESTENDPOINTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateAdInsertionResponseBodyConfigManifestEndpointConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAdInsertionResponseBodyConfigManifestEndpointConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DashPrefix, dashPrefix_);
      DARABONBA_PTR_TO_JSON(HlsPrefix, hlsPrefix_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAdInsertionResponseBodyConfigManifestEndpointConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DashPrefix, dashPrefix_);
      DARABONBA_PTR_FROM_JSON(HlsPrefix, hlsPrefix_);
    };
    UpdateAdInsertionResponseBodyConfigManifestEndpointConfig() = default ;
    UpdateAdInsertionResponseBodyConfigManifestEndpointConfig(const UpdateAdInsertionResponseBodyConfigManifestEndpointConfig &) = default ;
    UpdateAdInsertionResponseBodyConfigManifestEndpointConfig(UpdateAdInsertionResponseBodyConfigManifestEndpointConfig &&) = default ;
    UpdateAdInsertionResponseBodyConfigManifestEndpointConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAdInsertionResponseBodyConfigManifestEndpointConfig() = default ;
    UpdateAdInsertionResponseBodyConfigManifestEndpointConfig& operator=(const UpdateAdInsertionResponseBodyConfigManifestEndpointConfig &) = default ;
    UpdateAdInsertionResponseBodyConfigManifestEndpointConfig& operator=(UpdateAdInsertionResponseBodyConfigManifestEndpointConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dashPrefix_ == nullptr
        && return this->hlsPrefix_ == nullptr; };
    // dashPrefix Field Functions 
    bool hasDashPrefix() const { return this->dashPrefix_ != nullptr;};
    void deleteDashPrefix() { this->dashPrefix_ = nullptr;};
    inline string dashPrefix() const { DARABONBA_PTR_GET_DEFAULT(dashPrefix_, "") };
    inline UpdateAdInsertionResponseBodyConfigManifestEndpointConfig& setDashPrefix(string dashPrefix) { DARABONBA_PTR_SET_VALUE(dashPrefix_, dashPrefix) };


    // hlsPrefix Field Functions 
    bool hasHlsPrefix() const { return this->hlsPrefix_ != nullptr;};
    void deleteHlsPrefix() { this->hlsPrefix_ = nullptr;};
    inline string hlsPrefix() const { DARABONBA_PTR_GET_DEFAULT(hlsPrefix_, "") };
    inline UpdateAdInsertionResponseBodyConfigManifestEndpointConfig& setHlsPrefix(string hlsPrefix) { DARABONBA_PTR_SET_VALUE(hlsPrefix_, hlsPrefix) };


  protected:
    // DASH清单播放端点前缀
    std::shared_ptr<string> dashPrefix_ = nullptr;
    // The prefix of the playback endpoint for HLS manifests.
    std::shared_ptr<string> hlsPrefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
