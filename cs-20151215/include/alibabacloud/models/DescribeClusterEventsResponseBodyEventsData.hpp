// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTEREVENTSRESPONSEBODYEVENTSDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTEREVENTSRESPONSEBODYEVENTSDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterEventsResponseBodyEventsData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterEventsResponseBodyEventsData& obj) { 
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterEventsResponseBodyEventsData& obj) { 
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
    };
    DescribeClusterEventsResponseBodyEventsData() = default ;
    DescribeClusterEventsResponseBodyEventsData(const DescribeClusterEventsResponseBodyEventsData &) = default ;
    DescribeClusterEventsResponseBodyEventsData(DescribeClusterEventsResponseBodyEventsData &&) = default ;
    DescribeClusterEventsResponseBodyEventsData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterEventsResponseBodyEventsData() = default ;
    DescribeClusterEventsResponseBodyEventsData& operator=(const DescribeClusterEventsResponseBodyEventsData &) = default ;
    DescribeClusterEventsResponseBodyEventsData& operator=(DescribeClusterEventsResponseBodyEventsData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->level_ != nullptr
        && this->message_ != nullptr && this->reason_ != nullptr; };
    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeClusterEventsResponseBodyEventsData& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeClusterEventsResponseBodyEventsData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeClusterEventsResponseBodyEventsData& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // The severity level of the event.
    // 
    // Valid values:
    // 
    // *   warning
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   error
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   info
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> level_ = nullptr;
    // The details of the event.
    std::shared_ptr<string> message_ = nullptr;
    // The status of the event.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
