// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGEOGRAPHICSUBREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGEOGRAPHICSUBREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListGeographicSubRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGeographicSubRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(GeographicSubRegions, geographicSubRegions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGeographicSubRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(GeographicSubRegions, geographicSubRegions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListGeographicSubRegionsResponseBody() = default ;
    ListGeographicSubRegionsResponseBody(const ListGeographicSubRegionsResponseBody &) = default ;
    ListGeographicSubRegionsResponseBody(ListGeographicSubRegionsResponseBody &&) = default ;
    ListGeographicSubRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGeographicSubRegionsResponseBody() = default ;
    ListGeographicSubRegionsResponseBody& operator=(const ListGeographicSubRegionsResponseBody &) = default ;
    ListGeographicSubRegionsResponseBody& operator=(ListGeographicSubRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && this->geographicSubRegions_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListGeographicSubRegionsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // geographicSubRegions Field Functions 
    bool hasGeographicSubRegions() const { return this->geographicSubRegions_ != nullptr;};
    void deleteGeographicSubRegions() { this->geographicSubRegions_ = nullptr;};
    inline const vector<string> & getGeographicSubRegions() const { DARABONBA_PTR_GET_CONST(geographicSubRegions_, vector<string>) };
    inline vector<string> getGeographicSubRegions() { DARABONBA_PTR_GET(geographicSubRegions_, vector<string>) };
    inline ListGeographicSubRegionsResponseBody& setGeographicSubRegions(const vector<string> & geographicSubRegions) { DARABONBA_PTR_SET_VALUE(geographicSubRegions_, geographicSubRegions) };
    inline ListGeographicSubRegionsResponseBody& setGeographicSubRegions(vector<string> && geographicSubRegions) { DARABONBA_PTR_SET_RVALUE(geographicSubRegions_, geographicSubRegions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGeographicSubRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of entries.
    shared_ptr<int64_t> count_ {};
    // The region list.
    shared_ptr<vector<string>> geographicSubRegions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
