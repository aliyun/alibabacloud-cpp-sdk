// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPBPSPEAKOFLINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPBPSPEAKOFLINERESPONSEBODY_HPP_
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
  class DescribeUpBpsPeakOfLineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpBpsPeakOfLineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeUpBpsPeakOfLines, describeUpBpsPeakOfLines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpBpsPeakOfLineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeUpBpsPeakOfLines, describeUpBpsPeakOfLines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUpBpsPeakOfLineResponseBody() = default ;
    DescribeUpBpsPeakOfLineResponseBody(const DescribeUpBpsPeakOfLineResponseBody &) = default ;
    DescribeUpBpsPeakOfLineResponseBody(DescribeUpBpsPeakOfLineResponseBody &&) = default ;
    DescribeUpBpsPeakOfLineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpBpsPeakOfLineResponseBody() = default ;
    DescribeUpBpsPeakOfLineResponseBody& operator=(const DescribeUpBpsPeakOfLineResponseBody &) = default ;
    DescribeUpBpsPeakOfLineResponseBody& operator=(DescribeUpBpsPeakOfLineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DescribeUpBpsPeakOfLines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DescribeUpBpsPeakOfLines& obj) { 
        DARABONBA_PTR_TO_JSON(DescribeUpBpsPeakOfLine, describeUpBpsPeakOfLine_);
      };
      friend void from_json(const Darabonba::Json& j, DescribeUpBpsPeakOfLines& obj) { 
        DARABONBA_PTR_FROM_JSON(DescribeUpBpsPeakOfLine, describeUpBpsPeakOfLine_);
      };
      DescribeUpBpsPeakOfLines() = default ;
      DescribeUpBpsPeakOfLines(const DescribeUpBpsPeakOfLines &) = default ;
      DescribeUpBpsPeakOfLines(DescribeUpBpsPeakOfLines &&) = default ;
      DescribeUpBpsPeakOfLines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DescribeUpBpsPeakOfLines() = default ;
      DescribeUpBpsPeakOfLines& operator=(const DescribeUpBpsPeakOfLines &) = default ;
      DescribeUpBpsPeakOfLines& operator=(DescribeUpBpsPeakOfLines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DescribeUpBpsPeakOfLine : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DescribeUpBpsPeakOfLine& obj) { 
          DARABONBA_PTR_TO_JSON(BandWidth, bandWidth_);
          DARABONBA_PTR_TO_JSON(PeakTime, peakTime_);
          DARABONBA_PTR_TO_JSON(QueryTime, queryTime_);
          DARABONBA_PTR_TO_JSON(StatName, statName_);
        };
        friend void from_json(const Darabonba::Json& j, DescribeUpBpsPeakOfLine& obj) { 
          DARABONBA_PTR_FROM_JSON(BandWidth, bandWidth_);
          DARABONBA_PTR_FROM_JSON(PeakTime, peakTime_);
          DARABONBA_PTR_FROM_JSON(QueryTime, queryTime_);
          DARABONBA_PTR_FROM_JSON(StatName, statName_);
        };
        DescribeUpBpsPeakOfLine() = default ;
        DescribeUpBpsPeakOfLine(const DescribeUpBpsPeakOfLine &) = default ;
        DescribeUpBpsPeakOfLine(DescribeUpBpsPeakOfLine &&) = default ;
        DescribeUpBpsPeakOfLine(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DescribeUpBpsPeakOfLine() = default ;
        DescribeUpBpsPeakOfLine& operator=(const DescribeUpBpsPeakOfLine &) = default ;
        DescribeUpBpsPeakOfLine& operator=(DescribeUpBpsPeakOfLine &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bandWidth_ == nullptr
        && this->peakTime_ == nullptr && this->queryTime_ == nullptr && this->statName_ == nullptr; };
        // bandWidth Field Functions 
        bool hasBandWidth() const { return this->bandWidth_ != nullptr;};
        void deleteBandWidth() { this->bandWidth_ = nullptr;};
        inline float getBandWidth() const { DARABONBA_PTR_GET_DEFAULT(bandWidth_, 0.0) };
        inline DescribeUpBpsPeakOfLine& setBandWidth(float bandWidth) { DARABONBA_PTR_SET_VALUE(bandWidth_, bandWidth) };


        // peakTime Field Functions 
        bool hasPeakTime() const { return this->peakTime_ != nullptr;};
        void deletePeakTime() { this->peakTime_ = nullptr;};
        inline string getPeakTime() const { DARABONBA_PTR_GET_DEFAULT(peakTime_, "") };
        inline DescribeUpBpsPeakOfLine& setPeakTime(string peakTime) { DARABONBA_PTR_SET_VALUE(peakTime_, peakTime) };


        // queryTime Field Functions 
        bool hasQueryTime() const { return this->queryTime_ != nullptr;};
        void deleteQueryTime() { this->queryTime_ = nullptr;};
        inline string getQueryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, "") };
        inline DescribeUpBpsPeakOfLine& setQueryTime(string queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


        // statName Field Functions 
        bool hasStatName() const { return this->statName_ != nullptr;};
        void deleteStatName() { this->statName_ = nullptr;};
        inline string getStatName() const { DARABONBA_PTR_GET_DEFAULT(statName_, "") };
        inline DescribeUpBpsPeakOfLine& setStatName(string statName) { DARABONBA_PTR_SET_VALUE(statName_, statName) };


      protected:
        shared_ptr<float> bandWidth_ {};
        shared_ptr<string> peakTime_ {};
        shared_ptr<string> queryTime_ {};
        shared_ptr<string> statName_ {};
      };

      virtual bool empty() const override { return this->describeUpBpsPeakOfLine_ == nullptr; };
      // describeUpBpsPeakOfLine Field Functions 
      bool hasDescribeUpBpsPeakOfLine() const { return this->describeUpBpsPeakOfLine_ != nullptr;};
      void deleteDescribeUpBpsPeakOfLine() { this->describeUpBpsPeakOfLine_ = nullptr;};
      inline const vector<DescribeUpBpsPeakOfLines::DescribeUpBpsPeakOfLine> & getDescribeUpBpsPeakOfLine() const { DARABONBA_PTR_GET_CONST(describeUpBpsPeakOfLine_, vector<DescribeUpBpsPeakOfLines::DescribeUpBpsPeakOfLine>) };
      inline vector<DescribeUpBpsPeakOfLines::DescribeUpBpsPeakOfLine> getDescribeUpBpsPeakOfLine() { DARABONBA_PTR_GET(describeUpBpsPeakOfLine_, vector<DescribeUpBpsPeakOfLines::DescribeUpBpsPeakOfLine>) };
      inline DescribeUpBpsPeakOfLines& setDescribeUpBpsPeakOfLine(const vector<DescribeUpBpsPeakOfLines::DescribeUpBpsPeakOfLine> & describeUpBpsPeakOfLine) { DARABONBA_PTR_SET_VALUE(describeUpBpsPeakOfLine_, describeUpBpsPeakOfLine) };
      inline DescribeUpBpsPeakOfLines& setDescribeUpBpsPeakOfLine(vector<DescribeUpBpsPeakOfLines::DescribeUpBpsPeakOfLine> && describeUpBpsPeakOfLine) { DARABONBA_PTR_SET_RVALUE(describeUpBpsPeakOfLine_, describeUpBpsPeakOfLine) };


    protected:
      shared_ptr<vector<DescribeUpBpsPeakOfLines::DescribeUpBpsPeakOfLine>> describeUpBpsPeakOfLine_ {};
    };

    virtual bool empty() const override { return this->describeUpBpsPeakOfLines_ == nullptr
        && this->requestId_ == nullptr; };
    // describeUpBpsPeakOfLines Field Functions 
    bool hasDescribeUpBpsPeakOfLines() const { return this->describeUpBpsPeakOfLines_ != nullptr;};
    void deleteDescribeUpBpsPeakOfLines() { this->describeUpBpsPeakOfLines_ = nullptr;};
    inline const DescribeUpBpsPeakOfLineResponseBody::DescribeUpBpsPeakOfLines & getDescribeUpBpsPeakOfLines() const { DARABONBA_PTR_GET_CONST(describeUpBpsPeakOfLines_, DescribeUpBpsPeakOfLineResponseBody::DescribeUpBpsPeakOfLines) };
    inline DescribeUpBpsPeakOfLineResponseBody::DescribeUpBpsPeakOfLines getDescribeUpBpsPeakOfLines() { DARABONBA_PTR_GET(describeUpBpsPeakOfLines_, DescribeUpBpsPeakOfLineResponseBody::DescribeUpBpsPeakOfLines) };
    inline DescribeUpBpsPeakOfLineResponseBody& setDescribeUpBpsPeakOfLines(const DescribeUpBpsPeakOfLineResponseBody::DescribeUpBpsPeakOfLines & describeUpBpsPeakOfLines) { DARABONBA_PTR_SET_VALUE(describeUpBpsPeakOfLines_, describeUpBpsPeakOfLines) };
    inline DescribeUpBpsPeakOfLineResponseBody& setDescribeUpBpsPeakOfLines(DescribeUpBpsPeakOfLineResponseBody::DescribeUpBpsPeakOfLines && describeUpBpsPeakOfLines) { DARABONBA_PTR_SET_RVALUE(describeUpBpsPeakOfLines_, describeUpBpsPeakOfLines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUpBpsPeakOfLineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeUpBpsPeakOfLineResponseBody::DescribeUpBpsPeakOfLines> describeUpBpsPeakOfLines_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
