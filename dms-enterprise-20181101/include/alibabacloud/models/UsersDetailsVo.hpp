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
        && return this->approvalSqlTemplate_ == nullptr && return this->approvalStatus_ == nullptr && return this->creator_ == nullptr && return this->dataReady_ == nullptr && return this->id_ == nullptr
        && return this->mekid_ == nullptr && return this->pathPrefix_ == nullptr && return this->resultParty_ == nullptr && return this->uid_ == nullptr && return this->userConfirmed_ == nullptr
        && return this->userName_ == nullptr && return this->userPublicKeyPem_ == nullptr; };
    // approvalSignatureBase64 Field Functions 
    bool hasApprovalSignatureBase64() const { return this->approvalSignatureBase64_ != nullptr;};
    void deleteApprovalSignatureBase64() { this->approvalSignatureBase64_ = nullptr;};
    inline string approvalSignatureBase64() const { DARABONBA_PTR_GET_DEFAULT(approvalSignatureBase64_, "") };
    inline UsersDetailsVO& setApprovalSignatureBase64(string approvalSignatureBase64) { DARABONBA_PTR_SET_VALUE(approvalSignatureBase64_, approvalSignatureBase64) };


    // approvalSqlTemplate Field Functions 
    bool hasApprovalSqlTemplate() const { return this->approvalSqlTemplate_ != nullptr;};
    void deleteApprovalSqlTemplate() { this->approvalSqlTemplate_ = nullptr;};
    inline string approvalSqlTemplate() const { DARABONBA_PTR_GET_DEFAULT(approvalSqlTemplate_, "") };
    inline UsersDetailsVO& setApprovalSqlTemplate(string approvalSqlTemplate) { DARABONBA_PTR_SET_VALUE(approvalSqlTemplate_, approvalSqlTemplate) };


    // approvalStatus Field Functions 
    bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
    void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
    inline string approvalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
    inline UsersDetailsVO& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline int32_t creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0) };
    inline UsersDetailsVO& setCreator(int32_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // dataReady Field Functions 
    bool hasDataReady() const { return this->dataReady_ != nullptr;};
    void deleteDataReady() { this->dataReady_ = nullptr;};
    inline int32_t dataReady() const { DARABONBA_PTR_GET_DEFAULT(dataReady_, 0) };
    inline UsersDetailsVO& setDataReady(int32_t dataReady) { DARABONBA_PTR_SET_VALUE(dataReady_, dataReady) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UsersDetailsVO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mekid Field Functions 
    bool hasMekid() const { return this->mekid_ != nullptr;};
    void deleteMekid() { this->mekid_ = nullptr;};
    inline int64_t mekid() const { DARABONBA_PTR_GET_DEFAULT(mekid_, 0L) };
    inline UsersDetailsVO& setMekid(int64_t mekid) { DARABONBA_PTR_SET_VALUE(mekid_, mekid) };


    // pathPrefix Field Functions 
    bool hasPathPrefix() const { return this->pathPrefix_ != nullptr;};
    void deletePathPrefix() { this->pathPrefix_ = nullptr;};
    inline string pathPrefix() const { DARABONBA_PTR_GET_DEFAULT(pathPrefix_, "") };
    inline UsersDetailsVO& setPathPrefix(string pathPrefix) { DARABONBA_PTR_SET_VALUE(pathPrefix_, pathPrefix) };


    // resultParty Field Functions 
    bool hasResultParty() const { return this->resultParty_ != nullptr;};
    void deleteResultParty() { this->resultParty_ = nullptr;};
    inline int32_t resultParty() const { DARABONBA_PTR_GET_DEFAULT(resultParty_, 0) };
    inline UsersDetailsVO& setResultParty(int32_t resultParty) { DARABONBA_PTR_SET_VALUE(resultParty_, resultParty) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline UsersDetailsVO& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // userConfirmed Field Functions 
    bool hasUserConfirmed() const { return this->userConfirmed_ != nullptr;};
    void deleteUserConfirmed() { this->userConfirmed_ = nullptr;};
    inline int32_t userConfirmed() const { DARABONBA_PTR_GET_DEFAULT(userConfirmed_, 0) };
    inline UsersDetailsVO& setUserConfirmed(int32_t userConfirmed) { DARABONBA_PTR_SET_VALUE(userConfirmed_, userConfirmed) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline UsersDetailsVO& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userPublicKeyPem Field Functions 
    bool hasUserPublicKeyPem() const { return this->userPublicKeyPem_ != nullptr;};
    void deleteUserPublicKeyPem() { this->userPublicKeyPem_ = nullptr;};
    inline string userPublicKeyPem() const { DARABONBA_PTR_GET_DEFAULT(userPublicKeyPem_, "") };
    inline UsersDetailsVO& setUserPublicKeyPem(string userPublicKeyPem) { DARABONBA_PTR_SET_VALUE(userPublicKeyPem_, userPublicKeyPem) };


  protected:
    std::shared_ptr<string> approvalSignatureBase64_ = nullptr;
    std::shared_ptr<string> approvalSqlTemplate_ = nullptr;
    std::shared_ptr<string> approvalStatus_ = nullptr;
    std::shared_ptr<int32_t> creator_ = nullptr;
    std::shared_ptr<int32_t> dataReady_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> mekid_ = nullptr;
    std::shared_ptr<string> pathPrefix_ = nullptr;
    std::shared_ptr<int32_t> resultParty_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
    std::shared_ptr<int32_t> userConfirmed_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
    std::shared_ptr<string> userPublicKeyPem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
