// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTEMPLATESRESPONSEBODY_HPP_
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
  class DescribeParameterTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeParameterTemplatesResponseBody() = default ;
    DescribeParameterTemplatesResponseBody(const DescribeParameterTemplatesResponseBody &) = default ;
    DescribeParameterTemplatesResponseBody(DescribeParameterTemplatesResponseBody &&) = default ;
    DescribeParameterTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterTemplatesResponseBody() = default ;
    DescribeParameterTemplatesResponseBody& operator=(const DescribeParameterTemplatesResponseBody &) = default ;
    DescribeParameterTemplatesResponseBody& operator=(DescribeParameterTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(ParameterCount, parameterCount_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(ParameterCount, parameterCount_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
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
      class Parameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
          DARABONBA_PTR_TO_JSON(CheckingCode, checkingCode_);
          DARABONBA_PTR_TO_JSON(Dynamic, dynamic_);
          DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
          DARABONBA_PTR_TO_JSON(Revisable, revisable_);
        };
        friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckingCode, checkingCode_);
          DARABONBA_PTR_FROM_JSON(Dynamic, dynamic_);
          DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
          DARABONBA_PTR_FROM_JSON(Revisable, revisable_);
        };
        Parameters() = default ;
        Parameters(const Parameters &) = default ;
        Parameters(Parameters &&) = default ;
        Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parameters() = default ;
        Parameters& operator=(const Parameters &) = default ;
        Parameters& operator=(Parameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkingCode_ == nullptr
        && this->dynamic_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr && this->parameterValue_ == nullptr && this->revisable_ == nullptr; };
        // checkingCode Field Functions 
        bool hasCheckingCode() const { return this->checkingCode_ != nullptr;};
        void deleteCheckingCode() { this->checkingCode_ = nullptr;};
        inline string getCheckingCode() const { DARABONBA_PTR_GET_DEFAULT(checkingCode_, "") };
        inline Parameters& setCheckingCode(string checkingCode) { DARABONBA_PTR_SET_VALUE(checkingCode_, checkingCode) };


        // dynamic Field Functions 
        bool hasDynamic() const { return this->dynamic_ != nullptr;};
        void deleteDynamic() { this->dynamic_ = nullptr;};
        inline int32_t getDynamic() const { DARABONBA_PTR_GET_DEFAULT(dynamic_, 0) };
        inline Parameters& setDynamic(int32_t dynamic) { DARABONBA_PTR_SET_VALUE(dynamic_, dynamic) };


        // parameterDescription Field Functions 
        bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
        void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
        inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
        inline Parameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline Parameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline Parameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


        // revisable Field Functions 
        bool hasRevisable() const { return this->revisable_ != nullptr;};
        void deleteRevisable() { this->revisable_ = nullptr;};
        inline int32_t getRevisable() const { DARABONBA_PTR_GET_DEFAULT(revisable_, 0) };
        inline Parameters& setRevisable(int32_t revisable) { DARABONBA_PTR_SET_VALUE(revisable_, revisable) };


      protected:
        shared_ptr<string> checkingCode_ {};
        shared_ptr<int32_t> dynamic_ {};
        shared_ptr<string> parameterDescription_ {};
        shared_ptr<string> parameterName_ {};
        shared_ptr<string> parameterValue_ {};
        shared_ptr<int32_t> revisable_ {};
      };

      virtual bool empty() const override { return this->engine_ == nullptr
        && this->engineVersion_ == nullptr && this->parameterCount_ == nullptr && this->parameters_ == nullptr; };
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


      // parameterCount Field Functions 
      bool hasParameterCount() const { return this->parameterCount_ != nullptr;};
      void deleteParameterCount() { this->parameterCount_ = nullptr;};
      inline int32_t getParameterCount() const { DARABONBA_PTR_GET_DEFAULT(parameterCount_, 0) };
      inline Data& setParameterCount(int32_t parameterCount) { DARABONBA_PTR_SET_VALUE(parameterCount_, parameterCount) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<Data::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Data::Parameters>) };
      inline vector<Data::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<Data::Parameters>) };
      inline Data& setParameters(const vector<Data::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline Data& setParameters(vector<Data::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    protected:
      shared_ptr<string> engine_ {};
      shared_ptr<string> engineVersion_ {};
      shared_ptr<int32_t> parameterCount_ {};
      shared_ptr<vector<Data::Parameters>> parameters_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeParameterTemplatesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeParameterTemplatesResponseBody::Data) };
    inline DescribeParameterTemplatesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeParameterTemplatesResponseBody::Data) };
    inline DescribeParameterTemplatesResponseBody& setData(const DescribeParameterTemplatesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeParameterTemplatesResponseBody& setData(DescribeParameterTemplatesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeParameterTemplatesResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
