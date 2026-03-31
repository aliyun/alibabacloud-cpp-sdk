// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSFORGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSFORGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class ListUsersForGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersForGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(MaxItems, maxItems_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersForGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(MaxItems, maxItems_);
    };
    ListUsersForGroupRequest() = default ;
    ListUsersForGroupRequest(const ListUsersForGroupRequest &) = default ;
    ListUsersForGroupRequest(ListUsersForGroupRequest &&) = default ;
    ListUsersForGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersForGroupRequest() = default ;
    ListUsersForGroupRequest& operator=(const ListUsersForGroupRequest &) = default ;
    ListUsersForGroupRequest& operator=(ListUsersForGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && this->marker_ == nullptr && this->maxItems_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListUsersForGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListUsersForGroupRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItems Field Functions 
    bool hasMaxItems() const { return this->maxItems_ != nullptr;};
    void deleteMaxItems() { this->maxItems_ = nullptr;};
    inline int32_t getMaxItems() const { DARABONBA_PTR_GET_DEFAULT(maxItems_, 0) };
    inline ListUsersForGroupRequest& setMaxItems(int32_t maxItems) { DARABONBA_PTR_SET_VALUE(maxItems_, maxItems) };


  protected:
    // The name of the RAM user group.
    shared_ptr<string> groupName_ {};
    // The `marker`. If part of a previous response is truncated, you can use this parameter to obtain the truncated part.
    shared_ptr<string> marker_ {};
    // The number of entries to return. If a response is truncated because it reaches the value of `MaxItems`, the value of `IsTruncated` will be `true`.
    // 
    // Valid values: 1 to 1000. Default value: 100.
    shared_ptr<int32_t> maxItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
