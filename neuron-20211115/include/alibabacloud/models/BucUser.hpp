// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUCUSER_HPP_
#define ALIBABACLOUD_MODELS_BUCUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class BucUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BucUser& obj) { 
      DARABONBA_PTR_TO_JSON(account, account_);
      DARABONBA_PTR_TO_JSON(empId, empId_);
      DARABONBA_PTR_TO_JSON(empType, empType_);
      DARABONBA_PTR_TO_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nickName, nickName_);
      DARABONBA_PTR_TO_JSON(personalPhotoUrl, personalPhotoUrl_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BucUser& obj) { 
      DARABONBA_PTR_FROM_JSON(account, account_);
      DARABONBA_PTR_FROM_JSON(empId, empId_);
      DARABONBA_PTR_FROM_JSON(empType, empType_);
      DARABONBA_PTR_FROM_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nickName, nickName_);
      DARABONBA_PTR_FROM_JSON(personalPhotoUrl, personalPhotoUrl_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    BucUser() = default ;
    BucUser(const BucUser &) = default ;
    BucUser(BucUser &&) = default ;
    BucUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BucUser() = default ;
    BucUser& operator=(const BucUser &) = default ;
    BucUser& operator=(BucUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && this->empId_ == nullptr && this->empType_ == nullptr && this->enterpriseId_ == nullptr && this->name_ == nullptr && this->nickName_ == nullptr
        && this->personalPhotoUrl_ == nullptr && this->requestId_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline BucUser& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // empId Field Functions 
    bool hasEmpId() const { return this->empId_ != nullptr;};
    void deleteEmpId() { this->empId_ = nullptr;};
    inline string getEmpId() const { DARABONBA_PTR_GET_DEFAULT(empId_, "") };
    inline BucUser& setEmpId(string empId) { DARABONBA_PTR_SET_VALUE(empId_, empId) };


    // empType Field Functions 
    bool hasEmpType() const { return this->empType_ != nullptr;};
    void deleteEmpType() { this->empType_ = nullptr;};
    inline string getEmpType() const { DARABONBA_PTR_GET_DEFAULT(empType_, "") };
    inline BucUser& setEmpType(string empType) { DARABONBA_PTR_SET_VALUE(empType_, empType) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline BucUser& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline BucUser& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline BucUser& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // personalPhotoUrl Field Functions 
    bool hasPersonalPhotoUrl() const { return this->personalPhotoUrl_ != nullptr;};
    void deletePersonalPhotoUrl() { this->personalPhotoUrl_ = nullptr;};
    inline string getPersonalPhotoUrl() const { DARABONBA_PTR_GET_DEFAULT(personalPhotoUrl_, "") };
    inline BucUser& setPersonalPhotoUrl(string personalPhotoUrl) { DARABONBA_PTR_SET_VALUE(personalPhotoUrl_, personalPhotoUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BucUser& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> account_ {};
    shared_ptr<string> empId_ {};
    shared_ptr<string> empType_ {};
    shared_ptr<int64_t> enterpriseId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> nickName_ {};
    shared_ptr<string> personalPhotoUrl_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
