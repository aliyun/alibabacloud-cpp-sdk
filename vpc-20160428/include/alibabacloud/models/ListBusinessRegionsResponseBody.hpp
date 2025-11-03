// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUSINESSREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBUSINESSREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBusinessRegionsResponseBodyGeographicSubRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListBusinessRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBusinessRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(GeographicSubRegions, geographicSubRegions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBusinessRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(GeographicSubRegions, geographicSubRegions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBusinessRegionsResponseBody() = default ;
    ListBusinessRegionsResponseBody(const ListBusinessRegionsResponseBody &) = default ;
    ListBusinessRegionsResponseBody(ListBusinessRegionsResponseBody &&) = default ;
    ListBusinessRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBusinessRegionsResponseBody() = default ;
    ListBusinessRegionsResponseBody& operator=(const ListBusinessRegionsResponseBody &) = default ;
    ListBusinessRegionsResponseBody& operator=(ListBusinessRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->geographicSubRegions_ == nullptr && return this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListBusinessRegionsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // geographicSubRegions Field Functions 
    bool hasGeographicSubRegions() const { return this->geographicSubRegions_ != nullptr;};
    void deleteGeographicSubRegions() { this->geographicSubRegions_ = nullptr;};
    inline const vector<ListBusinessRegionsResponseBodyGeographicSubRegions> & geographicSubRegions() const { DARABONBA_PTR_GET_CONST(geographicSubRegions_, vector<ListBusinessRegionsResponseBodyGeographicSubRegions>) };
    inline vector<ListBusinessRegionsResponseBodyGeographicSubRegions> geographicSubRegions() { DARABONBA_PTR_GET(geographicSubRegions_, vector<ListBusinessRegionsResponseBodyGeographicSubRegions>) };
    inline ListBusinessRegionsResponseBody& setGeographicSubRegions(const vector<ListBusinessRegionsResponseBodyGeographicSubRegions> & geographicSubRegions) { DARABONBA_PTR_SET_VALUE(geographicSubRegions_, geographicSubRegions) };
    inline ListBusinessRegionsResponseBody& setGeographicSubRegions(vector<ListBusinessRegionsResponseBodyGeographicSubRegions> && geographicSubRegions) { DARABONBA_PTR_SET_RVALUE(geographicSubRegions_, geographicSubRegions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBusinessRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The total number of entries returned.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The list of regions available for Express Connect circuits.
    std::shared_ptr<vector<ListBusinessRegionsResponseBodyGeographicSubRegions>> geographicSubRegions_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
