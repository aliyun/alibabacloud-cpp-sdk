// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ListApiKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListApiKeysRequest() = default ;
    ListApiKeysRequest(const ListApiKeysRequest &) = default ;
    ListApiKeysRequest(ListApiKeysRequest &&) = default ;
    ListApiKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiKeysRequest() = default ;
    ListApiKeysRequest& operator=(const ListApiKeysRequest &) = default ;
    ListApiKeysRequest& operator=(ListApiKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListApiKeysRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListApiKeysRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApiKeysRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
