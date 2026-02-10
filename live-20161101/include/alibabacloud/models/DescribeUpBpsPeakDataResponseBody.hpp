// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPBPSPEAKDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPBPSPEAKDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeUpBpsPeakDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpBpsPeakDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeUpPeakTraffics, describeUpPeakTraffics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpBpsPeakDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeUpPeakTraffics, describeUpPeakTraffics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUpBpsPeakDataResponseBody() = default ;
    DescribeUpBpsPeakDataResponseBody(const DescribeUpBpsPeakDataResponseBody &) = default ;
    DescribeUpBpsPeakDataResponseBody(DescribeUpBpsPeakDataResponseBody &&) = default ;
    DescribeUpBpsPeakDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpBpsPeakDataResponseBody() = default ;
    DescribeUpBpsPeakDataResponseBody& operator=(const DescribeUpBpsPeakDataResponseBody &) = default ;
    DescribeUpBpsPeakDataResponseBody& operator=(DescribeUpBpsPeakDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DescribeUpPeakTraffics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DescribeUpPeakTraffics& obj) { 
        DARABONBA_PTR_TO_JSON(DescribeUpPeakTraffic, describeUpPeakTraffic_);
      };
      friend void from_json(const Darabonba::Json& j, DescribeUpPeakTraffics& obj) { 
        DARABONBA_PTR_FROM_JSON(DescribeUpPeakTraffic, describeUpPeakTraffic_);
      };
      DescribeUpPeakTraffics() = default ;
      DescribeUpPeakTraffics(const DescribeUpPeakTraffics &) = default ;
      DescribeUpPeakTraffics(DescribeUpPeakTraffics &&) = default ;
      DescribeUpPeakTraffics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DescribeUpPeakTraffics() = default ;
      DescribeUpPeakTraffics& operator=(const DescribeUpPeakTraffics &) = default ;
      DescribeUpPeakTraffics& operator=(DescribeUpPeakTraffics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DescribeUpPeakTraffic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DescribeUpPeakTraffic& obj) { 
          DARABONBA_PTR_TO_JSON(BandWidth, bandWidth_);
          DARABONBA_PTR_TO_JSON(PeakTime, peakTime_);
          DARABONBA_PTR_TO_JSON(QueryTime, queryTime_);
          DARABONBA_PTR_TO_JSON(StatName, statName_);
        };
        friend void from_json(const Darabonba::Json& j, DescribeUpPeakTraffic& obj) { 
          DARABONBA_PTR_FROM_JSON(BandWidth, bandWidth_);
          DARABONBA_PTR_FROM_JSON(PeakTime, peakTime_);
          DARABONBA_PTR_FROM_JSON(QueryTime, queryTime_);
          DARABONBA_PTR_FROM_JSON(StatName, statName_);
        };
        DescribeUpPeakTraffic() = default ;
        DescribeUpPeakTraffic(const DescribeUpPeakTraffic &) = default ;
        DescribeUpPeakTraffic(DescribeUpPeakTraffic &&) = default ;
        DescribeUpPeakTraffic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DescribeUpPeakTraffic() = default ;
        DescribeUpPeakTraffic& operator=(const DescribeUpPeakTraffic &) = default ;
        DescribeUpPeakTraffic& operator=(DescribeUpPeakTraffic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bandWidth_ == nullptr
        && this->peakTime_ == nullptr && this->queryTime_ == nullptr && this->statName_ == nullptr; };
        // bandWidth Field Functions 
        bool hasBandWidth() const { return this->bandWidth_ != nullptr;};
        void deleteBandWidth() { this->bandWidth_ = nullptr;};
        inline string getBandWidth() const { DARABONBA_PTR_GET_DEFAULT(bandWidth_, "") };
        inline DescribeUpPeakTraffic& setBandWidth(string bandWidth) { DARABONBA_PTR_SET_VALUE(bandWidth_, bandWidth) };


        // peakTime Field Functions 
        bool hasPeakTime() const { return this->peakTime_ != nullptr;};
        void deletePeakTime() { this->peakTime_ = nullptr;};
        inline string getPeakTime() const { DARABONBA_PTR_GET_DEFAULT(peakTime_, "") };
        inline DescribeUpPeakTraffic& setPeakTime(string peakTime) { DARABONBA_PTR_SET_VALUE(peakTime_, peakTime) };


        // queryTime Field Functions 
        bool hasQueryTime() const { return this->queryTime_ != nullptr;};
        void deleteQueryTime() { this->queryTime_ = nullptr;};
        inline string getQueryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, "") };
        inline DescribeUpPeakTraffic& setQueryTime(string queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


        // statName Field Functions 
        bool hasStatName() const { return this->statName_ != nullptr;};
        void deleteStatName() { this->statName_ = nullptr;};
        inline string getStatName() const { DARABONBA_PTR_GET_DEFAULT(statName_, "") };
        inline DescribeUpPeakTraffic& setStatName(string statName) { DARABONBA_PTR_SET_VALUE(statName_, statName) };


      protected:
        shared_ptr<string> bandWidth_ {};
        shared_ptr<string> peakTime_ {};
        shared_ptr<string> queryTime_ {};
        shared_ptr<string> statName_ {};
      };

      virtual bool empty() const override { return this->describeUpPeakTraffic_ == nullptr; };
      // describeUpPeakTraffic Field Functions 
      bool hasDescribeUpPeakTraffic() const { return this->describeUpPeakTraffic_ != nullptr;};
      void deleteDescribeUpPeakTraffic() { this->describeUpPeakTraffic_ = nullptr;};
      inline const vector<DescribeUpPeakTraffics::DescribeUpPeakTraffic> & getDescribeUpPeakTraffic() const { DARABONBA_PTR_GET_CONST(describeUpPeakTraffic_, vector<DescribeUpPeakTraffics::DescribeUpPeakTraffic>) };
      inline vector<DescribeUpPeakTraffics::DescribeUpPeakTraffic> getDescribeUpPeakTraffic() { DARABONBA_PTR_GET(describeUpPeakTraffic_, vector<DescribeUpPeakTraffics::DescribeUpPeakTraffic>) };
      inline DescribeUpPeakTraffics& setDescribeUpPeakTraffic(const vector<DescribeUpPeakTraffics::DescribeUpPeakTraffic> & describeUpPeakTraffic) { DARABONBA_PTR_SET_VALUE(describeUpPeakTraffic_, describeUpPeakTraffic) };
      inline DescribeUpPeakTraffics& setDescribeUpPeakTraffic(vector<DescribeUpPeakTraffics::DescribeUpPeakTraffic> && describeUpPeakTraffic) { DARABONBA_PTR_SET_RVALUE(describeUpPeakTraffic_, describeUpPeakTraffic) };


    protected:
      shared_ptr<vector<DescribeUpPeakTraffics::DescribeUpPeakTraffic>> describeUpPeakTraffic_ {};
    };

    virtual bool empty() const override { return this->describeUpPeakTraffics_ == nullptr
        && this->requestId_ == nullptr; };
    // describeUpPeakTraffics Field Functions 
    bool hasDescribeUpPeakTraffics() const { return this->describeUpPeakTraffics_ != nullptr;};
    void deleteDescribeUpPeakTraffics() { this->describeUpPeakTraffics_ = nullptr;};
    inline const DescribeUpBpsPeakDataResponseBody::DescribeUpPeakTraffics & getDescribeUpPeakTraffics() const { DARABONBA_PTR_GET_CONST(describeUpPeakTraffics_, DescribeUpBpsPeakDataResponseBody::DescribeUpPeakTraffics) };
    inline DescribeUpBpsPeakDataResponseBody::DescribeUpPeakTraffics getDescribeUpPeakTraffics() { DARABONBA_PTR_GET(describeUpPeakTraffics_, DescribeUpBpsPeakDataResponseBody::DescribeUpPeakTraffics) };
    inline DescribeUpBpsPeakDataResponseBody& setDescribeUpPeakTraffics(const DescribeUpBpsPeakDataResponseBody::DescribeUpPeakTraffics & describeUpPeakTraffics) { DARABONBA_PTR_SET_VALUE(describeUpPeakTraffics_, describeUpPeakTraffics) };
    inline DescribeUpBpsPeakDataResponseBody& setDescribeUpPeakTraffics(DescribeUpBpsPeakDataResponseBody::DescribeUpPeakTraffics && describeUpPeakTraffics) { DARABONBA_PTR_SET_RVALUE(describeUpPeakTraffics_, describeUpPeakTraffics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUpBpsPeakDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeUpBpsPeakDataResponseBody::DescribeUpPeakTraffics> describeUpPeakTraffics_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
