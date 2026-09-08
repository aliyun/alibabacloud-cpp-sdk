// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class ListRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegionList, regionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionList, regionList_);
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
    class RegionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionList& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
      };
      friend void from_json(const Darabonba::Json& j, RegionList& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
      };
      RegionList() = default ;
      RegionList(const RegionList &) = default ;
      RegionList(RegionList &&) = default ;
      RegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionList() = default ;
      RegionList& operator=(const RegionList &) = default ;
      RegionList& operator=(RegionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->regionName_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline RegionList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline RegionList& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    protected:
      shared_ptr<string> regionId_ {};
      shared_ptr<string> regionName_ {};
    };

    virtual bool empty() const override { return this->regionList_ == nullptr
        && this->requestId_ == nullptr; };
    // regionList Field Functions 
    bool hasRegionList() const { return this->regionList_ != nullptr;};
    void deleteRegionList() { this->regionList_ = nullptr;};
    inline const vector<ListRegionsResponseBody::RegionList> & getRegionList() const { DARABONBA_PTR_GET_CONST(regionList_, vector<ListRegionsResponseBody::RegionList>) };
    inline vector<ListRegionsResponseBody::RegionList> getRegionList() { DARABONBA_PTR_GET(regionList_, vector<ListRegionsResponseBody::RegionList>) };
    inline ListRegionsResponseBody& setRegionList(const vector<ListRegionsResponseBody::RegionList> & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
    inline ListRegionsResponseBody& setRegionList(vector<ListRegionsResponseBody::RegionList> && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListRegionsResponseBody::RegionList>> regionList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
