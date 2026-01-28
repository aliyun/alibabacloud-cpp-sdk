// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEMAILVERIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEMAILVERIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class ListEmailVerificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEmailVerificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginCreateTime, beginCreateTime_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EndCreateTime, endCreateTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(VerificationStatus, verificationStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListEmailVerificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginCreateTime, beginCreateTime_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EndCreateTime, endCreateTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(VerificationStatus, verificationStatus_);
    };
    ListEmailVerificationRequest() = default ;
    ListEmailVerificationRequest(const ListEmailVerificationRequest &) = default ;
    ListEmailVerificationRequest(ListEmailVerificationRequest &&) = default ;
    ListEmailVerificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEmailVerificationRequest() = default ;
    ListEmailVerificationRequest& operator=(const ListEmailVerificationRequest &) = default ;
    ListEmailVerificationRequest& operator=(ListEmailVerificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginCreateTime_ == nullptr
        && this->email_ == nullptr && this->endCreateTime_ == nullptr && this->lang_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->userClientIp_ == nullptr && this->verificationStatus_ == nullptr; };
    // beginCreateTime Field Functions 
    bool hasBeginCreateTime() const { return this->beginCreateTime_ != nullptr;};
    void deleteBeginCreateTime() { this->beginCreateTime_ = nullptr;};
    inline int64_t getBeginCreateTime() const { DARABONBA_PTR_GET_DEFAULT(beginCreateTime_, 0L) };
    inline ListEmailVerificationRequest& setBeginCreateTime(int64_t beginCreateTime) { DARABONBA_PTR_SET_VALUE(beginCreateTime_, beginCreateTime) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListEmailVerificationRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // endCreateTime Field Functions 
    bool hasEndCreateTime() const { return this->endCreateTime_ != nullptr;};
    void deleteEndCreateTime() { this->endCreateTime_ = nullptr;};
    inline int64_t getEndCreateTime() const { DARABONBA_PTR_GET_DEFAULT(endCreateTime_, 0L) };
    inline ListEmailVerificationRequest& setEndCreateTime(int64_t endCreateTime) { DARABONBA_PTR_SET_VALUE(endCreateTime_, endCreateTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListEmailVerificationRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListEmailVerificationRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEmailVerificationRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline ListEmailVerificationRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // verificationStatus Field Functions 
    bool hasVerificationStatus() const { return this->verificationStatus_ != nullptr;};
    void deleteVerificationStatus() { this->verificationStatus_ = nullptr;};
    inline int32_t getVerificationStatus() const { DARABONBA_PTR_GET_DEFAULT(verificationStatus_, 0) };
    inline ListEmailVerificationRequest& setVerificationStatus(int32_t verificationStatus) { DARABONBA_PTR_SET_VALUE(verificationStatus_, verificationStatus) };


  protected:
    shared_ptr<int64_t> beginCreateTime_ {};
    shared_ptr<string> email_ {};
    shared_ptr<int64_t> endCreateTime_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> userClientIp_ {};
    shared_ptr<int32_t> verificationStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
