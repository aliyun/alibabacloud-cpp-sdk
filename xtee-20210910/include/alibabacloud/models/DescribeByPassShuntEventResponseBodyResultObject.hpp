// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBYPASSSHUNTEVENTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBYPASSSHUNTEVENTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeByPassShuntEventResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeByPassShuntEventResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeByPassShuntEventResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
    };
    DescribeByPassShuntEventResponseBodyResultObject() = default ;
    DescribeByPassShuntEventResponseBodyResultObject(const DescribeByPassShuntEventResponseBodyResultObject &) = default ;
    DescribeByPassShuntEventResponseBodyResultObject(DescribeByPassShuntEventResponseBodyResultObject &&) = default ;
    DescribeByPassShuntEventResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeByPassShuntEventResponseBodyResultObject() = default ;
    DescribeByPassShuntEventResponseBodyResultObject& operator=(const DescribeByPassShuntEventResponseBodyResultObject &) = default ;
    DescribeByPassShuntEventResponseBodyResultObject& operator=(DescribeByPassShuntEventResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventName_ == nullptr; };
    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeByPassShuntEventResponseBodyResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


  protected:
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
