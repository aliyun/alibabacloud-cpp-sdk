// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAllSwimmingLanesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllSwimmingLanesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllSwimmingLanesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    ListAllSwimmingLanesRequest() = default ;
    ListAllSwimmingLanesRequest(const ListAllSwimmingLanesRequest &) = default ;
    ListAllSwimmingLanesRequest(ListAllSwimmingLanesRequest &&) = default ;
    ListAllSwimmingLanesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllSwimmingLanesRequest() = default ;
    ListAllSwimmingLanesRequest& operator=(const ListAllSwimmingLanesRequest &) = default ;
    ListAllSwimmingLanesRequest& operator=(ListAllSwimmingLanesRequest &&) = default ;
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
    inline ListAllSwimmingLanesRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListAllSwimmingLanesRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The ID of the lane group.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The ID of a namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
