// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGERESOURCEUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGERESOURCEUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeStorageResourceUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeStorageResourceUsageResponseBody() = default ;
    DescribeStorageResourceUsageResponseBody(const DescribeStorageResourceUsageResponseBody &) = default ;
    DescribeStorageResourceUsageResponseBody(DescribeStorageResourceUsageResponseBody &&) = default ;
    DescribeStorageResourceUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageResourceUsageResponseBody() = default ;
    DescribeStorageResourceUsageResponseBody& operator=(const DescribeStorageResourceUsageResponseBody &) = default ;
    DescribeStorageResourceUsageResponseBody& operator=(DescribeStorageResourceUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AcuInfo, acuInfo_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AcuInfo, acuInfo_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
      class AcuInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AcuInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, AcuInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        AcuInfo() = default ;
        AcuInfo(const AcuInfo &) = default ;
        AcuInfo(AcuInfo &&) = default ;
        AcuInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AcuInfo() = default ;
        AcuInfo& operator=(const AcuInfo &) = default ;
        AcuInfo& operator=(AcuInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->values_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AcuInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline AcuInfo& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline AcuInfo& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The resource usage metric. Valid values:
        // 
        // *   `TotalAcuNumber`: the total number of ACUs.
        // *   `ReservedAcuNumber`: the number of ACUs for the reserved resources.
        shared_ptr<string> name_ {};
        // The values of the metric at specific points in time.
        shared_ptr<vector<string>> values_ {};
      };

      virtual bool empty() const override { return this->acuInfo_ == nullptr
        && this->DBClusterId_ == nullptr && this->endTime_ == nullptr && this->startTime_ == nullptr; };
      // acuInfo Field Functions 
      bool hasAcuInfo() const { return this->acuInfo_ != nullptr;};
      void deleteAcuInfo() { this->acuInfo_ = nullptr;};
      inline const vector<Data::AcuInfo> & getAcuInfo() const { DARABONBA_PTR_GET_CONST(acuInfo_, vector<Data::AcuInfo>) };
      inline vector<Data::AcuInfo> getAcuInfo() { DARABONBA_PTR_GET(acuInfo_, vector<Data::AcuInfo>) };
      inline Data& setAcuInfo(const vector<Data::AcuInfo> & acuInfo) { DARABONBA_PTR_SET_VALUE(acuInfo_, acuInfo) };
      inline Data& setAcuInfo(vector<Data::AcuInfo> && acuInfo) { DARABONBA_PTR_SET_RVALUE(acuInfo_, acuInfo) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline Data& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The AnalyticDB compute unit (ACU) usage of the cluster.
      shared_ptr<vector<Data::AcuInfo>> acuInfo_ {};
      // The cluster ID.
      shared_ptr<string> DBClusterId_ {};
      // The end time of the query. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> endTime_ {};
      // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeStorageResourceUsageResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeStorageResourceUsageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeStorageResourceUsageResponseBody::Data) };
    inline DescribeStorageResourceUsageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeStorageResourceUsageResponseBody::Data) };
    inline DescribeStorageResourceUsageResponseBody& setData(const DescribeStorageResourceUsageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeStorageResourceUsageResponseBody& setData(DescribeStorageResourceUsageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStorageResourceUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The queried resource usage.
    shared_ptr<DescribeStorageResourceUsageResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
