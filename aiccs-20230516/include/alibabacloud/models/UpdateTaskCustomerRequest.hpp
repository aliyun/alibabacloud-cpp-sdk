// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKCUSTOMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKCUSTOMERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class UpdateTaskCustomerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskCustomerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Customers, customers_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskCustomerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Customers, customers_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateTaskCustomerRequest() = default ;
    UpdateTaskCustomerRequest(const UpdateTaskCustomerRequest &) = default ;
    UpdateTaskCustomerRequest(UpdateTaskCustomerRequest &&) = default ;
    UpdateTaskCustomerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskCustomerRequest() = default ;
    UpdateTaskCustomerRequest& operator=(const UpdateTaskCustomerRequest &) = default ;
    UpdateTaskCustomerRequest& operator=(UpdateTaskCustomerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Customers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Customers& obj) { 
        DARABONBA_PTR_TO_JSON(Cancel, cancel_);
        DARABONBA_PTR_TO_JSON(Number, number_);
        DARABONBA_ANY_TO_JSON(Properties, properties_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Customers& obj) { 
        DARABONBA_PTR_FROM_JSON(Cancel, cancel_);
        DARABONBA_PTR_FROM_JSON(Number, number_);
        DARABONBA_ANY_FROM_JSON(Properties, properties_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
      };
      Customers() = default ;
      Customers(const Customers &) = default ;
      Customers(Customers &&) = default ;
      Customers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Customers() = default ;
      Customers& operator=(const Customers &) = default ;
      Customers& operator=(Customers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cancel_ == nullptr
        && this->number_ == nullptr && this->properties_ == nullptr && this->tag_ == nullptr; };
      // cancel Field Functions 
      bool hasCancel() const { return this->cancel_ != nullptr;};
      void deleteCancel() { this->cancel_ = nullptr;};
      inline int64_t getCancel() const { DARABONBA_PTR_GET_DEFAULT(cancel_, 0L) };
      inline Customers& setCancel(int64_t cancel) { DARABONBA_PTR_SET_VALUE(cancel_, cancel) };


      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
      inline Customers& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline       const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
      Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
      inline Customers& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
      inline Customers& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Customers& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    protected:
      // 是否取消外呼 0否，1是
      shared_ptr<int64_t> cancel_ {};
      // 电话号码
      shared_ptr<string> number_ {};
      // 需根据具体任务参数要求传输
      Darabonba::Json properties_ {};
      // 用户自定义标签
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->customers_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->taskId_ == nullptr; };
    // customers Field Functions 
    bool hasCustomers() const { return this->customers_ != nullptr;};
    void deleteCustomers() { this->customers_ = nullptr;};
    inline const vector<UpdateTaskCustomerRequest::Customers> & getCustomers() const { DARABONBA_PTR_GET_CONST(customers_, vector<UpdateTaskCustomerRequest::Customers>) };
    inline vector<UpdateTaskCustomerRequest::Customers> getCustomers() { DARABONBA_PTR_GET(customers_, vector<UpdateTaskCustomerRequest::Customers>) };
    inline UpdateTaskCustomerRequest& setCustomers(const vector<UpdateTaskCustomerRequest::Customers> & customers) { DARABONBA_PTR_SET_VALUE(customers_, customers) };
    inline UpdateTaskCustomerRequest& setCustomers(vector<UpdateTaskCustomerRequest::Customers> && customers) { DARABONBA_PTR_SET_RVALUE(customers_, customers) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateTaskCustomerRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateTaskCustomerRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateTaskCustomerRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline UpdateTaskCustomerRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // 外呼客户
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateTaskCustomerRequest::Customers>> customers_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 任务ID
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
