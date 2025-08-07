// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTTYPESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTTYPESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeFreeUserEventTypesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFreeUserEventTypesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EventNum, eventNum_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFreeUserEventTypesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EventNum, eventNum_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
    };
    DescribeFreeUserEventTypesResponseBodyData() = default ;
    DescribeFreeUserEventTypesResponseBodyData(const DescribeFreeUserEventTypesResponseBodyData &) = default ;
    DescribeFreeUserEventTypesResponseBodyData(DescribeFreeUserEventTypesResponseBodyData &&) = default ;
    DescribeFreeUserEventTypesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFreeUserEventTypesResponseBodyData() = default ;
    DescribeFreeUserEventTypesResponseBodyData& operator=(const DescribeFreeUserEventTypesResponseBodyData &) = default ;
    DescribeFreeUserEventTypesResponseBodyData& operator=(DescribeFreeUserEventTypesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventNum_ != nullptr
        && this->eventType_ != nullptr; };
    // eventNum Field Functions 
    bool hasEventNum() const { return this->eventNum_ != nullptr;};
    void deleteEventNum() { this->eventNum_ = nullptr;};
    inline string eventNum() const { DARABONBA_PTR_GET_DEFAULT(eventNum_, "") };
    inline DescribeFreeUserEventTypesResponseBodyData& setEventNum(string eventNum) { DARABONBA_PTR_SET_VALUE(eventNum_, eventNum) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeFreeUserEventTypesResponseBodyData& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


  protected:
    // The number of security events.
    std::shared_ptr<string> eventNum_ = nullptr;
    // The type of the security event.
    std::shared_ptr<string> eventType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
