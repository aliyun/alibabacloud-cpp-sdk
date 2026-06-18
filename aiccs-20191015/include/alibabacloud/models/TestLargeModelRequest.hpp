// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTLARGEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TESTLARGEMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class TestLargeModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestLargeModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseModel, baseModel_);
      DARABONBA_PTR_TO_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(UserDialogContent, userDialogContent_);
    };
    friend void from_json(const Darabonba::Json& j, TestLargeModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseModel, baseModel_);
      DARABONBA_PTR_FROM_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(UserDialogContent, userDialogContent_);
    };
    TestLargeModelRequest() = default ;
    TestLargeModelRequest(const TestLargeModelRequest &) = default ;
    TestLargeModelRequest(TestLargeModelRequest &&) = default ;
    TestLargeModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestLargeModelRequest() = default ;
    TestLargeModelRequest& operator=(const TestLargeModelRequest &) = default ;
    TestLargeModelRequest& operator=(TestLargeModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseModel_ == nullptr
        && this->modelCode_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->userDialogContent_ == nullptr; };
    // baseModel Field Functions 
    bool hasBaseModel() const { return this->baseModel_ != nullptr;};
    void deleteBaseModel() { this->baseModel_ = nullptr;};
    inline const vector<string> & getBaseModel() const { DARABONBA_PTR_GET_CONST(baseModel_, vector<string>) };
    inline vector<string> getBaseModel() { DARABONBA_PTR_GET(baseModel_, vector<string>) };
    inline TestLargeModelRequest& setBaseModel(const vector<string> & baseModel) { DARABONBA_PTR_SET_VALUE(baseModel_, baseModel) };
    inline TestLargeModelRequest& setBaseModel(vector<string> && baseModel) { DARABONBA_PTR_SET_RVALUE(baseModel_, baseModel) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline TestLargeModelRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline TestLargeModelRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline TestLargeModelRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline TestLargeModelRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // userDialogContent Field Functions 
    bool hasUserDialogContent() const { return this->userDialogContent_ != nullptr;};
    void deleteUserDialogContent() { this->userDialogContent_ = nullptr;};
    inline string getUserDialogContent() const { DARABONBA_PTR_GET_DEFAULT(userDialogContent_, "") };
    inline TestLargeModelRequest& setUserDialogContent(string userDialogContent) { DARABONBA_PTR_SET_VALUE(userDialogContent_, userDialogContent) };


  protected:
    // The base models.
    shared_ptr<vector<string>> baseModel_ {};
    // The ID of the test scenario.
    shared_ptr<string> modelCode_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The user dialog content.
    shared_ptr<string> userDialogContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
