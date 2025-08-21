// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSINRECYCLEBINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSINRECYCLEBINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListUsersInRecycleBinRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersInRecycleBinRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(MaxItems, maxItems_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersInRecycleBinRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(MaxItems, maxItems_);
    };
    ListUsersInRecycleBinRequest() = default ;
    ListUsersInRecycleBinRequest(const ListUsersInRecycleBinRequest &) = default ;
    ListUsersInRecycleBinRequest(ListUsersInRecycleBinRequest &&) = default ;
    ListUsersInRecycleBinRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersInRecycleBinRequest() = default ;
    ListUsersInRecycleBinRequest& operator=(const ListUsersInRecycleBinRequest &) = default ;
    ListUsersInRecycleBinRequest& operator=(ListUsersInRecycleBinRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->marker_ != nullptr && this->maxItems_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListUsersInRecycleBinRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListUsersInRecycleBinRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItems Field Functions 
    bool hasMaxItems() const { return this->maxItems_ != nullptr;};
    void deleteMaxItems() { this->maxItems_ = nullptr;};
    inline int32_t maxItems() const { DARABONBA_PTR_GET_DEFAULT(maxItems_, 0) };
    inline ListUsersInRecycleBinRequest& setMaxItems(int32_t maxItems) { DARABONBA_PTR_SET_VALUE(maxItems_, maxItems) };


  protected:
    // The filter condition that is used to query information about a specified RAM user in the recycle bin.
    // 
    // You must specify this parameter in the `UserPrincipalName eq <username>@<AccountAlias>.onaliyun.com` format.
    std::shared_ptr<string> filter_ = nullptr;
    // The `marker`. If part of a previous response is truncated, you can use this parameter to obtain the truncated part.
    std::shared_ptr<string> marker_ = nullptr;
    // The number of entries to return. If a response is truncated because it reaches the value of `MaxItems`, the value of `IsTruncated` will be true.
    // 
    // Valid values: 1 to 100. Default value: 100.
    std::shared_ptr<int32_t> maxItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
