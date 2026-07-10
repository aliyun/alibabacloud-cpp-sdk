// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARAPPLYADDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CARAPPLYADDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarApplyAddRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarApplyAddRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cause, cause_);
      DARABONBA_PTR_TO_JSON(city, city_);
      DARABONBA_PTR_TO_JSON(city_code_set, cityCodeSet_);
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(finished_date, finishedDate_);
      DARABONBA_PTR_TO_JSON(itinerary_list, itineraryList_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_name, projectName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_TO_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
      DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
      DARABONBA_PTR_TO_JSON(times_total, timesTotal_);
      DARABONBA_PTR_TO_JSON(times_type, timesType_);
      DARABONBA_PTR_TO_JSON(times_used, timesUsed_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(traveler_standard, travelerStandard_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CarApplyAddRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cause, cause_);
      DARABONBA_PTR_FROM_JSON(city, city_);
      DARABONBA_PTR_FROM_JSON(city_code_set, cityCodeSet_);
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(finished_date, finishedDate_);
      DARABONBA_PTR_FROM_JSON(itinerary_list, itineraryList_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_name, projectName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_FROM_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
      DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
      DARABONBA_PTR_FROM_JSON(times_total, timesTotal_);
      DARABONBA_PTR_FROM_JSON(times_type, timesType_);
      DARABONBA_PTR_FROM_JSON(times_used, timesUsed_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(traveler_standard, travelerStandard_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    CarApplyAddRequest() = default ;
    CarApplyAddRequest(const CarApplyAddRequest &) = default ;
    CarApplyAddRequest(CarApplyAddRequest &&) = default ;
    CarApplyAddRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarApplyAddRequest() = default ;
    CarApplyAddRequest& operator=(const CarApplyAddRequest &) = default ;
    CarApplyAddRequest& operator=(CarApplyAddRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TravelerStandard : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TravelerStandard& obj) { 
        DARABONBA_PTR_TO_JSON(car_city_set, carCitySet_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
      };
      friend void from_json(const Darabonba::Json& j, TravelerStandard& obj) { 
        DARABONBA_PTR_FROM_JSON(car_city_set, carCitySet_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
      };
      TravelerStandard() = default ;
      TravelerStandard(const TravelerStandard &) = default ;
      TravelerStandard(TravelerStandard &&) = default ;
      TravelerStandard(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TravelerStandard() = default ;
      TravelerStandard& operator=(const TravelerStandard &) = default ;
      TravelerStandard& operator=(TravelerStandard &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CarCitySet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CarCitySet& obj) { 
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(city_name, cityName_);
        };
        friend void from_json(const Darabonba::Json& j, CarCitySet& obj) { 
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(city_name, cityName_);
        };
        CarCitySet() = default ;
        CarCitySet(const CarCitySet &) = default ;
        CarCitySet(CarCitySet &&) = default ;
        CarCitySet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CarCitySet() = default ;
        CarCitySet& operator=(const CarCitySet &) = default ;
        CarCitySet& operator=(CarCitySet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->cityName_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline CarCitySet& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline CarCitySet& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


      protected:
        // The cross-city city code. Only 6-digit codes are supported. Separate multiple values with Chinese commas.
        // Note: A maximum of 10 cities can be specified. The values in city_code and city_name must correspond one-to-one.
        // 
        // This parameter is required.
        shared_ptr<string> cityCode_ {};
        // The cross-city city name. Separate multiple values with Chinese commas.
        // Note: A maximum of 10 cities can be specified. The values in city_code and city_name must correspond one-to-one.
        // 
        // This parameter is required.
        shared_ptr<string> cityName_ {};
      };

      virtual bool empty() const override { return this->carCitySet_ == nullptr
        && this->userId_ == nullptr; };
      // carCitySet Field Functions 
      bool hasCarCitySet() const { return this->carCitySet_ != nullptr;};
      void deleteCarCitySet() { this->carCitySet_ = nullptr;};
      inline const vector<TravelerStandard::CarCitySet> & getCarCitySet() const { DARABONBA_PTR_GET_CONST(carCitySet_, vector<TravelerStandard::CarCitySet>) };
      inline vector<TravelerStandard::CarCitySet> getCarCitySet() { DARABONBA_PTR_GET(carCitySet_, vector<TravelerStandard::CarCitySet>) };
      inline TravelerStandard& setCarCitySet(const vector<TravelerStandard::CarCitySet> & carCitySet) { DARABONBA_PTR_SET_VALUE(carCitySet_, carCitySet) };
      inline TravelerStandard& setCarCitySet(vector<TravelerStandard::CarCitySet> && carCitySet) { DARABONBA_PTR_SET_RVALUE(carCitySet_, carCitySet) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline TravelerStandard& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The cross-city car service rules. This parameter is optional. If specified, cross-city rules are read from the approval form data.
      shared_ptr<vector<TravelerStandard::CarCitySet>> carCitySet_ {};
      // The user ID of the traveler.
      // 
      // This parameter is required.
      shared_ptr<string> userId_ {};
    };

    class ItineraryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ItineraryList& obj) { 
        DARABONBA_PTR_TO_JSON(city, city_);
        DARABONBA_PTR_TO_JSON(city_code_set, cityCodeSet_);
        DARABONBA_PTR_TO_JSON(date, date_);
        DARABONBA_PTR_TO_JSON(finished_date, finishedDate_);
      };
      friend void from_json(const Darabonba::Json& j, ItineraryList& obj) { 
        DARABONBA_PTR_FROM_JSON(city, city_);
        DARABONBA_PTR_FROM_JSON(city_code_set, cityCodeSet_);
        DARABONBA_PTR_FROM_JSON(date, date_);
        DARABONBA_PTR_FROM_JSON(finished_date, finishedDate_);
      };
      ItineraryList() = default ;
      ItineraryList(const ItineraryList &) = default ;
      ItineraryList(ItineraryList &&) = default ;
      ItineraryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ItineraryList() = default ;
      ItineraryList& operator=(const ItineraryList &) = default ;
      ItineraryList& operator=(ItineraryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->city_ == nullptr
        && this->cityCodeSet_ == nullptr && this->date_ == nullptr && this->finishedDate_ == nullptr; };
      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline ItineraryList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // cityCodeSet Field Functions 
      bool hasCityCodeSet() const { return this->cityCodeSet_ != nullptr;};
      void deleteCityCodeSet() { this->cityCodeSet_ = nullptr;};
      inline string getCityCodeSet() const { DARABONBA_PTR_GET_DEFAULT(cityCodeSet_, "") };
      inline ItineraryList& setCityCodeSet(string cityCodeSet) { DARABONBA_PTR_SET_VALUE(cityCodeSet_, cityCodeSet) };


      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
      inline ItineraryList& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // finishedDate Field Functions 
      bool hasFinishedDate() const { return this->finishedDate_ != nullptr;};
      void deleteFinishedDate() { this->finishedDate_ = nullptr;};
      inline string getFinishedDate() const { DARABONBA_PTR_GET_DEFAULT(finishedDate_, "") };
      inline ItineraryList& setFinishedDate(string finishedDate) { DARABONBA_PTR_SET_VALUE(finishedDate_, finishedDate) };


    protected:
      shared_ptr<string> city_ {};
      shared_ptr<string> cityCodeSet_ {};
      shared_ptr<string> date_ {};
      shared_ptr<string> finishedDate_ {};
    };

    virtual bool empty() const override { return this->cause_ == nullptr
        && this->city_ == nullptr && this->cityCodeSet_ == nullptr && this->date_ == nullptr && this->finishedDate_ == nullptr && this->itineraryList_ == nullptr
        && this->projectCode_ == nullptr && this->projectName_ == nullptr && this->status_ == nullptr && this->thirdPartApplyId_ == nullptr && this->thirdPartCostCenterId_ == nullptr
        && this->thirdPartInvoiceId_ == nullptr && this->timesTotal_ == nullptr && this->timesType_ == nullptr && this->timesUsed_ == nullptr && this->title_ == nullptr
        && this->travelerStandard_ == nullptr && this->userId_ == nullptr; };
    // cause Field Functions 
    bool hasCause() const { return this->cause_ != nullptr;};
    void deleteCause() { this->cause_ = nullptr;};
    inline string getCause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
    inline CarApplyAddRequest& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline CarApplyAddRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // cityCodeSet Field Functions 
    bool hasCityCodeSet() const { return this->cityCodeSet_ != nullptr;};
    void deleteCityCodeSet() { this->cityCodeSet_ = nullptr;};
    inline string getCityCodeSet() const { DARABONBA_PTR_GET_DEFAULT(cityCodeSet_, "") };
    inline CarApplyAddRequest& setCityCodeSet(string cityCodeSet) { DARABONBA_PTR_SET_VALUE(cityCodeSet_, cityCodeSet) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline CarApplyAddRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // finishedDate Field Functions 
    bool hasFinishedDate() const { return this->finishedDate_ != nullptr;};
    void deleteFinishedDate() { this->finishedDate_ = nullptr;};
    inline string getFinishedDate() const { DARABONBA_PTR_GET_DEFAULT(finishedDate_, "") };
    inline CarApplyAddRequest& setFinishedDate(string finishedDate) { DARABONBA_PTR_SET_VALUE(finishedDate_, finishedDate) };


    // itineraryList Field Functions 
    bool hasItineraryList() const { return this->itineraryList_ != nullptr;};
    void deleteItineraryList() { this->itineraryList_ = nullptr;};
    inline const vector<CarApplyAddRequest::ItineraryList> & getItineraryList() const { DARABONBA_PTR_GET_CONST(itineraryList_, vector<CarApplyAddRequest::ItineraryList>) };
    inline vector<CarApplyAddRequest::ItineraryList> getItineraryList() { DARABONBA_PTR_GET(itineraryList_, vector<CarApplyAddRequest::ItineraryList>) };
    inline CarApplyAddRequest& setItineraryList(const vector<CarApplyAddRequest::ItineraryList> & itineraryList) { DARABONBA_PTR_SET_VALUE(itineraryList_, itineraryList) };
    inline CarApplyAddRequest& setItineraryList(vector<CarApplyAddRequest::ItineraryList> && itineraryList) { DARABONBA_PTR_SET_RVALUE(itineraryList_, itineraryList) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline CarApplyAddRequest& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CarApplyAddRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CarApplyAddRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thirdPartApplyId Field Functions 
    bool hasThirdPartApplyId() const { return this->thirdPartApplyId_ != nullptr;};
    void deleteThirdPartApplyId() { this->thirdPartApplyId_ = nullptr;};
    inline string getThirdPartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartApplyId_, "") };
    inline CarApplyAddRequest& setThirdPartApplyId(string thirdPartApplyId) { DARABONBA_PTR_SET_VALUE(thirdPartApplyId_, thirdPartApplyId) };


    // thirdPartCostCenterId Field Functions 
    bool hasThirdPartCostCenterId() const { return this->thirdPartCostCenterId_ != nullptr;};
    void deleteThirdPartCostCenterId() { this->thirdPartCostCenterId_ = nullptr;};
    inline string getThirdPartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartCostCenterId_, "") };
    inline CarApplyAddRequest& setThirdPartCostCenterId(string thirdPartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdPartCostCenterId_, thirdPartCostCenterId) };


    // thirdPartInvoiceId Field Functions 
    bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
    void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
    inline string getThirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
    inline CarApplyAddRequest& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


    // timesTotal Field Functions 
    bool hasTimesTotal() const { return this->timesTotal_ != nullptr;};
    void deleteTimesTotal() { this->timesTotal_ = nullptr;};
    inline int32_t getTimesTotal() const { DARABONBA_PTR_GET_DEFAULT(timesTotal_, 0) };
    inline CarApplyAddRequest& setTimesTotal(int32_t timesTotal) { DARABONBA_PTR_SET_VALUE(timesTotal_, timesTotal) };


    // timesType Field Functions 
    bool hasTimesType() const { return this->timesType_ != nullptr;};
    void deleteTimesType() { this->timesType_ = nullptr;};
    inline int32_t getTimesType() const { DARABONBA_PTR_GET_DEFAULT(timesType_, 0) };
    inline CarApplyAddRequest& setTimesType(int32_t timesType) { DARABONBA_PTR_SET_VALUE(timesType_, timesType) };


    // timesUsed Field Functions 
    bool hasTimesUsed() const { return this->timesUsed_ != nullptr;};
    void deleteTimesUsed() { this->timesUsed_ = nullptr;};
    inline int32_t getTimesUsed() const { DARABONBA_PTR_GET_DEFAULT(timesUsed_, 0) };
    inline CarApplyAddRequest& setTimesUsed(int32_t timesUsed) { DARABONBA_PTR_SET_VALUE(timesUsed_, timesUsed) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CarApplyAddRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // travelerStandard Field Functions 
    bool hasTravelerStandard() const { return this->travelerStandard_ != nullptr;};
    void deleteTravelerStandard() { this->travelerStandard_ = nullptr;};
    inline const vector<CarApplyAddRequest::TravelerStandard> & getTravelerStandard() const { DARABONBA_PTR_GET_CONST(travelerStandard_, vector<CarApplyAddRequest::TravelerStandard>) };
    inline vector<CarApplyAddRequest::TravelerStandard> getTravelerStandard() { DARABONBA_PTR_GET(travelerStandard_, vector<CarApplyAddRequest::TravelerStandard>) };
    inline CarApplyAddRequest& setTravelerStandard(const vector<CarApplyAddRequest::TravelerStandard> & travelerStandard) { DARABONBA_PTR_SET_VALUE(travelerStandard_, travelerStandard) };
    inline CarApplyAddRequest& setTravelerStandard(vector<CarApplyAddRequest::TravelerStandard> && travelerStandard) { DARABONBA_PTR_SET_RVALUE(travelerStandard_, travelerStandard) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CarApplyAddRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The reason for the business trip.
    // 
    // This parameter is required.
    shared_ptr<string> cause_ {};
    // The cities for car service. Separate multiple cities with Chinese commas (，).
    // Note: A maximum of 10 cities can be specified. The values in city and city_code_set must correspond one-to-one.
    shared_ptr<string> city_ {};
    // The city code set for intra-city car service. Separate multiple cities with Chinese commas (，).
    // Note: 1) Either city_code_set or city is required. If both are specified, city_code_set takes precedence.
    // A maximum of 10 cities can be specified.
    shared_ptr<string> cityCodeSet_ {};
    // The car service time. This parameter is controlled on a daily basis. For example, a value of 2021-03-18 20:26:56 indicates that the car service is available on 2021-03-18. For multi-day scenarios, use this parameter together with the finished_date parameter. The time must be in the yyyy-MM-dd HH:mm:ss format.
    shared_ptr<string> date_ {};
    // The car service end time. This parameter is controlled on a daily basis. For example, if date is set to 2021-03-18 20:26:56 and finished_date is set to 2021-03-30 20:26:56, the car service is available from 2021-03-18 (inclusive) to 2021-03-30 (inclusive). If this parameter is not specified, the value of date is used as the end time. The time must be in the yyyy-MM-dd HH:mm:ss format.
    shared_ptr<string> finishedDate_ {};
    shared_ptr<vector<CarApplyAddRequest::ItineraryList>> itineraryList_ {};
    // The project code associated with the approval form.
    shared_ptr<string> projectCode_ {};
    // The project name associated with the approval form.
    shared_ptr<string> projectName_ {};
    // The approval status.
    // 
    // This parameter is required.
    shared_ptr<int32_t> status_ {};
    // The ID of the third-party approval form.
    // 
    // This parameter is required.
    shared_ptr<string> thirdPartApplyId_ {};
    // The ID of the third-party cost center associated with the approval form.
    // >Warning: This field is required. To make it optional, contact the operations team.
    shared_ptr<string> thirdPartCostCenterId_ {};
    // The ID of the third-party invoice header associated with the approval form.
    // 
    // >Warning: This field is required. To make it optional, contact the operations team.
    shared_ptr<string> thirdPartInvoiceId_ {};
    // The total number of times the approval form can be used.
    shared_ptr<int32_t> timesTotal_ {};
    // The type of available usage count for the approval form. If the enterprise does not need to limit the number of times the approval form can be used, set this parameter to 1 (unlimited) and set both times_total and times_used to 0. Valid values:
    // 
    // - 1: unlimited.
    // - 2: user-specified count.
    shared_ptr<int32_t> timesType_ {};
    // The number of times the approval form has been used.
    shared_ptr<int32_t> timesUsed_ {};
    // The title of the approval form.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
    // The intra-city car service rules.
    shared_ptr<vector<CarApplyAddRequest::TravelerStandard>> travelerStandard_ {};
    // The third-party employee ID of the user who initiates the approval.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
