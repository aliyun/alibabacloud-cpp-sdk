// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPDISYNCINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_STOPDISYNCINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class StopDISyncInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopDISyncInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, StopDISyncInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    StopDISyncInstanceResponseBodyData() = default ;
    StopDISyncInstanceResponseBodyData(const StopDISyncInstanceResponseBodyData &) = default ;
    StopDISyncInstanceResponseBodyData(StopDISyncInstanceResponseBodyData &&) = default ;
    StopDISyncInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopDISyncInstanceResponseBodyData() = default ;
    StopDISyncInstanceResponseBodyData& operator=(const StopDISyncInstanceResponseBodyData &) = default ;
    StopDISyncInstanceResponseBodyData& operator=(StopDISyncInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->status_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline StopDISyncInstanceResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline StopDISyncInstanceResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The reason why the synchronization task fails to be stopped.
    // 
    // If the synchronization task is stopped, the value null is returned.
    std::shared_ptr<string> message_ = nullptr;
    // Indicates whether the synchronization task is stopped. Valid values:
    // 
    // *   success
    // *   fail
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
