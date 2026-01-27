// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOLUTIONINSTANCECONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOLUTIONINSTANCECONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeSolutionInstanceConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSolutionInstanceConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SolutionId, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSolutionInstanceConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SolutionId, solutionId_);
    };
    DescribeSolutionInstanceConfigurationRequest() = default ;
    DescribeSolutionInstanceConfigurationRequest(const DescribeSolutionInstanceConfigurationRequest &) = default ;
    DescribeSolutionInstanceConfigurationRequest(DescribeSolutionInstanceConfigurationRequest &&) = default ;
    DescribeSolutionInstanceConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSolutionInstanceConfigurationRequest() = default ;
    DescribeSolutionInstanceConfigurationRequest& operator=(const DescribeSolutionInstanceConfigurationRequest &) = default ;
    DescribeSolutionInstanceConfigurationRequest& operator=(DescribeSolutionInstanceConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
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
      virtual bool empty() const override { return this->parameterKey_ == nullptr
        && this->parameterValue_ == nullptr; };
      // parameterKey Field Functions 
      bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
      void deleteParameterKey() { this->parameterKey_ = nullptr;};
      inline string getParameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
      inline Parameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


      // parameterValue Field Functions 
      bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
      void deleteParameterValue() { this->parameterValue_ = nullptr;};
      inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
      inline Parameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    protected:
      // The key of the parameter.
      // 
      // This parameter is required.
      shared_ptr<string> parameterKey_ {};
      // The value of the parameter.
      // 
      // > The Parameters parameter is optional. If you specify Parameters, you must specify ParameterValue.
      // 
      // This parameter is required.
      shared_ptr<string> parameterValue_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->parameters_ == nullptr && this->regionId_ == nullptr && this->solutionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeSolutionInstanceConfigurationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<DescribeSolutionInstanceConfigurationRequest::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<DescribeSolutionInstanceConfigurationRequest::Parameters>) };
    inline vector<DescribeSolutionInstanceConfigurationRequest::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<DescribeSolutionInstanceConfigurationRequest::Parameters>) };
    inline DescribeSolutionInstanceConfigurationRequest& setParameters(const vector<DescribeSolutionInstanceConfigurationRequest::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeSolutionInstanceConfigurationRequest& setParameters(vector<DescribeSolutionInstanceConfigurationRequest::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSolutionInstanceConfigurationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string getSolutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline DescribeSolutionInstanceConfigurationRequest& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    // The client token that is used to ensure the idempotency of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The parameters.
    shared_ptr<vector<DescribeSolutionInstanceConfigurationRequest::Parameters>> parameters_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the solution.
    // 
    // This parameter is required.
    shared_ptr<string> solutionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
