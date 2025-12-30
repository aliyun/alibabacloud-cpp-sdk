// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUPPORTLINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUPPORTLINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeSupportLinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSupportLinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordLines, recordLines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSupportLinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordLines, recordLines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSupportLinesResponseBody() = default ;
    DescribeSupportLinesResponseBody(const DescribeSupportLinesResponseBody &) = default ;
    DescribeSupportLinesResponseBody(DescribeSupportLinesResponseBody &&) = default ;
    DescribeSupportLinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSupportLinesResponseBody() = default ;
    DescribeSupportLinesResponseBody& operator=(const DescribeSupportLinesResponseBody &) = default ;
    DescribeSupportLinesResponseBody& operator=(DescribeSupportLinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordLines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordLines& obj) { 
        DARABONBA_PTR_TO_JSON(RecordLine, recordLine_);
      };
      friend void from_json(const Darabonba::Json& j, RecordLines& obj) { 
        DARABONBA_PTR_FROM_JSON(RecordLine, recordLine_);
      };
      RecordLines() = default ;
      RecordLines(const RecordLines &) = default ;
      RecordLines(RecordLines &&) = default ;
      RecordLines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordLines() = default ;
      RecordLines& operator=(const RecordLines &) = default ;
      RecordLines& operator=(RecordLines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecordLine : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordLine& obj) { 
          DARABONBA_PTR_TO_JSON(FatherCode, fatherCode_);
          DARABONBA_PTR_TO_JSON(LineCode, lineCode_);
          DARABONBA_PTR_TO_JSON(LineDisplayName, lineDisplayName_);
          DARABONBA_PTR_TO_JSON(LineName, lineName_);
        };
        friend void from_json(const Darabonba::Json& j, RecordLine& obj) { 
          DARABONBA_PTR_FROM_JSON(FatherCode, fatherCode_);
          DARABONBA_PTR_FROM_JSON(LineCode, lineCode_);
          DARABONBA_PTR_FROM_JSON(LineDisplayName, lineDisplayName_);
          DARABONBA_PTR_FROM_JSON(LineName, lineName_);
        };
        RecordLine() = default ;
        RecordLine(const RecordLine &) = default ;
        RecordLine(RecordLine &&) = default ;
        RecordLine(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordLine() = default ;
        RecordLine& operator=(const RecordLine &) = default ;
        RecordLine& operator=(RecordLine &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fatherCode_ == nullptr
        && this->lineCode_ == nullptr && this->lineDisplayName_ == nullptr && this->lineName_ == nullptr; };
        // fatherCode Field Functions 
        bool hasFatherCode() const { return this->fatherCode_ != nullptr;};
        void deleteFatherCode() { this->fatherCode_ = nullptr;};
        inline string getFatherCode() const { DARABONBA_PTR_GET_DEFAULT(fatherCode_, "") };
        inline RecordLine& setFatherCode(string fatherCode) { DARABONBA_PTR_SET_VALUE(fatherCode_, fatherCode) };


        // lineCode Field Functions 
        bool hasLineCode() const { return this->lineCode_ != nullptr;};
        void deleteLineCode() { this->lineCode_ = nullptr;};
        inline string getLineCode() const { DARABONBA_PTR_GET_DEFAULT(lineCode_, "") };
        inline RecordLine& setLineCode(string lineCode) { DARABONBA_PTR_SET_VALUE(lineCode_, lineCode) };


        // lineDisplayName Field Functions 
        bool hasLineDisplayName() const { return this->lineDisplayName_ != nullptr;};
        void deleteLineDisplayName() { this->lineDisplayName_ = nullptr;};
        inline string getLineDisplayName() const { DARABONBA_PTR_GET_DEFAULT(lineDisplayName_, "") };
        inline RecordLine& setLineDisplayName(string lineDisplayName) { DARABONBA_PTR_SET_VALUE(lineDisplayName_, lineDisplayName) };


        // lineName Field Functions 
        bool hasLineName() const { return this->lineName_ != nullptr;};
        void deleteLineName() { this->lineName_ = nullptr;};
        inline string getLineName() const { DARABONBA_PTR_GET_DEFAULT(lineName_, "") };
        inline RecordLine& setLineName(string lineName) { DARABONBA_PTR_SET_VALUE(lineName_, lineName) };


      protected:
        // The code of the parent line. Currently, no data is returned.
        shared_ptr<string> fatherCode_ {};
        // The code of the child line.
        shared_ptr<string> lineCode_ {};
        // The display name of the line.
        shared_ptr<string> lineDisplayName_ {};
        // The name of the child line.
        shared_ptr<string> lineName_ {};
      };

      virtual bool empty() const override { return this->recordLine_ == nullptr; };
      // recordLine Field Functions 
      bool hasRecordLine() const { return this->recordLine_ != nullptr;};
      void deleteRecordLine() { this->recordLine_ = nullptr;};
      inline const vector<RecordLines::RecordLine> & getRecordLine() const { DARABONBA_PTR_GET_CONST(recordLine_, vector<RecordLines::RecordLine>) };
      inline vector<RecordLines::RecordLine> getRecordLine() { DARABONBA_PTR_GET(recordLine_, vector<RecordLines::RecordLine>) };
      inline RecordLines& setRecordLine(const vector<RecordLines::RecordLine> & recordLine) { DARABONBA_PTR_SET_VALUE(recordLine_, recordLine) };
      inline RecordLines& setRecordLine(vector<RecordLines::RecordLine> && recordLine) { DARABONBA_PTR_SET_RVALUE(recordLine_, recordLine) };


    protected:
      shared_ptr<vector<RecordLines::RecordLine>> recordLine_ {};
    };

    virtual bool empty() const override { return this->recordLines_ == nullptr
        && this->requestId_ == nullptr; };
    // recordLines Field Functions 
    bool hasRecordLines() const { return this->recordLines_ != nullptr;};
    void deleteRecordLines() { this->recordLines_ = nullptr;};
    inline const DescribeSupportLinesResponseBody::RecordLines & getRecordLines() const { DARABONBA_PTR_GET_CONST(recordLines_, DescribeSupportLinesResponseBody::RecordLines) };
    inline DescribeSupportLinesResponseBody::RecordLines getRecordLines() { DARABONBA_PTR_GET(recordLines_, DescribeSupportLinesResponseBody::RecordLines) };
    inline DescribeSupportLinesResponseBody& setRecordLines(const DescribeSupportLinesResponseBody::RecordLines & recordLines) { DARABONBA_PTR_SET_VALUE(recordLines_, recordLines) };
    inline DescribeSupportLinesResponseBody& setRecordLines(DescribeSupportLinesResponseBody::RecordLines && recordLines) { DARABONBA_PTR_SET_RVALUE(recordLines_, recordLines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSupportLinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Alibaba Cloud DNS lines.
    shared_ptr<DescribeSupportLinesResponseBody::RecordLines> recordLines_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
