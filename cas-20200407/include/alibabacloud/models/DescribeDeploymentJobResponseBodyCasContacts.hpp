// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTJOBRESPONSEBODYCASCONTACTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTJOBRESPONSEBODYCASCONTACTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DescribeDeploymentJobResponseBodyCasContacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeploymentJobResponseBodyCasContacts& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeploymentJobResponseBodyCasContacts& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeDeploymentJobResponseBodyCasContacts() = default ;
    DescribeDeploymentJobResponseBodyCasContacts(const DescribeDeploymentJobResponseBodyCasContacts &) = default ;
    DescribeDeploymentJobResponseBodyCasContacts(DescribeDeploymentJobResponseBodyCasContacts &&) = default ;
    DescribeDeploymentJobResponseBodyCasContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeploymentJobResponseBodyCasContacts() = default ;
    DescribeDeploymentJobResponseBodyCasContacts& operator=(const DescribeDeploymentJobResponseBodyCasContacts &) = default ;
    DescribeDeploymentJobResponseBodyCasContacts& operator=(DescribeDeploymentJobResponseBodyCasContacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->email_ != nullptr
        && this->id_ != nullptr && this->mobile_ != nullptr && this->name_ != nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline DescribeDeploymentJobResponseBodyCasContacts& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeDeploymentJobResponseBodyCasContacts& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline DescribeDeploymentJobResponseBodyCasContacts& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDeploymentJobResponseBodyCasContacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The email address of the contact.
    std::shared_ptr<string> email_ = nullptr;
    // The ID of the contact.
    std::shared_ptr<string> id_ = nullptr;
    // The phone number of the contact.
    std::shared_ptr<string> mobile_ = nullptr;
    // The name of the contact.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
