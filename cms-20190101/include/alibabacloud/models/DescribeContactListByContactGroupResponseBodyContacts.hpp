// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTLISTBYCONTACTGROUPRESPONSEBODYCONTACTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTLISTBYCONTACTGROUPRESPONSEBODYCONTACTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeContactListByContactGroupResponseBodyContactsContact.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeContactListByContactGroupResponseBodyContacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactListByContactGroupResponseBodyContacts& obj) { 
      DARABONBA_PTR_TO_JSON(Contact, contact_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactListByContactGroupResponseBodyContacts& obj) { 
      DARABONBA_PTR_FROM_JSON(Contact, contact_);
    };
    DescribeContactListByContactGroupResponseBodyContacts() = default ;
    DescribeContactListByContactGroupResponseBodyContacts(const DescribeContactListByContactGroupResponseBodyContacts &) = default ;
    DescribeContactListByContactGroupResponseBodyContacts(DescribeContactListByContactGroupResponseBodyContacts &&) = default ;
    DescribeContactListByContactGroupResponseBodyContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactListByContactGroupResponseBodyContacts() = default ;
    DescribeContactListByContactGroupResponseBodyContacts& operator=(const DescribeContactListByContactGroupResponseBodyContacts &) = default ;
    DescribeContactListByContactGroupResponseBodyContacts& operator=(DescribeContactListByContactGroupResponseBodyContacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contact_ == nullptr; };
    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const vector<Models::DescribeContactListByContactGroupResponseBodyContactsContact> & contact() const { DARABONBA_PTR_GET_CONST(contact_, vector<Models::DescribeContactListByContactGroupResponseBodyContactsContact>) };
    inline vector<Models::DescribeContactListByContactGroupResponseBodyContactsContact> contact() { DARABONBA_PTR_GET(contact_, vector<Models::DescribeContactListByContactGroupResponseBodyContactsContact>) };
    inline DescribeContactListByContactGroupResponseBodyContacts& setContact(const vector<Models::DescribeContactListByContactGroupResponseBodyContactsContact> & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline DescribeContactListByContactGroupResponseBodyContacts& setContact(vector<Models::DescribeContactListByContactGroupResponseBodyContactsContact> && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


  protected:
    std::shared_ptr<vector<Models::DescribeContactListByContactGroupResponseBodyContactsContact>> contact_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
