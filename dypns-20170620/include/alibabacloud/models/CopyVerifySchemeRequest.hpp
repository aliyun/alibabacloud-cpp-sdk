// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYVERIFYSCHEMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYVERIFYSCHEMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class CopyVerifySchemeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyVerifySchemeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CmApiCode, cmApiCode_);
      DARABONBA_PTR_TO_JSON(CmNewFlag, cmNewFlag_);
      DARABONBA_PTR_TO_JSON(CtApiCode, ctApiCode_);
      DARABONBA_PTR_TO_JSON(CtNewFlag, ctNewFlag_);
      DARABONBA_PTR_TO_JSON(CuApiCode, cuApiCode_);
      DARABONBA_PTR_TO_JSON(CuNewFlag, cuNewFlag_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(ModelSceneCode, modelSceneCode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyVerifySchemeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CmApiCode, cmApiCode_);
      DARABONBA_PTR_FROM_JSON(CmNewFlag, cmNewFlag_);
      DARABONBA_PTR_FROM_JSON(CtApiCode, ctApiCode_);
      DARABONBA_PTR_FROM_JSON(CtNewFlag, ctNewFlag_);
      DARABONBA_PTR_FROM_JSON(CuApiCode, cuApiCode_);
      DARABONBA_PTR_FROM_JSON(CuNewFlag, cuNewFlag_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(ModelSceneCode, modelSceneCode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CopyVerifySchemeRequest() = default ;
    CopyVerifySchemeRequest(const CopyVerifySchemeRequest &) = default ;
    CopyVerifySchemeRequest(CopyVerifySchemeRequest &&) = default ;
    CopyVerifySchemeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyVerifySchemeRequest() = default ;
    CopyVerifySchemeRequest& operator=(const CopyVerifySchemeRequest &) = default ;
    CopyVerifySchemeRequest& operator=(CopyVerifySchemeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cmApiCode_ == nullptr
        && this->cmNewFlag_ == nullptr && this->ctApiCode_ == nullptr && this->ctNewFlag_ == nullptr && this->cuApiCode_ == nullptr && this->cuNewFlag_ == nullptr
        && this->email_ == nullptr && this->modelSceneCode_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // cmApiCode Field Functions 
    bool hasCmApiCode() const { return this->cmApiCode_ != nullptr;};
    void deleteCmApiCode() { this->cmApiCode_ = nullptr;};
    inline int64_t getCmApiCode() const { DARABONBA_PTR_GET_DEFAULT(cmApiCode_, 0L) };
    inline CopyVerifySchemeRequest& setCmApiCode(int64_t cmApiCode) { DARABONBA_PTR_SET_VALUE(cmApiCode_, cmApiCode) };


    // cmNewFlag Field Functions 
    bool hasCmNewFlag() const { return this->cmNewFlag_ != nullptr;};
    void deleteCmNewFlag() { this->cmNewFlag_ = nullptr;};
    inline bool getCmNewFlag() const { DARABONBA_PTR_GET_DEFAULT(cmNewFlag_, false) };
    inline CopyVerifySchemeRequest& setCmNewFlag(bool cmNewFlag) { DARABONBA_PTR_SET_VALUE(cmNewFlag_, cmNewFlag) };


    // ctApiCode Field Functions 
    bool hasCtApiCode() const { return this->ctApiCode_ != nullptr;};
    void deleteCtApiCode() { this->ctApiCode_ = nullptr;};
    inline int64_t getCtApiCode() const { DARABONBA_PTR_GET_DEFAULT(ctApiCode_, 0L) };
    inline CopyVerifySchemeRequest& setCtApiCode(int64_t ctApiCode) { DARABONBA_PTR_SET_VALUE(ctApiCode_, ctApiCode) };


    // ctNewFlag Field Functions 
    bool hasCtNewFlag() const { return this->ctNewFlag_ != nullptr;};
    void deleteCtNewFlag() { this->ctNewFlag_ = nullptr;};
    inline bool getCtNewFlag() const { DARABONBA_PTR_GET_DEFAULT(ctNewFlag_, false) };
    inline CopyVerifySchemeRequest& setCtNewFlag(bool ctNewFlag) { DARABONBA_PTR_SET_VALUE(ctNewFlag_, ctNewFlag) };


    // cuApiCode Field Functions 
    bool hasCuApiCode() const { return this->cuApiCode_ != nullptr;};
    void deleteCuApiCode() { this->cuApiCode_ = nullptr;};
    inline int64_t getCuApiCode() const { DARABONBA_PTR_GET_DEFAULT(cuApiCode_, 0L) };
    inline CopyVerifySchemeRequest& setCuApiCode(int64_t cuApiCode) { DARABONBA_PTR_SET_VALUE(cuApiCode_, cuApiCode) };


    // cuNewFlag Field Functions 
    bool hasCuNewFlag() const { return this->cuNewFlag_ != nullptr;};
    void deleteCuNewFlag() { this->cuNewFlag_ = nullptr;};
    inline bool getCuNewFlag() const { DARABONBA_PTR_GET_DEFAULT(cuNewFlag_, false) };
    inline CopyVerifySchemeRequest& setCuNewFlag(bool cuNewFlag) { DARABONBA_PTR_SET_VALUE(cuNewFlag_, cuNewFlag) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CopyVerifySchemeRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // modelSceneCode Field Functions 
    bool hasModelSceneCode() const { return this->modelSceneCode_ != nullptr;};
    void deleteModelSceneCode() { this->modelSceneCode_ = nullptr;};
    inline string getModelSceneCode() const { DARABONBA_PTR_GET_DEFAULT(modelSceneCode_, "") };
    inline CopyVerifySchemeRequest& setModelSceneCode(string modelSceneCode) { DARABONBA_PTR_SET_VALUE(modelSceneCode_, modelSceneCode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CopyVerifySchemeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CopyVerifySchemeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CopyVerifySchemeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // native：1，web：5
    shared_ptr<int64_t> cmApiCode_ {};
    // true，将在移动侧创建新的AppId，false将直接从模版方案中复制已经创建的移动AppId信息
    shared_ptr<bool> cmNewFlag_ {};
    // native：3，web：8
    shared_ptr<int64_t> ctApiCode_ {};
    // true，将在电信侧创建新的AppId，false将直接从模版方案中复制已经创建的电信AppId信息
    shared_ptr<bool> ctNewFlag_ {};
    // native：9，web：10
    shared_ptr<int64_t> cuApiCode_ {};
    // true，将在联通侧创建新的AppId，false将直接从模版方案中复制已经创建的联通AppId信息
    shared_ptr<bool> cuNewFlag_ {};
    shared_ptr<string> email_ {};
    // This parameter is required.
    shared_ptr<string> modelSceneCode_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
