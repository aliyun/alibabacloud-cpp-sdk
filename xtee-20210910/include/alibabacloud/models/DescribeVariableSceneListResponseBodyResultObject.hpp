// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVARIABLESCENELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVARIABLESCENELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeVariableSceneListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVariableSceneListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(bizType, bizType_);
      DARABONBA_PTR_TO_JSON(configKey, configKey_);
      DARABONBA_PTR_TO_JSON(configValue, configValue_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(lastModifiedOperator, lastModifiedOperator_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVariableSceneListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(bizType, bizType_);
      DARABONBA_PTR_FROM_JSON(configKey, configKey_);
      DARABONBA_PTR_FROM_JSON(configValue, configValue_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(lastModifiedOperator, lastModifiedOperator_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    DescribeVariableSceneListResponseBodyResultObject() = default ;
    DescribeVariableSceneListResponseBodyResultObject(const DescribeVariableSceneListResponseBodyResultObject &) = default ;
    DescribeVariableSceneListResponseBodyResultObject(DescribeVariableSceneListResponseBodyResultObject &&) = default ;
    DescribeVariableSceneListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVariableSceneListResponseBodyResultObject() = default ;
    DescribeVariableSceneListResponseBodyResultObject& operator=(const DescribeVariableSceneListResponseBodyResultObject &) = default ;
    DescribeVariableSceneListResponseBodyResultObject& operator=(DescribeVariableSceneListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && return this->configKey_ == nullptr && return this->configValue_ == nullptr && return this->creator_ == nullptr && return this->description_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->lastModifiedOperator_ == nullptr && return this->status_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeVariableSceneListResponseBodyResultObject& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // configKey Field Functions 
    bool hasConfigKey() const { return this->configKey_ != nullptr;};
    void deleteConfigKey() { this->configKey_ = nullptr;};
    inline string configKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
    inline DescribeVariableSceneListResponseBodyResultObject& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string configValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline DescribeVariableSceneListResponseBodyResultObject& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeVariableSceneListResponseBodyResultObject& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVariableSceneListResponseBodyResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeVariableSceneListResponseBodyResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeVariableSceneListResponseBodyResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeVariableSceneListResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifiedOperator Field Functions 
    bool hasLastModifiedOperator() const { return this->lastModifiedOperator_ != nullptr;};
    void deleteLastModifiedOperator() { this->lastModifiedOperator_ = nullptr;};
    inline string lastModifiedOperator() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedOperator_, "") };
    inline DescribeVariableSceneListResponseBodyResultObject& setLastModifiedOperator(string lastModifiedOperator) { DARABONBA_PTR_SET_VALUE(lastModifiedOperator_, lastModifiedOperator) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVariableSceneListResponseBodyResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Business category identifier.
    std::shared_ptr<string> bizType_ = nullptr;
    // Configuration key.
    std::shared_ptr<string> configKey_ = nullptr;
    // Configuration value.
    std::shared_ptr<string> configValue_ = nullptr;
    // Created by.
    std::shared_ptr<string> creator_ = nullptr;
    // Description information.
    std::shared_ptr<string> description_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Primary key ID of the configuration.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Last modified by.
    std::shared_ptr<string> lastModifiedOperator_ = nullptr;
    // Status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
