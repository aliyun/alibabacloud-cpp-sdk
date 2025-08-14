// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIVEPACKAGINGCONFIGDRMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LIVEPACKAGINGCONFIGDRMCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class LivePackagingConfigDrmConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LivePackagingConfigDrmConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ContentId, contentId_);
      DARABONBA_PTR_TO_JSON(EncryptionMethod, encryptionMethod_);
      DARABONBA_PTR_TO_JSON(IV, IV_);
      DARABONBA_PTR_TO_JSON(RotatePeriod, rotatePeriod_);
      DARABONBA_PTR_TO_JSON(SystemIds, systemIds_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, LivePackagingConfigDrmConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentId, contentId_);
      DARABONBA_PTR_FROM_JSON(EncryptionMethod, encryptionMethod_);
      DARABONBA_PTR_FROM_JSON(IV, IV_);
      DARABONBA_PTR_FROM_JSON(RotatePeriod, rotatePeriod_);
      DARABONBA_PTR_FROM_JSON(SystemIds, systemIds_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    LivePackagingConfigDrmConfig() = default ;
    LivePackagingConfigDrmConfig(const LivePackagingConfigDrmConfig &) = default ;
    LivePackagingConfigDrmConfig(LivePackagingConfigDrmConfig &&) = default ;
    LivePackagingConfigDrmConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LivePackagingConfigDrmConfig() = default ;
    LivePackagingConfigDrmConfig& operator=(const LivePackagingConfigDrmConfig &) = default ;
    LivePackagingConfigDrmConfig& operator=(LivePackagingConfigDrmConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contentId_ != nullptr
        && this->encryptionMethod_ != nullptr && this->IV_ != nullptr && this->rotatePeriod_ != nullptr && this->systemIds_ != nullptr && this->url_ != nullptr; };
    // contentId Field Functions 
    bool hasContentId() const { return this->contentId_ != nullptr;};
    void deleteContentId() { this->contentId_ = nullptr;};
    inline string contentId() const { DARABONBA_PTR_GET_DEFAULT(contentId_, "") };
    inline LivePackagingConfigDrmConfig& setContentId(string contentId) { DARABONBA_PTR_SET_VALUE(contentId_, contentId) };


    // encryptionMethod Field Functions 
    bool hasEncryptionMethod() const { return this->encryptionMethod_ != nullptr;};
    void deleteEncryptionMethod() { this->encryptionMethod_ = nullptr;};
    inline string encryptionMethod() const { DARABONBA_PTR_GET_DEFAULT(encryptionMethod_, "") };
    inline LivePackagingConfigDrmConfig& setEncryptionMethod(string encryptionMethod) { DARABONBA_PTR_SET_VALUE(encryptionMethod_, encryptionMethod) };


    // IV Field Functions 
    bool hasIV() const { return this->IV_ != nullptr;};
    void deleteIV() { this->IV_ = nullptr;};
    inline string IV() const { DARABONBA_PTR_GET_DEFAULT(IV_, "") };
    inline LivePackagingConfigDrmConfig& setIV(string IV) { DARABONBA_PTR_SET_VALUE(IV_, IV) };


    // rotatePeriod Field Functions 
    bool hasRotatePeriod() const { return this->rotatePeriod_ != nullptr;};
    void deleteRotatePeriod() { this->rotatePeriod_ = nullptr;};
    inline int32_t rotatePeriod() const { DARABONBA_PTR_GET_DEFAULT(rotatePeriod_, 0) };
    inline LivePackagingConfigDrmConfig& setRotatePeriod(int32_t rotatePeriod) { DARABONBA_PTR_SET_VALUE(rotatePeriod_, rotatePeriod) };


    // systemIds Field Functions 
    bool hasSystemIds() const { return this->systemIds_ != nullptr;};
    void deleteSystemIds() { this->systemIds_ = nullptr;};
    inline const vector<string> & systemIds() const { DARABONBA_PTR_GET_CONST(systemIds_, vector<string>) };
    inline vector<string> systemIds() { DARABONBA_PTR_GET(systemIds_, vector<string>) };
    inline LivePackagingConfigDrmConfig& setSystemIds(const vector<string> & systemIds) { DARABONBA_PTR_SET_VALUE(systemIds_, systemIds) };
    inline LivePackagingConfigDrmConfig& setSystemIds(vector<string> && systemIds) { DARABONBA_PTR_SET_RVALUE(systemIds_, systemIds) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline LivePackagingConfigDrmConfig& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> contentId_ = nullptr;
    std::shared_ptr<string> encryptionMethod_ = nullptr;
    std::shared_ptr<string> IV_ = nullptr;
    std::shared_ptr<int32_t> rotatePeriod_ = nullptr;
    std::shared_ptr<vector<string>> systemIds_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
