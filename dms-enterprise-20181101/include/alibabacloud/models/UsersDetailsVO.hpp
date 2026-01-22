// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERSDETAILSVO_HPP_
#define ALIBABACLOUD_MODELS_USERSDETAILSVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UsersDetailsVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UsersDetailsVO& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalSignatureBase64, approvalSignatureBase64_);
      DARABONBA_PTR_TO_JSON(ApprovalSqlTemplate, approvalSqlTemplate_);
      DARABONBA_PTR_TO_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DataReady, dataReady_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Mekid, mekid_);
      DARABONBA_PTR_TO_JSON(PathPrefix, pathPrefix_);
      DARABONBA_PTR_TO_JSON(ResultParty, resultParty_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(UserConfirmed, userConfirmed_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(UserPublicKeyPem, userPublicKeyPem_);
    };
    friend void from_json(const Darabonba::Json& j, UsersDetailsVO& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalSignatureBase64, approvalSignatureBase64_);
      DARABONBA_PTR_FROM_JSON(ApprovalSqlTemplate, approvalSqlTemplate_);
      DARABONBA_PTR_FROM_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DataReady, dataReady_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Mekid, mekid_);
      DARABONBA_PTR_FROM_JSON(PathPrefix, pathPrefix_);
      DARABONBA_PTR_FROM_JSON(ResultParty, resultParty_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(UserConfirmed, userConfirmed_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(UserPublicKeyPem, userPublicKeyPem_);
    };
    UsersDetailsVO() = default ;
    UsersDetailsVO(const UsersDetailsVO &) = default ;
    UsersDetailsVO(UsersDetailsVO &&) = default ;
    UsersDetailsVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UsersDetailsVO() = default ;
    UsersDetailsVO& operator=(const UsersDetailsVO &) = default ;
    UsersDetailsVO& operator=(UsersDetailsVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalSignatureBase64_ == nullptr
        && this->approvalSqlTemplate_ == nullptr && this->approvalStatus_ == nullptr && this->creator_ == nullptr && this->dataReady_ == nullptr && this->id_ == nullptr
        && this->mekid_ == nullptr && this->pathPrefix_ == nullptr && this->resultParty_ == nullptr && this->uid_ == nullptr && this->userConfirmed_ == nullptr
        && this->userName_ == nullptr && this->userPublicKeyPem_ == nullptr; };
    // approvalSignatureBase64 Field Functions 
    bool hasApprovalSignatureBase64() const { return this->approvalSignatureBase64_ != nullptr;};
    void deleteApprovalSignatureBase64() { this->approvalSignatureBase64_ = nullptr;};
    inline string getApprovalSignatureBase64() const { DARABONBA_PTR_GET_DEFAULT(approvalSignatureBase64_, "") };
    inline UsersDetailsVO& setApprovalSignatureBase64(string approvalSignatureBase64) { DARABONBA_PTR_SET_VALUE(approvalSignatureBase64_, approvalSignatureBase64) };


    // approvalSqlTemplate Field Functions 
    bool hasApprovalSqlTemplate() const { return this->approvalSqlTemplate_ != nullptr;};
    void deleteApprovalSqlTemplate() { this->approvalSqlTemplate_ = nullptr;};
    inline string getApprovalSqlTemplate() const { DARABONBA_PTR_GET_DEFAULT(approvalSqlTemplate_, "") };
    inline UsersDetailsVO& setApprovalSqlTemplate(string approvalSqlTemplate) { DARABONBA_PTR_SET_VALUE(approvalSqlTemplate_, approvalSqlTemplate) };


    // approvalStatus Field Functions 
    bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
    void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
    inline string getApprovalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
    inline UsersDetailsVO& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline int32_t getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0) };
    inline UsersDetailsVO& setCreator(int32_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // dataReady Field Functions 
    bool hasDataReady() const { return this->dataReady_ != nullptr;};
    void deleteDataReady() { this->dataReady_ = nullptr;};
    inline int32_t getDataReady() const { DARABONBA_PTR_GET_DEFAULT(dataReady_, 0) };
    inline UsersDetailsVO& setDataReady(int32_t dataReady) { DARABONBA_PTR_SET_VALUE(dataReady_, dataReady) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UsersDetailsVO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mekid Field Functions 
    bool hasMekid() const { return this->mekid_ != nullptr;};
    void deleteMekid() { this->mekid_ = nullptr;};
    inline int64_t getMekid() const { DARABONBA_PTR_GET_DEFAULT(mekid_, 0L) };
    inline UsersDetailsVO& setMekid(int64_t mekid) { DARABONBA_PTR_SET_VALUE(mekid_, mekid) };


    // pathPrefix Field Functions 
    bool hasPathPrefix() const { return this->pathPrefix_ != nullptr;};
    void deletePathPrefix() { this->pathPrefix_ = nullptr;};
    inline string getPathPrefix() const { DARABONBA_PTR_GET_DEFAULT(pathPrefix_, "") };
    inline UsersDetailsVO& setPathPrefix(string pathPrefix) { DARABONBA_PTR_SET_VALUE(pathPrefix_, pathPrefix) };


    // resultParty Field Functions 
    bool hasResultParty() const { return this->resultParty_ != nullptr;};
    void deleteResultParty() { this->resultParty_ = nullptr;};
    inline int32_t getResultParty() const { DARABONBA_PTR_GET_DEFAULT(resultParty_, 0) };
    inline UsersDetailsVO& setResultParty(int32_t resultParty) { DARABONBA_PTR_SET_VALUE(resultParty_, resultParty) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline UsersDetailsVO& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // userConfirmed Field Functions 
    bool hasUserConfirmed() const { return this->userConfirmed_ != nullptr;};
    void deleteUserConfirmed() { this->userConfirmed_ = nullptr;};
    inline int32_t getUserConfirmed() const { DARABONBA_PTR_GET_DEFAULT(userConfirmed_, 0) };
    inline UsersDetailsVO& setUserConfirmed(int32_t userConfirmed) { DARABONBA_PTR_SET_VALUE(userConfirmed_, userConfirmed) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline UsersDetailsVO& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userPublicKeyPem Field Functions 
    bool hasUserPublicKeyPem() const { return this->userPublicKeyPem_ != nullptr;};
    void deleteUserPublicKeyPem() { this->userPublicKeyPem_ = nullptr;};
    inline string getUserPublicKeyPem() const { DARABONBA_PTR_GET_DEFAULT(userPublicKeyPem_, "") };
    inline UsersDetailsVO& setUserPublicKeyPem(string userPublicKeyPem) { DARABONBA_PTR_SET_VALUE(userPublicKeyPem_, userPublicKeyPem) };


  protected:
    shared_ptr<string> approvalSignatureBase64_ {};
    shared_ptr<string> approvalSqlTemplate_ {};
    shared_ptr<string> approvalStatus_ {};
    shared_ptr<int32_t> creator_ {};
    shared_ptr<int32_t> dataReady_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int64_t> mekid_ {};
    shared_ptr<string> pathPrefix_ {};
    shared_ptr<int32_t> resultParty_ {};
    shared_ptr<string> uid_ {};
    shared_ptr<int32_t> userConfirmed_ {};
    shared_ptr<string> userName_ {};
    shared_ptr<string> userPublicKeyPem_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
