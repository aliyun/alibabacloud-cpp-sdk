// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGROUPTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGROUPTAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListSwimmingLaneGroupTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSwimmingLaneGroupTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSwimmingLaneGroupTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    ListSwimmingLaneGroupTagsRequest() = default ;
    ListSwimmingLaneGroupTagsRequest(const ListSwimmingLaneGroupTagsRequest &) = default ;
    ListSwimmingLaneGroupTagsRequest(ListSwimmingLaneGroupTagsRequest &&) = default ;
    ListSwimmingLaneGroupTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSwimmingLaneGroupTagsRequest() = default ;
    ListSwimmingLaneGroupTagsRequest& operator=(const ListSwimmingLaneGroupTagsRequest &) = default ;
    ListSwimmingLaneGroupTagsRequest& operator=(ListSwimmingLaneGroupTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->namespaceId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ListSwimmingLaneGroupTagsRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListSwimmingLaneGroupTagsRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<string> namespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
