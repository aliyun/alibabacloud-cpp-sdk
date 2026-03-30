// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOIDCPROVIDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOIDCPROVIDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListOIDCProvidersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOIDCProvidersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(MaxItems, maxItems_);
    };
    friend void from_json(const Darabonba::Json& j, ListOIDCProvidersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(MaxItems, maxItems_);
    };
    ListOIDCProvidersRequest() = default ;
    ListOIDCProvidersRequest(const ListOIDCProvidersRequest &) = default ;
    ListOIDCProvidersRequest(ListOIDCProvidersRequest &&) = default ;
    ListOIDCProvidersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOIDCProvidersRequest() = default ;
    ListOIDCProvidersRequest& operator=(const ListOIDCProvidersRequest &) = default ;
    ListOIDCProvidersRequest& operator=(ListOIDCProvidersRequest &&) = default ;
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
    inline ListOIDCProvidersRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItems Field Functions 
    bool hasMaxItems() const { return this->maxItems_ != nullptr;};
    void deleteMaxItems() { this->maxItems_ = nullptr;};
    inline int32_t getMaxItems() const { DARABONBA_PTR_GET_DEFAULT(maxItems_, 0) };
    inline ListOIDCProvidersRequest& setMaxItems(int32_t maxItems) { DARABONBA_PTR_SET_VALUE(maxItems_, maxItems) };


  protected:
    // The `marker`. If part of a previous response is truncated, you can use this parameter to obtain the truncated part.
    shared_ptr<string> marker_ {};
    // The number of entries per page. If a response is truncated because it reaches the value of `MaxItems`, the value of `IsTruncated` will be `true`.
    // 
    // Valid values: 1 to 100. Default value: 100.
    shared_ptr<int32_t> maxItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
