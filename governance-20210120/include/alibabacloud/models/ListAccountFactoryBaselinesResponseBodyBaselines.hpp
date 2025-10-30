// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTFACTORYBASELINESRESPONSEBODYBASELINES_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTFACTORYBASELINESRESPONSEBODYBASELINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListAccountFactoryBaselinesResponseBodyBaselines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountFactoryBaselinesResponseBodyBaselines& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountFactoryBaselinesResponseBodyBaselines& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListAccountFactoryBaselinesResponseBodyBaselines() = default ;
    ListAccountFactoryBaselinesResponseBodyBaselines(const ListAccountFactoryBaselinesResponseBodyBaselines &) = default ;
    ListAccountFactoryBaselinesResponseBodyBaselines(ListAccountFactoryBaselinesResponseBodyBaselines &&) = default ;
    ListAccountFactoryBaselinesResponseBodyBaselines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountFactoryBaselinesResponseBodyBaselines() = default ;
    ListAccountFactoryBaselinesResponseBodyBaselines& operator=(const ListAccountFactoryBaselinesResponseBodyBaselines &) = default ;
    ListAccountFactoryBaselinesResponseBodyBaselines& operator=(ListAccountFactoryBaselinesResponseBodyBaselines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineId_ == nullptr
        && return this->baselineName_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->type_ == nullptr && return this->updateTime_ == nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline string baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
    inline ListAccountFactoryBaselinesResponseBodyBaselines& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string baselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline ListAccountFactoryBaselinesResponseBodyBaselines& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAccountFactoryBaselinesResponseBodyBaselines& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAccountFactoryBaselinesResponseBodyBaselines& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAccountFactoryBaselinesResponseBodyBaselines& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListAccountFactoryBaselinesResponseBodyBaselines& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The baseline ID.
    std::shared_ptr<string> baselineId_ = nullptr;
    // The name of the baseline.
    std::shared_ptr<string> baselineName_ = nullptr;
    // The time at which the baseline was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the baseline.
    std::shared_ptr<string> description_ = nullptr;
    // The type of the baseline. Valid values:
    // 
    // *   System: default baseline.
    // *   Custom: custom baseline.
    std::shared_ptr<string> type_ = nullptr;
    // The time when the baseline was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
