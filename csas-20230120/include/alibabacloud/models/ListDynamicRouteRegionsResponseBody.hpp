// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICROUTEREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICROUTEREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListDynamicRouteRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicRouteRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicRouteRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListDynamicRouteRegionsResponseBody() = default ;
    ListDynamicRouteRegionsResponseBody(const ListDynamicRouteRegionsResponseBody &) = default ;
    ListDynamicRouteRegionsResponseBody(ListDynamicRouteRegionsResponseBody &&) = default ;
    ListDynamicRouteRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicRouteRegionsResponseBody() = default ;
    ListDynamicRouteRegionsResponseBody& operator=(const ListDynamicRouteRegionsResponseBody &) = default ;
    ListDynamicRouteRegionsResponseBody& operator=(ListDynamicRouteRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regions_ != nullptr
        && this->requestId_ != nullptr && this->totalNum_ != nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<string> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<string>) };
    inline vector<string> regions() { DARABONBA_PTR_GET(regions_, vector<string>) };
    inline ListDynamicRouteRegionsResponseBody& setRegions(const vector<string> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline ListDynamicRouteRegionsResponseBody& setRegions(vector<string> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDynamicRouteRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListDynamicRouteRegionsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<vector<string>> regions_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
