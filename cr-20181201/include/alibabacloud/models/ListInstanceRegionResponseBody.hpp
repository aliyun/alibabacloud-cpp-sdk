// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListInstanceRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstanceRegionResponseBody() = default ;
    ListInstanceRegionResponseBody(const ListInstanceRegionResponseBody &) = default ;
    ListInstanceRegionResponseBody(ListInstanceRegionResponseBody &&) = default ;
    ListInstanceRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRegionResponseBody() = default ;
    ListInstanceRegionResponseBody& operator=(const ListInstanceRegionResponseBody &) = default ;
    ListInstanceRegionResponseBody& operator=(ListInstanceRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Regions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Regions& obj) { 
        DARABONBA_PTR_TO_JSON(LocalName, localName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, Regions& obj) { 
        DARABONBA_PTR_FROM_JSON(LocalName, localName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      Regions() = default ;
      Regions(const Regions &) = default ;
      Regions(Regions &&) = default ;
      Regions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Regions() = default ;
      Regions& operator=(const Regions &) = default ;
      Regions& operator=(Regions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->localName_ == nullptr
        && this->regionId_ == nullptr; };
      // localName Field Functions 
      bool hasLocalName() const { return this->localName_ != nullptr;};
      void deleteLocalName() { this->localName_ = nullptr;};
      inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
      inline Regions& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Regions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The name of the region.
      shared_ptr<string> localName_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->regions_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListInstanceRegionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListInstanceRegionResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<ListInstanceRegionResponseBody::Regions> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<ListInstanceRegionResponseBody::Regions>) };
    inline vector<ListInstanceRegionResponseBody::Regions> getRegions() { DARABONBA_PTR_GET(regions_, vector<ListInstanceRegionResponseBody::Regions>) };
    inline ListInstanceRegionResponseBody& setRegions(const vector<ListInstanceRegionResponseBody::Regions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline ListInstanceRegionResponseBody& setRegions(vector<ListInstanceRegionResponseBody::Regions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    shared_ptr<bool> isSuccess_ {};
    // The list of regions.
    shared_ptr<vector<ListInstanceRegionResponseBody::Regions>> regions_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
