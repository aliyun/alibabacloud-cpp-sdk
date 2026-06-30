// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELOPERATORUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELOPERATORUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeModelOperatorUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelOperatorUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Keys, keys_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelOperatorUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeModelOperatorUsageResponseBody() = default ;
    DescribeModelOperatorUsageResponseBody(const DescribeModelOperatorUsageResponseBody &) = default ;
    DescribeModelOperatorUsageResponseBody(DescribeModelOperatorUsageResponseBody &&) = default ;
    DescribeModelOperatorUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelOperatorUsageResponseBody() = default ;
    DescribeModelOperatorUsageResponseBody& operator=(const DescribeModelOperatorUsageResponseBody &) = default ;
    DescribeModelOperatorUsageResponseBody& operator=(DescribeModelOperatorUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Keys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Keys& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Series, series_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Keys& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Series, series_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
      };
      Keys() = default ;
      Keys(const Keys &) = default ;
      Keys(Keys &&) = default ;
      Keys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Keys() = default ;
      Keys& operator=(const Keys &) = default ;
      Keys& operator=(Keys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Series : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Series& obj) { 
          DARABONBA_PTR_TO_JSON(ApiKeyId, apiKeyId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Series& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiKeyId, apiKeyId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        Series() = default ;
        Series(const Series &) = default ;
        Series(Series &&) = default ;
        Series(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Series() = default ;
        Series& operator=(const Series &) = default ;
        Series& operator=(Series &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Values : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Values& obj) { 
            DARABONBA_PTR_TO_JSON(Point, point_);
          };
          friend void from_json(const Darabonba::Json& j, Values& obj) { 
            DARABONBA_PTR_FROM_JSON(Point, point_);
          };
          Values() = default ;
          Values(const Values &) = default ;
          Values(Values &&) = default ;
          Values(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Values() = default ;
          Values& operator=(const Values &) = default ;
          Values& operator=(Values &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->point_ == nullptr; };
          // point Field Functions 
          bool hasPoint() const { return this->point_ != nullptr;};
          void deletePoint() { this->point_ = nullptr;};
          inline const vector<string> & getPoint() const { DARABONBA_PTR_GET_CONST(point_, vector<string>) };
          inline vector<string> getPoint() { DARABONBA_PTR_GET(point_, vector<string>) };
          inline Values& setPoint(const vector<string> & point) { DARABONBA_PTR_SET_VALUE(point_, point) };
          inline Values& setPoint(vector<string> && point) { DARABONBA_PTR_SET_RVALUE(point_, point) };


        protected:
          shared_ptr<vector<string>> point_ {};
        };

        virtual bool empty() const override { return this->apiKeyId_ == nullptr
        && this->name_ == nullptr && this->role_ == nullptr && this->values_ == nullptr; };
        // apiKeyId Field Functions 
        bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
        void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
        inline int32_t getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, 0) };
        inline Series& setApiKeyId(int32_t apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Series& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Series& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<Series::Values> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<Series::Values>) };
        inline vector<Series::Values> getValues() { DARABONBA_PTR_GET(values_, vector<Series::Values>) };
        inline Series& setValues(const vector<Series::Values> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline Series& setValues(vector<Series::Values> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        shared_ptr<int32_t> apiKeyId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> role_ {};
        shared_ptr<vector<Series::Values>> values_ {};
      };

      virtual bool empty() const override { return this->name_ == nullptr
        && this->series_ == nullptr && this->unit_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Keys& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // series Field Functions 
      bool hasSeries() const { return this->series_ != nullptr;};
      void deleteSeries() { this->series_ = nullptr;};
      inline const vector<Keys::Series> & getSeries() const { DARABONBA_PTR_GET_CONST(series_, vector<Keys::Series>) };
      inline vector<Keys::Series> getSeries() { DARABONBA_PTR_GET(series_, vector<Keys::Series>) };
      inline Keys& setSeries(const vector<Keys::Series> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
      inline Keys& setSeries(vector<Keys::Series> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Keys& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<vector<Keys::Series>> series_ {};
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->keys_ == nullptr && this->period_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeModelOperatorUsageResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const vector<DescribeModelOperatorUsageResponseBody::Keys> & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, vector<DescribeModelOperatorUsageResponseBody::Keys>) };
    inline vector<DescribeModelOperatorUsageResponseBody::Keys> getKeys() { DARABONBA_PTR_GET(keys_, vector<DescribeModelOperatorUsageResponseBody::Keys>) };
    inline DescribeModelOperatorUsageResponseBody& setKeys(const vector<DescribeModelOperatorUsageResponseBody::Keys> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline DescribeModelOperatorUsageResponseBody& setKeys(vector<DescribeModelOperatorUsageResponseBody::Keys> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeModelOperatorUsageResponseBody& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModelOperatorUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeModelOperatorUsageResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> endTime_ {};
    shared_ptr<vector<DescribeModelOperatorUsageResponseBody::Keys>> keys_ {};
    shared_ptr<int32_t> period_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
