// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTDISYNCINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_STARTDISYNCINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class StartDISyncInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartDISyncInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, StartDISyncInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    StartDISyncInstanceResponseBodyData() = default ;
    StartDISyncInstanceResponseBodyData(const StartDISyncInstanceResponseBodyData &) = default ;
    StartDISyncInstanceResponseBodyData(StartDISyncInstanceResponseBodyData &&) = default ;
    StartDISyncInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartDISyncInstanceResponseBodyData() = default ;
    StartDISyncInstanceResponseBodyData& operator=(const StartDISyncInstanceResponseBodyData &) = default ;
    StartDISyncInstanceResponseBodyData& operator=(StartDISyncInstanceResponseBodyData &&) = default ;
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
    inline StartDISyncInstanceResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline StartDISyncInstanceResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The reason why the real-time synchronization task or the data synchronization solution fails to be started.
    // 
    // If the real-time synchronization task or the data synchronization solution is started, the value null is returned.
    std::shared_ptr<string> message_ = nullptr;
    // Indicates whether the real-time synchronization task or the data synchronization solution is started. Valid values:
    // 
    // *   success: The real-time synchronization task or the data synchronization solution is started.
    // *   fail: The real-time synchronization task or the data synchronization solution fails to be started. You can troubleshoot the issue based on the provided cause.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
