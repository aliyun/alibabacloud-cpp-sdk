// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTCALENDARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTCALENDARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ImportCalendarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportCalendarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Months, months_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Year, year_);
    };
    friend void from_json(const Darabonba::Json& j, ImportCalendarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Months, months_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Year, year_);
    };
    ImportCalendarRequest() = default ;
    ImportCalendarRequest(const ImportCalendarRequest &) = default ;
    ImportCalendarRequest(ImportCalendarRequest &&) = default ;
    ImportCalendarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportCalendarRequest() = default ;
    ImportCalendarRequest& operator=(const ImportCalendarRequest &) = default ;
    ImportCalendarRequest& operator=(ImportCalendarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->months_ == nullptr && this->name_ == nullptr && this->year_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ImportCalendarRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // months Field Functions 
    bool hasMonths() const { return this->months_ != nullptr;};
    void deleteMonths() { this->months_ = nullptr;};
    inline string getMonths() const { DARABONBA_PTR_GET_DEFAULT(months_, "") };
    inline ImportCalendarRequest& setMonths(string months) { DARABONBA_PTR_SET_VALUE(months_, months) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ImportCalendarRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline int32_t getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
    inline ImportCalendarRequest& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> months_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<int32_t> year_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
