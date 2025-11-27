// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLASSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLASSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClassesResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ListClassesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClassesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClassesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClassesResponseBody() = default ;
    ListClassesResponseBody(const ListClassesResponseBody &) = default ;
    ListClassesResponseBody(ListClassesResponseBody &&) = default ;
    ListClassesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClassesResponseBody() = default ;
    ListClassesResponseBody& operator=(const ListClassesResponseBody &) = default ;
    ListClassesResponseBody& operator=(ListClassesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->regionId_ == nullptr && return this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListClassesResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<ListClassesResponseBodyItems>) };
    inline vector<ListClassesResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<ListClassesResponseBodyItems>) };
    inline ListClassesResponseBody& setItems(const vector<ListClassesResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListClassesResponseBody& setItems(vector<ListClassesResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListClassesResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClassesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of instance specifications.
    std::shared_ptr<vector<ListClassesResponseBodyItems>> items_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
