// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPLISTRESPONSEBODYCONTACTGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPLISTRESPONSEBODYCONTACTGROUPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeContactGroupListResponseBodyContactGroupListContactGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeContactGroupListResponseBodyContactGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactGroupListResponseBodyContactGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroup, contactGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactGroupListResponseBodyContactGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroup, contactGroup_);
    };
    DescribeContactGroupListResponseBodyContactGroupList() = default ;
    DescribeContactGroupListResponseBodyContactGroupList(const DescribeContactGroupListResponseBodyContactGroupList &) = default ;
    DescribeContactGroupListResponseBodyContactGroupList(DescribeContactGroupListResponseBodyContactGroupList &&) = default ;
    DescribeContactGroupListResponseBodyContactGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactGroupListResponseBodyContactGroupList() = default ;
    DescribeContactGroupListResponseBodyContactGroupList& operator=(const DescribeContactGroupListResponseBodyContactGroupList &) = default ;
    DescribeContactGroupListResponseBodyContactGroupList& operator=(DescribeContactGroupListResponseBodyContactGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactGroup_ != nullptr; };
    // contactGroup Field Functions 
    bool hasContactGroup() const { return this->contactGroup_ != nullptr;};
    void deleteContactGroup() { this->contactGroup_ = nullptr;};
    inline const vector<Models::DescribeContactGroupListResponseBodyContactGroupListContactGroup> & contactGroup() const { DARABONBA_PTR_GET_CONST(contactGroup_, vector<Models::DescribeContactGroupListResponseBodyContactGroupListContactGroup>) };
    inline vector<Models::DescribeContactGroupListResponseBodyContactGroupListContactGroup> contactGroup() { DARABONBA_PTR_GET(contactGroup_, vector<Models::DescribeContactGroupListResponseBodyContactGroupListContactGroup>) };
    inline DescribeContactGroupListResponseBodyContactGroupList& setContactGroup(const vector<Models::DescribeContactGroupListResponseBodyContactGroupListContactGroup> & contactGroup) { DARABONBA_PTR_SET_VALUE(contactGroup_, contactGroup) };
    inline DescribeContactGroupListResponseBodyContactGroupList& setContactGroup(vector<Models::DescribeContactGroupListResponseBodyContactGroupListContactGroup> && contactGroup) { DARABONBA_PTR_SET_RVALUE(contactGroup_, contactGroup) };


  protected:
    std::shared_ptr<vector<Models::DescribeContactGroupListResponseBodyContactGroupListContactGroup>> contactGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
