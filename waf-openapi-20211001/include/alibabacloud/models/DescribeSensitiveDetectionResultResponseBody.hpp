// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEDETECTIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEDETECTIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveDetectionResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveDetectionResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveDetectionResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSensitiveDetectionResultResponseBody() = default ;
    DescribeSensitiveDetectionResultResponseBody(const DescribeSensitiveDetectionResultResponseBody &) = default ;
    DescribeSensitiveDetectionResultResponseBody(DescribeSensitiveDetectionResultResponseBody &&) = default ;
    DescribeSensitiveDetectionResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveDetectionResultResponseBody() = default ;
    DescribeSensitiveDetectionResultResponseBody& operator=(const DescribeSensitiveDetectionResultResponseBody &) = default ;
    DescribeSensitiveDetectionResultResponseBody& operator=(DescribeSensitiveDetectionResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Result, result_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(DetectionResult, detectionResult_);
          DARABONBA_PTR_TO_JSON(List, list_);
          DARABONBA_PTR_TO_JSON(Max, max_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(DetectionResult, detectionResult_);
          DARABONBA_PTR_FROM_JSON(List, list_);
          DARABONBA_PTR_FROM_JSON(Max, max_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Max : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Max& obj) { 
            DARABONBA_PTR_TO_JSON(InfoCount, infoCount_);
            DARABONBA_PTR_TO_JSON(OutboundCount, outboundCount_);
            DARABONBA_PTR_TO_JSON(SensitiveCode, sensitiveCode_);
          };
          friend void from_json(const Darabonba::Json& j, Max& obj) { 
            DARABONBA_PTR_FROM_JSON(InfoCount, infoCount_);
            DARABONBA_PTR_FROM_JSON(OutboundCount, outboundCount_);
            DARABONBA_PTR_FROM_JSON(SensitiveCode, sensitiveCode_);
          };
          Max() = default ;
          Max(const Max &) = default ;
          Max(Max &&) = default ;
          Max(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Max() = default ;
          Max& operator=(const Max &) = default ;
          Max& operator=(Max &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->infoCount_ == nullptr
        && this->outboundCount_ == nullptr && this->sensitiveCode_ == nullptr; };
          // infoCount Field Functions 
          bool hasInfoCount() const { return this->infoCount_ != nullptr;};
          void deleteInfoCount() { this->infoCount_ = nullptr;};
          inline int64_t getInfoCount() const { DARABONBA_PTR_GET_DEFAULT(infoCount_, 0L) };
          inline Max& setInfoCount(int64_t infoCount) { DARABONBA_PTR_SET_VALUE(infoCount_, infoCount) };


          // outboundCount Field Functions 
          bool hasOutboundCount() const { return this->outboundCount_ != nullptr;};
          void deleteOutboundCount() { this->outboundCount_ = nullptr;};
          inline int64_t getOutboundCount() const { DARABONBA_PTR_GET_DEFAULT(outboundCount_, 0L) };
          inline Max& setOutboundCount(int64_t outboundCount) { DARABONBA_PTR_SET_VALUE(outboundCount_, outboundCount) };


          // sensitiveCode Field Functions 
          bool hasSensitiveCode() const { return this->sensitiveCode_ != nullptr;};
          void deleteSensitiveCode() { this->sensitiveCode_ = nullptr;};
          inline int64_t getSensitiveCode() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCode_, 0L) };
          inline Max& setSensitiveCode(int64_t sensitiveCode) { DARABONBA_PTR_SET_VALUE(sensitiveCode_, sensitiveCode) };


        protected:
          // The number of sensitive personal information records that are of the most frequent sensitive data type.
          shared_ptr<int64_t> infoCount_ {};
          // The number of sensitive personal information records that are of the most frequent sensitive data type and are involved in cross-border data transfer.
          shared_ptr<int64_t> outboundCount_ {};
          // The most frequent sensitive data type.
          shared_ptr<int64_t> sensitiveCode_ {};
        };

        class List : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const List& obj) { 
            DARABONBA_PTR_TO_JSON(InfoCount, infoCount_);
            DARABONBA_PTR_TO_JSON(OutboundCount, outboundCount_);
            DARABONBA_PTR_TO_JSON(SensitiveCode, sensitiveCode_);
          };
          friend void from_json(const Darabonba::Json& j, List& obj) { 
            DARABONBA_PTR_FROM_JSON(InfoCount, infoCount_);
            DARABONBA_PTR_FROM_JSON(OutboundCount, outboundCount_);
            DARABONBA_PTR_FROM_JSON(SensitiveCode, sensitiveCode_);
          };
          List() = default ;
          List(const List &) = default ;
          List(List &&) = default ;
          List(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~List() = default ;
          List& operator=(const List &) = default ;
          List& operator=(List &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->infoCount_ == nullptr
        && this->outboundCount_ == nullptr && this->sensitiveCode_ == nullptr; };
          // infoCount Field Functions 
          bool hasInfoCount() const { return this->infoCount_ != nullptr;};
          void deleteInfoCount() { this->infoCount_ = nullptr;};
          inline int64_t getInfoCount() const { DARABONBA_PTR_GET_DEFAULT(infoCount_, 0L) };
          inline List& setInfoCount(int64_t infoCount) { DARABONBA_PTR_SET_VALUE(infoCount_, infoCount) };


          // outboundCount Field Functions 
          bool hasOutboundCount() const { return this->outboundCount_ != nullptr;};
          void deleteOutboundCount() { this->outboundCount_ = nullptr;};
          inline int64_t getOutboundCount() const { DARABONBA_PTR_GET_DEFAULT(outboundCount_, 0L) };
          inline List& setOutboundCount(int64_t outboundCount) { DARABONBA_PTR_SET_VALUE(outboundCount_, outboundCount) };


          // sensitiveCode Field Functions 
          bool hasSensitiveCode() const { return this->sensitiveCode_ != nullptr;};
          void deleteSensitiveCode() { this->sensitiveCode_ = nullptr;};
          inline int64_t getSensitiveCode() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCode_, 0L) };
          inline List& setSensitiveCode(int64_t sensitiveCode) { DARABONBA_PTR_SET_VALUE(sensitiveCode_, sensitiveCode) };


        protected:
          // The number of personal information records.
          shared_ptr<int64_t> infoCount_ {};
          // The number of sensitive personal information records that are involved in cross-border data transfer.
          shared_ptr<int64_t> outboundCount_ {};
          // The sensitive data type.
          shared_ptr<int64_t> sensitiveCode_ {};
        };

        virtual bool empty() const override { return this->detectionResult_ == nullptr
        && this->list_ == nullptr && this->max_ == nullptr; };
        // detectionResult Field Functions 
        bool hasDetectionResult() const { return this->detectionResult_ != nullptr;};
        void deleteDetectionResult() { this->detectionResult_ = nullptr;};
        inline string getDetectionResult() const { DARABONBA_PTR_GET_DEFAULT(detectionResult_, "") };
        inline Result& setDetectionResult(string detectionResult) { DARABONBA_PTR_SET_VALUE(detectionResult_, detectionResult) };


        // list Field Functions 
        bool hasList() const { return this->list_ != nullptr;};
        void deleteList() { this->list_ = nullptr;};
        inline const vector<Result::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Result::List>) };
        inline vector<Result::List> getList() { DARABONBA_PTR_GET(list_, vector<Result::List>) };
        inline Result& setList(const vector<Result::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
        inline Result& setList(vector<Result::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


        // max Field Functions 
        bool hasMax() const { return this->max_ != nullptr;};
        void deleteMax() { this->max_ = nullptr;};
        inline const Result::Max & getMax() const { DARABONBA_PTR_GET_CONST(max_, Result::Max) };
        inline Result::Max getMax() { DARABONBA_PTR_GET(max_, Result::Max) };
        inline Result& setMax(const Result::Max & max) { DARABONBA_PTR_SET_VALUE(max_, max) };
        inline Result& setMax(Result::Max && max) { DARABONBA_PTR_SET_RVALUE(max_, max) };


      protected:
        // The compliance check results. Valid values:
        // 
        // *   **report**: Risks exist in cross-border data transfer.
        // *   **none**: No risks exist in cross-border data transfer.
        shared_ptr<string> detectionResult_ {};
        // The sensitive information check results by sensitive data type.
        shared_ptr<vector<Result::List>> list_ {};
        // The maximum values in the statistics of sensitive data types.
        shared_ptr<Result::Max> max_ {};
      };

      virtual bool empty() const override { return this->result_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    protected:
      // The compliance checks.
      shared_ptr<vector<Data::Result>> result_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSensitiveDetectionResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSensitiveDetectionResultResponseBody::Data) };
    inline DescribeSensitiveDetectionResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSensitiveDetectionResultResponseBody::Data) };
    inline DescribeSensitiveDetectionResultResponseBody& setData(const DescribeSensitiveDetectionResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSensitiveDetectionResultResponseBody& setData(DescribeSensitiveDetectionResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSensitiveDetectionResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The compliance check results.
    shared_ptr<DescribeSensitiveDetectionResultResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
