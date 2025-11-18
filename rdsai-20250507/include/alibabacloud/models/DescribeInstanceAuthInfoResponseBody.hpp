// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTHINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTHINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceAuthInfoResponseBodyApiKeys.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceAuthInfoResponseBodyConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeInstanceAuthInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAuthInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKeys, apiKeys_);
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(JwtSecret, jwtSecret_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAuthInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeys, apiKeys_);
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(JwtSecret, jwtSecret_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceAuthInfoResponseBody() = default ;
    DescribeInstanceAuthInfoResponseBody(const DescribeInstanceAuthInfoResponseBody &) = default ;
    DescribeInstanceAuthInfoResponseBody(DescribeInstanceAuthInfoResponseBody &&) = default ;
    DescribeInstanceAuthInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAuthInfoResponseBody() = default ;
    DescribeInstanceAuthInfoResponseBody& operator=(const DescribeInstanceAuthInfoResponseBody &) = default ;
    DescribeInstanceAuthInfoResponseBody& operator=(DescribeInstanceAuthInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeys_ == nullptr
        && return this->configList_ == nullptr && return this->instanceName_ == nullptr && return this->jwtSecret_ == nullptr && return this->requestId_ == nullptr; };
    // apiKeys Field Functions 
    bool hasApiKeys() const { return this->apiKeys_ != nullptr;};
    void deleteApiKeys() { this->apiKeys_ = nullptr;};
    inline const DescribeInstanceAuthInfoResponseBodyApiKeys & apiKeys() const { DARABONBA_PTR_GET_CONST(apiKeys_, DescribeInstanceAuthInfoResponseBodyApiKeys) };
    inline DescribeInstanceAuthInfoResponseBodyApiKeys apiKeys() { DARABONBA_PTR_GET(apiKeys_, DescribeInstanceAuthInfoResponseBodyApiKeys) };
    inline DescribeInstanceAuthInfoResponseBody& setApiKeys(const DescribeInstanceAuthInfoResponseBodyApiKeys & apiKeys) { DARABONBA_PTR_SET_VALUE(apiKeys_, apiKeys) };
    inline DescribeInstanceAuthInfoResponseBody& setApiKeys(DescribeInstanceAuthInfoResponseBodyApiKeys && apiKeys) { DARABONBA_PTR_SET_RVALUE(apiKeys_, apiKeys) };


    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<DescribeInstanceAuthInfoResponseBodyConfigList> & configList() const { DARABONBA_PTR_GET_CONST(configList_, vector<DescribeInstanceAuthInfoResponseBodyConfigList>) };
    inline vector<DescribeInstanceAuthInfoResponseBodyConfigList> configList() { DARABONBA_PTR_GET(configList_, vector<DescribeInstanceAuthInfoResponseBodyConfigList>) };
    inline DescribeInstanceAuthInfoResponseBody& setConfigList(const vector<DescribeInstanceAuthInfoResponseBodyConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline DescribeInstanceAuthInfoResponseBody& setConfigList(vector<DescribeInstanceAuthInfoResponseBodyConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstanceAuthInfoResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // jwtSecret Field Functions 
    bool hasJwtSecret() const { return this->jwtSecret_ != nullptr;};
    void deleteJwtSecret() { this->jwtSecret_ = nullptr;};
    inline string jwtSecret() const { DARABONBA_PTR_GET_DEFAULT(jwtSecret_, "") };
    inline DescribeInstanceAuthInfoResponseBody& setJwtSecret(string jwtSecret) { DARABONBA_PTR_SET_VALUE(jwtSecret_, jwtSecret) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceAuthInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // API Keys
    std::shared_ptr<DescribeInstanceAuthInfoResponseBodyApiKeys> apiKeys_ = nullptr;
    std::shared_ptr<vector<DescribeInstanceAuthInfoResponseBodyConfigList>> configList_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> jwtSecret_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
