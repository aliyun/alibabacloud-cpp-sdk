// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRegionsResponseBodyRegionModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegionModels, regionModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionModels, regionModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRegionsResponseBody() = default ;
    ListRegionsResponseBody(const ListRegionsResponseBody &) = default ;
    ListRegionsResponseBody(ListRegionsResponseBody &&) = default ;
    ListRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegionsResponseBody() = default ;
    ListRegionsResponseBody& operator=(const ListRegionsResponseBody &) = default ;
    ListRegionsResponseBody& operator=(ListRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionModels_ == nullptr
        && return this->requestId_ == nullptr; };
    // regionModels Field Functions 
    bool hasRegionModels() const { return this->regionModels_ != nullptr;};
    void deleteRegionModels() { this->regionModels_ = nullptr;};
    inline const vector<ListRegionsResponseBodyRegionModels> & regionModels() const { DARABONBA_PTR_GET_CONST(regionModels_, vector<ListRegionsResponseBodyRegionModels>) };
    inline vector<ListRegionsResponseBodyRegionModels> regionModels() { DARABONBA_PTR_GET(regionModels_, vector<ListRegionsResponseBodyRegionModels>) };
    inline ListRegionsResponseBody& setRegionModels(const vector<ListRegionsResponseBodyRegionModels> & regionModels) { DARABONBA_PTR_SET_VALUE(regionModels_, regionModels) };
    inline ListRegionsResponseBody& setRegionModels(vector<ListRegionsResponseBodyRegionModels> && regionModels) { DARABONBA_PTR_SET_RVALUE(regionModels_, regionModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The region IDs.
    std::shared_ptr<vector<ListRegionsResponseBodyRegionModels>> regionModels_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
