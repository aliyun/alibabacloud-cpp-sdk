// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSTRENDGROUPOUTPUTTPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSTRENDGROUPOUTPUTTPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsTrendGroupOutputTpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsTrendGroupOutputTpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsTrendGroupOutputTpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsTrendGroupOutputTpsResponseBody() = default ;
    OnsTrendGroupOutputTpsResponseBody(const OnsTrendGroupOutputTpsResponseBody &) = default ;
    OnsTrendGroupOutputTpsResponseBody(OnsTrendGroupOutputTpsResponseBody &&) = default ;
    OnsTrendGroupOutputTpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsTrendGroupOutputTpsResponseBody() = default ;
    OnsTrendGroupOutputTpsResponseBody& operator=(const OnsTrendGroupOutputTpsResponseBody &) = default ;
    OnsTrendGroupOutputTpsResponseBody& operator=(OnsTrendGroupOutputTpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(XUnit, XUnit_);
        DARABONBA_PTR_TO_JSON(YUnit, YUnit_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Records, records_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(XUnit, XUnit_);
        DARABONBA_PTR_FROM_JSON(YUnit, YUnit_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(StatsDataDo, statsDataDo_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(StatsDataDo, statsDataDo_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StatsDataDo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StatsDataDo& obj) { 
            DARABONBA_PTR_TO_JSON(X, x_);
            DARABONBA_PTR_TO_JSON(Y, y_);
          };
          friend void from_json(const Darabonba::Json& j, StatsDataDo& obj) { 
            DARABONBA_PTR_FROM_JSON(X, x_);
            DARABONBA_PTR_FROM_JSON(Y, y_);
          };
          StatsDataDo() = default ;
          StatsDataDo(const StatsDataDo &) = default ;
          StatsDataDo(StatsDataDo &&) = default ;
          StatsDataDo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StatsDataDo() = default ;
          StatsDataDo& operator=(const StatsDataDo &) = default ;
          StatsDataDo& operator=(StatsDataDo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
          // x Field Functions 
          bool hasX() const { return this->x_ != nullptr;};
          void deleteX() { this->x_ = nullptr;};
          inline int64_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0L) };
          inline StatsDataDo& setX(int64_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


          // y Field Functions 
          bool hasY() const { return this->y_ != nullptr;};
          void deleteY() { this->y_ = nullptr;};
          inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
          inline StatsDataDo& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


        protected:
          shared_ptr<int64_t> x_ {};
          shared_ptr<float> y_ {};
        };

        virtual bool empty() const override { return this->statsDataDo_ == nullptr; };
        // statsDataDo Field Functions 
        bool hasStatsDataDo() const { return this->statsDataDo_ != nullptr;};
        void deleteStatsDataDo() { this->statsDataDo_ = nullptr;};
        inline const vector<Records::StatsDataDo> & getStatsDataDo() const { DARABONBA_PTR_GET_CONST(statsDataDo_, vector<Records::StatsDataDo>) };
        inline vector<Records::StatsDataDo> getStatsDataDo() { DARABONBA_PTR_GET(statsDataDo_, vector<Records::StatsDataDo>) };
        inline Records& setStatsDataDo(const vector<Records::StatsDataDo> & statsDataDo) { DARABONBA_PTR_SET_VALUE(statsDataDo_, statsDataDo) };
        inline Records& setStatsDataDo(vector<Records::StatsDataDo> && statsDataDo) { DARABONBA_PTR_SET_RVALUE(statsDataDo_, statsDataDo) };


      protected:
        shared_ptr<vector<Records::StatsDataDo>> statsDataDo_ {};
      };

      virtual bool empty() const override { return this->records_ == nullptr
        && this->title_ == nullptr && this->XUnit_ == nullptr && this->YUnit_ == nullptr; };
      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const Data::Records & getRecords() const { DARABONBA_PTR_GET_CONST(records_, Data::Records) };
      inline Data::Records getRecords() { DARABONBA_PTR_GET(records_, Data::Records) };
      inline Data& setRecords(const Data::Records & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Data& setRecords(Data::Records && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // XUnit Field Functions 
      bool hasXUnit() const { return this->XUnit_ != nullptr;};
      void deleteXUnit() { this->XUnit_ = nullptr;};
      inline string getXUnit() const { DARABONBA_PTR_GET_DEFAULT(XUnit_, "") };
      inline Data& setXUnit(string XUnit) { DARABONBA_PTR_SET_VALUE(XUnit_, XUnit) };


      // YUnit Field Functions 
      bool hasYUnit() const { return this->YUnit_ != nullptr;};
      void deleteYUnit() { this->YUnit_ = nullptr;};
      inline string getYUnit() const { DARABONBA_PTR_GET_DEFAULT(YUnit_, "") };
      inline Data& setYUnit(string YUnit) { DARABONBA_PTR_SET_VALUE(YUnit_, YUnit) };


    protected:
      shared_ptr<Data::Records> records_ {};
      // The name of the table.
      shared_ptr<string> title_ {};
      // The unit of the timestamp.
      shared_ptr<string> XUnit_ {};
      // The total number of messages.
      shared_ptr<string> YUnit_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OnsTrendGroupOutputTpsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OnsTrendGroupOutputTpsResponseBody::Data) };
    inline OnsTrendGroupOutputTpsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OnsTrendGroupOutputTpsResponseBody::Data) };
    inline OnsTrendGroupOutputTpsResponseBody& setData(const OnsTrendGroupOutputTpsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OnsTrendGroupOutputTpsResponseBody& setData(OnsTrendGroupOutputTpsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsTrendGroupOutputTpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<OnsTrendGroupOutputTpsResponseBody::Data> data_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use the ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
