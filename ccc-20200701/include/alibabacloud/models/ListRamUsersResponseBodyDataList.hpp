// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRAMUSERSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTRAMUSERSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListRamUsersResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRamUsersResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(LoginName, loginName_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(Primary, primary_);
      DARABONBA_PTR_TO_JSON(RamId, ramId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRamUsersResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(Primary, primary_);
      DARABONBA_PTR_FROM_JSON(RamId, ramId_);
    };
    ListRamUsersResponseBodyDataList() = default ;
    ListRamUsersResponseBodyDataList(const ListRamUsersResponseBodyDataList &) = default ;
    ListRamUsersResponseBodyDataList(ListRamUsersResponseBodyDataList &&) = default ;
    ListRamUsersResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRamUsersResponseBodyDataList() = default ;
    ListRamUsersResponseBodyDataList& operator=(const ListRamUsersResponseBodyDataList &) = default ;
    ListRamUsersResponseBodyDataList& operator=(ListRamUsersResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunUid_ != nullptr
        && this->displayName_ != nullptr && this->email_ != nullptr && this->loginName_ != nullptr && this->mobile_ != nullptr && this->primary_ != nullptr
        && this->ramId_ != nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline int64_t aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, 0L) };
    inline ListRamUsersResponseBodyDataList& setAliyunUid(int64_t aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListRamUsersResponseBodyDataList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListRamUsersResponseBodyDataList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // loginName Field Functions 
    bool hasLoginName() const { return this->loginName_ != nullptr;};
    void deleteLoginName() { this->loginName_ = nullptr;};
    inline string loginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
    inline ListRamUsersResponseBodyDataList& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline ListRamUsersResponseBodyDataList& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // primary Field Functions 
    bool hasPrimary() const { return this->primary_ != nullptr;};
    void deletePrimary() { this->primary_ = nullptr;};
    inline bool primary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
    inline ListRamUsersResponseBodyDataList& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


    // ramId Field Functions 
    bool hasRamId() const { return this->ramId_ != nullptr;};
    void deleteRamId() { this->ramId_ = nullptr;};
    inline string ramId() const { DARABONBA_PTR_GET_DEFAULT(ramId_, "") };
    inline ListRamUsersResponseBodyDataList& setRamId(string ramId) { DARABONBA_PTR_SET_VALUE(ramId_, ramId) };


  protected:
    std::shared_ptr<int64_t> aliyunUid_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> loginName_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<bool> primary_ = nullptr;
    std::shared_ptr<string> ramId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
