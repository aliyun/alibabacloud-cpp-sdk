// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SparkConf.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class Template : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Template& obj) { 
      DARABONBA_PTR_TO_JSON(bizId, bizId_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(displaySparkVersion, displaySparkVersion_);
      DARABONBA_PTR_TO_JSON(fusion, fusion_);
      DARABONBA_PTR_TO_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sparkConf, sparkConf_);
      DARABONBA_PTR_TO_JSON(sparkDriverCores, sparkDriverCores_);
      DARABONBA_PTR_TO_JSON(sparkDriverMemory, sparkDriverMemory_);
      DARABONBA_PTR_TO_JSON(sparkExecutorCores, sparkExecutorCores_);
      DARABONBA_PTR_TO_JSON(sparkExecutorMemory, sparkExecutorMemory_);
      DARABONBA_PTR_TO_JSON(sparkLogLevel, sparkLogLevel_);
      DARABONBA_PTR_TO_JSON(sparkLogPath, sparkLogPath_);
      DARABONBA_PTR_TO_JSON(sparkVersion, sparkVersion_);
      DARABONBA_PTR_TO_JSON(templateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, Template& obj) { 
      DARABONBA_PTR_FROM_JSON(bizId, bizId_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(displaySparkVersion, displaySparkVersion_);
      DARABONBA_PTR_FROM_JSON(fusion, fusion_);
      DARABONBA_PTR_FROM_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sparkConf, sparkConf_);
      DARABONBA_PTR_FROM_JSON(sparkDriverCores, sparkDriverCores_);
      DARABONBA_PTR_FROM_JSON(sparkDriverMemory, sparkDriverMemory_);
      DARABONBA_PTR_FROM_JSON(sparkExecutorCores, sparkExecutorCores_);
      DARABONBA_PTR_FROM_JSON(sparkExecutorMemory, sparkExecutorMemory_);
      DARABONBA_PTR_FROM_JSON(sparkLogLevel, sparkLogLevel_);
      DARABONBA_PTR_FROM_JSON(sparkLogPath, sparkLogPath_);
      DARABONBA_PTR_FROM_JSON(sparkVersion, sparkVersion_);
      DARABONBA_PTR_FROM_JSON(templateType, templateType_);
    };
    Template() = default ;
    Template(const Template &) = default ;
    Template(Template &&) = default ;
    Template(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Template() = default ;
    Template& operator=(const Template &) = default ;
    Template& operator=(Template &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizId_ != nullptr
        && this->creator_ != nullptr && this->displaySparkVersion_ != nullptr && this->fusion_ != nullptr && this->gmtCreated_ != nullptr && this->gmtModified_ != nullptr
        && this->isDefault_ != nullptr && this->modifier_ != nullptr && this->name_ != nullptr && this->sparkConf_ != nullptr && this->sparkDriverCores_ != nullptr
        && this->sparkDriverMemory_ != nullptr && this->sparkExecutorCores_ != nullptr && this->sparkExecutorMemory_ != nullptr && this->sparkLogLevel_ != nullptr && this->sparkLogPath_ != nullptr
        && this->sparkVersion_ != nullptr && this->templateType_ != nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline Template& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline int64_t creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0L) };
    inline Template& setCreator(int64_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // displaySparkVersion Field Functions 
    bool hasDisplaySparkVersion() const { return this->displaySparkVersion_ != nullptr;};
    void deleteDisplaySparkVersion() { this->displaySparkVersion_ = nullptr;};
    inline string displaySparkVersion() const { DARABONBA_PTR_GET_DEFAULT(displaySparkVersion_, "") };
    inline Template& setDisplaySparkVersion(string displaySparkVersion) { DARABONBA_PTR_SET_VALUE(displaySparkVersion_, displaySparkVersion) };


    // fusion Field Functions 
    bool hasFusion() const { return this->fusion_ != nullptr;};
    void deleteFusion() { this->fusion_ = nullptr;};
    inline bool fusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
    inline Template& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline Template& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline Template& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline Template& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline int64_t modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, 0L) };
    inline Template& setModifier(int64_t modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Template& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sparkConf Field Functions 
    bool hasSparkConf() const { return this->sparkConf_ != nullptr;};
    void deleteSparkConf() { this->sparkConf_ = nullptr;};
    inline const vector<SparkConf> & sparkConf() const { DARABONBA_PTR_GET_CONST(sparkConf_, vector<SparkConf>) };
    inline vector<SparkConf> sparkConf() { DARABONBA_PTR_GET(sparkConf_, vector<SparkConf>) };
    inline Template& setSparkConf(const vector<SparkConf> & sparkConf) { DARABONBA_PTR_SET_VALUE(sparkConf_, sparkConf) };
    inline Template& setSparkConf(vector<SparkConf> && sparkConf) { DARABONBA_PTR_SET_RVALUE(sparkConf_, sparkConf) };


    // sparkDriverCores Field Functions 
    bool hasSparkDriverCores() const { return this->sparkDriverCores_ != nullptr;};
    void deleteSparkDriverCores() { this->sparkDriverCores_ = nullptr;};
    inline int32_t sparkDriverCores() const { DARABONBA_PTR_GET_DEFAULT(sparkDriverCores_, 0) };
    inline Template& setSparkDriverCores(int32_t sparkDriverCores) { DARABONBA_PTR_SET_VALUE(sparkDriverCores_, sparkDriverCores) };


    // sparkDriverMemory Field Functions 
    bool hasSparkDriverMemory() const { return this->sparkDriverMemory_ != nullptr;};
    void deleteSparkDriverMemory() { this->sparkDriverMemory_ = nullptr;};
    inline int64_t sparkDriverMemory() const { DARABONBA_PTR_GET_DEFAULT(sparkDriverMemory_, 0L) };
    inline Template& setSparkDriverMemory(int64_t sparkDriverMemory) { DARABONBA_PTR_SET_VALUE(sparkDriverMemory_, sparkDriverMemory) };


    // sparkExecutorCores Field Functions 
    bool hasSparkExecutorCores() const { return this->sparkExecutorCores_ != nullptr;};
    void deleteSparkExecutorCores() { this->sparkExecutorCores_ = nullptr;};
    inline int32_t sparkExecutorCores() const { DARABONBA_PTR_GET_DEFAULT(sparkExecutorCores_, 0) };
    inline Template& setSparkExecutorCores(int32_t sparkExecutorCores) { DARABONBA_PTR_SET_VALUE(sparkExecutorCores_, sparkExecutorCores) };


    // sparkExecutorMemory Field Functions 
    bool hasSparkExecutorMemory() const { return this->sparkExecutorMemory_ != nullptr;};
    void deleteSparkExecutorMemory() { this->sparkExecutorMemory_ = nullptr;};
    inline int64_t sparkExecutorMemory() const { DARABONBA_PTR_GET_DEFAULT(sparkExecutorMemory_, 0L) };
    inline Template& setSparkExecutorMemory(int64_t sparkExecutorMemory) { DARABONBA_PTR_SET_VALUE(sparkExecutorMemory_, sparkExecutorMemory) };


    // sparkLogLevel Field Functions 
    bool hasSparkLogLevel() const { return this->sparkLogLevel_ != nullptr;};
    void deleteSparkLogLevel() { this->sparkLogLevel_ = nullptr;};
    inline string sparkLogLevel() const { DARABONBA_PTR_GET_DEFAULT(sparkLogLevel_, "") };
    inline Template& setSparkLogLevel(string sparkLogLevel) { DARABONBA_PTR_SET_VALUE(sparkLogLevel_, sparkLogLevel) };


    // sparkLogPath Field Functions 
    bool hasSparkLogPath() const { return this->sparkLogPath_ != nullptr;};
    void deleteSparkLogPath() { this->sparkLogPath_ = nullptr;};
    inline string sparkLogPath() const { DARABONBA_PTR_GET_DEFAULT(sparkLogPath_, "") };
    inline Template& setSparkLogPath(string sparkLogPath) { DARABONBA_PTR_SET_VALUE(sparkLogPath_, sparkLogPath) };


    // sparkVersion Field Functions 
    bool hasSparkVersion() const { return this->sparkVersion_ != nullptr;};
    void deleteSparkVersion() { this->sparkVersion_ = nullptr;};
    inline string sparkVersion() const { DARABONBA_PTR_GET_DEFAULT(sparkVersion_, "") };
    inline Template& setSparkVersion(string sparkVersion) { DARABONBA_PTR_SET_VALUE(sparkVersion_, sparkVersion) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline Template& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> creator_ = nullptr;
    std::shared_ptr<string> displaySparkVersion_ = nullptr;
    std::shared_ptr<bool> fusion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<bool> isDefault_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> modifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<SparkConf>> sparkConf_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> sparkDriverCores_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> sparkDriverMemory_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> sparkExecutorCores_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> sparkExecutorMemory_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sparkLogLevel_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sparkLogPath_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sparkVersion_ = nullptr;
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
