// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONENACOSCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLONENACOSCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CloneNacosConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneNacosConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(DataIds, dataIds_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OriginNamespaceId, originNamespaceId_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(TargetNamespaceId, targetNamespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CloneNacosConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(DataIds, dataIds_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OriginNamespaceId, originNamespaceId_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(TargetNamespaceId, targetNamespaceId_);
    };
    CloneNacosConfigRequest() = default ;
    CloneNacosConfigRequest(const CloneNacosConfigRequest &) = default ;
    CloneNacosConfigRequest(CloneNacosConfigRequest &&) = default ;
    CloneNacosConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneNacosConfigRequest() = default ;
    CloneNacosConfigRequest& operator=(const CloneNacosConfigRequest &) = default ;
    CloneNacosConfigRequest& operator=(CloneNacosConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->dataIds_ != nullptr && this->ids_ != nullptr && this->instanceId_ != nullptr && this->originNamespaceId_ != nullptr && this->policy_ != nullptr
        && this->targetNamespaceId_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CloneNacosConfigRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // dataIds Field Functions 
    bool hasDataIds() const { return this->dataIds_ != nullptr;};
    void deleteDataIds() { this->dataIds_ = nullptr;};
    inline string dataIds() const { DARABONBA_PTR_GET_DEFAULT(dataIds_, "") };
    inline CloneNacosConfigRequest& setDataIds(string dataIds) { DARABONBA_PTR_SET_VALUE(dataIds_, dataIds) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string ids() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline CloneNacosConfigRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CloneNacosConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // originNamespaceId Field Functions 
    bool hasOriginNamespaceId() const { return this->originNamespaceId_ != nullptr;};
    void deleteOriginNamespaceId() { this->originNamespaceId_ = nullptr;};
    inline string originNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(originNamespaceId_, "") };
    inline CloneNacosConfigRequest& setOriginNamespaceId(string originNamespaceId) { DARABONBA_PTR_SET_VALUE(originNamespaceId_, originNamespaceId) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CloneNacosConfigRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // targetNamespaceId Field Functions 
    bool hasTargetNamespaceId() const { return this->targetNamespaceId_ != nullptr;};
    void deleteTargetNamespaceId() { this->targetNamespaceId_ = nullptr;};
    inline string targetNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(targetNamespaceId_, "") };
    inline CloneNacosConfigRequest& setTargetNamespaceId(string targetNamespaceId) { DARABONBA_PTR_SET_VALUE(targetNamespaceId_, targetNamespaceId) };


  protected:
    // Language type of the returned message:
    // 
    // - zh: Chinese
    // - en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // Configuration items to be cloned, in the format of dataId+group, with multiple items separated by commas.
    std::shared_ptr<string> dataIds_ = nullptr;
    // List of configuration IDs.
    std::shared_ptr<string> ids_ = nullptr;
    // Instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Source namespace ID.
    std::shared_ptr<string> originNamespaceId_ = nullptr;
    // The strategy used when a write conflict occurs.
    // 
    // - ABORT
    // - SKIP
    // - OVERWRITE
    // 
    // This parameter is required.
    std::shared_ptr<string> policy_ = nullptr;
    // Target namespace ID.
    std::shared_ptr<string> targetNamespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
