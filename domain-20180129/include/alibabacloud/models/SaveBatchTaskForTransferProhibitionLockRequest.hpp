// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORTRANSFERPROHIBITIONLOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORTRANSFERPROHIBITIONLOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveBatchTaskForTransferProhibitionLockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForTransferProhibitionLockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForTransferProhibitionLockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveBatchTaskForTransferProhibitionLockRequest() = default ;
    SaveBatchTaskForTransferProhibitionLockRequest(const SaveBatchTaskForTransferProhibitionLockRequest &) = default ;
    SaveBatchTaskForTransferProhibitionLockRequest(SaveBatchTaskForTransferProhibitionLockRequest &&) = default ;
    SaveBatchTaskForTransferProhibitionLockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForTransferProhibitionLockRequest() = default ;
    SaveBatchTaskForTransferProhibitionLockRequest& operator=(const SaveBatchTaskForTransferProhibitionLockRequest &) = default ;
    SaveBatchTaskForTransferProhibitionLockRequest& operator=(SaveBatchTaskForTransferProhibitionLockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->lang_ == nullptr && this->status_ == nullptr && this->userClientIp_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline const vector<string> & getDomainName() const { DARABONBA_PTR_GET_CONST(domainName_, vector<string>) };
    inline vector<string> getDomainName() { DARABONBA_PTR_GET(domainName_, vector<string>) };
    inline SaveBatchTaskForTransferProhibitionLockRequest& setDomainName(const vector<string> & domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };
    inline SaveBatchTaskForTransferProhibitionLockRequest& setDomainName(vector<string> && domainName) { DARABONBA_PTR_SET_RVALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveBatchTaskForTransferProhibitionLockRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline SaveBatchTaskForTransferProhibitionLockRequest& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveBatchTaskForTransferProhibitionLockRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> domainName_ {};
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<bool> status_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
