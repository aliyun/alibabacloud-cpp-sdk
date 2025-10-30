// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTALERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTALERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class StartAlertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAlertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, StartAlertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    StartAlertResponseBody() = default ;
    StartAlertResponseBody(const StartAlertResponseBody &) = default ;
    StartAlertResponseBody(StartAlertResponseBody &&) = default ;
    StartAlertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAlertResponseBody() = default ;
    StartAlertResponseBody& operator=(const StartAlertResponseBody &) = default ;
    StartAlertResponseBody& operator=(StartAlertResponseBody &&) = default ;
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
    inline StartAlertResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline StartAlertResponseBody& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The message returned.
    std::shared_ptr<string> msg_ = nullptr;
    // The status.
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
