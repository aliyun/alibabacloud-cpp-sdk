// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODY_HPP_
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
  class DescribeParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeParametersResponseBody() = default ;
    DescribeParametersResponseBody(const DescribeParametersResponseBody &) = default ;
    DescribeParametersResponseBody(DescribeParametersResponseBody &&) = default ;
    DescribeParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParametersResponseBody() = default ;
    DescribeParametersResponseBody& operator=(const DescribeParametersResponseBody &) = default ;
    DescribeParametersResponseBody& operator=(DescribeParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigParameters, configParameters_);
        DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(RunningParameters, runningParameters_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigParameters, configParameters_);
        DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(RunningParameters, runningParameters_);
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
      class RunningParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RunningParameters& obj) { 
          DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
        };
        friend void from_json(const Darabonba::Json& j, RunningParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
        };
        RunningParameters() = default ;
        RunningParameters(const RunningParameters &) = default ;
        RunningParameters(RunningParameters &&) = default ;
        RunningParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RunningParameters() = default ;
        RunningParameters& operator=(const RunningParameters &) = default ;
        RunningParameters& operator=(RunningParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->parameterDescription_ == nullptr
        && this->parameterName_ == nullptr && this->parameterValue_ == nullptr; };
        // parameterDescription Field Functions 
        bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
        void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
        inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
        inline RunningParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline RunningParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline RunningParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


      protected:
        shared_ptr<string> parameterDescription_ {};
        shared_ptr<string> parameterName_ {};
        shared_ptr<string> parameterValue_ {};
      };

      class ConfigParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigParameters& obj) { 
          DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
        };
        ConfigParameters() = default ;
        ConfigParameters(const ConfigParameters &) = default ;
        ConfigParameters(ConfigParameters &&) = default ;
        ConfigParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigParameters() = default ;
        ConfigParameters& operator=(const ConfigParameters &) = default ;
        ConfigParameters& operator=(ConfigParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->parameterDescription_ == nullptr
        && this->parameterName_ == nullptr && this->parameterValue_ == nullptr; };
        // parameterDescription Field Functions 
        bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
        void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
        inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
        inline ConfigParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline ConfigParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline ConfigParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


      protected:
        shared_ptr<string> parameterDescription_ {};
        shared_ptr<string> parameterName_ {};
        shared_ptr<string> parameterValue_ {};
      };

      virtual bool empty() const override { return this->configParameters_ == nullptr
        && this->DBInstanceId_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->runningParameters_ == nullptr; };
      // configParameters Field Functions 
      bool hasConfigParameters() const { return this->configParameters_ != nullptr;};
      void deleteConfigParameters() { this->configParameters_ = nullptr;};
      inline const vector<Data::ConfigParameters> & getConfigParameters() const { DARABONBA_PTR_GET_CONST(configParameters_, vector<Data::ConfigParameters>) };
      inline vector<Data::ConfigParameters> getConfigParameters() { DARABONBA_PTR_GET(configParameters_, vector<Data::ConfigParameters>) };
      inline Data& setConfigParameters(const vector<Data::ConfigParameters> & configParameters) { DARABONBA_PTR_SET_VALUE(configParameters_, configParameters) };
      inline Data& setConfigParameters(vector<Data::ConfigParameters> && configParameters) { DARABONBA_PTR_SET_RVALUE(configParameters_, configParameters) };


      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
      inline Data& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Data& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline Data& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // runningParameters Field Functions 
      bool hasRunningParameters() const { return this->runningParameters_ != nullptr;};
      void deleteRunningParameters() { this->runningParameters_ = nullptr;};
      inline const vector<Data::RunningParameters> & getRunningParameters() const { DARABONBA_PTR_GET_CONST(runningParameters_, vector<Data::RunningParameters>) };
      inline vector<Data::RunningParameters> getRunningParameters() { DARABONBA_PTR_GET(runningParameters_, vector<Data::RunningParameters>) };
      inline Data& setRunningParameters(const vector<Data::RunningParameters> & runningParameters) { DARABONBA_PTR_SET_VALUE(runningParameters_, runningParameters) };
      inline Data& setRunningParameters(vector<Data::RunningParameters> && runningParameters) { DARABONBA_PTR_SET_RVALUE(runningParameters_, runningParameters) };


    protected:
      shared_ptr<vector<Data::ConfigParameters>> configParameters_ {};
      shared_ptr<string> DBInstanceId_ {};
      shared_ptr<string> engine_ {};
      shared_ptr<string> engineVersion_ {};
      shared_ptr<vector<Data::RunningParameters>> runningParameters_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeParametersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeParametersResponseBody::Data) };
    inline DescribeParametersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeParametersResponseBody::Data) };
    inline DescribeParametersResponseBody& setData(const DescribeParametersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeParametersResponseBody& setData(DescribeParametersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeParametersResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
