// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHYBRIDCLOUDCLUSTERRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEHYBRIDCLOUDCLUSTERRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateHybridCloudClusterRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHybridCloudClusterRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterRuleResourceId, clusterRuleResourceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHybridCloudClusterRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterRuleResourceId, clusterRuleResourceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateHybridCloudClusterRuleResponseBody() = default ;
    CreateHybridCloudClusterRuleResponseBody(const CreateHybridCloudClusterRuleResponseBody &) = default ;
    CreateHybridCloudClusterRuleResponseBody(CreateHybridCloudClusterRuleResponseBody &&) = default ;
    CreateHybridCloudClusterRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHybridCloudClusterRuleResponseBody() = default ;
    CreateHybridCloudClusterRuleResponseBody& operator=(const CreateHybridCloudClusterRuleResponseBody &) = default ;
    CreateHybridCloudClusterRuleResponseBody& operator=(CreateHybridCloudClusterRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterRuleResourceId_ == nullptr
        && return this->requestId_ == nullptr; };
    // clusterRuleResourceId Field Functions 
    bool hasClusterRuleResourceId() const { return this->clusterRuleResourceId_ != nullptr;};
    void deleteClusterRuleResourceId() { this->clusterRuleResourceId_ = nullptr;};
    inline string clusterRuleResourceId() const { DARABONBA_PTR_GET_DEFAULT(clusterRuleResourceId_, "") };
    inline CreateHybridCloudClusterRuleResponseBody& setClusterRuleResourceId(string clusterRuleResourceId) { DARABONBA_PTR_SET_VALUE(clusterRuleResourceId_, clusterRuleResourceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateHybridCloudClusterRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> clusterRuleResourceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
