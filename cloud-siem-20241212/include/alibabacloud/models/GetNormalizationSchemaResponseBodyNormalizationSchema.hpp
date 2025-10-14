// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNORMALIZATIONSCHEMARESPONSEBODYNORMALIZATIONSCHEMA_HPP_
#define ALIBABACLOUD_MODELS_GETNORMALIZATIONSCHEMARESPONSEBODYNORMALIZATIONSCHEMA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetNormalizationSchemaResponseBodyNormalizationSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNormalizationSchemaResponseBodyNormalizationSchema& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(NormalizationCategoryId, normalizationCategoryId_);
      DARABONBA_PTR_TO_JSON(NormalizationFields, normalizationFields_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaName, normalizationSchemaName_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaType, normalizationSchemaType_);
      DARABONBA_PTR_TO_JSON(TargetLogStore, targetLogStore_);
      DARABONBA_PTR_TO_JSON(TargetStoreView, targetStoreView_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetNormalizationSchemaResponseBodyNormalizationSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(NormalizationCategoryId, normalizationCategoryId_);
      DARABONBA_PTR_FROM_JSON(NormalizationFields, normalizationFields_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaName, normalizationSchemaName_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaType, normalizationSchemaType_);
      DARABONBA_PTR_FROM_JSON(TargetLogStore, targetLogStore_);
      DARABONBA_PTR_FROM_JSON(TargetStoreView, targetStoreView_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetNormalizationSchemaResponseBodyNormalizationSchema() = default ;
    GetNormalizationSchemaResponseBodyNormalizationSchema(const GetNormalizationSchemaResponseBodyNormalizationSchema &) = default ;
    GetNormalizationSchemaResponseBodyNormalizationSchema(GetNormalizationSchemaResponseBodyNormalizationSchema &&) = default ;
    GetNormalizationSchemaResponseBodyNormalizationSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNormalizationSchemaResponseBodyNormalizationSchema() = default ;
    GetNormalizationSchemaResponseBodyNormalizationSchema& operator=(const GetNormalizationSchemaResponseBodyNormalizationSchema &) = default ;
    GetNormalizationSchemaResponseBodyNormalizationSchema& operator=(GetNormalizationSchemaResponseBodyNormalizationSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->normalizationCategoryId_ == nullptr && return this->normalizationFields_ == nullptr && return this->normalizationSchemaId_ == nullptr && return this->normalizationSchemaName_ == nullptr && return this->normalizationSchemaType_ == nullptr
        && return this->targetLogStore_ == nullptr && return this->targetStoreView_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetNormalizationSchemaResponseBodyNormalizationSchema& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // normalizationCategoryId Field Functions 
    bool hasNormalizationCategoryId() const { return this->normalizationCategoryId_ != nullptr;};
    void deleteNormalizationCategoryId() { this->normalizationCategoryId_ = nullptr;};
    inline string normalizationCategoryId() const { DARABONBA_PTR_GET_DEFAULT(normalizationCategoryId_, "") };
    inline GetNormalizationSchemaResponseBodyNormalizationSchema& setNormalizationCategoryId(string normalizationCategoryId) { DARABONBA_PTR_SET_VALUE(normalizationCategoryId_, normalizationCategoryId) };


    // normalizationFields Field Functions 
    bool hasNormalizationFields() const { return this->normalizationFields_ != nullptr;};
    void deleteNormalizationFields() { this->normalizationFields_ = nullptr;};
    inline const vector<Models::GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields> & normalizationFields() const { DARABONBA_PTR_GET_CONST(normalizationFields_, vector<Models::GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields>) };
    inline vector<Models::GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields> normalizationFields() { DARABONBA_PTR_GET(normalizationFields_, vector<Models::GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields>) };
    inline GetNormalizationSchemaResponseBodyNormalizationSchema& setNormalizationFields(const vector<Models::GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields> & normalizationFields) { DARABONBA_PTR_SET_VALUE(normalizationFields_, normalizationFields) };
    inline GetNormalizationSchemaResponseBodyNormalizationSchema& setNormalizationFields(vector<Models::GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields> && normalizationFields) { DARABONBA_PTR_SET_RVALUE(normalizationFields_, normalizationFields) };


    // normalizationSchemaId Field Functions 
    bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
    void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
    inline string normalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
    inline GetNormalizationSchemaResponseBodyNormalizationSchema& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


    // normalizationSchemaName Field Functions 
    bool hasNormalizationSchemaName() const { return this->normalizationSchemaName_ != nullptr;};
    void deleteNormalizationSchemaName() { this->normalizationSchemaName_ = nullptr;};
    inline string normalizationSchemaName() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaName_, "") };
    inline GetNormalizationSchemaResponseBodyNormalizationSchema& setNormalizationSchemaName(string normalizationSchemaName) { DARABONBA_PTR_SET_VALUE(normalizationSchemaName_, normalizationSchemaName) };


    // normalizationSchemaType Field Functions 
    bool hasNormalizationSchemaType() const { return this->normalizationSchemaType_ != nullptr;};
    void deleteNormalizationSchemaType() { this->normalizationSchemaType_ = nullptr;};
    inline string normalizationSchemaType() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaType_, "") };
    inline GetNormalizationSchemaResponseBodyNormalizationSchema& setNormalizationSchemaType(string normalizationSchemaType) { DARABONBA_PTR_SET_VALUE(normalizationSchemaType_, normalizationSchemaType) };


    // targetLogStore Field Functions 
    bool hasTargetLogStore() const { return this->targetLogStore_ != nullptr;};
    void deleteTargetLogStore() { this->targetLogStore_ = nullptr;};
    inline string targetLogStore() const { DARABONBA_PTR_GET_DEFAULT(targetLogStore_, "") };
    inline GetNormalizationSchemaResponseBodyNormalizationSchema& setTargetLogStore(string targetLogStore) { DARABONBA_PTR_SET_VALUE(targetLogStore_, targetLogStore) };


    // targetStoreView Field Functions 
    bool hasTargetStoreView() const { return this->targetStoreView_ != nullptr;};
    void deleteTargetStoreView() { this->targetStoreView_ = nullptr;};
    inline string targetStoreView() const { DARABONBA_PTR_GET_DEFAULT(targetStoreView_, "") };
    inline GetNormalizationSchemaResponseBodyNormalizationSchema& setTargetStoreView(string targetStoreView) { DARABONBA_PTR_SET_VALUE(targetStoreView_, targetStoreView) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetNormalizationSchemaResponseBodyNormalizationSchema& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> normalizationCategoryId_ = nullptr;
    std::shared_ptr<vector<Models::GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields>> normalizationFields_ = nullptr;
    std::shared_ptr<string> normalizationSchemaId_ = nullptr;
    std::shared_ptr<string> normalizationSchemaName_ = nullptr;
    std::shared_ptr<string> normalizationSchemaType_ = nullptr;
    std::shared_ptr<string> targetLogStore_ = nullptr;
    std::shared_ptr<string> targetStoreView_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
