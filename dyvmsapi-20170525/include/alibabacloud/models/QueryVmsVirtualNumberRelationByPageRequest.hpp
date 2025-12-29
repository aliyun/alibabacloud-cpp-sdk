// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVMSVIRTUALNUMBERRELATIONBYPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYVMSVIRTUALNUMBERRELATIONBYPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryVmsVirtualNumberRelationByPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVmsVirtualNumberRelationByPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NumberCity, numberCity_);
      DARABONBA_PTR_TO_JSON(NumberProvince, numberProvince_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RealNumber, realNumber_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(VirtualNumber, virtualNumber_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVmsVirtualNumberRelationByPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NumberCity, numberCity_);
      DARABONBA_PTR_FROM_JSON(NumberProvince, numberProvince_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RealNumber, realNumber_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(VirtualNumber, virtualNumber_);
    };
    QueryVmsVirtualNumberRelationByPageRequest() = default ;
    QueryVmsVirtualNumberRelationByPageRequest(const QueryVmsVirtualNumberRelationByPageRequest &) = default ;
    QueryVmsVirtualNumberRelationByPageRequest(QueryVmsVirtualNumberRelationByPageRequest &&) = default ;
    QueryVmsVirtualNumberRelationByPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVmsVirtualNumberRelationByPageRequest() = default ;
    QueryVmsVirtualNumberRelationByPageRequest& operator=(const QueryVmsVirtualNumberRelationByPageRequest &) = default ;
    QueryVmsVirtualNumberRelationByPageRequest& operator=(QueryVmsVirtualNumberRelationByPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->numberCity_ == nullptr
        && this->numberProvince_ == nullptr && this->ownerId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->realNumber_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->state_ == nullptr && this->virtualNumber_ == nullptr; };
    // numberCity Field Functions 
    bool hasNumberCity() const { return this->numberCity_ != nullptr;};
    void deleteNumberCity() { this->numberCity_ = nullptr;};
    inline string getNumberCity() const { DARABONBA_PTR_GET_DEFAULT(numberCity_, "") };
    inline QueryVmsVirtualNumberRelationByPageRequest& setNumberCity(string numberCity) { DARABONBA_PTR_SET_VALUE(numberCity_, numberCity) };


    // numberProvince Field Functions 
    bool hasNumberProvince() const { return this->numberProvince_ != nullptr;};
    void deleteNumberProvince() { this->numberProvince_ = nullptr;};
    inline string getNumberProvince() const { DARABONBA_PTR_GET_DEFAULT(numberProvince_, "") };
    inline QueryVmsVirtualNumberRelationByPageRequest& setNumberProvince(string numberProvince) { DARABONBA_PTR_SET_VALUE(numberProvince_, numberProvince) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryVmsVirtualNumberRelationByPageRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline QueryVmsVirtualNumberRelationByPageRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryVmsVirtualNumberRelationByPageRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // realNumber Field Functions 
    bool hasRealNumber() const { return this->realNumber_ != nullptr;};
    void deleteRealNumber() { this->realNumber_ = nullptr;};
    inline string getRealNumber() const { DARABONBA_PTR_GET_DEFAULT(realNumber_, "") };
    inline QueryVmsVirtualNumberRelationByPageRequest& setRealNumber(string realNumber) { DARABONBA_PTR_SET_VALUE(realNumber_, realNumber) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryVmsVirtualNumberRelationByPageRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryVmsVirtualNumberRelationByPageRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int64_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0L) };
    inline QueryVmsVirtualNumberRelationByPageRequest& setState(int64_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // virtualNumber Field Functions 
    bool hasVirtualNumber() const { return this->virtualNumber_ != nullptr;};
    void deleteVirtualNumber() { this->virtualNumber_ = nullptr;};
    inline string getVirtualNumber() const { DARABONBA_PTR_GET_DEFAULT(virtualNumber_, "") };
    inline QueryVmsVirtualNumberRelationByPageRequest& setVirtualNumber(string virtualNumber) { DARABONBA_PTR_SET_VALUE(virtualNumber_, virtualNumber) };


  protected:
    // 号码归属地--城市
    shared_ptr<string> numberCity_ {};
    // 号码归属地--省
    shared_ptr<string> numberProvince_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<int64_t> pageNo_ {};
    shared_ptr<int64_t> pageSize_ {};
    // 真实号码
    shared_ptr<string> realNumber_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 状态 1:有效；0:无效；-1:注销
    shared_ptr<int64_t> state_ {};
    // 虚拟号码
    shared_ptr<string> virtualNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
