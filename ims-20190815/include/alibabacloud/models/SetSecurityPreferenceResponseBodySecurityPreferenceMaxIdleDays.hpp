// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCEMAXIDLEDAYS_HPP_
#define ALIBABACLOUD_MODELS_SETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCEMAXIDLEDAYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays& obj) { 
      DARABONBA_PTR_TO_JSON(MaxIdleDaysForAccessKeys, maxIdleDaysForAccessKeys_);
      DARABONBA_PTR_TO_JSON(MaxIdleDaysForUsers, maxIdleDaysForUsers_);
    };
    friend void from_json(const Darabonba::Json& j, SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxIdleDaysForAccessKeys, maxIdleDaysForAccessKeys_);
      DARABONBA_PTR_FROM_JSON(MaxIdleDaysForUsers, maxIdleDaysForUsers_);
    };
    SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays() = default ;
    SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays(const SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays &) = default ;
    SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays(SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays &&) = default ;
    SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays() = default ;
    SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays& operator=(const SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays &) = default ;
    SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays& operator=(SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxIdleDaysForAccessKeys_ != nullptr
        && this->maxIdleDaysForUsers_ != nullptr; };
    // maxIdleDaysForAccessKeys Field Functions 
    bool hasMaxIdleDaysForAccessKeys() const { return this->maxIdleDaysForAccessKeys_ != nullptr;};
    void deleteMaxIdleDaysForAccessKeys() { this->maxIdleDaysForAccessKeys_ = nullptr;};
    inline int32_t maxIdleDaysForAccessKeys() const { DARABONBA_PTR_GET_DEFAULT(maxIdleDaysForAccessKeys_, 0) };
    inline SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays& setMaxIdleDaysForAccessKeys(int32_t maxIdleDaysForAccessKeys) { DARABONBA_PTR_SET_VALUE(maxIdleDaysForAccessKeys_, maxIdleDaysForAccessKeys) };


    // maxIdleDaysForUsers Field Functions 
    bool hasMaxIdleDaysForUsers() const { return this->maxIdleDaysForUsers_ != nullptr;};
    void deleteMaxIdleDaysForUsers() { this->maxIdleDaysForUsers_ = nullptr;};
    inline int32_t maxIdleDaysForUsers() const { DARABONBA_PTR_GET_DEFAULT(maxIdleDaysForUsers_, 0) };
    inline SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays& setMaxIdleDaysForUsers(int32_t maxIdleDaysForUsers) { DARABONBA_PTR_SET_VALUE(maxIdleDaysForUsers_, maxIdleDaysForUsers) };


  protected:
    // The maximum number of days that the AccessKey pair of a RAM user can stay unused. If an AccessKey pair is not used in the previous specified number of days, the AccessKey pair is automatically disabled on the next day. The default value is 730. You cannot change the value.
    std::shared_ptr<int32_t> maxIdleDaysForAccessKeys_ = nullptr;
    // The maximum number of days that a RAM user can stay idle. If a RAM user for whom console logon is enabled does not log on to the console in the previous specified number of days, console logon is automatically disabled for the RAM user on the next day. SSO is not involved. The default value is 730. You cannot change the value.
    std::shared_ptr<int32_t> maxIdleDaysForUsers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
