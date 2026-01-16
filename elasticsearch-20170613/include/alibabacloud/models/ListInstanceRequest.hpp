// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(esVersion, esVersion_);
      DARABONBA_PTR_TO_JSON(instanceCategory, instanceCategory_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(esVersion, esVersion_);
      DARABONBA_PTR_FROM_JSON(instanceCategory, instanceCategory_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    ListInstanceRequest() = default ;
    ListInstanceRequest(const ListInstanceRequest &) = default ;
    ListInstanceRequest(ListInstanceRequest &&) = default ;
    ListInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRequest() = default ;
    ListInstanceRequest& operator=(const ListInstanceRequest &) = default ;
    ListInstanceRequest& operator=(ListInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->esVersion_ == nullptr && this->instanceCategory_ == nullptr && this->instanceId_ == nullptr && this->page_ == nullptr && this->paymentType_ == nullptr
        && this->resourceGroupId_ == nullptr && this->size_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr
        && this->zoneId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // esVersion Field Functions 
    bool hasEsVersion() const { return this->esVersion_ != nullptr;};
    void deleteEsVersion() { this->esVersion_ = nullptr;};
    inline string getEsVersion() const { DARABONBA_PTR_GET_DEFAULT(esVersion_, "") };
    inline ListInstanceRequest& setEsVersion(string esVersion) { DARABONBA_PTR_SET_VALUE(esVersion_, esVersion) };


    // instanceCategory Field Functions 
    bool hasInstanceCategory() const { return this->instanceCategory_ != nullptr;};
    void deleteInstanceCategory() { this->instanceCategory_ = nullptr;};
    inline string getInstanceCategory() const { DARABONBA_PTR_GET_DEFAULT(instanceCategory_, "") };
    inline ListInstanceRequest& setInstanceCategory(string instanceCategory) { DARABONBA_PTR_SET_VALUE(instanceCategory_, instanceCategory) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListInstanceRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListInstanceRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListInstanceRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstanceRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ListInstanceRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // cn-hangzhou-i
    shared_ptr<string> description_ {};
    // advanced
    shared_ptr<string> esVersion_ {};
    // The number of data nodes.
    shared_ptr<string> instanceCategory_ {};
    // postpaid
    shared_ptr<string> instanceId_ {};
    // [{"tagKey":"key1","tagValue":"value1"}]
    shared_ptr<int32_t> page_ {};
    // Specifies whether to include dedicated master nodes. Valid values:
    // 
    // *   true: The files contain data that is dumped to the IA storage medium.
    // *   false: The files do not contain data that is dumped to the IA storage medium.
    shared_ptr<string> paymentType_ {};
    // The ID of the request.
    shared_ptr<string> resourceGroupId_ {};
    // vpc-bp16k1dvzxtmagcva\\*\\*\\*\\*
    shared_ptr<int32_t> size_ {};
    shared_ptr<string> status_ {};
    // The header of the response.
    shared_ptr<string> tags_ {};
    // The number of entries returned per page.
    shared_ptr<string> vpcId_ {};
    // The returned data.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
