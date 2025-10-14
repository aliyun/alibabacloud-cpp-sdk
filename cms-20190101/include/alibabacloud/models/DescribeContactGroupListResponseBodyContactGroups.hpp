// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPLISTRESPONSEBODYCONTACTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPLISTRESPONSEBODYCONTACTGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeContactGroupListResponseBodyContactGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactGroupListResponseBodyContactGroups& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroup, contactGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactGroupListResponseBodyContactGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroup, contactGroup_);
    };
    DescribeContactGroupListResponseBodyContactGroups() = default ;
    DescribeContactGroupListResponseBodyContactGroups(const DescribeContactGroupListResponseBodyContactGroups &) = default ;
    DescribeContactGroupListResponseBodyContactGroups(DescribeContactGroupListResponseBodyContactGroups &&) = default ;
    DescribeContactGroupListResponseBodyContactGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactGroupListResponseBodyContactGroups() = default ;
    DescribeContactGroupListResponseBodyContactGroups& operator=(const DescribeContactGroupListResponseBodyContactGroups &) = default ;
    DescribeContactGroupListResponseBodyContactGroups& operator=(DescribeContactGroupListResponseBodyContactGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroup_ == nullptr; };
    // contactGroup Field Functions 
    bool hasContactGroup() const { return this->contactGroup_ != nullptr;};
    void deleteContactGroup() { this->contactGroup_ = nullptr;};
    inline const vector<string> & contactGroup() const { DARABONBA_PTR_GET_CONST(contactGroup_, vector<string>) };
    inline vector<string> contactGroup() { DARABONBA_PTR_GET(contactGroup_, vector<string>) };
    inline DescribeContactGroupListResponseBodyContactGroups& setContactGroup(const vector<string> & contactGroup) { DARABONBA_PTR_SET_VALUE(contactGroup_, contactGroup) };
    inline DescribeContactGroupListResponseBodyContactGroups& setContactGroup(vector<string> && contactGroup) { DARABONBA_PTR_SET_RVALUE(contactGroup_, contactGroup) };


  protected:
    std::shared_ptr<vector<string>> contactGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
