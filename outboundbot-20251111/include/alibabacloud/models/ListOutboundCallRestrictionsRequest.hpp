// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOUTBOUNDCALLRESTRICTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOUTBOUNDCALLRESTRICTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class ListOutboundCallRestrictionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOutboundCallRestrictionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
    };
    friend void from_json(const Darabonba::Json& j, ListOutboundCallRestrictionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
    };
    ListOutboundCallRestrictionsRequest() = default ;
    ListOutboundCallRestrictionsRequest(const ListOutboundCallRestrictionsRequest &) = default ;
    ListOutboundCallRestrictionsRequest(ListOutboundCallRestrictionsRequest &&) = default ;
    ListOutboundCallRestrictionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOutboundCallRestrictionsRequest() = default ;
    ListOutboundCallRestrictionsRequest& operator=(const ListOutboundCallRestrictionsRequest &) = default ;
    ListOutboundCallRestrictionsRequest& operator=(ListOutboundCallRestrictionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->policy_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListOutboundCallRestrictionsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOutboundCallRestrictionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOutboundCallRestrictionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline int32_t getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, 0) };
    inline ListOutboundCallRestrictionsRequest& setPolicy(int32_t policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


  protected:
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The page number, starting from 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page.
    shared_ptr<int32_t> pageSize_ {};
    // The policy. Valid values:
    // 0: blacklist.
    // 1: whitelist.
    shared_ptr<int32_t> policy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
