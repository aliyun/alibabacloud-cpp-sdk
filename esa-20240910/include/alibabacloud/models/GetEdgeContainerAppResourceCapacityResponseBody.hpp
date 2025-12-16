// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPRESOURCECAPACITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPRESOURCECAPACITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEdgeContainerAppResourceCapacityResponseBodyRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerAppResourceCapacityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppResourceCapacityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppResourceCapacityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetEdgeContainerAppResourceCapacityResponseBody() = default ;
    GetEdgeContainerAppResourceCapacityResponseBody(const GetEdgeContainerAppResourceCapacityResponseBody &) = default ;
    GetEdgeContainerAppResourceCapacityResponseBody(GetEdgeContainerAppResourceCapacityResponseBody &&) = default ;
    GetEdgeContainerAppResourceCapacityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppResourceCapacityResponseBody() = default ;
    GetEdgeContainerAppResourceCapacityResponseBody& operator=(const GetEdgeContainerAppResourceCapacityResponseBody &) = default ;
    GetEdgeContainerAppResourceCapacityResponseBody& operator=(GetEdgeContainerAppResourceCapacityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regions_ == nullptr
        && return this->requestId_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<GetEdgeContainerAppResourceCapacityResponseBodyRegions> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<GetEdgeContainerAppResourceCapacityResponseBodyRegions>) };
    inline vector<GetEdgeContainerAppResourceCapacityResponseBodyRegions> regions() { DARABONBA_PTR_GET(regions_, vector<GetEdgeContainerAppResourceCapacityResponseBodyRegions>) };
    inline GetEdgeContainerAppResourceCapacityResponseBody& setRegions(const vector<GetEdgeContainerAppResourceCapacityResponseBodyRegions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline GetEdgeContainerAppResourceCapacityResponseBody& setRegions(vector<GetEdgeContainerAppResourceCapacityResponseBodyRegions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeContainerAppResourceCapacityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetEdgeContainerAppResourceCapacityResponseBodyRegions>> regions_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
