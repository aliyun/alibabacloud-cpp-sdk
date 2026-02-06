// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODTRANSCODEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODTRANSCODEDATARESPONSEBODY_HPP_
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
  class DescribeVodTranscodeDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodTranscodeDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeData, transcodeData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodTranscodeDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeData, transcodeData_);
    };
    DescribeVodTranscodeDataResponseBody() = default ;
    DescribeVodTranscodeDataResponseBody(const DescribeVodTranscodeDataResponseBody &) = default ;
    DescribeVodTranscodeDataResponseBody(DescribeVodTranscodeDataResponseBody &&) = default ;
    DescribeVodTranscodeDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodTranscodeDataResponseBody() = default ;
    DescribeVodTranscodeDataResponseBody& operator=(const DescribeVodTranscodeDataResponseBody &) = default ;
    DescribeVodTranscodeDataResponseBody& operator=(DescribeVodTranscodeDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscodeData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeData& obj) { 
        DARABONBA_PTR_TO_JSON(TranscodeDataItem, transcodeDataItem_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeData& obj) { 
        DARABONBA_PTR_FROM_JSON(TranscodeDataItem, transcodeDataItem_);
      };
      TranscodeData() = default ;
      TranscodeData(const TranscodeData &) = default ;
      TranscodeData(TranscodeData &&) = default ;
      TranscodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeData() = default ;
      TranscodeData& operator=(const TranscodeData &) = default ;
      TranscodeData& operator=(TranscodeData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TranscodeDataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TranscodeDataItem& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, TranscodeDataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        TranscodeDataItem() = default ;
        TranscodeDataItem(const TranscodeDataItem &) = default ;
        TranscodeDataItem(TranscodeDataItem &&) = default ;
        TranscodeDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TranscodeDataItem() = default ;
        TranscodeDataItem& operator=(const TranscodeDataItem &) = default ;
        TranscodeDataItem& operator=(TranscodeDataItem &&) = default ;
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
            // The transcoding specification. Valid values:
            // 
            // *   **Audio**: audio transcoding
            // *   **Segmentation**: container format conversion
            // *   **H264.LD, H264.SD, H264.HD, H264.2K, H264.4K, and more**
            shared_ptr<string> name_ {};
            // The transcoding duration. Unit: seconds.
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
        inline const TranscodeDataItem::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TranscodeDataItem::Data) };
        inline TranscodeDataItem::Data getData() { DARABONBA_PTR_GET(data_, TranscodeDataItem::Data) };
        inline TranscodeDataItem& setData(const TranscodeDataItem::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline TranscodeDataItem& setData(TranscodeDataItem::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline TranscodeDataItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The statistics on transcoding of different specifications.
        shared_ptr<TranscodeDataItem::Data> data_ {};
        // The timestamp of the returned data. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->transcodeDataItem_ == nullptr; };
      // transcodeDataItem Field Functions 
      bool hasTranscodeDataItem() const { return this->transcodeDataItem_ != nullptr;};
      void deleteTranscodeDataItem() { this->transcodeDataItem_ = nullptr;};
      inline const vector<TranscodeData::TranscodeDataItem> & getTranscodeDataItem() const { DARABONBA_PTR_GET_CONST(transcodeDataItem_, vector<TranscodeData::TranscodeDataItem>) };
      inline vector<TranscodeData::TranscodeDataItem> getTranscodeDataItem() { DARABONBA_PTR_GET(transcodeDataItem_, vector<TranscodeData::TranscodeDataItem>) };
      inline TranscodeData& setTranscodeDataItem(const vector<TranscodeData::TranscodeDataItem> & transcodeDataItem) { DARABONBA_PTR_SET_VALUE(transcodeDataItem_, transcodeDataItem) };
      inline TranscodeData& setTranscodeDataItem(vector<TranscodeData::TranscodeDataItem> && transcodeDataItem) { DARABONBA_PTR_SET_RVALUE(transcodeDataItem_, transcodeDataItem) };


    protected:
      shared_ptr<vector<TranscodeData::TranscodeDataItem>> transcodeDataItem_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->requestId_ == nullptr && this->transcodeData_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVodTranscodeDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodTranscodeDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeData Field Functions 
    bool hasTranscodeData() const { return this->transcodeData_ != nullptr;};
    void deleteTranscodeData() { this->transcodeData_ = nullptr;};
    inline const DescribeVodTranscodeDataResponseBody::TranscodeData & getTranscodeData() const { DARABONBA_PTR_GET_CONST(transcodeData_, DescribeVodTranscodeDataResponseBody::TranscodeData) };
    inline DescribeVodTranscodeDataResponseBody::TranscodeData getTranscodeData() { DARABONBA_PTR_GET(transcodeData_, DescribeVodTranscodeDataResponseBody::TranscodeData) };
    inline DescribeVodTranscodeDataResponseBody& setTranscodeData(const DescribeVodTranscodeDataResponseBody::TranscodeData & transcodeData) { DARABONBA_PTR_SET_VALUE(transcodeData_, transcodeData) };
    inline DescribeVodTranscodeDataResponseBody& setTranscodeData(DescribeVodTranscodeDataResponseBody::TranscodeData && transcodeData) { DARABONBA_PTR_SET_RVALUE(transcodeData_, transcodeData) };


  protected:
    // The interval at which the data was queried. Valid values:
    // 
    // *   **hour**
    // *   **day**
    shared_ptr<string> dataInterval_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The transcoding statistics returned.
    shared_ptr<DescribeVodTranscodeDataResponseBody::TranscodeData> transcodeData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
