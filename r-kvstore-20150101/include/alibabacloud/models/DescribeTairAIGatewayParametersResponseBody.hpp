// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAIRAIGATEWAYPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAIRAIGATEWAYPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeTairAIGatewayParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTairAIGatewayParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTairAIGatewayParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTairAIGatewayParametersResponseBody() = default ;
    DescribeTairAIGatewayParametersResponseBody(const DescribeTairAIGatewayParametersResponseBody &) = default ;
    DescribeTairAIGatewayParametersResponseBody(DescribeTairAIGatewayParametersResponseBody &&) = default ;
    DescribeTairAIGatewayParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTairAIGatewayParametersResponseBody() = default ;
    DescribeTairAIGatewayParametersResponseBody& operator=(const DescribeTairAIGatewayParametersResponseBody &) = default ;
    DescribeTairAIGatewayParametersResponseBody& operator=(DescribeTairAIGatewayParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
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
      class ParametersItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParametersItem& obj) { 
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
        };
        friend void from_json(const Darabonba::Json& j, ParametersItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
        };
        ParametersItem() = default ;
        ParametersItem(const ParametersItem &) = default ;
        ParametersItem(ParametersItem &&) = default ;
        ParametersItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParametersItem() = default ;
        ParametersItem& operator=(const ParametersItem &) = default ;
        ParametersItem& operator=(ParametersItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->parameterName_ == nullptr
        && this->parameterValue_ == nullptr; };
        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline ParametersItem& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline ParametersItem& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


      protected:
        shared_ptr<string> parameterName_ {};
        shared_ptr<string> parameterValue_ {};
      };

      virtual bool empty() const override { return this->parameters_ == nullptr; };
      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<Parameters::ParametersItem> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Parameters::ParametersItem>) };
      inline vector<Parameters::ParametersItem> getParameters() { DARABONBA_PTR_GET(parameters_, vector<Parameters::ParametersItem>) };
      inline Parameters& setParameters(const vector<Parameters::ParametersItem> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline Parameters& setParameters(vector<Parameters::ParametersItem> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    protected:
      shared_ptr<vector<Parameters::ParametersItem>> parameters_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->parameters_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeTairAIGatewayParametersResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const DescribeTairAIGatewayParametersResponseBody::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, DescribeTairAIGatewayParametersResponseBody::Parameters) };
    inline DescribeTairAIGatewayParametersResponseBody::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, DescribeTairAIGatewayParametersResponseBody::Parameters) };
    inline DescribeTairAIGatewayParametersResponseBody& setParameters(const DescribeTairAIGatewayParametersResponseBody::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeTairAIGatewayParametersResponseBody& setParameters(DescribeTairAIGatewayParametersResponseBody::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTairAIGatewayParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTairAIGatewayParametersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    shared_ptr<DescribeTairAIGatewayParametersResponseBody::Parameters> parameters_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of returned parameters.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
