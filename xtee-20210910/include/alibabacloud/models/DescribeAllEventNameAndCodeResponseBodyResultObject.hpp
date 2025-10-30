// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLEVENTNAMEANDCODERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLEVENTNAMEANDCODERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllEventNameAndCodeResponseBodyResultObjectChildren.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAllEventNameAndCodeResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllEventNameAndCodeResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(children, children_);
      DARABONBA_PTR_TO_JSON(createType, createType_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(eventType, eventType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllEventNameAndCodeResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(children, children_);
      DARABONBA_PTR_FROM_JSON(createType, createType_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(eventType, eventType_);
    };
    DescribeAllEventNameAndCodeResponseBodyResultObject() = default ;
    DescribeAllEventNameAndCodeResponseBodyResultObject(const DescribeAllEventNameAndCodeResponseBodyResultObject &) = default ;
    DescribeAllEventNameAndCodeResponseBodyResultObject(DescribeAllEventNameAndCodeResponseBodyResultObject &&) = default ;
    DescribeAllEventNameAndCodeResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllEventNameAndCodeResponseBodyResultObject() = default ;
    DescribeAllEventNameAndCodeResponseBodyResultObject& operator=(const DescribeAllEventNameAndCodeResponseBodyResultObject &) = default ;
    DescribeAllEventNameAndCodeResponseBodyResultObject& operator=(DescribeAllEventNameAndCodeResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->children_ == nullptr
        && return this->createType_ == nullptr && return this->eventCode_ == nullptr && return this->eventName_ == nullptr && return this->eventType_ == nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<Models::DescribeAllEventNameAndCodeResponseBodyResultObjectChildren> & children() const { DARABONBA_PTR_GET_CONST(children_, vector<Models::DescribeAllEventNameAndCodeResponseBodyResultObjectChildren>) };
    inline vector<Models::DescribeAllEventNameAndCodeResponseBodyResultObjectChildren> children() { DARABONBA_PTR_GET(children_, vector<Models::DescribeAllEventNameAndCodeResponseBodyResultObjectChildren>) };
    inline DescribeAllEventNameAndCodeResponseBodyResultObject& setChildren(const vector<Models::DescribeAllEventNameAndCodeResponseBodyResultObjectChildren> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline DescribeAllEventNameAndCodeResponseBodyResultObject& setChildren(vector<Models::DescribeAllEventNameAndCodeResponseBodyResultObjectChildren> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string createType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline DescribeAllEventNameAndCodeResponseBodyResultObject& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeAllEventNameAndCodeResponseBodyResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeAllEventNameAndCodeResponseBodyResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeAllEventNameAndCodeResponseBodyResultObject& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


  protected:
    // List of child fields.
    std::shared_ptr<vector<Models::DescribeAllEventNameAndCodeResponseBodyResultObjectChildren>> children_ = nullptr;
    // Creation type
    std::shared_ptr<string> createType_ = nullptr;
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Event type
    std::shared_ptr<string> eventType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
