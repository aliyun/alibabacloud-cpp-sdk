// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENGINEVERSIONMETADATA_HPP_
#define ALIBABACLOUD_MODELS_ENGINEVERSIONMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EngineVersionSupportedFeatures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class EngineVersionMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EngineVersionMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(engineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(features, features_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, EngineVersionMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(engineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(features, features_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    EngineVersionMetadata() = default ;
    EngineVersionMetadata(const EngineVersionMetadata &) = default ;
    EngineVersionMetadata(EngineVersionMetadata &&) = default ;
    EngineVersionMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EngineVersionMetadata() = default ;
    EngineVersionMetadata& operator=(const EngineVersionMetadata &) = default ;
    EngineVersionMetadata& operator=(EngineVersionMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->engineVersion_ == nullptr
        && this->features_ == nullptr && this->status_ == nullptr; };
    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline EngineVersionMetadata& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const EngineVersionSupportedFeatures & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, EngineVersionSupportedFeatures) };
    inline EngineVersionSupportedFeatures getFeatures() { DARABONBA_PTR_GET(features_, EngineVersionSupportedFeatures) };
    inline EngineVersionMetadata& setFeatures(const EngineVersionSupportedFeatures & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline EngineVersionMetadata& setFeatures(EngineVersionSupportedFeatures && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline EngineVersionMetadata& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The engine version.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    // The features supported by the engine version.
    shared_ptr<EngineVersionSupportedFeatures> features_ {};
    // The status of the engine version.
    // 
    // *   STABLE
    // *   BETA
    // *   DEPRECATED
    // *   EXPIRED
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
