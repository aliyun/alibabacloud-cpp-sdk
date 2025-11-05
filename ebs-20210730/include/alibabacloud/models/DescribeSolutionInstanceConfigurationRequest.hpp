// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOLUTIONINSTANCECONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOLUTIONINSTANCECONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSolutionInstanceConfigurationRequestParameters.hpp>
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
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->parameters_ == nullptr && return this->regionId_ == nullptr && return this->solutionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeSolutionInstanceConfigurationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<DescribeSolutionInstanceConfigurationRequestParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<DescribeSolutionInstanceConfigurationRequestParameters>) };
    inline vector<DescribeSolutionInstanceConfigurationRequestParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<DescribeSolutionInstanceConfigurationRequestParameters>) };
    inline DescribeSolutionInstanceConfigurationRequest& setParameters(const vector<DescribeSolutionInstanceConfigurationRequestParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeSolutionInstanceConfigurationRequest& setParameters(vector<DescribeSolutionInstanceConfigurationRequestParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSolutionInstanceConfigurationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline DescribeSolutionInstanceConfigurationRequest& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    // The client token that is used to ensure the idempotency of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The parameters.
    std::shared_ptr<vector<DescribeSolutionInstanceConfigurationRequestParameters>> parameters_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the solution.
    // 
    // This parameter is required.
    std::shared_ptr<string> solutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
