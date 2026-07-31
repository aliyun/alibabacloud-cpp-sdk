// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSPACESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSPACESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterSpaceSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterSpaceSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterSpaceSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterSpaceSummaryResponseBody() = default ;
    DescribeDBClusterSpaceSummaryResponseBody(const DescribeDBClusterSpaceSummaryResponseBody &) = default ;
    DescribeDBClusterSpaceSummaryResponseBody(DescribeDBClusterSpaceSummaryResponseBody &&) = default ;
    DescribeDBClusterSpaceSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterSpaceSummaryResponseBody() = default ;
    DescribeDBClusterSpaceSummaryResponseBody& operator=(const DescribeDBClusterSpaceSummaryResponseBody &) = default ;
    DescribeDBClusterSpaceSummaryResponseBody& operator=(DescribeDBClusterSpaceSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ColdData, coldData_);
        DARABONBA_PTR_TO_JSON(DataGrowth, dataGrowth_);
        DARABONBA_PTR_TO_JSON(HotData, hotData_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ColdData, coldData_);
        DARABONBA_PTR_FROM_JSON(DataGrowth, dataGrowth_);
        DARABONBA_PTR_FROM_JSON(HotData, hotData_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class HotData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotData& obj) { 
          DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
          DARABONBA_PTR_TO_JSON(IndexSize, indexSize_);
          DARABONBA_PTR_TO_JSON(OtherSize, otherSize_);
          DARABONBA_PTR_TO_JSON(PrimaryKeyIndexSize, primaryKeyIndexSize_);
          DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
        };
        friend void from_json(const Darabonba::Json& j, HotData& obj) { 
          DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
          DARABONBA_PTR_FROM_JSON(IndexSize, indexSize_);
          DARABONBA_PTR_FROM_JSON(OtherSize, otherSize_);
          DARABONBA_PTR_FROM_JSON(PrimaryKeyIndexSize, primaryKeyIndexSize_);
          DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
        };
        HotData() = default ;
        HotData(const HotData &) = default ;
        HotData(HotData &&) = default ;
        HotData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotData() = default ;
        HotData& operator=(const HotData &) = default ;
        HotData& operator=(HotData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataSize_ == nullptr
        && this->indexSize_ == nullptr && this->otherSize_ == nullptr && this->primaryKeyIndexSize_ == nullptr && this->totalSize_ == nullptr; };
        // dataSize Field Functions 
        bool hasDataSize() const { return this->dataSize_ != nullptr;};
        void deleteDataSize() { this->dataSize_ = nullptr;};
        inline int64_t getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
        inline HotData& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


        // indexSize Field Functions 
        bool hasIndexSize() const { return this->indexSize_ != nullptr;};
        void deleteIndexSize() { this->indexSize_ = nullptr;};
        inline int64_t getIndexSize() const { DARABONBA_PTR_GET_DEFAULT(indexSize_, 0L) };
        inline HotData& setIndexSize(int64_t indexSize) { DARABONBA_PTR_SET_VALUE(indexSize_, indexSize) };


        // otherSize Field Functions 
        bool hasOtherSize() const { return this->otherSize_ != nullptr;};
        void deleteOtherSize() { this->otherSize_ = nullptr;};
        inline int64_t getOtherSize() const { DARABONBA_PTR_GET_DEFAULT(otherSize_, 0L) };
        inline HotData& setOtherSize(int64_t otherSize) { DARABONBA_PTR_SET_VALUE(otherSize_, otherSize) };


        // primaryKeyIndexSize Field Functions 
        bool hasPrimaryKeyIndexSize() const { return this->primaryKeyIndexSize_ != nullptr;};
        void deletePrimaryKeyIndexSize() { this->primaryKeyIndexSize_ = nullptr;};
        inline int64_t getPrimaryKeyIndexSize() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyIndexSize_, 0L) };
        inline HotData& setPrimaryKeyIndexSize(int64_t primaryKeyIndexSize) { DARABONBA_PTR_SET_VALUE(primaryKeyIndexSize_, primaryKeyIndexSize) };


        // totalSize Field Functions 
        bool hasTotalSize() const { return this->totalSize_ != nullptr;};
        void deleteTotalSize() { this->totalSize_ = nullptr;};
        inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
        inline HotData& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


      protected:
        // The data size of table records. Unit: bytes.
        shared_ptr<int64_t> dataSize_ {};
        // The data size of regular indexes. Unit: bytes.
        shared_ptr<int64_t> indexSize_ {};
        // The data size of other data. Unit: bytes.
        shared_ptr<int64_t> otherSize_ {};
        // The data size of primary key indexes. Unit: bytes.
        shared_ptr<int64_t> primaryKeyIndexSize_ {};
        // The hot data size. Unit: bytes.
        // 
        // >  Formula: Hot data size = Data size of table records + Data size of regular indexes + Data size of primary key indexes + Data size of other data.
        shared_ptr<int64_t> totalSize_ {};
      };

      class DataGrowth : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataGrowth& obj) { 
          DARABONBA_PTR_TO_JSON(DayGrowth, dayGrowth_);
          DARABONBA_PTR_TO_JSON(WeekGrowth, weekGrowth_);
        };
        friend void from_json(const Darabonba::Json& j, DataGrowth& obj) { 
          DARABONBA_PTR_FROM_JSON(DayGrowth, dayGrowth_);
          DARABONBA_PTR_FROM_JSON(WeekGrowth, weekGrowth_);
        };
        DataGrowth() = default ;
        DataGrowth(const DataGrowth &) = default ;
        DataGrowth(DataGrowth &&) = default ;
        DataGrowth(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataGrowth() = default ;
        DataGrowth& operator=(const DataGrowth &) = default ;
        DataGrowth& operator=(DataGrowth &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dayGrowth_ == nullptr
        && this->weekGrowth_ == nullptr; };
        // dayGrowth Field Functions 
        bool hasDayGrowth() const { return this->dayGrowth_ != nullptr;};
        void deleteDayGrowth() { this->dayGrowth_ = nullptr;};
        inline int64_t getDayGrowth() const { DARABONBA_PTR_GET_DEFAULT(dayGrowth_, 0L) };
        inline DataGrowth& setDayGrowth(int64_t dayGrowth) { DARABONBA_PTR_SET_VALUE(dayGrowth_, dayGrowth) };


        // weekGrowth Field Functions 
        bool hasWeekGrowth() const { return this->weekGrowth_ != nullptr;};
        void deleteWeekGrowth() { this->weekGrowth_ = nullptr;};
        inline int64_t getWeekGrowth() const { DARABONBA_PTR_GET_DEFAULT(weekGrowth_, 0L) };
        inline DataGrowth& setWeekGrowth(int64_t weekGrowth) { DARABONBA_PTR_SET_VALUE(weekGrowth_, weekGrowth) };


      protected:
        // The data growth within the last day. Unit: bytes.
        // 
        // >  Formula: Data growth within the last day = Current data size - Data size one day ago.
        shared_ptr<int64_t> dayGrowth_ {};
        // The daily data growth within the last seven days. Unit: bytes.
        // 
        // >  Formula: Daily data growth within the last seven days = (Current data size - Data size seven days ago)/7.
        shared_ptr<int64_t> weekGrowth_ {};
      };

      class ColdData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ColdData& obj) { 
          DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
          DARABONBA_PTR_TO_JSON(IndexSize, indexSize_);
          DARABONBA_PTR_TO_JSON(OtherSize, otherSize_);
          DARABONBA_PTR_TO_JSON(PrimaryKeyIndexSize, primaryKeyIndexSize_);
          DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
        };
        friend void from_json(const Darabonba::Json& j, ColdData& obj) { 
          DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
          DARABONBA_PTR_FROM_JSON(IndexSize, indexSize_);
          DARABONBA_PTR_FROM_JSON(OtherSize, otherSize_);
          DARABONBA_PTR_FROM_JSON(PrimaryKeyIndexSize, primaryKeyIndexSize_);
          DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
        };
        ColdData() = default ;
        ColdData(const ColdData &) = default ;
        ColdData(ColdData &&) = default ;
        ColdData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ColdData() = default ;
        ColdData& operator=(const ColdData &) = default ;
        ColdData& operator=(ColdData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataSize_ == nullptr
        && this->indexSize_ == nullptr && this->otherSize_ == nullptr && this->primaryKeyIndexSize_ == nullptr && this->totalSize_ == nullptr; };
        // dataSize Field Functions 
        bool hasDataSize() const { return this->dataSize_ != nullptr;};
        void deleteDataSize() { this->dataSize_ = nullptr;};
        inline int64_t getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
        inline ColdData& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


        // indexSize Field Functions 
        bool hasIndexSize() const { return this->indexSize_ != nullptr;};
        void deleteIndexSize() { this->indexSize_ = nullptr;};
        inline int64_t getIndexSize() const { DARABONBA_PTR_GET_DEFAULT(indexSize_, 0L) };
        inline ColdData& setIndexSize(int64_t indexSize) { DARABONBA_PTR_SET_VALUE(indexSize_, indexSize) };


        // otherSize Field Functions 
        bool hasOtherSize() const { return this->otherSize_ != nullptr;};
        void deleteOtherSize() { this->otherSize_ = nullptr;};
        inline int64_t getOtherSize() const { DARABONBA_PTR_GET_DEFAULT(otherSize_, 0L) };
        inline ColdData& setOtherSize(int64_t otherSize) { DARABONBA_PTR_SET_VALUE(otherSize_, otherSize) };


        // primaryKeyIndexSize Field Functions 
        bool hasPrimaryKeyIndexSize() const { return this->primaryKeyIndexSize_ != nullptr;};
        void deletePrimaryKeyIndexSize() { this->primaryKeyIndexSize_ = nullptr;};
        inline int64_t getPrimaryKeyIndexSize() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyIndexSize_, 0L) };
        inline ColdData& setPrimaryKeyIndexSize(int64_t primaryKeyIndexSize) { DARABONBA_PTR_SET_VALUE(primaryKeyIndexSize_, primaryKeyIndexSize) };


        // totalSize Field Functions 
        bool hasTotalSize() const { return this->totalSize_ != nullptr;};
        void deleteTotalSize() { this->totalSize_ = nullptr;};
        inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
        inline ColdData& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


      protected:
        // The data size of table records. Unit: bytes.
        shared_ptr<int64_t> dataSize_ {};
        // The data size of regular indexes. Unit: bytes.
        shared_ptr<int64_t> indexSize_ {};
        // The data size of other data. Unit: bytes.
        shared_ptr<int64_t> otherSize_ {};
        // The data size of primary key indexes. Unit: bytes.
        shared_ptr<int64_t> primaryKeyIndexSize_ {};
        // The cold data size. Unit: bytes.
        // 
        // >  Formula: Cold data size = Data size of table records + Data size of regular indexes + Data size of primary key indexes + Data size of other data.
        shared_ptr<int64_t> totalSize_ {};
      };

      virtual bool empty() const override { return this->coldData_ == nullptr
        && this->dataGrowth_ == nullptr && this->hotData_ == nullptr && this->totalSize_ == nullptr; };
      // coldData Field Functions 
      bool hasColdData() const { return this->coldData_ != nullptr;};
      void deleteColdData() { this->coldData_ = nullptr;};
      inline const Data::ColdData & getColdData() const { DARABONBA_PTR_GET_CONST(coldData_, Data::ColdData) };
      inline Data::ColdData getColdData() { DARABONBA_PTR_GET(coldData_, Data::ColdData) };
      inline Data& setColdData(const Data::ColdData & coldData) { DARABONBA_PTR_SET_VALUE(coldData_, coldData) };
      inline Data& setColdData(Data::ColdData && coldData) { DARABONBA_PTR_SET_RVALUE(coldData_, coldData) };


      // dataGrowth Field Functions 
      bool hasDataGrowth() const { return this->dataGrowth_ != nullptr;};
      void deleteDataGrowth() { this->dataGrowth_ = nullptr;};
      inline const Data::DataGrowth & getDataGrowth() const { DARABONBA_PTR_GET_CONST(dataGrowth_, Data::DataGrowth) };
      inline Data::DataGrowth getDataGrowth() { DARABONBA_PTR_GET(dataGrowth_, Data::DataGrowth) };
      inline Data& setDataGrowth(const Data::DataGrowth & dataGrowth) { DARABONBA_PTR_SET_VALUE(dataGrowth_, dataGrowth) };
      inline Data& setDataGrowth(Data::DataGrowth && dataGrowth) { DARABONBA_PTR_SET_RVALUE(dataGrowth_, dataGrowth) };


      // hotData Field Functions 
      bool hasHotData() const { return this->hotData_ != nullptr;};
      void deleteHotData() { this->hotData_ = nullptr;};
      inline const Data::HotData & getHotData() const { DARABONBA_PTR_GET_CONST(hotData_, Data::HotData) };
      inline Data::HotData getHotData() { DARABONBA_PTR_GET(hotData_, Data::HotData) };
      inline Data& setHotData(const Data::HotData & hotData) { DARABONBA_PTR_SET_VALUE(hotData_, hotData) };
      inline Data& setHotData(Data::HotData && hotData) { DARABONBA_PTR_SET_RVALUE(hotData_, hotData) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline string getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, "") };
      inline Data& setTotalSize(string totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The cold data.
      shared_ptr<Data::ColdData> coldData_ {};
      // The data growth.
      shared_ptr<Data::DataGrowth> dataGrowth_ {};
      // The hot data.
      shared_ptr<Data::HotData> hotData_ {};
      // The total data size. Unit: bytes.
      // 
      // >  Formula: Total data size = Hot data size+ Cold data size.
      shared_ptr<string> totalSize_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBClusterSpaceSummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBClusterSpaceSummaryResponseBody::Data) };
    inline DescribeDBClusterSpaceSummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDBClusterSpaceSummaryResponseBody::Data) };
    inline DescribeDBClusterSpaceSummaryResponseBody& setData(const DescribeDBClusterSpaceSummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBClusterSpaceSummaryResponseBody& setData(DescribeDBClusterSpaceSummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterSpaceSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried storage overview information.
    shared_ptr<DescribeDBClusterSpaceSummaryResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
