// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINSNAPSHOTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINSNAPSHOTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainSnapshotDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainSnapshotDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotDataPerInterval, snapshotDataPerInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainSnapshotDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotDataPerInterval, snapshotDataPerInterval_);
    };
    DescribeVsDomainSnapshotDataResponseBody() = default ;
    DescribeVsDomainSnapshotDataResponseBody(const DescribeVsDomainSnapshotDataResponseBody &) = default ;
    DescribeVsDomainSnapshotDataResponseBody(DescribeVsDomainSnapshotDataResponseBody &&) = default ;
    DescribeVsDomainSnapshotDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainSnapshotDataResponseBody() = default ;
    DescribeVsDomainSnapshotDataResponseBody& operator=(const DescribeVsDomainSnapshotDataResponseBody &) = default ;
    DescribeVsDomainSnapshotDataResponseBody& operator=(DescribeVsDomainSnapshotDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SnapshotDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnapshotDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, SnapshotDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      SnapshotDataPerInterval() = default ;
      SnapshotDataPerInterval(const SnapshotDataPerInterval &) = default ;
      SnapshotDataPerInterval(SnapshotDataPerInterval &&) = default ;
      SnapshotDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnapshotDataPerInterval() = default ;
      SnapshotDataPerInterval& operator=(const SnapshotDataPerInterval &) = default ;
      SnapshotDataPerInterval& operator=(SnapshotDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(SnapshotValue, snapshotValue_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(SnapshotValue, snapshotValue_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        DataModule() = default ;
        DataModule(const DataModule &) = default ;
        DataModule(DataModule &&) = default ;
        DataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataModule() = default ;
        DataModule& operator=(const DataModule &) = default ;
        DataModule& operator=(DataModule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->snapshotValue_ == nullptr
        && this->timeStamp_ == nullptr; };
        // snapshotValue Field Functions 
        bool hasSnapshotValue() const { return this->snapshotValue_ != nullptr;};
        void deleteSnapshotValue() { this->snapshotValue_ = nullptr;};
        inline string getSnapshotValue() const { DARABONBA_PTR_GET_DEFAULT(snapshotValue_, "") };
        inline DataModule& setSnapshotValue(string snapshotValue) { DARABONBA_PTR_SET_VALUE(snapshotValue_, snapshotValue) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        shared_ptr<string> snapshotValue_ {};
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<SnapshotDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<SnapshotDataPerInterval::DataModule>) };
      inline vector<SnapshotDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<SnapshotDataPerInterval::DataModule>) };
      inline SnapshotDataPerInterval& setDataModule(const vector<SnapshotDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline SnapshotDataPerInterval& setDataModule(vector<SnapshotDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<SnapshotDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->snapshotDataPerInterval_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsDomainSnapshotDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotDataPerInterval Field Functions 
    bool hasSnapshotDataPerInterval() const { return this->snapshotDataPerInterval_ != nullptr;};
    void deleteSnapshotDataPerInterval() { this->snapshotDataPerInterval_ = nullptr;};
    inline const DescribeVsDomainSnapshotDataResponseBody::SnapshotDataPerInterval & getSnapshotDataPerInterval() const { DARABONBA_PTR_GET_CONST(snapshotDataPerInterval_, DescribeVsDomainSnapshotDataResponseBody::SnapshotDataPerInterval) };
    inline DescribeVsDomainSnapshotDataResponseBody::SnapshotDataPerInterval getSnapshotDataPerInterval() { DARABONBA_PTR_GET(snapshotDataPerInterval_, DescribeVsDomainSnapshotDataResponseBody::SnapshotDataPerInterval) };
    inline DescribeVsDomainSnapshotDataResponseBody& setSnapshotDataPerInterval(const DescribeVsDomainSnapshotDataResponseBody::SnapshotDataPerInterval & snapshotDataPerInterval) { DARABONBA_PTR_SET_VALUE(snapshotDataPerInterval_, snapshotDataPerInterval) };
    inline DescribeVsDomainSnapshotDataResponseBody& setSnapshotDataPerInterval(DescribeVsDomainSnapshotDataResponseBody::SnapshotDataPerInterval && snapshotDataPerInterval) { DARABONBA_PTR_SET_RVALUE(snapshotDataPerInterval_, snapshotDataPerInterval) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeVsDomainSnapshotDataResponseBody::SnapshotDataPerInterval> snapshotDataPerInterval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
