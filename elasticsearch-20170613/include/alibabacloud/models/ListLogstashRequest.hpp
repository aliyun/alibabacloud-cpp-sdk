// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGSTASHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGSTASHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListLogstashRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogstashRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogstashRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListLogstashRequest() = default ;
    ListLogstashRequest(const ListLogstashRequest &) = default ;
    ListLogstashRequest(ListLogstashRequest &&) = default ;
    ListLogstashRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogstashRequest() = default ;
    ListLogstashRequest& operator=(const ListLogstashRequest &) = default ;
    ListLogstashRequest& operator=(ListLogstashRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->instanceId_ == nullptr && this->page_ == nullptr && this->resourceGroupId_ == nullptr && this->size_ == nullptr && this->tags_ == nullptr
        && this->version_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListLogstashRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListLogstashRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListLogstashRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListLogstashRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListLogstashRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ListLogstashRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListLogstashRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // rg-acfm2h5vbzd\\*\\*\\*\\*
    shared_ptr<string> description_ {};
    // [{"tagKey":"key1","tagValue":"value1"}]
    shared_ptr<string> instanceId_ {};
    // ls-cn-n6w1o5jq\\*\\*\\*\\*
    shared_ptr<int32_t> page_ {};
    // Details of the request header.
    shared_ptr<string> resourceGroupId_ {};
    // 5.5.3_with_X-Pack
    shared_ptr<int32_t> size_ {};
    // The number of entries returned per page.
    shared_ptr<string> tags_ {};
    // The ID of the request.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
