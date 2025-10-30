// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPALERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STOPALERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class StopAlertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopAlertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, StopAlertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    StopAlertResponseBody() = default ;
    StopAlertResponseBody(const StopAlertResponseBody &) = default ;
    StopAlertResponseBody(StopAlertResponseBody &&) = default ;
    StopAlertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopAlertResponseBody() = default ;
    StopAlertResponseBody& operator=(const StopAlertResponseBody &) = default ;
    StopAlertResponseBody& operator=(StopAlertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->msg_ == nullptr
        && return this->status_ == nullptr; };
    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline StopAlertResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline StopAlertResponseBody& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error message returned if the call fails.
    std::shared_ptr<string> msg_ = nullptr;
    // The operation result. Valid values:
    // 
    // *   True: The operation is successful.
    // *   False: The operation failed.
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
