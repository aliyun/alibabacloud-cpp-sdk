// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGCHANGELOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGCHANGELOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeDBInstanceConfigChangeLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceConfigChangeLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceConfigChangeLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceConfigChangeLogResponseBody() = default ;
    DescribeDBInstanceConfigChangeLogResponseBody(const DescribeDBInstanceConfigChangeLogResponseBody &) = default ;
    DescribeDBInstanceConfigChangeLogResponseBody(DescribeDBInstanceConfigChangeLogResponseBody &&) = default ;
    DescribeDBInstanceConfigChangeLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceConfigChangeLogResponseBody() = default ;
    DescribeDBInstanceConfigChangeLogResponseBody& operator=(const DescribeDBInstanceConfigChangeLogResponseBody &) = default ;
    DescribeDBInstanceConfigChangeLogResponseBody& operator=(DescribeDBInstanceConfigChangeLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_TO_JSON(ParamChangeLogs, paramChangeLogs_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_FROM_JSON(ParamChangeLogs, paramChangeLogs_);
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
      class ParamChangeLogs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParamChangeLogs& obj) { 
          DARABONBA_PTR_TO_JSON(Applied, applied_);
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(ID, ID_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NewValue, newValue_);
          DARABONBA_PTR_TO_JSON(OldValue, oldValue_);
        };
        friend void from_json(const Darabonba::Json& j, ParamChangeLogs& obj) { 
          DARABONBA_PTR_FROM_JSON(Applied, applied_);
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(ID, ID_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NewValue, newValue_);
          DARABONBA_PTR_FROM_JSON(OldValue, oldValue_);
        };
        ParamChangeLogs() = default ;
        ParamChangeLogs(const ParamChangeLogs &) = default ;
        ParamChangeLogs(ParamChangeLogs &&) = default ;
        ParamChangeLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParamChangeLogs() = default ;
        ParamChangeLogs& operator=(const ParamChangeLogs &) = default ;
        ParamChangeLogs& operator=(ParamChangeLogs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applied_ == nullptr
        && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->ID_ == nullptr && this->name_ == nullptr && this->newValue_ == nullptr
        && this->oldValue_ == nullptr; };
        // applied Field Functions 
        bool hasApplied() const { return this->applied_ != nullptr;};
        void deleteApplied() { this->applied_ = nullptr;};
        inline bool getApplied() const { DARABONBA_PTR_GET_DEFAULT(applied_, false) };
        inline ParamChangeLogs& setApplied(bool applied) { DARABONBA_PTR_SET_VALUE(applied_, applied) };


        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
        inline ParamChangeLogs& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ParamChangeLogs& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // ID Field Functions 
        bool hasID() const { return this->ID_ != nullptr;};
        void deleteID() { this->ID_ = nullptr;};
        inline int64_t getID() const { DARABONBA_PTR_GET_DEFAULT(ID_, 0L) };
        inline ParamChangeLogs& setID(int64_t ID) { DARABONBA_PTR_SET_VALUE(ID_, ID) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ParamChangeLogs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // newValue Field Functions 
        bool hasNewValue() const { return this->newValue_ != nullptr;};
        void deleteNewValue() { this->newValue_ = nullptr;};
        inline string getNewValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
        inline ParamChangeLogs& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


        // oldValue Field Functions 
        bool hasOldValue() const { return this->oldValue_ != nullptr;};
        void deleteOldValue() { this->oldValue_ = nullptr;};
        inline string getOldValue() const { DARABONBA_PTR_GET_DEFAULT(oldValue_, "") };
        inline ParamChangeLogs& setOldValue(string oldValue) { DARABONBA_PTR_SET_VALUE(oldValue_, oldValue) };


      protected:
        shared_ptr<bool> applied_ {};
        shared_ptr<string> gmtCreated_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> ID_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> newValue_ {};
        shared_ptr<string> oldValue_ {};
      };

      virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->paramChangeLogs_ == nullptr; };
      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
      inline Data& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      // paramChangeLogs Field Functions 
      bool hasParamChangeLogs() const { return this->paramChangeLogs_ != nullptr;};
      void deleteParamChangeLogs() { this->paramChangeLogs_ = nullptr;};
      inline const vector<Data::ParamChangeLogs> & getParamChangeLogs() const { DARABONBA_PTR_GET_CONST(paramChangeLogs_, vector<Data::ParamChangeLogs>) };
      inline vector<Data::ParamChangeLogs> getParamChangeLogs() { DARABONBA_PTR_GET(paramChangeLogs_, vector<Data::ParamChangeLogs>) };
      inline Data& setParamChangeLogs(const vector<Data::ParamChangeLogs> & paramChangeLogs) { DARABONBA_PTR_SET_VALUE(paramChangeLogs_, paramChangeLogs) };
      inline Data& setParamChangeLogs(vector<Data::ParamChangeLogs> && paramChangeLogs) { DARABONBA_PTR_SET_RVALUE(paramChangeLogs_, paramChangeLogs) };


    protected:
      shared_ptr<string> DBInstanceId_ {};
      shared_ptr<vector<Data::ParamChangeLogs>> paramChangeLogs_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBInstanceConfigChangeLogResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBInstanceConfigChangeLogResponseBody::Data) };
    inline DescribeDBInstanceConfigChangeLogResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDBInstanceConfigChangeLogResponseBody::Data) };
    inline DescribeDBInstanceConfigChangeLogResponseBody& setData(const DescribeDBInstanceConfigChangeLogResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBInstanceConfigChangeLogResponseBody& setData(DescribeDBInstanceConfigChangeLogResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceConfigChangeLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDBInstanceConfigChangeLogResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
