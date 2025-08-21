// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODYRESULTELASTICNODEPROPERTIESDISKLIST_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODYRESULTELASTICNODEPROPERTIESDISKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList& obj) { 
      DARABONBA_PTR_TO_JSON(diskEncryption, diskEncryption_);
      DARABONBA_PTR_TO_JSON(diskType, diskType_);
      DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
      DARABONBA_PTR_TO_JSON(minSize, minSize_);
      DARABONBA_PTR_TO_JSON(scaleLimit, scaleLimit_);
      DARABONBA_PTR_TO_JSON(valueLimitSet, valueLimitSet_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList& obj) { 
      DARABONBA_PTR_FROM_JSON(diskEncryption, diskEncryption_);
      DARABONBA_PTR_FROM_JSON(diskType, diskType_);
      DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
      DARABONBA_PTR_FROM_JSON(minSize, minSize_);
      DARABONBA_PTR_FROM_JSON(scaleLimit, scaleLimit_);
      DARABONBA_PTR_FROM_JSON(valueLimitSet, valueLimitSet_);
    };
    GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList() = default ;
    GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList(const GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList &) = default ;
    GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList(GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList &&) = default ;
    GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList() = default ;
    GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList& operator=(const GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList &) = default ;
    GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList& operator=(GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskEncryption_ != nullptr
        && this->diskType_ != nullptr && this->maxSize_ != nullptr && this->minSize_ != nullptr && this->scaleLimit_ != nullptr && this->valueLimitSet_ != nullptr; };
    // diskEncryption Field Functions 
    bool hasDiskEncryption() const { return this->diskEncryption_ != nullptr;};
    void deleteDiskEncryption() { this->diskEncryption_ = nullptr;};
    inline bool diskEncryption() const { DARABONBA_PTR_GET_DEFAULT(diskEncryption_, false) };
    inline GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList& setDiskEncryption(bool diskEncryption) { DARABONBA_PTR_SET_VALUE(diskEncryption_, diskEncryption) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // maxSize Field Functions 
    bool hasMaxSize() const { return this->maxSize_ != nullptr;};
    void deleteMaxSize() { this->maxSize_ = nullptr;};
    inline int32_t maxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
    inline GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


    // minSize Field Functions 
    bool hasMinSize() const { return this->minSize_ != nullptr;};
    void deleteMinSize() { this->minSize_ = nullptr;};
    inline int32_t minSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
    inline GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


    // scaleLimit Field Functions 
    bool hasScaleLimit() const { return this->scaleLimit_ != nullptr;};
    void deleteScaleLimit() { this->scaleLimit_ = nullptr;};
    inline int32_t scaleLimit() const { DARABONBA_PTR_GET_DEFAULT(scaleLimit_, 0) };
    inline GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList& setScaleLimit(int32_t scaleLimit) { DARABONBA_PTR_SET_VALUE(scaleLimit_, scaleLimit) };


    // valueLimitSet Field Functions 
    bool hasValueLimitSet() const { return this->valueLimitSet_ != nullptr;};
    void deleteValueLimitSet() { this->valueLimitSet_ = nullptr;};
    inline const vector<string> & valueLimitSet() const { DARABONBA_PTR_GET_CONST(valueLimitSet_, vector<string>) };
    inline vector<string> valueLimitSet() { DARABONBA_PTR_GET(valueLimitSet_, vector<string>) };
    inline GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList& setValueLimitSet(const vector<string> & valueLimitSet) { DARABONBA_PTR_SET_VALUE(valueLimitSet_, valueLimitSet) };
    inline GetRegionConfigurationResponseBodyResultElasticNodePropertiesDiskList& setValueLimitSet(vector<string> && valueLimitSet) { DARABONBA_PTR_SET_RVALUE(valueLimitSet_, valueLimitSet) };


  protected:
    std::shared_ptr<bool> diskEncryption_ = nullptr;
    std::shared_ptr<string> diskType_ = nullptr;
    std::shared_ptr<int32_t> maxSize_ = nullptr;
    std::shared_ptr<int32_t> minSize_ = nullptr;
    std::shared_ptr<int32_t> scaleLimit_ = nullptr;
    std::shared_ptr<vector<string>> valueLimitSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
