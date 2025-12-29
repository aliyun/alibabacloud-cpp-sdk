// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORSWIMMINGLANEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORSWIMMINGLANEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListApplicationsForSwimmingLaneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListApplicationsForSwimmingLaneRequest() = default ;
    ListApplicationsForSwimmingLaneRequest(const ListApplicationsForSwimmingLaneRequest &) = default ;
    ListApplicationsForSwimmingLaneRequest(ListApplicationsForSwimmingLaneRequest &&) = default ;
    ListApplicationsForSwimmingLaneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForSwimmingLaneRequest() = default ;
    ListApplicationsForSwimmingLaneRequest& operator=(const ListApplicationsForSwimmingLaneRequest &) = default ;
    ListApplicationsForSwimmingLaneRequest& operator=(ListApplicationsForSwimmingLaneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->namespaceId_ == nullptr && this->tag_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ListApplicationsForSwimmingLaneRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListApplicationsForSwimmingLaneRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListApplicationsForSwimmingLaneRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The ID of the application group. You can call the [DescribeApplicationGroups](https://help.aliyun.com/document_detail/126249.html) operation to obtain the ID.
    shared_ptr<int64_t> groupId_ {};
    // The ID of a namespace.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // The canary tag
    shared_ptr<string> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
