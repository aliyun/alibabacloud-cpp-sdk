// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDEPLOYAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDEPLOYAPISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchDeployApisRequestApi.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class BatchDeployApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeployApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Api, api_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeployApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Api, api_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    BatchDeployApisRequest() = default ;
    BatchDeployApisRequest(const BatchDeployApisRequest &) = default ;
    BatchDeployApisRequest(BatchDeployApisRequest &&) = default ;
    BatchDeployApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeployApisRequest() = default ;
    BatchDeployApisRequest& operator=(const BatchDeployApisRequest &) = default ;
    BatchDeployApisRequest& operator=(BatchDeployApisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->api_ == nullptr
        && return this->description_ == nullptr && return this->securityToken_ == nullptr && return this->stageName_ == nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline const vector<BatchDeployApisRequestApi> & api() const { DARABONBA_PTR_GET_CONST(api_, vector<BatchDeployApisRequestApi>) };
    inline vector<BatchDeployApisRequestApi> api() { DARABONBA_PTR_GET(api_, vector<BatchDeployApisRequestApi>) };
    inline BatchDeployApisRequest& setApi(const vector<BatchDeployApisRequestApi> & api) { DARABONBA_PTR_SET_VALUE(api_, api) };
    inline BatchDeployApisRequest& setApi(vector<BatchDeployApisRequestApi> && api) { DARABONBA_PTR_SET_RVALUE(api_, api) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline BatchDeployApisRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline BatchDeployApisRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline BatchDeployApisRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The APIs that you want to publish.
    std::shared_ptr<vector<BatchDeployApisRequestApi>> api_ = nullptr;
    // The description.
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The name of the runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **TEST**
    // *   PRE: the pre-release environment
    // 
    // This parameter is required.
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
