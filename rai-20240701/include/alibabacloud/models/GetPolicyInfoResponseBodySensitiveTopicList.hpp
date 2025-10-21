// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYINFORESPONSEBODYSENSITIVETOPICLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYINFORESPONSEBODYSENSITIVETOPICLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPolicyInfoResponseBodySensitiveTopicListTopicExampleInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetPolicyInfoResponseBodySensitiveTopicList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyInfoResponseBodySensitiveTopicList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(InputOutputType, inputOutputType_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_TO_JSON(TopicDefinition, topicDefinition_);
      DARABONBA_PTR_TO_JSON(TopicExampleInfoList, topicExampleInfoList_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyInfoResponseBodySensitiveTopicList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(InputOutputType, inputOutputType_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_FROM_JSON(TopicDefinition, topicDefinition_);
      DARABONBA_PTR_FROM_JSON(TopicExampleInfoList, topicExampleInfoList_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    GetPolicyInfoResponseBodySensitiveTopicList() = default ;
    GetPolicyInfoResponseBodySensitiveTopicList(const GetPolicyInfoResponseBodySensitiveTopicList &) = default ;
    GetPolicyInfoResponseBodySensitiveTopicList(GetPolicyInfoResponseBodySensitiveTopicList &&) = default ;
    GetPolicyInfoResponseBodySensitiveTopicList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyInfoResponseBodySensitiveTopicList() = default ;
    GetPolicyInfoResponseBodySensitiveTopicList& operator=(const GetPolicyInfoResponseBodySensitiveTopicList &) = default ;
    GetPolicyInfoResponseBodySensitiveTopicList& operator=(GetPolicyInfoResponseBodySensitiveTopicList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryType_ == nullptr
        && return this->inputOutputType_ == nullptr && return this->securityLevel_ == nullptr && return this->topicDefinition_ == nullptr && return this->topicExampleInfoList_ == nullptr && return this->topicId_ == nullptr
        && return this->topicName_ == nullptr; };
    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline int32_t categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0) };
    inline GetPolicyInfoResponseBodySensitiveTopicList& setCategoryType(int32_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // inputOutputType Field Functions 
    bool hasInputOutputType() const { return this->inputOutputType_ != nullptr;};
    void deleteInputOutputType() { this->inputOutputType_ = nullptr;};
    inline int32_t inputOutputType() const { DARABONBA_PTR_GET_DEFAULT(inputOutputType_, 0) };
    inline GetPolicyInfoResponseBodySensitiveTopicList& setInputOutputType(int32_t inputOutputType) { DARABONBA_PTR_SET_VALUE(inputOutputType_, inputOutputType) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline int32_t securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, 0) };
    inline GetPolicyInfoResponseBodySensitiveTopicList& setSecurityLevel(int32_t securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


    // topicDefinition Field Functions 
    bool hasTopicDefinition() const { return this->topicDefinition_ != nullptr;};
    void deleteTopicDefinition() { this->topicDefinition_ = nullptr;};
    inline string topicDefinition() const { DARABONBA_PTR_GET_DEFAULT(topicDefinition_, "") };
    inline GetPolicyInfoResponseBodySensitiveTopicList& setTopicDefinition(string topicDefinition) { DARABONBA_PTR_SET_VALUE(topicDefinition_, topicDefinition) };


    // topicExampleInfoList Field Functions 
    bool hasTopicExampleInfoList() const { return this->topicExampleInfoList_ != nullptr;};
    void deleteTopicExampleInfoList() { this->topicExampleInfoList_ = nullptr;};
    inline const vector<Models::GetPolicyInfoResponseBodySensitiveTopicListTopicExampleInfoList> & topicExampleInfoList() const { DARABONBA_PTR_GET_CONST(topicExampleInfoList_, vector<Models::GetPolicyInfoResponseBodySensitiveTopicListTopicExampleInfoList>) };
    inline vector<Models::GetPolicyInfoResponseBodySensitiveTopicListTopicExampleInfoList> topicExampleInfoList() { DARABONBA_PTR_GET(topicExampleInfoList_, vector<Models::GetPolicyInfoResponseBodySensitiveTopicListTopicExampleInfoList>) };
    inline GetPolicyInfoResponseBodySensitiveTopicList& setTopicExampleInfoList(const vector<Models::GetPolicyInfoResponseBodySensitiveTopicListTopicExampleInfoList> & topicExampleInfoList) { DARABONBA_PTR_SET_VALUE(topicExampleInfoList_, topicExampleInfoList) };
    inline GetPolicyInfoResponseBodySensitiveTopicList& setTopicExampleInfoList(vector<Models::GetPolicyInfoResponseBodySensitiveTopicListTopicExampleInfoList> && topicExampleInfoList) { DARABONBA_PTR_SET_RVALUE(topicExampleInfoList_, topicExampleInfoList) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline int64_t topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
    inline GetPolicyInfoResponseBodySensitiveTopicList& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetPolicyInfoResponseBodySensitiveTopicList& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    std::shared_ptr<int32_t> categoryType_ = nullptr;
    std::shared_ptr<int32_t> inputOutputType_ = nullptr;
    std::shared_ptr<int32_t> securityLevel_ = nullptr;
    std::shared_ptr<string> topicDefinition_ = nullptr;
    std::shared_ptr<vector<Models::GetPolicyInfoResponseBodySensitiveTopicListTopicExampleInfoList>> topicExampleInfoList_ = nullptr;
    std::shared_ptr<int64_t> topicId_ = nullptr;
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
