// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEIPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEIPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveIpInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveIpInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ISP, ISP_);
      DARABONBA_PTR_TO_JSON(IspEname, ispEname_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionEname, regionEname_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveIpInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ISP, ISP_);
      DARABONBA_PTR_FROM_JSON(IspEname, ispEname_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionEname, regionEname_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveIpInfoResponseBody() = default ;
    DescribeLiveIpInfoResponseBody(const DescribeLiveIpInfoResponseBody &) = default ;
    DescribeLiveIpInfoResponseBody(DescribeLiveIpInfoResponseBody &&) = default ;
    DescribeLiveIpInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveIpInfoResponseBody() = default ;
    DescribeLiveIpInfoResponseBody& operator=(const DescribeLiveIpInfoResponseBody &) = default ;
    DescribeLiveIpInfoResponseBody& operator=(DescribeLiveIpInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ISP_ == nullptr
        && this->ispEname_ == nullptr && this->region_ == nullptr && this->regionEname_ == nullptr && this->requestId_ == nullptr; };
    // ISP Field Functions 
    bool hasISP() const { return this->ISP_ != nullptr;};
    void deleteISP() { this->ISP_ = nullptr;};
    inline string getISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
    inline DescribeLiveIpInfoResponseBody& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


    // ispEname Field Functions 
    bool hasIspEname() const { return this->ispEname_ != nullptr;};
    void deleteIspEname() { this->ispEname_ = nullptr;};
    inline string getIspEname() const { DARABONBA_PTR_GET_DEFAULT(ispEname_, "") };
    inline DescribeLiveIpInfoResponseBody& setIspEname(string ispEname) { DARABONBA_PTR_SET_VALUE(ispEname_, ispEname) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveIpInfoResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionEname Field Functions 
    bool hasRegionEname() const { return this->regionEname_ != nullptr;};
    void deleteRegionEname() { this->regionEname_ = nullptr;};
    inline string getRegionEname() const { DARABONBA_PTR_GET_DEFAULT(regionEname_, "") };
    inline DescribeLiveIpInfoResponseBody& setRegionEname(string regionEname) { DARABONBA_PTR_SET_VALUE(regionEname_, regionEname) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveIpInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Chinese name of the ISP.
    shared_ptr<string> ISP_ {};
    // The English name of the Internet service provider (ISP).
    shared_ptr<string> ispEname_ {};
    // The Chinese name of the region.
    shared_ptr<string> region_ {};
    // The English name of the region.
    shared_ptr<string> regionEname_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
