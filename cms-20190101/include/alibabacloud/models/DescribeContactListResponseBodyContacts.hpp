// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTLISTRESPONSEBODYCONTACTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTLISTRESPONSEBODYCONTACTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeContactListResponseBodyContactsContact.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeContactListResponseBodyContacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactListResponseBodyContacts& obj) { 
      DARABONBA_PTR_TO_JSON(Contact, contact_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactListResponseBodyContacts& obj) { 
      DARABONBA_PTR_FROM_JSON(Contact, contact_);
    };
    DescribeContactListResponseBodyContacts() = default ;
    DescribeContactListResponseBodyContacts(const DescribeContactListResponseBodyContacts &) = default ;
    DescribeContactListResponseBodyContacts(DescribeContactListResponseBodyContacts &&) = default ;
    DescribeContactListResponseBodyContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactListResponseBodyContacts() = default ;
    DescribeContactListResponseBodyContacts& operator=(const DescribeContactListResponseBodyContacts &) = default ;
    DescribeContactListResponseBodyContacts& operator=(DescribeContactListResponseBodyContacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contact_ != nullptr; };
    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const vector<Models::DescribeContactListResponseBodyContactsContact> & contact() const { DARABONBA_PTR_GET_CONST(contact_, vector<Models::DescribeContactListResponseBodyContactsContact>) };
    inline vector<Models::DescribeContactListResponseBodyContactsContact> contact() { DARABONBA_PTR_GET(contact_, vector<Models::DescribeContactListResponseBodyContactsContact>) };
    inline DescribeContactListResponseBodyContacts& setContact(const vector<Models::DescribeContactListResponseBodyContactsContact> & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline DescribeContactListResponseBodyContacts& setContact(vector<Models::DescribeContactListResponseBodyContactsContact> && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


  protected:
    std::shared_ptr<vector<Models::DescribeContactListResponseBodyContactsContact>> contact_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
