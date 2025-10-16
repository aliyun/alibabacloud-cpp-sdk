// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTNAMELISTRESPONSEBODYEVENTNAMELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTNAMELISTRESPONSEBODYEVENTNAMELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInvadeEventNameListResponseBodyEventNameList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvadeEventNameListResponseBodyEventNameList& obj) { 
      DARABONBA_PTR_TO_JSON(EventKey, eventKey_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvadeEventNameListResponseBodyEventNameList& obj) { 
      DARABONBA_PTR_FROM_JSON(EventKey, eventKey_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
    };
    DescribeInvadeEventNameListResponseBodyEventNameList() = default ;
    DescribeInvadeEventNameListResponseBodyEventNameList(const DescribeInvadeEventNameListResponseBodyEventNameList &) = default ;
    DescribeInvadeEventNameListResponseBodyEventNameList(DescribeInvadeEventNameListResponseBodyEventNameList &&) = default ;
    DescribeInvadeEventNameListResponseBodyEventNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvadeEventNameListResponseBodyEventNameList() = default ;
    DescribeInvadeEventNameListResponseBodyEventNameList& operator=(const DescribeInvadeEventNameListResponseBodyEventNameList &) = default ;
    DescribeInvadeEventNameListResponseBodyEventNameList& operator=(DescribeInvadeEventNameListResponseBodyEventNameList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventKey_ == nullptr
        && return this->eventName_ == nullptr; };
    // eventKey Field Functions 
    bool hasEventKey() const { return this->eventKey_ != nullptr;};
    void deleteEventKey() { this->eventKey_ = nullptr;};
    inline string eventKey() const { DARABONBA_PTR_GET_DEFAULT(eventKey_, "") };
    inline DescribeInvadeEventNameListResponseBodyEventNameList& setEventKey(string eventKey) { DARABONBA_PTR_SET_VALUE(eventKey_, eventKey) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeInvadeEventNameListResponseBodyEventNameList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


  protected:
    std::shared_ptr<string> eventKey_ = nullptr;
    std::shared_ptr<string> eventName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
