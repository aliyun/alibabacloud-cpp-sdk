// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourcesResponseBodyDataResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListResourcesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(marker, marker_);
      DARABONBA_PTR_TO_JSON(maxItem, maxItem_);
      DARABONBA_PTR_TO_JSON(resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(marker, marker_);
      DARABONBA_PTR_FROM_JSON(maxItem, maxItem_);
      DARABONBA_PTR_FROM_JSON(resources, resources_);
    };
    ListResourcesResponseBodyData() = default ;
    ListResourcesResponseBodyData(const ListResourcesResponseBodyData &) = default ;
    ListResourcesResponseBodyData(ListResourcesResponseBodyData &&) = default ;
    ListResourcesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesResponseBodyData() = default ;
    ListResourcesResponseBodyData& operator=(const ListResourcesResponseBodyData &) = default ;
    ListResourcesResponseBodyData& operator=(ListResourcesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->marker_ != nullptr
        && this->maxItem_ != nullptr && this->resources_ != nullptr; };
    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListResourcesResponseBodyData& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItem Field Functions 
    bool hasMaxItem() const { return this->maxItem_ != nullptr;};
    void deleteMaxItem() { this->maxItem_ = nullptr;};
    inline int32_t maxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0) };
    inline ListResourcesResponseBodyData& setMaxItem(int32_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<Models::ListResourcesResponseBodyDataResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<Models::ListResourcesResponseBodyDataResources>) };
    inline vector<Models::ListResourcesResponseBodyDataResources> resources() { DARABONBA_PTR_GET(resources_, vector<Models::ListResourcesResponseBodyDataResources>) };
    inline ListResourcesResponseBodyData& setResources(const vector<Models::ListResourcesResponseBodyDataResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ListResourcesResponseBodyData& setResources(vector<Models::ListResourcesResponseBodyDataResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // Indicates the marker after which the returned list begins.
    std::shared_ptr<string> marker_ = nullptr;
    // The maximum number of entries returned per page.
    std::shared_ptr<int32_t> maxItem_ = nullptr;
    // The list of resources.
    std::shared_ptr<vector<Models::ListResourcesResponseBodyDataResources>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
