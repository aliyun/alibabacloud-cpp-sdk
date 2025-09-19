// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGEREGISTRYREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGEREGISTRYREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListImageRegistryRegionResponseBodyRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListImageRegistryRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageRegistryRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageRegistryRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListImageRegistryRegionResponseBody() = default ;
    ListImageRegistryRegionResponseBody(const ListImageRegistryRegionResponseBody &) = default ;
    ListImageRegistryRegionResponseBody(ListImageRegistryRegionResponseBody &&) = default ;
    ListImageRegistryRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageRegistryRegionResponseBody() = default ;
    ListImageRegistryRegionResponseBody& operator=(const ListImageRegistryRegionResponseBody &) = default ;
    ListImageRegistryRegionResponseBody& operator=(ListImageRegistryRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regions_ != nullptr
        && this->requestId_ != nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<ListImageRegistryRegionResponseBodyRegions> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<ListImageRegistryRegionResponseBodyRegions>) };
    inline vector<ListImageRegistryRegionResponseBodyRegions> regions() { DARABONBA_PTR_GET(regions_, vector<ListImageRegistryRegionResponseBodyRegions>) };
    inline ListImageRegistryRegionResponseBody& setRegions(const vector<ListImageRegistryRegionResponseBodyRegions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline ListImageRegistryRegionResponseBody& setRegions(vector<ListImageRegistryRegionResponseBodyRegions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageRegistryRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of regions.
    std::shared_ptr<vector<ListImageRegistryRegionResponseBodyRegions>> regions_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
