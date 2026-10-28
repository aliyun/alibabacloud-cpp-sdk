// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIEWONCALLSCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VIEWONCALLSCHEDULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ViewOncallScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ViewOncallScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, ViewOncallScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
    };
    ViewOncallScheduleRequest() = default ;
    ViewOncallScheduleRequest(const ViewOncallScheduleRequest &) = default ;
    ViewOncallScheduleRequest(ViewOncallScheduleRequest &&) = default ;
    ViewOncallScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ViewOncallScheduleRequest() = default ;
    ViewOncallScheduleRequest& operator=(const ViewOncallScheduleRequest &) = default ;
    ViewOncallScheduleRequest& operator=(ViewOncallScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->startDate_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ViewOncallScheduleRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ViewOncallScheduleRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The end date of the query. Format: yyyy-MM-dd. This parameter must be specified together with startDate.
    shared_ptr<string> endDate_ {};
    // The start date of the query. Format: yyyy-MM-dd. This parameter must be specified together with endDate.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
