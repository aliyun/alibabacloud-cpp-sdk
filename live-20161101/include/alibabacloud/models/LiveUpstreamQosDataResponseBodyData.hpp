// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIVEUPSTREAMQOSDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LIVEUPSTREAMQOSDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LiveUpstreamQosDataResponseBodyDataDetailData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class LiveUpstreamQosDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LiveUpstreamQosDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CdnDomain, cdnDomain_);
      DARABONBA_PTR_TO_JSON(CdnIsp, cdnIsp_);
      DARABONBA_PTR_TO_JSON(CdnOcid, cdnOcid_);
      DARABONBA_PTR_TO_JSON(CdnProvince, cdnProvince_);
      DARABONBA_PTR_TO_JSON(DetailData, detailData_);
      DARABONBA_PTR_TO_JSON(KwaiSidc, kwaiSidc_);
      DARABONBA_PTR_TO_JSON(KwaiTsc, kwaiTsc_);
      DARABONBA_PTR_TO_JSON(UpstreamDomain, upstreamDomain_);
    };
    friend void from_json(const Darabonba::Json& j, LiveUpstreamQosDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnDomain, cdnDomain_);
      DARABONBA_PTR_FROM_JSON(CdnIsp, cdnIsp_);
      DARABONBA_PTR_FROM_JSON(CdnOcid, cdnOcid_);
      DARABONBA_PTR_FROM_JSON(CdnProvince, cdnProvince_);
      DARABONBA_PTR_FROM_JSON(DetailData, detailData_);
      DARABONBA_PTR_FROM_JSON(KwaiSidc, kwaiSidc_);
      DARABONBA_PTR_FROM_JSON(KwaiTsc, kwaiTsc_);
      DARABONBA_PTR_FROM_JSON(UpstreamDomain, upstreamDomain_);
    };
    LiveUpstreamQosDataResponseBodyData() = default ;
    LiveUpstreamQosDataResponseBodyData(const LiveUpstreamQosDataResponseBodyData &) = default ;
    LiveUpstreamQosDataResponseBodyData(LiveUpstreamQosDataResponseBodyData &&) = default ;
    LiveUpstreamQosDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LiveUpstreamQosDataResponseBodyData() = default ;
    LiveUpstreamQosDataResponseBodyData& operator=(const LiveUpstreamQosDataResponseBodyData &) = default ;
    LiveUpstreamQosDataResponseBodyData& operator=(LiveUpstreamQosDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdnDomain_ == nullptr
        && return this->cdnIsp_ == nullptr && return this->cdnOcid_ == nullptr && return this->cdnProvince_ == nullptr && return this->detailData_ == nullptr && return this->kwaiSidc_ == nullptr
        && return this->kwaiTsc_ == nullptr && return this->upstreamDomain_ == nullptr; };
    // cdnDomain Field Functions 
    bool hasCdnDomain() const { return this->cdnDomain_ != nullptr;};
    void deleteCdnDomain() { this->cdnDomain_ = nullptr;};
    inline string cdnDomain() const { DARABONBA_PTR_GET_DEFAULT(cdnDomain_, "") };
    inline LiveUpstreamQosDataResponseBodyData& setCdnDomain(string cdnDomain) { DARABONBA_PTR_SET_VALUE(cdnDomain_, cdnDomain) };


    // cdnIsp Field Functions 
    bool hasCdnIsp() const { return this->cdnIsp_ != nullptr;};
    void deleteCdnIsp() { this->cdnIsp_ = nullptr;};
    inline string cdnIsp() const { DARABONBA_PTR_GET_DEFAULT(cdnIsp_, "") };
    inline LiveUpstreamQosDataResponseBodyData& setCdnIsp(string cdnIsp) { DARABONBA_PTR_SET_VALUE(cdnIsp_, cdnIsp) };


    // cdnOcid Field Functions 
    bool hasCdnOcid() const { return this->cdnOcid_ != nullptr;};
    void deleteCdnOcid() { this->cdnOcid_ = nullptr;};
    inline string cdnOcid() const { DARABONBA_PTR_GET_DEFAULT(cdnOcid_, "") };
    inline LiveUpstreamQosDataResponseBodyData& setCdnOcid(string cdnOcid) { DARABONBA_PTR_SET_VALUE(cdnOcid_, cdnOcid) };


    // cdnProvince Field Functions 
    bool hasCdnProvince() const { return this->cdnProvince_ != nullptr;};
    void deleteCdnProvince() { this->cdnProvince_ = nullptr;};
    inline string cdnProvince() const { DARABONBA_PTR_GET_DEFAULT(cdnProvince_, "") };
    inline LiveUpstreamQosDataResponseBodyData& setCdnProvince(string cdnProvince) { DARABONBA_PTR_SET_VALUE(cdnProvince_, cdnProvince) };


    // detailData Field Functions 
    bool hasDetailData() const { return this->detailData_ != nullptr;};
    void deleteDetailData() { this->detailData_ = nullptr;};
    inline const vector<Models::LiveUpstreamQosDataResponseBodyDataDetailData> & detailData() const { DARABONBA_PTR_GET_CONST(detailData_, vector<Models::LiveUpstreamQosDataResponseBodyDataDetailData>) };
    inline vector<Models::LiveUpstreamQosDataResponseBodyDataDetailData> detailData() { DARABONBA_PTR_GET(detailData_, vector<Models::LiveUpstreamQosDataResponseBodyDataDetailData>) };
    inline LiveUpstreamQosDataResponseBodyData& setDetailData(const vector<Models::LiveUpstreamQosDataResponseBodyDataDetailData> & detailData) { DARABONBA_PTR_SET_VALUE(detailData_, detailData) };
    inline LiveUpstreamQosDataResponseBodyData& setDetailData(vector<Models::LiveUpstreamQosDataResponseBodyDataDetailData> && detailData) { DARABONBA_PTR_SET_RVALUE(detailData_, detailData) };


    // kwaiSidc Field Functions 
    bool hasKwaiSidc() const { return this->kwaiSidc_ != nullptr;};
    void deleteKwaiSidc() { this->kwaiSidc_ = nullptr;};
    inline string kwaiSidc() const { DARABONBA_PTR_GET_DEFAULT(kwaiSidc_, "") };
    inline LiveUpstreamQosDataResponseBodyData& setKwaiSidc(string kwaiSidc) { DARABONBA_PTR_SET_VALUE(kwaiSidc_, kwaiSidc) };


    // kwaiTsc Field Functions 
    bool hasKwaiTsc() const { return this->kwaiTsc_ != nullptr;};
    void deleteKwaiTsc() { this->kwaiTsc_ = nullptr;};
    inline int64_t kwaiTsc() const { DARABONBA_PTR_GET_DEFAULT(kwaiTsc_, 0L) };
    inline LiveUpstreamQosDataResponseBodyData& setKwaiTsc(int64_t kwaiTsc) { DARABONBA_PTR_SET_VALUE(kwaiTsc_, kwaiTsc) };


    // upstreamDomain Field Functions 
    bool hasUpstreamDomain() const { return this->upstreamDomain_ != nullptr;};
    void deleteUpstreamDomain() { this->upstreamDomain_ = nullptr;};
    inline string upstreamDomain() const { DARABONBA_PTR_GET_DEFAULT(upstreamDomain_, "") };
    inline LiveUpstreamQosDataResponseBodyData& setUpstreamDomain(string upstreamDomain) { DARABONBA_PTR_SET_VALUE(upstreamDomain_, upstreamDomain) };


  protected:
    std::shared_ptr<string> cdnDomain_ = nullptr;
    std::shared_ptr<string> cdnIsp_ = nullptr;
    std::shared_ptr<string> cdnOcid_ = nullptr;
    std::shared_ptr<string> cdnProvince_ = nullptr;
    std::shared_ptr<vector<Models::LiveUpstreamQosDataResponseBodyDataDetailData>> detailData_ = nullptr;
    std::shared_ptr<string> kwaiSidc_ = nullptr;
    std::shared_ptr<int64_t> kwaiTsc_ = nullptr;
    std::shared_ptr<string> upstreamDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
