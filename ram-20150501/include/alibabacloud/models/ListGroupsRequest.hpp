// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class ListGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(MaxItems, maxItems_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(MaxItems, maxItems_);
    };
    ListGroupsRequest() = default ;
    ListGroupsRequest(const ListGroupsRequest &) = default ;
    ListGroupsRequest(ListGroupsRequest &&) = default ;
    ListGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsRequest() = default ;
    ListGroupsRequest& operator=(const ListGroupsRequest &) = default ;
    ListGroupsRequest& operator=(ListGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->marker_ == nullptr
        && this->maxItems_ == nullptr; };
    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListGroupsRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItems Field Functions 
    bool hasMaxItems() const { return this->maxItems_ != nullptr;};
    void deleteMaxItems() { this->maxItems_ = nullptr;};
    inline int32_t getMaxItems() const { DARABONBA_PTR_GET_DEFAULT(maxItems_, 0) };
    inline ListGroupsRequest& setMaxItems(int32_t maxItems) { DARABONBA_PTR_SET_VALUE(maxItems_, maxItems) };


  protected:
    // The token for querying the next page of results. You do not need to specify `Marker` for the first API call.
    // 
    // If the total number of returned entries exceeds the `MaxItems` limit during the first API call, the data is truncated and only `MaxItems` entries are returned. In this case, the `IsTruncated` response parameter is `true` and a `Marker` is returned. You can use the `Marker` returned from the previous call to continue calling the API with the other request parameters unchanged to query the truncated data. You can repeat this process until `IsTruncated` is `false`, which indicates that all data has been queried.
    shared_ptr<string> marker_ {};
    // The maximum number of entries per page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 100.
    shared_ptr<int32_t> maxItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
