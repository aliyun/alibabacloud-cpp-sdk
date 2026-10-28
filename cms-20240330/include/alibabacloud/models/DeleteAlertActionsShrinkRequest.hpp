// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTACTIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTACTIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteAlertActionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertActionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alertActionIds, alertActionIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertActionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alertActionIds, alertActionIdsShrink_);
    };
    DeleteAlertActionsShrinkRequest() = default ;
    DeleteAlertActionsShrinkRequest(const DeleteAlertActionsShrinkRequest &) = default ;
    DeleteAlertActionsShrinkRequest(DeleteAlertActionsShrinkRequest &&) = default ;
    DeleteAlertActionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertActionsShrinkRequest() = default ;
    DeleteAlertActionsShrinkRequest& operator=(const DeleteAlertActionsShrinkRequest &) = default ;
    DeleteAlertActionsShrinkRequest& operator=(DeleteAlertActionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertActionIdsShrink_ == nullptr; };
    // alertActionIdsShrink Field Functions 
    bool hasAlertActionIdsShrink() const { return this->alertActionIdsShrink_ != nullptr;};
    void deleteAlertActionIdsShrink() { this->alertActionIdsShrink_ = nullptr;};
    inline string getAlertActionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(alertActionIdsShrink_, "") };
    inline DeleteAlertActionsShrinkRequest& setAlertActionIdsShrink(string alertActionIdsShrink) { DARABONBA_PTR_SET_VALUE(alertActionIdsShrink_, alertActionIdsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> alertActionIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
