// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDLISTASSIGNEDAGENTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDLISTASSIGNEDAGENTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudListAssignedAgentGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudListAssignedAgentGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Cno, cno_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(Gno, gno_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudListAssignedAgentGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Cno, cno_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(Gno, gno_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CloudListAssignedAgentGroupRequest() = default ;
    CloudListAssignedAgentGroupRequest(const CloudListAssignedAgentGroupRequest &) = default ;
    CloudListAssignedAgentGroupRequest(CloudListAssignedAgentGroupRequest &&) = default ;
    CloudListAssignedAgentGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudListAssignedAgentGroupRequest() = default ;
    CloudListAssignedAgentGroupRequest& operator=(const CloudListAssignedAgentGroupRequest &) = default ;
    CloudListAssignedAgentGroupRequest& operator=(CloudListAssignedAgentGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cname_ == nullptr
        && this->cno_ == nullptr && this->enterpriseId_ == nullptr && this->gno_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline CloudListAssignedAgentGroupRequest& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // cno Field Functions 
    bool hasCno() const { return this->cno_ != nullptr;};
    void deleteCno() { this->cno_ = nullptr;};
    inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
    inline CloudListAssignedAgentGroupRequest& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudListAssignedAgentGroupRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // gno Field Functions 
    bool hasGno() const { return this->gno_ != nullptr;};
    void deleteGno() { this->gno_ = nullptr;};
    inline string getGno() const { DARABONBA_PTR_GET_DEFAULT(gno_, "") };
    inline CloudListAssignedAgentGroupRequest& setGno(string gno) { DARABONBA_PTR_SET_VALUE(gno_, gno) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CloudListAssignedAgentGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CloudListAssignedAgentGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloudListAssignedAgentGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // 查询条件座席名称；说明：以座席名称为筛选条件查询
    shared_ptr<string> cname_ {};
    // 查询条件座席编号；说明：以座席编号为筛选条件查询
    shared_ptr<string> cno_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 外呼组编号；说明：获取此gno下绑定的座席信息列表
    // 
    // This parameter is required.
    shared_ptr<string> gno_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
