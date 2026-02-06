// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODAIDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODAIDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodAIDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodAIDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIData, AIData_);
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodAIDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIData, AIData_);
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodAIDataResponseBody() = default ;
    DescribeVodAIDataResponseBody(const DescribeVodAIDataResponseBody &) = default ;
    DescribeVodAIDataResponseBody(DescribeVodAIDataResponseBody &&) = default ;
    DescribeVodAIDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodAIDataResponseBody() = default ;
    DescribeVodAIDataResponseBody& operator=(const DescribeVodAIDataResponseBody &) = default ;
    DescribeVodAIDataResponseBody& operator=(DescribeVodAIDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AIData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AIData& obj) { 
        DARABONBA_PTR_TO_JSON(AIDataItem, AIDataItem_);
      };
      friend void from_json(const Darabonba::Json& j, AIData& obj) { 
        DARABONBA_PTR_FROM_JSON(AIDataItem, AIDataItem_);
      };
      AIData() = default ;
      AIData(const AIData &) = default ;
      AIData(AIData &&) = default ;
      AIData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AIData() = default ;
      AIData& operator=(const AIData &) = default ;
      AIData& operator=(AIData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AIDataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AIDataItem& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, AIDataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        AIDataItem() = default ;
        AIDataItem(const AIDataItem &) = default ;
        AIDataItem(AIDataItem &&) = default ;
        AIDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AIDataItem() = default ;
        AIDataItem& operator=(const AIDataItem &) = default ;
        AIDataItem& operator=(AIDataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Data : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Data& obj) { 
            DARABONBA_PTR_TO_JSON(DataItem, dataItem_);
          };
          friend void from_json(const Darabonba::Json& j, Data& obj) { 
            DARABONBA_PTR_FROM_JSON(DataItem, dataItem_);
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
          class DataItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            DataItem() = default ;
            DataItem(const DataItem &) = default ;
            DataItem(DataItem &&) = default ;
            DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DataItem() = default ;
            DataItem& operator=(const DataItem &) = default ;
            DataItem& operator=(DataItem &&) = default ;
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
            inline DataItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline DataItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The type of video AI. Valid values:
            // 
            // *   **AIVideoCensor**: automated review
            // *   **AIVideoFPShot**: media fingerprinting
            // *   **AIVideoTag**: smart tagging
            shared_ptr<string> name_ {};
            // The processing duration. Unit: seconds.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->dataItem_ == nullptr; };
          // dataItem Field Functions 
          bool hasDataItem() const { return this->dataItem_ != nullptr;};
          void deleteDataItem() { this->dataItem_ = nullptr;};
          inline const vector<Data::DataItem> & getDataItem() const { DARABONBA_PTR_GET_CONST(dataItem_, vector<Data::DataItem>) };
          inline vector<Data::DataItem> getDataItem() { DARABONBA_PTR_GET(dataItem_, vector<Data::DataItem>) };
          inline Data& setDataItem(const vector<Data::DataItem> & dataItem) { DARABONBA_PTR_SET_VALUE(dataItem_, dataItem) };
          inline Data& setDataItem(vector<Data::DataItem> && dataItem) { DARABONBA_PTR_SET_RVALUE(dataItem_, dataItem) };


        protected:
          shared_ptr<vector<Data::DataItem>> dataItem_ {};
        };

        virtual bool empty() const override { return this->data_ == nullptr
        && this->timeStamp_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const AIDataItem::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AIDataItem::Data) };
        inline AIDataItem::Data getData() { DARABONBA_PTR_GET(data_, AIDataItem::Data) };
        inline AIDataItem& setData(const AIDataItem::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline AIDataItem& setData(AIDataItem::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline AIDataItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The statistics on video AI of each type.
        shared_ptr<AIDataItem::Data> data_ {};
        // The timestamp of the returned data. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->AIDataItem_ == nullptr; };
      // AIDataItem Field Functions 
      bool hasAIDataItem() const { return this->AIDataItem_ != nullptr;};
      void deleteAIDataItem() { this->AIDataItem_ = nullptr;};
      inline const vector<AIData::AIDataItem> & getAIDataItem() const { DARABONBA_PTR_GET_CONST(AIDataItem_, vector<AIData::AIDataItem>) };
      inline vector<AIData::AIDataItem> getAIDataItem() { DARABONBA_PTR_GET(AIDataItem_, vector<AIData::AIDataItem>) };
      inline AIData& setAIDataItem(const vector<AIData::AIDataItem> & aIDataItem) { DARABONBA_PTR_SET_VALUE(AIDataItem_, aIDataItem) };
      inline AIData& setAIDataItem(vector<AIData::AIDataItem> && aIDataItem) { DARABONBA_PTR_SET_RVALUE(AIDataItem_, aIDataItem) };


    protected:
      shared_ptr<vector<AIData::AIDataItem>> AIDataItem_ {};
    };

    virtual bool empty() const override { return this->AIData_ == nullptr
        && this->dataInterval_ == nullptr && this->requestId_ == nullptr; };
    // AIData Field Functions 
    bool hasAIData() const { return this->AIData_ != nullptr;};
    void deleteAIData() { this->AIData_ = nullptr;};
    inline const DescribeVodAIDataResponseBody::AIData & getAIData() const { DARABONBA_PTR_GET_CONST(AIData_, DescribeVodAIDataResponseBody::AIData) };
    inline DescribeVodAIDataResponseBody::AIData getAIData() { DARABONBA_PTR_GET(AIData_, DescribeVodAIDataResponseBody::AIData) };
    inline DescribeVodAIDataResponseBody& setAIData(const DescribeVodAIDataResponseBody::AIData & aIData) { DARABONBA_PTR_SET_VALUE(AIData_, aIData) };
    inline DescribeVodAIDataResponseBody& setAIData(DescribeVodAIDataResponseBody::AIData && aIData) { DARABONBA_PTR_SET_RVALUE(AIData_, aIData) };


    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVodAIDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodAIDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics on video AI.
    shared_ptr<DescribeVodAIDataResponseBody::AIData> AIData_ {};
    // The time granularity at which the data was queried. Valid values:
    // 
    // *   **hour**
    // *   **day**
    shared_ptr<string> dataInterval_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
