// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKTIMEDIMENSIONSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKTIMEDIMENSIONSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckTimeDimensionStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckTimeDimensionStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeDimensionStatisticDTO, timeDimensionStatisticDTO_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckTimeDimensionStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeDimensionStatisticDTO, timeDimensionStatisticDTO_);
    };
    GetCheckTimeDimensionStatisticResponseBody() = default ;
    GetCheckTimeDimensionStatisticResponseBody(const GetCheckTimeDimensionStatisticResponseBody &) = default ;
    GetCheckTimeDimensionStatisticResponseBody(GetCheckTimeDimensionStatisticResponseBody &&) = default ;
    GetCheckTimeDimensionStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckTimeDimensionStatisticResponseBody() = default ;
    GetCheckTimeDimensionStatisticResponseBody& operator=(const GetCheckTimeDimensionStatisticResponseBody &) = default ;
    GetCheckTimeDimensionStatisticResponseBody& operator=(GetCheckTimeDimensionStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeDimensionStatisticDTO : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeDimensionStatisticDTO& obj) { 
        DARABONBA_PTR_TO_JSON(Dates, dates_);
        DARABONBA_PTR_TO_JSON(StatisticType, statisticType_);
        DARABONBA_PTR_TO_JSON(TimeDimensionStatisticItems, timeDimensionStatisticItems_);
      };
      friend void from_json(const Darabonba::Json& j, TimeDimensionStatisticDTO& obj) { 
        DARABONBA_PTR_FROM_JSON(Dates, dates_);
        DARABONBA_PTR_FROM_JSON(StatisticType, statisticType_);
        DARABONBA_PTR_FROM_JSON(TimeDimensionStatisticItems, timeDimensionStatisticItems_);
      };
      TimeDimensionStatisticDTO() = default ;
      TimeDimensionStatisticDTO(const TimeDimensionStatisticDTO &) = default ;
      TimeDimensionStatisticDTO(TimeDimensionStatisticDTO &&) = default ;
      TimeDimensionStatisticDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeDimensionStatisticDTO() = default ;
      TimeDimensionStatisticDTO& operator=(const TimeDimensionStatisticDTO &) = default ;
      TimeDimensionStatisticDTO& operator=(TimeDimensionStatisticDTO &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TimeDimensionStatisticItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TimeDimensionStatisticItems& obj) { 
          DARABONBA_PTR_TO_JSON(DataTime, dataTime_);
          DARABONBA_PTR_TO_JSON(StatisticDatas, statisticDatas_);
        };
        friend void from_json(const Darabonba::Json& j, TimeDimensionStatisticItems& obj) { 
          DARABONBA_PTR_FROM_JSON(DataTime, dataTime_);
          DARABONBA_PTR_FROM_JSON(StatisticDatas, statisticDatas_);
        };
        TimeDimensionStatisticItems() = default ;
        TimeDimensionStatisticItems(const TimeDimensionStatisticItems &) = default ;
        TimeDimensionStatisticItems(TimeDimensionStatisticItems &&) = default ;
        TimeDimensionStatisticItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TimeDimensionStatisticItems() = default ;
        TimeDimensionStatisticItems& operator=(const TimeDimensionStatisticItems &) = default ;
        TimeDimensionStatisticItems& operator=(TimeDimensionStatisticItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StatisticDatas : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StatisticDatas& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, StatisticDatas& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          StatisticDatas() = default ;
          StatisticDatas(const StatisticDatas &) = default ;
          StatisticDatas(StatisticDatas &&) = default ;
          StatisticDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StatisticDatas() = default ;
          StatisticDatas& operator=(const StatisticDatas &) = default ;
          StatisticDatas& operator=(StatisticDatas &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline StatisticDatas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
          inline StatisticDatas& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // Data type.
          shared_ptr<string> name_ {};
          // Quantity.
          shared_ptr<int32_t> value_ {};
        };

        virtual bool empty() const override { return this->dataTime_ == nullptr
        && this->statisticDatas_ == nullptr; };
        // dataTime Field Functions 
        bool hasDataTime() const { return this->dataTime_ != nullptr;};
        void deleteDataTime() { this->dataTime_ = nullptr;};
        inline int64_t getDataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, 0L) };
        inline TimeDimensionStatisticItems& setDataTime(int64_t dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


        // statisticDatas Field Functions 
        bool hasStatisticDatas() const { return this->statisticDatas_ != nullptr;};
        void deleteStatisticDatas() { this->statisticDatas_ = nullptr;};
        inline const vector<TimeDimensionStatisticItems::StatisticDatas> & getStatisticDatas() const { DARABONBA_PTR_GET_CONST(statisticDatas_, vector<TimeDimensionStatisticItems::StatisticDatas>) };
        inline vector<TimeDimensionStatisticItems::StatisticDatas> getStatisticDatas() { DARABONBA_PTR_GET(statisticDatas_, vector<TimeDimensionStatisticItems::StatisticDatas>) };
        inline TimeDimensionStatisticItems& setStatisticDatas(const vector<TimeDimensionStatisticItems::StatisticDatas> & statisticDatas) { DARABONBA_PTR_SET_VALUE(statisticDatas_, statisticDatas) };
        inline TimeDimensionStatisticItems& setStatisticDatas(vector<TimeDimensionStatisticItems::StatisticDatas> && statisticDatas) { DARABONBA_PTR_SET_RVALUE(statisticDatas_, statisticDatas) };


      protected:
        // Data time, in timestamp format.
        shared_ptr<int64_t> dataTime_ {};
        // List of statistical data.
        shared_ptr<vector<TimeDimensionStatisticItems::StatisticDatas>> statisticDatas_ {};
      };

      virtual bool empty() const override { return this->dates_ == nullptr
        && this->statisticType_ == nullptr && this->timeDimensionStatisticItems_ == nullptr; };
      // dates Field Functions 
      bool hasDates() const { return this->dates_ != nullptr;};
      void deleteDates() { this->dates_ = nullptr;};
      inline const vector<int64_t> & getDates() const { DARABONBA_PTR_GET_CONST(dates_, vector<int64_t>) };
      inline vector<int64_t> getDates() { DARABONBA_PTR_GET(dates_, vector<int64_t>) };
      inline TimeDimensionStatisticDTO& setDates(const vector<int64_t> & dates) { DARABONBA_PTR_SET_VALUE(dates_, dates) };
      inline TimeDimensionStatisticDTO& setDates(vector<int64_t> && dates) { DARABONBA_PTR_SET_RVALUE(dates_, dates) };


      // statisticType Field Functions 
      bool hasStatisticType() const { return this->statisticType_ != nullptr;};
      void deleteStatisticType() { this->statisticType_ = nullptr;};
      inline string getStatisticType() const { DARABONBA_PTR_GET_DEFAULT(statisticType_, "") };
      inline TimeDimensionStatisticDTO& setStatisticType(string statisticType) { DARABONBA_PTR_SET_VALUE(statisticType_, statisticType) };


      // timeDimensionStatisticItems Field Functions 
      bool hasTimeDimensionStatisticItems() const { return this->timeDimensionStatisticItems_ != nullptr;};
      void deleteTimeDimensionStatisticItems() { this->timeDimensionStatisticItems_ = nullptr;};
      inline const vector<TimeDimensionStatisticDTO::TimeDimensionStatisticItems> & getTimeDimensionStatisticItems() const { DARABONBA_PTR_GET_CONST(timeDimensionStatisticItems_, vector<TimeDimensionStatisticDTO::TimeDimensionStatisticItems>) };
      inline vector<TimeDimensionStatisticDTO::TimeDimensionStatisticItems> getTimeDimensionStatisticItems() { DARABONBA_PTR_GET(timeDimensionStatisticItems_, vector<TimeDimensionStatisticDTO::TimeDimensionStatisticItems>) };
      inline TimeDimensionStatisticDTO& setTimeDimensionStatisticItems(const vector<TimeDimensionStatisticDTO::TimeDimensionStatisticItems> & timeDimensionStatisticItems) { DARABONBA_PTR_SET_VALUE(timeDimensionStatisticItems_, timeDimensionStatisticItems) };
      inline TimeDimensionStatisticDTO& setTimeDimensionStatisticItems(vector<TimeDimensionStatisticDTO::TimeDimensionStatisticItems> && timeDimensionStatisticItems) { DARABONBA_PTR_SET_RVALUE(timeDimensionStatisticItems_, timeDimensionStatisticItems) };


    protected:
      // List of data time points.
      shared_ptr<vector<int64_t>> dates_ {};
      // Type of statistical data. Values:
      // - **CheckPassRate**: Check item pass rate.
      // - **AssetPassRate**: Asset pass rate.
      shared_ptr<string> statisticType_ {};
      // Time trend statistical data results.
      shared_ptr<vector<TimeDimensionStatisticDTO::TimeDimensionStatisticItems>> timeDimensionStatisticItems_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->timeDimensionStatisticDTO_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckTimeDimensionStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeDimensionStatisticDTO Field Functions 
    bool hasTimeDimensionStatisticDTO() const { return this->timeDimensionStatisticDTO_ != nullptr;};
    void deleteTimeDimensionStatisticDTO() { this->timeDimensionStatisticDTO_ = nullptr;};
    inline const GetCheckTimeDimensionStatisticResponseBody::TimeDimensionStatisticDTO & getTimeDimensionStatisticDTO() const { DARABONBA_PTR_GET_CONST(timeDimensionStatisticDTO_, GetCheckTimeDimensionStatisticResponseBody::TimeDimensionStatisticDTO) };
    inline GetCheckTimeDimensionStatisticResponseBody::TimeDimensionStatisticDTO getTimeDimensionStatisticDTO() { DARABONBA_PTR_GET(timeDimensionStatisticDTO_, GetCheckTimeDimensionStatisticResponseBody::TimeDimensionStatisticDTO) };
    inline GetCheckTimeDimensionStatisticResponseBody& setTimeDimensionStatisticDTO(const GetCheckTimeDimensionStatisticResponseBody::TimeDimensionStatisticDTO & timeDimensionStatisticDTO) { DARABONBA_PTR_SET_VALUE(timeDimensionStatisticDTO_, timeDimensionStatisticDTO) };
    inline GetCheckTimeDimensionStatisticResponseBody& setTimeDimensionStatisticDTO(GetCheckTimeDimensionStatisticResponseBody::TimeDimensionStatisticDTO && timeDimensionStatisticDTO) { DARABONBA_PTR_SET_RVALUE(timeDimensionStatisticDTO_, timeDimensionStatisticDTO) };


  protected:
    // The ID of the current request, a unique identifier generated by Alibaba Cloud for this request, which can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
    // List of time trend statistical data results.
    shared_ptr<GetCheckTimeDimensionStatisticResponseBody::TimeDimensionStatisticDTO> timeDimensionStatisticDTO_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
