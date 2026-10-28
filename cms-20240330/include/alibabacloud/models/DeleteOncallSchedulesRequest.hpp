// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEONCALLSCHEDULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEONCALLSCHEDULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteOncallSchedulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOncallSchedulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(oncallScheduleIds, oncallScheduleIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOncallSchedulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(oncallScheduleIds, oncallScheduleIds_);
    };
    DeleteOncallSchedulesRequest() = default ;
    DeleteOncallSchedulesRequest(const DeleteOncallSchedulesRequest &) = default ;
    DeleteOncallSchedulesRequest(DeleteOncallSchedulesRequest &&) = default ;
    DeleteOncallSchedulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOncallSchedulesRequest() = default ;
    DeleteOncallSchedulesRequest& operator=(const DeleteOncallSchedulesRequest &) = default ;
    DeleteOncallSchedulesRequest& operator=(DeleteOncallSchedulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->oncallScheduleIds_ == nullptr; };
    // oncallScheduleIds Field Functions 
    bool hasOncallScheduleIds() const { return this->oncallScheduleIds_ != nullptr;};
    void deleteOncallScheduleIds() { this->oncallScheduleIds_ = nullptr;};
    inline const vector<string> & getOncallScheduleIds() const { DARABONBA_PTR_GET_CONST(oncallScheduleIds_, vector<string>) };
    inline vector<string> getOncallScheduleIds() { DARABONBA_PTR_GET(oncallScheduleIds_, vector<string>) };
    inline DeleteOncallSchedulesRequest& setOncallScheduleIds(const vector<string> & oncallScheduleIds) { DARABONBA_PTR_SET_VALUE(oncallScheduleIds_, oncallScheduleIds) };
    inline DeleteOncallSchedulesRequest& setOncallScheduleIds(vector<string> && oncallScheduleIds) { DARABONBA_PTR_SET_RVALUE(oncallScheduleIds_, oncallScheduleIds) };


  protected:
    // The IDs of the on-call schedules.
    shared_ptr<vector<string>> oncallScheduleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
