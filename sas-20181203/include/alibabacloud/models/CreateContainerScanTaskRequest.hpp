// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTAINERSCANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTAINERSCANTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateContainerScanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContainerScanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ContainerIds, containerIds_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContainerScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerIds, containerIds_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    CreateContainerScanTaskRequest() = default ;
    CreateContainerScanTaskRequest(const CreateContainerScanTaskRequest &) = default ;
    CreateContainerScanTaskRequest(CreateContainerScanTaskRequest &&) = default ;
    CreateContainerScanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContainerScanTaskRequest() = default ;
    CreateContainerScanTaskRequest& operator=(const CreateContainerScanTaskRequest &) = default ;
    CreateContainerScanTaskRequest& operator=(CreateContainerScanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->containerIds_ == nullptr && return this->lang_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateContainerScanTaskRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // containerIds Field Functions 
    bool hasContainerIds() const { return this->containerIds_ != nullptr;};
    void deleteContainerIds() { this->containerIds_ = nullptr;};
    inline string containerIds() const { DARABONBA_PTR_GET_DEFAULT(containerIds_, "") };
    inline CreateContainerScanTaskRequest& setContainerIds(string containerIds) { DARABONBA_PTR_SET_VALUE(containerIds_, containerIds) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateContainerScanTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The ID of the cluster to which the container belongs.
    // 
    // > You can call the [DescribeGroupedContainerInstances](https://help.aliyun.com/document_detail/182997.html) operation to query the IDs of clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the container.
    std::shared_ptr<string> containerIds_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
