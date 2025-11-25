// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLSTATISTICRESPONSEBODYSDLSTATISTICRESP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLSTATISTICRESPONSEBODYSDLSTATISTICRESP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList.hpp>
#include <alibabacloud/models/DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList.hpp>
#include <alibabacloud/models/DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSdlStatisticResponseBodySdlStatisticResp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlStatisticResponseBodySdlStatisticResp& obj) { 
      DARABONBA_PTR_TO_JSON(SdlAssetTopList, sdlAssetTopList_);
      DARABONBA_PTR_TO_JSON(SdlDstTopList, sdlDstTopList_);
      DARABONBA_PTR_TO_JSON(SdlEventTypeCountList, sdlEventTypeCountList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSdlStatisticResponseBodySdlStatisticResp& obj) { 
      DARABONBA_PTR_FROM_JSON(SdlAssetTopList, sdlAssetTopList_);
      DARABONBA_PTR_FROM_JSON(SdlDstTopList, sdlDstTopList_);
      DARABONBA_PTR_FROM_JSON(SdlEventTypeCountList, sdlEventTypeCountList_);
    };
    DescribeSdlStatisticResponseBodySdlStatisticResp() = default ;
    DescribeSdlStatisticResponseBodySdlStatisticResp(const DescribeSdlStatisticResponseBodySdlStatisticResp &) = default ;
    DescribeSdlStatisticResponseBodySdlStatisticResp(DescribeSdlStatisticResponseBodySdlStatisticResp &&) = default ;
    DescribeSdlStatisticResponseBodySdlStatisticResp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlStatisticResponseBodySdlStatisticResp() = default ;
    DescribeSdlStatisticResponseBodySdlStatisticResp& operator=(const DescribeSdlStatisticResponseBodySdlStatisticResp &) = default ;
    DescribeSdlStatisticResponseBodySdlStatisticResp& operator=(DescribeSdlStatisticResponseBodySdlStatisticResp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sdlAssetTopList_ == nullptr
        && return this->sdlDstTopList_ == nullptr && return this->sdlEventTypeCountList_ == nullptr; };
    // sdlAssetTopList Field Functions 
    bool hasSdlAssetTopList() const { return this->sdlAssetTopList_ != nullptr;};
    void deleteSdlAssetTopList() { this->sdlAssetTopList_ = nullptr;};
    inline const vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList> & sdlAssetTopList() const { DARABONBA_PTR_GET_CONST(sdlAssetTopList_, vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList>) };
    inline vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList> sdlAssetTopList() { DARABONBA_PTR_GET(sdlAssetTopList_, vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList>) };
    inline DescribeSdlStatisticResponseBodySdlStatisticResp& setSdlAssetTopList(const vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList> & sdlAssetTopList) { DARABONBA_PTR_SET_VALUE(sdlAssetTopList_, sdlAssetTopList) };
    inline DescribeSdlStatisticResponseBodySdlStatisticResp& setSdlAssetTopList(vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList> && sdlAssetTopList) { DARABONBA_PTR_SET_RVALUE(sdlAssetTopList_, sdlAssetTopList) };


    // sdlDstTopList Field Functions 
    bool hasSdlDstTopList() const { return this->sdlDstTopList_ != nullptr;};
    void deleteSdlDstTopList() { this->sdlDstTopList_ = nullptr;};
    inline const vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList> & sdlDstTopList() const { DARABONBA_PTR_GET_CONST(sdlDstTopList_, vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList>) };
    inline vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList> sdlDstTopList() { DARABONBA_PTR_GET(sdlDstTopList_, vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList>) };
    inline DescribeSdlStatisticResponseBodySdlStatisticResp& setSdlDstTopList(const vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList> & sdlDstTopList) { DARABONBA_PTR_SET_VALUE(sdlDstTopList_, sdlDstTopList) };
    inline DescribeSdlStatisticResponseBodySdlStatisticResp& setSdlDstTopList(vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList> && sdlDstTopList) { DARABONBA_PTR_SET_RVALUE(sdlDstTopList_, sdlDstTopList) };


    // sdlEventTypeCountList Field Functions 
    bool hasSdlEventTypeCountList() const { return this->sdlEventTypeCountList_ != nullptr;};
    void deleteSdlEventTypeCountList() { this->sdlEventTypeCountList_ = nullptr;};
    inline const vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList> & sdlEventTypeCountList() const { DARABONBA_PTR_GET_CONST(sdlEventTypeCountList_, vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList>) };
    inline vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList> sdlEventTypeCountList() { DARABONBA_PTR_GET(sdlEventTypeCountList_, vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList>) };
    inline DescribeSdlStatisticResponseBodySdlStatisticResp& setSdlEventTypeCountList(const vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList> & sdlEventTypeCountList) { DARABONBA_PTR_SET_VALUE(sdlEventTypeCountList_, sdlEventTypeCountList) };
    inline DescribeSdlStatisticResponseBodySdlStatisticResp& setSdlEventTypeCountList(vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList> && sdlEventTypeCountList) { DARABONBA_PTR_SET_RVALUE(sdlEventTypeCountList_, sdlEventTypeCountList) };


  protected:
    std::shared_ptr<vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlAssetTopList>> sdlAssetTopList_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlDstTopList>> sdlDstTopList_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSdlStatisticResponseBodySdlStatisticRespSdlEventTypeCountList>> sdlEventTypeCountList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
