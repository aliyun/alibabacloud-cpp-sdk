// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTACTGROUPFORALERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTACTGROUPFORALERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpdateContactGroupForAlertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContactGroupForAlertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContactGroupForAlertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    UpdateContactGroupForAlertResponseBody() = default ;
    UpdateContactGroupForAlertResponseBody(const UpdateContactGroupForAlertResponseBody &) = default ;
    UpdateContactGroupForAlertResponseBody(UpdateContactGroupForAlertResponseBody &&) = default ;
    UpdateContactGroupForAlertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContactGroupForAlertResponseBody() = default ;
    UpdateContactGroupForAlertResponseBody& operator=(const UpdateContactGroupForAlertResponseBody &) = default ;
    UpdateContactGroupForAlertResponseBody& operator=(UpdateContactGroupForAlertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->msg_ == nullptr
        && this->status_ == nullptr; };
    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline UpdateContactGroupForAlertResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline UpdateContactGroupForAlertResponseBody& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error message returned if the call fails.
    shared_ptr<string> msg_ {};
    // The update status.
    // 
    // *   true: The update is successful.
    // *   false: The update failed.
    shared_ptr<bool> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
