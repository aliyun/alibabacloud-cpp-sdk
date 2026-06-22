// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHDFSUGIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHDFSUGIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHDFSUGIResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHDFSUGIResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorHDFSUGIResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDoctorHDFSUGIResponseBody() = default ;
    ListDoctorHDFSUGIResponseBody(const ListDoctorHDFSUGIResponseBody &) = default ;
    ListDoctorHDFSUGIResponseBody(ListDoctorHDFSUGIResponseBody &&) = default ;
    ListDoctorHDFSUGIResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHDFSUGIResponseBody() = default ;
    ListDoctorHDFSUGIResponseBody& operator=(const ListDoctorHDFSUGIResponseBody &) = default ;
    ListDoctorHDFSUGIResponseBody& operator=(ListDoctorHDFSUGIResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Metrics, metrics_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
      class Metrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
          DARABONBA_PTR_TO_JSON(TotalDataSize, totalDataSize_);
          DARABONBA_PTR_TO_JSON(TotalDirCount, totalDirCount_);
          DARABONBA_PTR_TO_JSON(TotalFileCount, totalFileCount_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(TotalDataSize, totalDataSize_);
          DARABONBA_PTR_FROM_JSON(TotalDirCount, totalDirCount_);
          DARABONBA_PTR_FROM_JSON(TotalFileCount, totalFileCount_);
        };
        Metrics() = default ;
        Metrics(const Metrics &) = default ;
        Metrics(Metrics &&) = default ;
        Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metrics() = default ;
        Metrics& operator=(const Metrics &) = default ;
        Metrics& operator=(Metrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TotalFileCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TotalFileCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TotalFileCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TotalFileCount() = default ;
          TotalFileCount(const TotalFileCount &) = default ;
          TotalFileCount(TotalFileCount &&) = default ;
          TotalFileCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TotalFileCount() = default ;
          TotalFileCount& operator=(const TotalFileCount &) = default ;
          TotalFileCount& operator=(TotalFileCount &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline TotalFileCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TotalFileCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TotalFileCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline TotalFileCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        class TotalDirCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TotalDirCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TotalDirCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TotalDirCount() = default ;
          TotalDirCount(const TotalDirCount &) = default ;
          TotalDirCount(TotalDirCount &&) = default ;
          TotalDirCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TotalDirCount() = default ;
          TotalDirCount& operator=(const TotalDirCount &) = default ;
          TotalDirCount& operator=(TotalDirCount &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline TotalDirCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TotalDirCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TotalDirCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline TotalDirCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        class TotalDataSize : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TotalDataSize& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TotalDataSize& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TotalDataSize() = default ;
          TotalDataSize(const TotalDataSize &) = default ;
          TotalDataSize(TotalDataSize &&) = default ;
          TotalDataSize(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TotalDataSize() = default ;
          TotalDataSize& operator=(const TotalDataSize &) = default ;
          TotalDataSize& operator=(TotalDataSize &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline TotalDataSize& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TotalDataSize& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TotalDataSize& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline TotalDataSize& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        virtual bool empty() const override { return this->totalDataSize_ == nullptr
        && this->totalDirCount_ == nullptr && this->totalFileCount_ == nullptr; };
        // totalDataSize Field Functions 
        bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
        void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
        inline const Metrics::TotalDataSize & getTotalDataSize() const { DARABONBA_PTR_GET_CONST(totalDataSize_, Metrics::TotalDataSize) };
        inline Metrics::TotalDataSize getTotalDataSize() { DARABONBA_PTR_GET(totalDataSize_, Metrics::TotalDataSize) };
        inline Metrics& setTotalDataSize(const Metrics::TotalDataSize & totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };
        inline Metrics& setTotalDataSize(Metrics::TotalDataSize && totalDataSize) { DARABONBA_PTR_SET_RVALUE(totalDataSize_, totalDataSize) };


        // totalDirCount Field Functions 
        bool hasTotalDirCount() const { return this->totalDirCount_ != nullptr;};
        void deleteTotalDirCount() { this->totalDirCount_ = nullptr;};
        inline const Metrics::TotalDirCount & getTotalDirCount() const { DARABONBA_PTR_GET_CONST(totalDirCount_, Metrics::TotalDirCount) };
        inline Metrics::TotalDirCount getTotalDirCount() { DARABONBA_PTR_GET(totalDirCount_, Metrics::TotalDirCount) };
        inline Metrics& setTotalDirCount(const Metrics::TotalDirCount & totalDirCount) { DARABONBA_PTR_SET_VALUE(totalDirCount_, totalDirCount) };
        inline Metrics& setTotalDirCount(Metrics::TotalDirCount && totalDirCount) { DARABONBA_PTR_SET_RVALUE(totalDirCount_, totalDirCount) };


        // totalFileCount Field Functions 
        bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
        void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
        inline const Metrics::TotalFileCount & getTotalFileCount() const { DARABONBA_PTR_GET_CONST(totalFileCount_, Metrics::TotalFileCount) };
        inline Metrics::TotalFileCount getTotalFileCount() { DARABONBA_PTR_GET(totalFileCount_, Metrics::TotalFileCount) };
        inline Metrics& setTotalFileCount(const Metrics::TotalFileCount & totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };
        inline Metrics& setTotalFileCount(Metrics::TotalFileCount && totalFileCount) { DARABONBA_PTR_SET_RVALUE(totalFileCount_, totalFileCount) };


      protected:
        // The total data size.
        shared_ptr<Metrics::TotalDataSize> totalDataSize_ {};
        // The total number of directories.
        shared_ptr<Metrics::TotalDirCount> totalDirCount_ {};
        // The total number of files.
        shared_ptr<Metrics::TotalFileCount> totalFileCount_ {};
      };

      virtual bool empty() const override { return this->metrics_ == nullptr
        && this->name_ == nullptr; };
      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline const Data::Metrics & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, Data::Metrics) };
      inline Data::Metrics getMetrics() { DARABONBA_PTR_GET(metrics_, Data::Metrics) };
      inline Data& setMetrics(const Data::Metrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
      inline Data& setMetrics(Data::Metrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The metric information.
      shared_ptr<Data::Metrics> metrics_ {};
      // The actual name of the owner or group returned based on the value of Type.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDoctorHDFSUGIResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDoctorHDFSUGIResponseBody::Data>) };
    inline vector<ListDoctorHDFSUGIResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDoctorHDFSUGIResponseBody::Data>) };
    inline ListDoctorHDFSUGIResponseBody& setData(const vector<ListDoctorHDFSUGIResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDoctorHDFSUGIResponseBody& setData(vector<ListDoctorHDFSUGIResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDoctorHDFSUGIResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDoctorHDFSUGIResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDoctorHDFSUGIResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDoctorHDFSUGIResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The results of batch HDFS analysis.
    shared_ptr<vector<ListDoctorHDFSUGIResponseBody::Data>> data_ {};
    // The maximum number of entries that are returned.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
