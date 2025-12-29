// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENTERPRISEVOCANALYSISTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETENTERPRISEVOCANALYSISTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetEnterpriseVocAnalysisTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnterpriseVocAnalysisTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnterpriseVocAnalysisTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetEnterpriseVocAnalysisTaskResponseBody() = default ;
    GetEnterpriseVocAnalysisTaskResponseBody(const GetEnterpriseVocAnalysisTaskResponseBody &) = default ;
    GetEnterpriseVocAnalysisTaskResponseBody(GetEnterpriseVocAnalysisTaskResponseBody &&) = default ;
    GetEnterpriseVocAnalysisTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnterpriseVocAnalysisTaskResponseBody() = default ;
    GetEnterpriseVocAnalysisTaskResponseBody& operator=(const GetEnterpriseVocAnalysisTaskResponseBody &) = default ;
    GetEnterpriseVocAnalysisTaskResponseBody& operator=(GetEnterpriseVocAnalysisTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(StatisticsOverview, statisticsOverview_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(StatisticsOverview, statisticsOverview_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
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
      class Usage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Usage& obj) { 
          DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
          DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
        };
        friend void from_json(const Darabonba::Json& j, Usage& obj) { 
          DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
          DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
        };
        Usage() = default ;
        Usage(const Usage &) = default ;
        Usage(Usage &&) = default ;
        Usage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Usage() = default ;
        Usage& operator=(const Usage &) = default ;
        Usage& operator=(Usage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->inputTokens_ == nullptr
        && this->outputTokens_ == nullptr; };
        // inputTokens Field Functions 
        bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
        void deleteInputTokens() { this->inputTokens_ = nullptr;};
        inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
        inline Usage& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


        // outputTokens Field Functions 
        bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
        void deleteOutputTokens() { this->outputTokens_ = nullptr;};
        inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
        inline Usage& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


      protected:
        shared_ptr<int64_t> inputTokens_ {};
        shared_ptr<int64_t> outputTokens_ {};
      };

      class StatisticsOverview : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StatisticsOverview& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(FilterDimensionStatistics, filterDimensionStatistics_);
          DARABONBA_PTR_TO_JSON(TagDimensionStatistics, tagDimensionStatistics_);
        };
        friend void from_json(const Darabonba::Json& j, StatisticsOverview& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(FilterDimensionStatistics, filterDimensionStatistics_);
          DARABONBA_PTR_FROM_JSON(TagDimensionStatistics, tagDimensionStatistics_);
        };
        StatisticsOverview() = default ;
        StatisticsOverview(const StatisticsOverview &) = default ;
        StatisticsOverview(StatisticsOverview &&) = default ;
        StatisticsOverview(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StatisticsOverview() = default ;
        StatisticsOverview& operator=(const StatisticsOverview &) = default ;
        StatisticsOverview& operator=(StatisticsOverview &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TagDimensionStatistics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TagDimensionStatistics& obj) { 
            DARABONBA_PTR_TO_JSON(TagValueCountStatistic, tagValueCountStatistic_);
          };
          friend void from_json(const Darabonba::Json& j, TagDimensionStatistics& obj) { 
            DARABONBA_PTR_FROM_JSON(TagValueCountStatistic, tagValueCountStatistic_);
          };
          TagDimensionStatistics() = default ;
          TagDimensionStatistics(const TagDimensionStatistics &) = default ;
          TagDimensionStatistics(TagDimensionStatistics &&) = default ;
          TagDimensionStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TagDimensionStatistics() = default ;
          TagDimensionStatistics& operator=(const TagDimensionStatistics &) = default ;
          TagDimensionStatistics& operator=(TagDimensionStatistics &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TagValueCountStatistic : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagValueCountStatistic& obj) { 
              DARABONBA_PTR_TO_JSON(TagName, tagName_);
              DARABONBA_PTR_TO_JSON(TagTaskType, tagTaskType_);
              DARABONBA_PTR_TO_JSON(ValueCount, valueCount_);
            };
            friend void from_json(const Darabonba::Json& j, TagValueCountStatistic& obj) { 
              DARABONBA_PTR_FROM_JSON(TagName, tagName_);
              DARABONBA_PTR_FROM_JSON(TagTaskType, tagTaskType_);
              DARABONBA_PTR_FROM_JSON(ValueCount, valueCount_);
            };
            TagValueCountStatistic() = default ;
            TagValueCountStatistic(const TagValueCountStatistic &) = default ;
            TagValueCountStatistic(TagValueCountStatistic &&) = default ;
            TagValueCountStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagValueCountStatistic() = default ;
            TagValueCountStatistic& operator=(const TagValueCountStatistic &) = default ;
            TagValueCountStatistic& operator=(TagValueCountStatistic &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->tagName_ == nullptr
        && this->tagTaskType_ == nullptr && this->valueCount_ == nullptr; };
            // tagName Field Functions 
            bool hasTagName() const { return this->tagName_ != nullptr;};
            void deleteTagName() { this->tagName_ = nullptr;};
            inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
            inline TagValueCountStatistic& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


            // tagTaskType Field Functions 
            bool hasTagTaskType() const { return this->tagTaskType_ != nullptr;};
            void deleteTagTaskType() { this->tagTaskType_ = nullptr;};
            inline string getTagTaskType() const { DARABONBA_PTR_GET_DEFAULT(tagTaskType_, "") };
            inline TagValueCountStatistic& setTagTaskType(string tagTaskType) { DARABONBA_PTR_SET_VALUE(tagTaskType_, tagTaskType) };


            // valueCount Field Functions 
            bool hasValueCount() const { return this->valueCount_ != nullptr;};
            void deleteValueCount() { this->valueCount_ = nullptr;};
            inline int32_t getValueCount() const { DARABONBA_PTR_GET_DEFAULT(valueCount_, 0) };
            inline TagValueCountStatistic& setValueCount(int32_t valueCount) { DARABONBA_PTR_SET_VALUE(valueCount_, valueCount) };


          protected:
            shared_ptr<string> tagName_ {};
            shared_ptr<string> tagTaskType_ {};
            shared_ptr<int32_t> valueCount_ {};
          };

          virtual bool empty() const override { return this->tagValueCountStatistic_ == nullptr; };
          // tagValueCountStatistic Field Functions 
          bool hasTagValueCountStatistic() const { return this->tagValueCountStatistic_ != nullptr;};
          void deleteTagValueCountStatistic() { this->tagValueCountStatistic_ = nullptr;};
          inline const vector<TagDimensionStatistics::TagValueCountStatistic> & getTagValueCountStatistic() const { DARABONBA_PTR_GET_CONST(tagValueCountStatistic_, vector<TagDimensionStatistics::TagValueCountStatistic>) };
          inline vector<TagDimensionStatistics::TagValueCountStatistic> getTagValueCountStatistic() { DARABONBA_PTR_GET(tagValueCountStatistic_, vector<TagDimensionStatistics::TagValueCountStatistic>) };
          inline TagDimensionStatistics& setTagValueCountStatistic(const vector<TagDimensionStatistics::TagValueCountStatistic> & tagValueCountStatistic) { DARABONBA_PTR_SET_VALUE(tagValueCountStatistic_, tagValueCountStatistic) };
          inline TagDimensionStatistics& setTagValueCountStatistic(vector<TagDimensionStatistics::TagValueCountStatistic> && tagValueCountStatistic) { DARABONBA_PTR_SET_RVALUE(tagValueCountStatistic_, tagValueCountStatistic) };


        protected:
          shared_ptr<vector<TagDimensionStatistics::TagValueCountStatistic>> tagValueCountStatistic_ {};
        };

        class FilterDimensionStatistics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FilterDimensionStatistics& obj) { 
            DARABONBA_PTR_TO_JSON(TagValueCountStatistic, tagValueCountStatistic_);
          };
          friend void from_json(const Darabonba::Json& j, FilterDimensionStatistics& obj) { 
            DARABONBA_PTR_FROM_JSON(TagValueCountStatistic, tagValueCountStatistic_);
          };
          FilterDimensionStatistics() = default ;
          FilterDimensionStatistics(const FilterDimensionStatistics &) = default ;
          FilterDimensionStatistics(FilterDimensionStatistics &&) = default ;
          FilterDimensionStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FilterDimensionStatistics() = default ;
          FilterDimensionStatistics& operator=(const FilterDimensionStatistics &) = default ;
          FilterDimensionStatistics& operator=(FilterDimensionStatistics &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TagValueCountStatistic : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagValueCountStatistic& obj) { 
              DARABONBA_PTR_TO_JSON(TagName, tagName_);
              DARABONBA_PTR_TO_JSON(TagTaskType, tagTaskType_);
              DARABONBA_PTR_TO_JSON(ValueCount, valueCount_);
            };
            friend void from_json(const Darabonba::Json& j, TagValueCountStatistic& obj) { 
              DARABONBA_PTR_FROM_JSON(TagName, tagName_);
              DARABONBA_PTR_FROM_JSON(TagTaskType, tagTaskType_);
              DARABONBA_PTR_FROM_JSON(ValueCount, valueCount_);
            };
            TagValueCountStatistic() = default ;
            TagValueCountStatistic(const TagValueCountStatistic &) = default ;
            TagValueCountStatistic(TagValueCountStatistic &&) = default ;
            TagValueCountStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagValueCountStatistic() = default ;
            TagValueCountStatistic& operator=(const TagValueCountStatistic &) = default ;
            TagValueCountStatistic& operator=(TagValueCountStatistic &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->tagName_ == nullptr
        && this->tagTaskType_ == nullptr && this->valueCount_ == nullptr; };
            // tagName Field Functions 
            bool hasTagName() const { return this->tagName_ != nullptr;};
            void deleteTagName() { this->tagName_ = nullptr;};
            inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
            inline TagValueCountStatistic& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


            // tagTaskType Field Functions 
            bool hasTagTaskType() const { return this->tagTaskType_ != nullptr;};
            void deleteTagTaskType() { this->tagTaskType_ = nullptr;};
            inline string getTagTaskType() const { DARABONBA_PTR_GET_DEFAULT(tagTaskType_, "") };
            inline TagValueCountStatistic& setTagTaskType(string tagTaskType) { DARABONBA_PTR_SET_VALUE(tagTaskType_, tagTaskType) };


            // valueCount Field Functions 
            bool hasValueCount() const { return this->valueCount_ != nullptr;};
            void deleteValueCount() { this->valueCount_ = nullptr;};
            inline int32_t getValueCount() const { DARABONBA_PTR_GET_DEFAULT(valueCount_, 0) };
            inline TagValueCountStatistic& setValueCount(int32_t valueCount) { DARABONBA_PTR_SET_VALUE(valueCount_, valueCount) };


          protected:
            shared_ptr<string> tagName_ {};
            shared_ptr<string> tagTaskType_ {};
            shared_ptr<int32_t> valueCount_ {};
          };

          virtual bool empty() const override { return this->tagValueCountStatistic_ == nullptr; };
          // tagValueCountStatistic Field Functions 
          bool hasTagValueCountStatistic() const { return this->tagValueCountStatistic_ != nullptr;};
          void deleteTagValueCountStatistic() { this->tagValueCountStatistic_ = nullptr;};
          inline const vector<FilterDimensionStatistics::TagValueCountStatistic> & getTagValueCountStatistic() const { DARABONBA_PTR_GET_CONST(tagValueCountStatistic_, vector<FilterDimensionStatistics::TagValueCountStatistic>) };
          inline vector<FilterDimensionStatistics::TagValueCountStatistic> getTagValueCountStatistic() { DARABONBA_PTR_GET(tagValueCountStatistic_, vector<FilterDimensionStatistics::TagValueCountStatistic>) };
          inline FilterDimensionStatistics& setTagValueCountStatistic(const vector<FilterDimensionStatistics::TagValueCountStatistic> & tagValueCountStatistic) { DARABONBA_PTR_SET_VALUE(tagValueCountStatistic_, tagValueCountStatistic) };
          inline FilterDimensionStatistics& setTagValueCountStatistic(vector<FilterDimensionStatistics::TagValueCountStatistic> && tagValueCountStatistic) { DARABONBA_PTR_SET_RVALUE(tagValueCountStatistic_, tagValueCountStatistic) };


        protected:
          shared_ptr<vector<FilterDimensionStatistics::TagValueCountStatistic>> tagValueCountStatistic_ {};
        };

        virtual bool empty() const override { return this->count_ == nullptr
        && this->filterDimensionStatistics_ == nullptr && this->tagDimensionStatistics_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline StatisticsOverview& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // filterDimensionStatistics Field Functions 
        bool hasFilterDimensionStatistics() const { return this->filterDimensionStatistics_ != nullptr;};
        void deleteFilterDimensionStatistics() { this->filterDimensionStatistics_ = nullptr;};
        inline const StatisticsOverview::FilterDimensionStatistics & getFilterDimensionStatistics() const { DARABONBA_PTR_GET_CONST(filterDimensionStatistics_, StatisticsOverview::FilterDimensionStatistics) };
        inline StatisticsOverview::FilterDimensionStatistics getFilterDimensionStatistics() { DARABONBA_PTR_GET(filterDimensionStatistics_, StatisticsOverview::FilterDimensionStatistics) };
        inline StatisticsOverview& setFilterDimensionStatistics(const StatisticsOverview::FilterDimensionStatistics & filterDimensionStatistics) { DARABONBA_PTR_SET_VALUE(filterDimensionStatistics_, filterDimensionStatistics) };
        inline StatisticsOverview& setFilterDimensionStatistics(StatisticsOverview::FilterDimensionStatistics && filterDimensionStatistics) { DARABONBA_PTR_SET_RVALUE(filterDimensionStatistics_, filterDimensionStatistics) };


        // tagDimensionStatistics Field Functions 
        bool hasTagDimensionStatistics() const { return this->tagDimensionStatistics_ != nullptr;};
        void deleteTagDimensionStatistics() { this->tagDimensionStatistics_ = nullptr;};
        inline const StatisticsOverview::TagDimensionStatistics & getTagDimensionStatistics() const { DARABONBA_PTR_GET_CONST(tagDimensionStatistics_, StatisticsOverview::TagDimensionStatistics) };
        inline StatisticsOverview::TagDimensionStatistics getTagDimensionStatistics() { DARABONBA_PTR_GET(tagDimensionStatistics_, StatisticsOverview::TagDimensionStatistics) };
        inline StatisticsOverview& setTagDimensionStatistics(const StatisticsOverview::TagDimensionStatistics & tagDimensionStatistics) { DARABONBA_PTR_SET_VALUE(tagDimensionStatistics_, tagDimensionStatistics) };
        inline StatisticsOverview& setTagDimensionStatistics(StatisticsOverview::TagDimensionStatistics && tagDimensionStatistics) { DARABONBA_PTR_SET_RVALUE(tagDimensionStatistics_, tagDimensionStatistics) };


      protected:
        shared_ptr<int32_t> count_ {};
        shared_ptr<StatisticsOverview::FilterDimensionStatistics> filterDimensionStatistics_ {};
        shared_ptr<StatisticsOverview::TagDimensionStatistics> tagDimensionStatistics_ {};
      };

      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->statisticsOverview_ == nullptr && this->status_ == nullptr && this->usage_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // statisticsOverview Field Functions 
      bool hasStatisticsOverview() const { return this->statisticsOverview_ != nullptr;};
      void deleteStatisticsOverview() { this->statisticsOverview_ = nullptr;};
      inline const Data::StatisticsOverview & getStatisticsOverview() const { DARABONBA_PTR_GET_CONST(statisticsOverview_, Data::StatisticsOverview) };
      inline Data::StatisticsOverview getStatisticsOverview() { DARABONBA_PTR_GET(statisticsOverview_, Data::StatisticsOverview) };
      inline Data& setStatisticsOverview(const Data::StatisticsOverview & statisticsOverview) { DARABONBA_PTR_SET_VALUE(statisticsOverview_, statisticsOverview) };
      inline Data& setStatisticsOverview(Data::StatisticsOverview && statisticsOverview) { DARABONBA_PTR_SET_RVALUE(statisticsOverview_, statisticsOverview) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline const Data::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, Data::Usage) };
      inline Data::Usage getUsage() { DARABONBA_PTR_GET(usage_, Data::Usage) };
      inline Data& setUsage(const Data::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
      inline Data& setUsage(Data::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    protected:
      shared_ptr<string> errorMessage_ {};
      shared_ptr<Data::StatisticsOverview> statisticsOverview_ {};
      shared_ptr<string> status_ {};
      shared_ptr<Data::Usage> usage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetEnterpriseVocAnalysisTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetEnterpriseVocAnalysisTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetEnterpriseVocAnalysisTaskResponseBody::Data) };
    inline GetEnterpriseVocAnalysisTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetEnterpriseVocAnalysisTaskResponseBody::Data) };
    inline GetEnterpriseVocAnalysisTaskResponseBody& setData(const GetEnterpriseVocAnalysisTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetEnterpriseVocAnalysisTaskResponseBody& setData(GetEnterpriseVocAnalysisTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetEnterpriseVocAnalysisTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetEnterpriseVocAnalysisTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEnterpriseVocAnalysisTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetEnterpriseVocAnalysisTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetEnterpriseVocAnalysisTaskResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
