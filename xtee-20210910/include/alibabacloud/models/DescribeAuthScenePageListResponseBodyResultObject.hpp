// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTHSCENEPAGELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTHSCENEPAGELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAuthScenePageListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuthScenePageListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(commonRuleCount, commonRuleCount_);
      DARABONBA_PTR_TO_JSON(customRuleCount, customRuleCount_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(sceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(serverName, serverName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuthScenePageListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(commonRuleCount, commonRuleCount_);
      DARABONBA_PTR_FROM_JSON(customRuleCount, customRuleCount_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(sceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(serverName, serverName_);
    };
    DescribeAuthScenePageListResponseBodyResultObject() = default ;
    DescribeAuthScenePageListResponseBodyResultObject(const DescribeAuthScenePageListResponseBodyResultObject &) = default ;
    DescribeAuthScenePageListResponseBodyResultObject(DescribeAuthScenePageListResponseBodyResultObject &&) = default ;
    DescribeAuthScenePageListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuthScenePageListResponseBodyResultObject() = default ;
    DescribeAuthScenePageListResponseBodyResultObject& operator=(const DescribeAuthScenePageListResponseBodyResultObject &) = default ;
    DescribeAuthScenePageListResponseBodyResultObject& operator=(DescribeAuthScenePageListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonRuleCount_ == nullptr
        && return this->customRuleCount_ == nullptr && return this->eventCode_ == nullptr && return this->sceneName_ == nullptr && return this->serverName_ == nullptr; };
    // commonRuleCount Field Functions 
    bool hasCommonRuleCount() const { return this->commonRuleCount_ != nullptr;};
    void deleteCommonRuleCount() { this->commonRuleCount_ = nullptr;};
    inline int64_t commonRuleCount() const { DARABONBA_PTR_GET_DEFAULT(commonRuleCount_, 0L) };
    inline DescribeAuthScenePageListResponseBodyResultObject& setCommonRuleCount(int64_t commonRuleCount) { DARABONBA_PTR_SET_VALUE(commonRuleCount_, commonRuleCount) };


    // customRuleCount Field Functions 
    bool hasCustomRuleCount() const { return this->customRuleCount_ != nullptr;};
    void deleteCustomRuleCount() { this->customRuleCount_ = nullptr;};
    inline int64_t customRuleCount() const { DARABONBA_PTR_GET_DEFAULT(customRuleCount_, 0L) };
    inline DescribeAuthScenePageListResponseBodyResultObject& setCustomRuleCount(int64_t customRuleCount) { DARABONBA_PTR_SET_VALUE(customRuleCount_, customRuleCount) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeAuthScenePageListResponseBodyResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline DescribeAuthScenePageListResponseBodyResultObject& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // serverName Field Functions 
    bool hasServerName() const { return this->serverName_ != nullptr;};
    void deleteServerName() { this->serverName_ = nullptr;};
    inline string serverName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
    inline DescribeAuthScenePageListResponseBodyResultObject& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


  protected:
    // Number of common rules
    std::shared_ptr<int64_t> commonRuleCount_ = nullptr;
    // Number of custom rules
    std::shared_ptr<int64_t> customRuleCount_ = nullptr;
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Scene name.
    std::shared_ptr<string> sceneName_ = nullptr;
    // Service name.
    std::shared_ptr<string> serverName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
