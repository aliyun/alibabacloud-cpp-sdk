// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENGINEVERSIONMETADATAINDEX_HPP_
#define ALIBABACLOUD_MODELS_ENGINEVERSIONMETADATAINDEX_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EngineVersionMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class EngineVersionMetadataIndex : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EngineVersionMetadataIndex& obj) { 
      DARABONBA_PTR_TO_JSON(defaultEngineVersion, defaultEngineVersion_);
      DARABONBA_PTR_TO_JSON(engineVersionMetadata, engineVersionMetadata_);
    };
    friend void from_json(const Darabonba::Json& j, EngineVersionMetadataIndex& obj) { 
      DARABONBA_PTR_FROM_JSON(defaultEngineVersion, defaultEngineVersion_);
      DARABONBA_PTR_FROM_JSON(engineVersionMetadata, engineVersionMetadata_);
    };
    EngineVersionMetadataIndex() = default ;
    EngineVersionMetadataIndex(const EngineVersionMetadataIndex &) = default ;
    EngineVersionMetadataIndex(EngineVersionMetadataIndex &&) = default ;
    EngineVersionMetadataIndex(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EngineVersionMetadataIndex() = default ;
    EngineVersionMetadataIndex& operator=(const EngineVersionMetadataIndex &) = default ;
    EngineVersionMetadataIndex& operator=(EngineVersionMetadataIndex &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultEngineVersion_ == nullptr
        && return this->engineVersionMetadata_ == nullptr; };
    // defaultEngineVersion Field Functions 
    bool hasDefaultEngineVersion() const { return this->defaultEngineVersion_ != nullptr;};
    void deleteDefaultEngineVersion() { this->defaultEngineVersion_ = nullptr;};
    inline string defaultEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultEngineVersion_, "") };
    inline EngineVersionMetadataIndex& setDefaultEngineVersion(string defaultEngineVersion) { DARABONBA_PTR_SET_VALUE(defaultEngineVersion_, defaultEngineVersion) };


    // engineVersionMetadata Field Functions 
    bool hasEngineVersionMetadata() const { return this->engineVersionMetadata_ != nullptr;};
    void deleteEngineVersionMetadata() { this->engineVersionMetadata_ = nullptr;};
    inline const vector<EngineVersionMetadata> & engineVersionMetadata() const { DARABONBA_PTR_GET_CONST(engineVersionMetadata_, vector<EngineVersionMetadata>) };
    inline vector<EngineVersionMetadata> engineVersionMetadata() { DARABONBA_PTR_GET(engineVersionMetadata_, vector<EngineVersionMetadata>) };
    inline EngineVersionMetadataIndex& setEngineVersionMetadata(const vector<EngineVersionMetadata> & engineVersionMetadata) { DARABONBA_PTR_SET_VALUE(engineVersionMetadata_, engineVersionMetadata) };
    inline EngineVersionMetadataIndex& setEngineVersionMetadata(vector<EngineVersionMetadata> && engineVersionMetadata) { DARABONBA_PTR_SET_RVALUE(engineVersionMetadata_, engineVersionMetadata) };


  protected:
    std::shared_ptr<string> defaultEngineVersion_ = nullptr;
    std::shared_ptr<vector<EngineVersionMetadata>> engineVersionMetadata_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
