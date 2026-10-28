// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEONCALLSCHEDULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEONCALLSCHEDULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteOncallSchedulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOncallSchedulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(oncallScheduleIds, oncallScheduleIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOncallSchedulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(oncallScheduleIds, oncallScheduleIdsShrink_);
    };
    DeleteOncallSchedulesShrinkRequest() = default ;
    DeleteOncallSchedulesShrinkRequest(const DeleteOncallSchedulesShrinkRequest &) = default ;
    DeleteOncallSchedulesShrinkRequest(DeleteOncallSchedulesShrinkRequest &&) = default ;
    DeleteOncallSchedulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOncallSchedulesShrinkRequest() = default ;
    DeleteOncallSchedulesShrinkRequest& operator=(const DeleteOncallSchedulesShrinkRequest &) = default ;
    DeleteOncallSchedulesShrinkRequest& operator=(DeleteOncallSchedulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->oncallScheduleIdsShrink_ == nullptr; };
    // oncallScheduleIdsShrink Field Functions 
    bool hasOncallScheduleIdsShrink() const { return this->oncallScheduleIdsShrink_ != nullptr;};
    void deleteOncallScheduleIdsShrink() { this->oncallScheduleIdsShrink_ = nullptr;};
    inline string getOncallScheduleIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(oncallScheduleIdsShrink_, "") };
    inline DeleteOncallSchedulesShrinkRequest& setOncallScheduleIdsShrink(string oncallScheduleIdsShrink) { DARABONBA_PTR_SET_VALUE(oncallScheduleIdsShrink_, oncallScheduleIdsShrink) };


  protected:
    shared_ptr<string> oncallScheduleIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
