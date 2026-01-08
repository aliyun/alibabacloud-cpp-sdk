// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class RegionModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionModels& obj) { 
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, RegionModels& obj) { 
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      };
      RegionModels() = default ;
      RegionModels(const RegionModels &) = default ;
      RegionModels(RegionModels &&) = default ;
      RegionModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionModels() = default ;
      RegionModels& operator=(const RegionModels &) = default ;
      RegionModels& operator=(RegionModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline RegionModels& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The region ID.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->regionModels_ == nullptr
        && this->requestId_ == nullptr; };
    // regionModels Field Functions 
    bool hasRegionModels() const { return this->regionModels_ != nullptr;};
    void deleteRegionModels() { this->regionModels_ = nullptr;};
    inline const vector<ListRegionsResponseBody::RegionModels> & getRegionModels() const { DARABONBA_PTR_GET_CONST(regionModels_, vector<ListRegionsResponseBody::RegionModels>) };
    inline vector<ListRegionsResponseBody::RegionModels> getRegionModels() { DARABONBA_PTR_GET(regionModels_, vector<ListRegionsResponseBody::RegionModels>) };
    inline ListRegionsResponseBody& setRegionModels(const vector<ListRegionsResponseBody::RegionModels> & regionModels) { DARABONBA_PTR_SET_VALUE(regionModels_, regionModels) };
    inline ListRegionsResponseBody& setRegionModels(vector<ListRegionsResponseBody::RegionModels> && regionModels) { DARABONBA_PTR_SET_RVALUE(regionModels_, regionModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The region IDs.
    shared_ptr<vector<ListRegionsResponseBody::RegionModels>> regionModels_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
