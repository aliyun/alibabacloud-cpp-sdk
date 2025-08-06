// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEIAMREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEIAMREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEiamRegionsResponseBodyRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListEiamRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEiamRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEiamRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEiamRegionsResponseBody() = default ;
    ListEiamRegionsResponseBody(const ListEiamRegionsResponseBody &) = default ;
    ListEiamRegionsResponseBody(ListEiamRegionsResponseBody &&) = default ;
    ListEiamRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEiamRegionsResponseBody() = default ;
    ListEiamRegionsResponseBody& operator=(const ListEiamRegionsResponseBody &) = default ;
    ListEiamRegionsResponseBody& operator=(ListEiamRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regions_ != nullptr
        && this->requestId_ != nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<ListEiamRegionsResponseBodyRegions> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<ListEiamRegionsResponseBodyRegions>) };
    inline vector<ListEiamRegionsResponseBodyRegions> regions() { DARABONBA_PTR_GET(regions_, vector<ListEiamRegionsResponseBodyRegions>) };
    inline ListEiamRegionsResponseBody& setRegions(const vector<ListEiamRegionsResponseBodyRegions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline ListEiamRegionsResponseBody& setRegions(vector<ListEiamRegionsResponseBodyRegions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEiamRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The region list.
    std::shared_ptr<vector<ListEiamRegionsResponseBodyRegions>> regions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
