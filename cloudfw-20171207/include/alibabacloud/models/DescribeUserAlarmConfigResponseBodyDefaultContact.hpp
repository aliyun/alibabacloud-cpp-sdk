// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERALARMCONFIGRESPONSEBODYDEFAULTCONTACT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERALARMCONFIGRESPONSEBODYDEFAULTCONTACT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeUserAlarmConfigResponseBodyDefaultContact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAlarmConfigResponseBodyDefaultContact& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(MobilePhone, mobilePhone_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAlarmConfigResponseBodyDefaultContact& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(MobilePhone, mobilePhone_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeUserAlarmConfigResponseBodyDefaultContact() = default ;
    DescribeUserAlarmConfigResponseBodyDefaultContact(const DescribeUserAlarmConfigResponseBodyDefaultContact &) = default ;
    DescribeUserAlarmConfigResponseBodyDefaultContact(DescribeUserAlarmConfigResponseBodyDefaultContact &&) = default ;
    DescribeUserAlarmConfigResponseBodyDefaultContact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAlarmConfigResponseBodyDefaultContact() = default ;
    DescribeUserAlarmConfigResponseBodyDefaultContact& operator=(const DescribeUserAlarmConfigResponseBodyDefaultContact &) = default ;
    DescribeUserAlarmConfigResponseBodyDefaultContact& operator=(DescribeUserAlarmConfigResponseBodyDefaultContact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr
        && return this->mobilePhone_ == nullptr && return this->name_ == nullptr && return this->status_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline DescribeUserAlarmConfigResponseBodyDefaultContact& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // mobilePhone Field Functions 
    bool hasMobilePhone() const { return this->mobilePhone_ != nullptr;};
    void deleteMobilePhone() { this->mobilePhone_ = nullptr;};
    inline string mobilePhone() const { DARABONBA_PTR_GET_DEFAULT(mobilePhone_, "") };
    inline DescribeUserAlarmConfigResponseBodyDefaultContact& setMobilePhone(string mobilePhone) { DARABONBA_PTR_SET_VALUE(mobilePhone_, mobilePhone) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeUserAlarmConfigResponseBodyDefaultContact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeUserAlarmConfigResponseBodyDefaultContact& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> mobilePhone_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
