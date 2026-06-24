// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTECSINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListEcsInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ecsInstanceIds, ecsInstanceIds_);
      DARABONBA_PTR_TO_JSON(ecsInstanceName, ecsInstanceName_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ecsInstanceIds, ecsInstanceIds_);
      DARABONBA_PTR_FROM_JSON(ecsInstanceName, ecsInstanceName_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    ListEcsInstancesRequest() = default ;
    ListEcsInstancesRequest(const ListEcsInstancesRequest &) = default ;
    ListEcsInstancesRequest(ListEcsInstancesRequest &&) = default ;
    ListEcsInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsInstancesRequest() = default ;
    ListEcsInstancesRequest& operator=(const ListEcsInstancesRequest &) = default ;
    ListEcsInstancesRequest& operator=(ListEcsInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsInstanceIds_ == nullptr
        && this->ecsInstanceName_ == nullptr && this->page_ == nullptr && this->size_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr; };
    // ecsInstanceIds Field Functions 
    bool hasEcsInstanceIds() const { return this->ecsInstanceIds_ != nullptr;};
    void deleteEcsInstanceIds() { this->ecsInstanceIds_ = nullptr;};
    inline string getEcsInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceIds_, "") };
    inline ListEcsInstancesRequest& setEcsInstanceIds(string ecsInstanceIds) { DARABONBA_PTR_SET_VALUE(ecsInstanceIds_, ecsInstanceIds) };


    // ecsInstanceName Field Functions 
    bool hasEcsInstanceName() const { return this->ecsInstanceName_ != nullptr;};
    void deleteEcsInstanceName() { this->ecsInstanceName_ = nullptr;};
    inline string getEcsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceName_, "") };
    inline ListEcsInstancesRequest& setEcsInstanceName(string ecsInstanceName) { DARABONBA_PTR_SET_VALUE(ecsInstanceName_, ecsInstanceName) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListEcsInstancesRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListEcsInstancesRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ListEcsInstancesRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListEcsInstancesRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The list of ECS instance IDs. The value can be a JSON array that consists of up to 100 instance IDs. Separate multiple IDs with commas (,).
    shared_ptr<string> ecsInstanceIds_ {};
    // The name of the ECS instance.
    shared_ptr<string> ecsInstanceName_ {};
    // The page number of the returned results. Maximum value: 500.
    shared_ptr<int32_t> page_ {};
    // The number of results per page. Default value: 10. Maximum value: 500.
    shared_ptr<int32_t> size_ {};
    // Instance tags of the ECS instance. The following fields must be included:
    // 
    // - tagKey: instance tag key.
    // - tagValue: instance tag value.
    shared_ptr<string> tags_ {};
    // The ID of the VPC where the ECS instance resides.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
