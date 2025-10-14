// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULEVERSIONSRESPONSEBODYNORMALIZATIONRULEVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULEVERSIONSRESPONSEBODYNORMALIZATIONRULEVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleExpression, normalizationRuleExpression_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleExpression, normalizationRuleExpression_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions() = default ;
    ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions(const ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions &) = default ;
    ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions(ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions &&) = default ;
    ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions() = default ;
    ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions& operator=(const ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions &) = default ;
    ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions& operator=(ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->normalizationRuleExpression_ == nullptr && return this->normalizationRuleId_ == nullptr && return this->normalizationRuleVersion_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // normalizationRuleExpression Field Functions 
    bool hasNormalizationRuleExpression() const { return this->normalizationRuleExpression_ != nullptr;};
    void deleteNormalizationRuleExpression() { this->normalizationRuleExpression_ = nullptr;};
    inline string normalizationRuleExpression() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleExpression_, "") };
    inline ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions& setNormalizationRuleExpression(string normalizationRuleExpression) { DARABONBA_PTR_SET_VALUE(normalizationRuleExpression_, normalizationRuleExpression) };


    // normalizationRuleId Field Functions 
    bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
    void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
    inline string normalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
    inline ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


    // normalizationRuleVersion Field Functions 
    bool hasNormalizationRuleVersion() const { return this->normalizationRuleVersion_ != nullptr;};
    void deleteNormalizationRuleVersion() { this->normalizationRuleVersion_ = nullptr;};
    inline int32_t normalizationRuleVersion() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleVersion_, 0) };
    inline ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions& setNormalizationRuleVersion(int32_t normalizationRuleVersion) { DARABONBA_PTR_SET_VALUE(normalizationRuleVersion_, normalizationRuleVersion) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListNormalizationRuleVersionsResponseBodyNormalizationRuleVersions& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> normalizationRuleExpression_ = nullptr;
    std::shared_ptr<string> normalizationRuleId_ = nullptr;
    std::shared_ptr<int32_t> normalizationRuleVersion_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
