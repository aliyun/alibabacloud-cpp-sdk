// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCENEEVENTPAGELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCENEEVENTPAGELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSceneEventPageListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSceneEventPageListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(commonRuleCount, commonRuleCount_);
      DARABONBA_PTR_TO_JSON(customRuleCount, customRuleCount_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(normalRuleCount, normalRuleCount_);
      DARABONBA_PTR_TO_JSON(service, service_);
      DARABONBA_PTR_TO_JSON(useStatus, useStatus_);
      DARABONBA_PTR_TO_JSON(whiteBoxRuleCount, whiteBoxRuleCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSceneEventPageListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(commonRuleCount, commonRuleCount_);
      DARABONBA_PTR_FROM_JSON(customRuleCount, customRuleCount_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(normalRuleCount, normalRuleCount_);
      DARABONBA_PTR_FROM_JSON(service, service_);
      DARABONBA_PTR_FROM_JSON(useStatus, useStatus_);
      DARABONBA_PTR_FROM_JSON(whiteBoxRuleCount, whiteBoxRuleCount_);
    };
    DescribeSceneEventPageListResponseBodyResultObject() = default ;
    DescribeSceneEventPageListResponseBodyResultObject(const DescribeSceneEventPageListResponseBodyResultObject &) = default ;
    DescribeSceneEventPageListResponseBodyResultObject(DescribeSceneEventPageListResponseBodyResultObject &&) = default ;
    DescribeSceneEventPageListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSceneEventPageListResponseBodyResultObject() = default ;
    DescribeSceneEventPageListResponseBodyResultObject& operator=(const DescribeSceneEventPageListResponseBodyResultObject &) = default ;
    DescribeSceneEventPageListResponseBodyResultObject& operator=(DescribeSceneEventPageListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonRuleCount_ == nullptr
        && return this->customRuleCount_ == nullptr && return this->eventCode_ == nullptr && return this->eventName_ == nullptr && return this->gmtModified_ == nullptr && return this->modifier_ == nullptr
        && return this->normalRuleCount_ == nullptr && return this->service_ == nullptr && return this->useStatus_ == nullptr && return this->whiteBoxRuleCount_ == nullptr; };
    // commonRuleCount Field Functions 
    bool hasCommonRuleCount() const { return this->commonRuleCount_ != nullptr;};
    void deleteCommonRuleCount() { this->commonRuleCount_ = nullptr;};
    inline string commonRuleCount() const { DARABONBA_PTR_GET_DEFAULT(commonRuleCount_, "") };
    inline DescribeSceneEventPageListResponseBodyResultObject& setCommonRuleCount(string commonRuleCount) { DARABONBA_PTR_SET_VALUE(commonRuleCount_, commonRuleCount) };


    // customRuleCount Field Functions 
    bool hasCustomRuleCount() const { return this->customRuleCount_ != nullptr;};
    void deleteCustomRuleCount() { this->customRuleCount_ = nullptr;};
    inline string customRuleCount() const { DARABONBA_PTR_GET_DEFAULT(customRuleCount_, "") };
    inline DescribeSceneEventPageListResponseBodyResultObject& setCustomRuleCount(string customRuleCount) { DARABONBA_PTR_SET_VALUE(customRuleCount_, customRuleCount) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeSceneEventPageListResponseBodyResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeSceneEventPageListResponseBodyResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeSceneEventPageListResponseBodyResultObject& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline DescribeSceneEventPageListResponseBodyResultObject& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // normalRuleCount Field Functions 
    bool hasNormalRuleCount() const { return this->normalRuleCount_ != nullptr;};
    void deleteNormalRuleCount() { this->normalRuleCount_ = nullptr;};
    inline string normalRuleCount() const { DARABONBA_PTR_GET_DEFAULT(normalRuleCount_, "") };
    inline DescribeSceneEventPageListResponseBodyResultObject& setNormalRuleCount(string normalRuleCount) { DARABONBA_PTR_SET_VALUE(normalRuleCount_, normalRuleCount) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline DescribeSceneEventPageListResponseBodyResultObject& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // useStatus Field Functions 
    bool hasUseStatus() const { return this->useStatus_ != nullptr;};
    void deleteUseStatus() { this->useStatus_ = nullptr;};
    inline string useStatus() const { DARABONBA_PTR_GET_DEFAULT(useStatus_, "") };
    inline DescribeSceneEventPageListResponseBodyResultObject& setUseStatus(string useStatus) { DARABONBA_PTR_SET_VALUE(useStatus_, useStatus) };


    // whiteBoxRuleCount Field Functions 
    bool hasWhiteBoxRuleCount() const { return this->whiteBoxRuleCount_ != nullptr;};
    void deleteWhiteBoxRuleCount() { this->whiteBoxRuleCount_ = nullptr;};
    inline string whiteBoxRuleCount() const { DARABONBA_PTR_GET_DEFAULT(whiteBoxRuleCount_, "") };
    inline DescribeSceneEventPageListResponseBodyResultObject& setWhiteBoxRuleCount(string whiteBoxRuleCount) { DARABONBA_PTR_SET_VALUE(whiteBoxRuleCount_, whiteBoxRuleCount) };


  protected:
    // Number of common rules
    std::shared_ptr<string> commonRuleCount_ = nullptr;
    // Number of custom rules
    std::shared_ptr<string> customRuleCount_ = nullptr;
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Modification time
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Modifier
    std::shared_ptr<string> modifier_ = nullptr;
    // Number of custom rules
    std::shared_ptr<string> normalRuleCount_ = nullptr;
    // Service code
    std::shared_ptr<string> service_ = nullptr;
    // Usage status
    std::shared_ptr<string> useStatus_ = nullptr;
    // Number of white-box rules
    std::shared_ptr<string> whiteBoxRuleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
