// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeParameterGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeParameterGroupsResponseBody() = default ;
    DescribeParameterGroupsResponseBody(const DescribeParameterGroupsResponseBody &) = default ;
    DescribeParameterGroupsResponseBody(DescribeParameterGroupsResponseBody &&) = default ;
    DescribeParameterGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupsResponseBody() = default ;
    DescribeParameterGroupsResponseBody& operator=(const DescribeParameterGroupsResponseBody &) = default ;
    DescribeParameterGroupsResponseBody& operator=(DescribeParameterGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ParameterGroups, parameterGroups_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ParameterGroups, parameterGroups_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
      class ParameterGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParameterGroups& obj) { 
          DARABONBA_PTR_TO_JSON(CnForceRestart, cnForceRestart_);
          DARABONBA_PTR_TO_JSON(CnParamCount, cnParamCount_);
          DARABONBA_PTR_TO_JSON(DbType, dbType_);
          DARABONBA_PTR_TO_JSON(DbVersion, dbVersion_);
          DARABONBA_PTR_TO_JSON(DnForceRestart, dnForceRestart_);
          DARABONBA_PTR_TO_JSON(DnParamCount, dnParamCount_);
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
          DARABONBA_PTR_TO_JSON(ParameterGroupName, parameterGroupName_);
          DARABONBA_PTR_TO_JSON(ParameterGroupType, parameterGroupType_);
          DARABONBA_PTR_TO_JSON(Series, series_);
        };
        friend void from_json(const Darabonba::Json& j, ParameterGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(CnForceRestart, cnForceRestart_);
          DARABONBA_PTR_FROM_JSON(CnParamCount, cnParamCount_);
          DARABONBA_PTR_FROM_JSON(DbType, dbType_);
          DARABONBA_PTR_FROM_JSON(DbVersion, dbVersion_);
          DARABONBA_PTR_FROM_JSON(DnForceRestart, dnForceRestart_);
          DARABONBA_PTR_FROM_JSON(DnParamCount, dnParamCount_);
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
          DARABONBA_PTR_FROM_JSON(ParameterGroupName, parameterGroupName_);
          DARABONBA_PTR_FROM_JSON(ParameterGroupType, parameterGroupType_);
          DARABONBA_PTR_FROM_JSON(Series, series_);
        };
        ParameterGroups() = default ;
        ParameterGroups(const ParameterGroups &) = default ;
        ParameterGroups(ParameterGroups &&) = default ;
        ParameterGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParameterGroups() = default ;
        ParameterGroups& operator=(const ParameterGroups &) = default ;
        ParameterGroups& operator=(ParameterGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cnForceRestart_ == nullptr
        && this->cnParamCount_ == nullptr && this->dbType_ == nullptr && this->dbVersion_ == nullptr && this->dnForceRestart_ == nullptr && this->dnParamCount_ == nullptr
        && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->parameterGroupId_ == nullptr && this->parameterGroupName_ == nullptr && this->parameterGroupType_ == nullptr
        && this->series_ == nullptr; };
        // cnForceRestart Field Functions 
        bool hasCnForceRestart() const { return this->cnForceRestart_ != nullptr;};
        void deleteCnForceRestart() { this->cnForceRestart_ = nullptr;};
        inline bool getCnForceRestart() const { DARABONBA_PTR_GET_DEFAULT(cnForceRestart_, false) };
        inline ParameterGroups& setCnForceRestart(bool cnForceRestart) { DARABONBA_PTR_SET_VALUE(cnForceRestart_, cnForceRestart) };


        // cnParamCount Field Functions 
        bool hasCnParamCount() const { return this->cnParamCount_ != nullptr;};
        void deleteCnParamCount() { this->cnParamCount_ = nullptr;};
        inline int32_t getCnParamCount() const { DARABONBA_PTR_GET_DEFAULT(cnParamCount_, 0) };
        inline ParameterGroups& setCnParamCount(int32_t cnParamCount) { DARABONBA_PTR_SET_VALUE(cnParamCount_, cnParamCount) };


        // dbType Field Functions 
        bool hasDbType() const { return this->dbType_ != nullptr;};
        void deleteDbType() { this->dbType_ = nullptr;};
        inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
        inline ParameterGroups& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


        // dbVersion Field Functions 
        bool hasDbVersion() const { return this->dbVersion_ != nullptr;};
        void deleteDbVersion() { this->dbVersion_ = nullptr;};
        inline string getDbVersion() const { DARABONBA_PTR_GET_DEFAULT(dbVersion_, "") };
        inline ParameterGroups& setDbVersion(string dbVersion) { DARABONBA_PTR_SET_VALUE(dbVersion_, dbVersion) };


        // dnForceRestart Field Functions 
        bool hasDnForceRestart() const { return this->dnForceRestart_ != nullptr;};
        void deleteDnForceRestart() { this->dnForceRestart_ = nullptr;};
        inline bool getDnForceRestart() const { DARABONBA_PTR_GET_DEFAULT(dnForceRestart_, false) };
        inline ParameterGroups& setDnForceRestart(bool dnForceRestart) { DARABONBA_PTR_SET_VALUE(dnForceRestart_, dnForceRestart) };


        // dnParamCount Field Functions 
        bool hasDnParamCount() const { return this->dnParamCount_ != nullptr;};
        void deleteDnParamCount() { this->dnParamCount_ = nullptr;};
        inline int32_t getDnParamCount() const { DARABONBA_PTR_GET_DEFAULT(dnParamCount_, 0) };
        inline ParameterGroups& setDnParamCount(int32_t dnParamCount) { DARABONBA_PTR_SET_VALUE(dnParamCount_, dnParamCount) };


        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
        inline ParameterGroups& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ParameterGroups& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // parameterGroupId Field Functions 
        bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
        void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
        inline string getParameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
        inline ParameterGroups& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


        // parameterGroupName Field Functions 
        bool hasParameterGroupName() const { return this->parameterGroupName_ != nullptr;};
        void deleteParameterGroupName() { this->parameterGroupName_ = nullptr;};
        inline string getParameterGroupName() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupName_, "") };
        inline ParameterGroups& setParameterGroupName(string parameterGroupName) { DARABONBA_PTR_SET_VALUE(parameterGroupName_, parameterGroupName) };


        // parameterGroupType Field Functions 
        bool hasParameterGroupType() const { return this->parameterGroupType_ != nullptr;};
        void deleteParameterGroupType() { this->parameterGroupType_ = nullptr;};
        inline string getParameterGroupType() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupType_, "") };
        inline ParameterGroups& setParameterGroupType(string parameterGroupType) { DARABONBA_PTR_SET_VALUE(parameterGroupType_, parameterGroupType) };


        // series Field Functions 
        bool hasSeries() const { return this->series_ != nullptr;};
        void deleteSeries() { this->series_ = nullptr;};
        inline string getSeries() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
        inline ParameterGroups& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


      protected:
        shared_ptr<bool> cnForceRestart_ {};
        shared_ptr<int32_t> cnParamCount_ {};
        shared_ptr<string> dbType_ {};
        shared_ptr<string> dbVersion_ {};
        shared_ptr<bool> dnForceRestart_ {};
        shared_ptr<int32_t> dnParamCount_ {};
        shared_ptr<string> gmtCreated_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> parameterGroupId_ {};
        shared_ptr<string> parameterGroupName_ {};
        shared_ptr<string> parameterGroupType_ {};
        shared_ptr<string> series_ {};
      };

      virtual bool empty() const override { return this->parameterGroups_ == nullptr
        && this->requestId_ == nullptr; };
      // parameterGroups Field Functions 
      bool hasParameterGroups() const { return this->parameterGroups_ != nullptr;};
      void deleteParameterGroups() { this->parameterGroups_ = nullptr;};
      inline const vector<Data::ParameterGroups> & getParameterGroups() const { DARABONBA_PTR_GET_CONST(parameterGroups_, vector<Data::ParameterGroups>) };
      inline vector<Data::ParameterGroups> getParameterGroups() { DARABONBA_PTR_GET(parameterGroups_, vector<Data::ParameterGroups>) };
      inline Data& setParameterGroups(const vector<Data::ParameterGroups> & parameterGroups) { DARABONBA_PTR_SET_VALUE(parameterGroups_, parameterGroups) };
      inline Data& setParameterGroups(vector<Data::ParameterGroups> && parameterGroups) { DARABONBA_PTR_SET_RVALUE(parameterGroups_, parameterGroups) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    protected:
      shared_ptr<vector<Data::ParameterGroups>> parameterGroups_ {};
      shared_ptr<string> requestId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeParameterGroupsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeParameterGroupsResponseBody::Data) };
    inline DescribeParameterGroupsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeParameterGroupsResponseBody::Data) };
    inline DescribeParameterGroupsResponseBody& setData(const DescribeParameterGroupsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeParameterGroupsResponseBody& setData(DescribeParameterGroupsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeParameterGroupsResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
