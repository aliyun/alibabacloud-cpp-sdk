// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGEREGIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGEREGIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStorageRegionListResponseBodyRegionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetStorageRegionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageRegionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegionList, regionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageRegionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionList, regionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetStorageRegionListResponseBody() = default ;
    GetStorageRegionListResponseBody(const GetStorageRegionListResponseBody &) = default ;
    GetStorageRegionListResponseBody(GetStorageRegionListResponseBody &&) = default ;
    GetStorageRegionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageRegionListResponseBody() = default ;
    GetStorageRegionListResponseBody& operator=(const GetStorageRegionListResponseBody &) = default ;
    GetStorageRegionListResponseBody& operator=(GetStorageRegionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionList_ != nullptr
        && this->requestId_ != nullptr; };
    // regionList Field Functions 
    bool hasRegionList() const { return this->regionList_ != nullptr;};
    void deleteRegionList() { this->regionList_ = nullptr;};
    inline const GetStorageRegionListResponseBodyRegionList & regionList() const { DARABONBA_PTR_GET_CONST(regionList_, GetStorageRegionListResponseBodyRegionList) };
    inline GetStorageRegionListResponseBodyRegionList regionList() { DARABONBA_PTR_GET(regionList_, GetStorageRegionListResponseBodyRegionList) };
    inline GetStorageRegionListResponseBody& setRegionList(const GetStorageRegionListResponseBodyRegionList & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
    inline GetStorageRegionListResponseBody& setRegionList(GetStorageRegionListResponseBodyRegionList && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStorageRegionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetStorageRegionListResponseBodyRegionList> regionList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
