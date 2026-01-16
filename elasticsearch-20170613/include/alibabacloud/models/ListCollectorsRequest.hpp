// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOLLECTORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOLLECTORSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListCollectorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCollectorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(resId, resId_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListCollectorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(resId, resId_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
    };
    ListCollectorsRequest() = default ;
    ListCollectorsRequest(const ListCollectorsRequest &) = default ;
    ListCollectorsRequest(ListCollectorsRequest &&) = default ;
    ListCollectorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCollectorsRequest() = default ;
    ListCollectorsRequest& operator=(const ListCollectorsRequest &) = default ;
    ListCollectorsRequest& operator=(ListCollectorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->name_ == nullptr && this->page_ == nullptr && this->resId_ == nullptr && this->size_ == nullptr && this->sourceType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCollectorsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCollectorsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListCollectorsRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // resId Field Functions 
    bool hasResId() const { return this->resId_ != nullptr;};
    void deleteResId() { this->resId_ = nullptr;};
    inline string getResId() const { DARABONBA_PTR_GET_DEFAULT(resId_, "") };
    inline ListCollectorsRequest& setResId(string resId) { DARABONBA_PTR_SET_VALUE(resId_, resId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListCollectorsRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListCollectorsRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The ID of the resource with which the shipper is associated.
    shared_ptr<string> instanceId_ {};
    // The name of the shipper.
    shared_ptr<string> name_ {};
    // The number of the page to return. Valid values: 1 to 200. Default value: 1.
    shared_ptr<int32_t> page_ {};
    // The ID of the shipper.
    shared_ptr<string> resId_ {};
    // The number of entries to return on each page. Valid values: 1 to 500. Default value: 20.
    shared_ptr<int32_t> size_ {};
    // The type of the machine on which the shipper is deployed. If you leave this parameter empty, shippers deployed on all types of machines are returned. Valid values:
    // 
    // *   ECS
    // *   ACK
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
