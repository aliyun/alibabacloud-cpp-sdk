// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETTLED_HPP_
#define ALIBABACLOUD_MODELS_SETTLED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class Settled : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Settled& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(application, application_);
      DARABONBA_PTR_TO_JSON(developerName, developerName_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(enterpriseName, enterpriseName_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, Settled& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(application, application_);
      DARABONBA_PTR_FROM_JSON(developerName, developerName_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(enterpriseName, enterpriseName_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    Settled() = default ;
    Settled(const Settled &) = default ;
    Settled(Settled &&) = default ;
    Settled(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Settled() = default ;
    Settled& operator=(const Settled &) = default ;
    Settled& operator=(Settled &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->application_ == nullptr && this->developerName_ == nullptr && this->email_ == nullptr && this->enterpriseName_ == nullptr && this->gmtCreate_ == nullptr
        && this->id_ == nullptr && this->phone_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->type_ == nullptr
        && this->usage_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline Settled& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline string getApplication() const { DARABONBA_PTR_GET_DEFAULT(application_, "") };
    inline Settled& setApplication(string application) { DARABONBA_PTR_SET_VALUE(application_, application) };


    // developerName Field Functions 
    bool hasDeveloperName() const { return this->developerName_ != nullptr;};
    void deleteDeveloperName() { this->developerName_ = nullptr;};
    inline string getDeveloperName() const { DARABONBA_PTR_GET_DEFAULT(developerName_, "") };
    inline Settled& setDeveloperName(string developerName) { DARABONBA_PTR_SET_VALUE(developerName_, developerName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline Settled& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // enterpriseName Field Functions 
    bool hasEnterpriseName() const { return this->enterpriseName_ != nullptr;};
    void deleteEnterpriseName() { this->enterpriseName_ = nullptr;};
    inline string getEnterpriseName() const { DARABONBA_PTR_GET_DEFAULT(enterpriseName_, "") };
    inline Settled& setEnterpriseName(string enterpriseName) { DARABONBA_PTR_SET_VALUE(enterpriseName_, enterpriseName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline Settled& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline Settled& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline Settled& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Settled& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Settled& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Settled& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline Settled& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> application_ {};
    shared_ptr<string> developerName_ {};
    shared_ptr<string> email_ {};
    shared_ptr<string> enterpriseName_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> phone_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
