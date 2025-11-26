// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTENTRESPONSEBODYINTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTENTRESPONSEBODYINTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeIntentResponseBodyIntent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIntentResponseBodyIntent& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(IntentDescription, intentDescription_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(IntentName, intentName_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Utterances, utterances_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIntentResponseBodyIntent& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(IntentDescription, intentDescription_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Utterances, utterances_);
    };
    DescribeIntentResponseBodyIntent() = default ;
    DescribeIntentResponseBodyIntent(const DescribeIntentResponseBodyIntent &) = default ;
    DescribeIntentResponseBodyIntent(DescribeIntentResponseBodyIntent &&) = default ;
    DescribeIntentResponseBodyIntent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIntentResponseBodyIntent() = default ;
    DescribeIntentResponseBodyIntent& operator=(const DescribeIntentResponseBodyIntent &) = default ;
    DescribeIntentResponseBodyIntent& operator=(DescribeIntentResponseBodyIntent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->intentDescription_ == nullptr && return this->intentId_ == nullptr && return this->intentName_ == nullptr && return this->keywords_ == nullptr && return this->scriptId_ == nullptr
        && return this->updateTime_ == nullptr && return this->utterances_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeIntentResponseBodyIntent& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // intentDescription Field Functions 
    bool hasIntentDescription() const { return this->intentDescription_ != nullptr;};
    void deleteIntentDescription() { this->intentDescription_ = nullptr;};
    inline string intentDescription() const { DARABONBA_PTR_GET_DEFAULT(intentDescription_, "") };
    inline DescribeIntentResponseBodyIntent& setIntentDescription(string intentDescription) { DARABONBA_PTR_SET_VALUE(intentDescription_, intentDescription) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline string intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, "") };
    inline DescribeIntentResponseBodyIntent& setIntentId(string intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // intentName Field Functions 
    bool hasIntentName() const { return this->intentName_ != nullptr;};
    void deleteIntentName() { this->intentName_ = nullptr;};
    inline string intentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
    inline DescribeIntentResponseBodyIntent& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline string keywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
    inline DescribeIntentResponseBodyIntent& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline DescribeIntentResponseBodyIntent& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeIntentResponseBodyIntent& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // utterances Field Functions 
    bool hasUtterances() const { return this->utterances_ != nullptr;};
    void deleteUtterances() { this->utterances_ = nullptr;};
    inline string utterances() const { DARABONBA_PTR_GET_DEFAULT(utterances_, "") };
    inline DescribeIntentResponseBodyIntent& setUtterances(string utterances) { DARABONBA_PTR_SET_VALUE(utterances_, utterances) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> intentDescription_ = nullptr;
    std::shared_ptr<string> intentId_ = nullptr;
    std::shared_ptr<string> intentName_ = nullptr;
    std::shared_ptr<string> keywords_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    std::shared_ptr<string> utterances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
