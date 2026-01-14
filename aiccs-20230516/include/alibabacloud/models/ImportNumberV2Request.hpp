// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTNUMBERV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTNUMBERV2REQUEST_HPP_
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
  class ImportNumberV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportNumberV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(Customers, customers_);
      DARABONBA_PTR_TO_JSON(FailReturn, failReturn_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportNumberV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(Customers, customers_);
      DARABONBA_PTR_FROM_JSON(FailReturn, failReturn_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ImportNumberV2Request() = default ;
    ImportNumberV2Request(const ImportNumberV2Request &) = default ;
    ImportNumberV2Request(ImportNumberV2Request &&) = default ;
    ImportNumberV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportNumberV2Request() = default ;
    ImportNumberV2Request& operator=(const ImportNumberV2Request &) = default ;
    ImportNumberV2Request& operator=(ImportNumberV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Customers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Customers& obj) { 
        DARABONBA_PTR_TO_JSON(ClientUrl, clientUrl_);
        DARABONBA_PTR_TO_JSON(Number, number_);
        DARABONBA_PTR_TO_JSON(NumberMD5, numberMD5_);
        DARABONBA_ANY_TO_JSON(Properties, properties_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Customers& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientUrl, clientUrl_);
        DARABONBA_PTR_FROM_JSON(Number, number_);
        DARABONBA_PTR_FROM_JSON(NumberMD5, numberMD5_);
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
      virtual bool empty() const override { return this->clientUrl_ == nullptr
        && this->number_ == nullptr && this->numberMD5_ == nullptr && this->properties_ == nullptr && this->tag_ == nullptr; };
      // clientUrl Field Functions 
      bool hasClientUrl() const { return this->clientUrl_ != nullptr;};
      void deleteClientUrl() { this->clientUrl_ = nullptr;};
      inline string getClientUrl() const { DARABONBA_PTR_GET_DEFAULT(clientUrl_, "") };
      inline Customers& setClientUrl(string clientUrl) { DARABONBA_PTR_SET_VALUE(clientUrl_, clientUrl) };


      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
      inline Customers& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // numberMD5 Field Functions 
      bool hasNumberMD5() const { return this->numberMD5_ != nullptr;};
      void deleteNumberMD5() { this->numberMD5_ = nullptr;};
      inline string getNumberMD5() const { DARABONBA_PTR_GET_DEFAULT(numberMD5_, "") };
      inline Customers& setNumberMD5(string numberMD5) { DARABONBA_PTR_SET_VALUE(numberMD5_, numberMD5) };


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
      shared_ptr<string> clientUrl_ {};
      shared_ptr<string> number_ {};
      shared_ptr<string> numberMD5_ {};
      Darabonba::Json properties_ {};
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->customers_ == nullptr
        && this->failReturn_ == nullptr && this->outId_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->taskId_ == nullptr; };
    // customers Field Functions 
    bool hasCustomers() const { return this->customers_ != nullptr;};
    void deleteCustomers() { this->customers_ = nullptr;};
    inline const vector<ImportNumberV2Request::Customers> & getCustomers() const { DARABONBA_PTR_GET_CONST(customers_, vector<ImportNumberV2Request::Customers>) };
    inline vector<ImportNumberV2Request::Customers> getCustomers() { DARABONBA_PTR_GET(customers_, vector<ImportNumberV2Request::Customers>) };
    inline ImportNumberV2Request& setCustomers(const vector<ImportNumberV2Request::Customers> & customers) { DARABONBA_PTR_SET_VALUE(customers_, customers) };
    inline ImportNumberV2Request& setCustomers(vector<ImportNumberV2Request::Customers> && customers) { DARABONBA_PTR_SET_RVALUE(customers_, customers) };


    // failReturn Field Functions 
    bool hasFailReturn() const { return this->failReturn_ != nullptr;};
    void deleteFailReturn() { this->failReturn_ = nullptr;};
    inline int64_t getFailReturn() const { DARABONBA_PTR_GET_DEFAULT(failReturn_, 0L) };
    inline ImportNumberV2Request& setFailReturn(int64_t failReturn) { DARABONBA_PTR_SET_VALUE(failReturn_, failReturn) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline ImportNumberV2Request& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ImportNumberV2Request& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ImportNumberV2Request& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ImportNumberV2Request& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ImportNumberV2Request& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<vector<ImportNumberV2Request::Customers>> customers_ {};
    shared_ptr<int64_t> failReturn_ {};
    shared_ptr<string> outId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
