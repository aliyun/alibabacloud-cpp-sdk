// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVLEXTRACTIONRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETVLEXTRACTIONRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVLExtractionResultResponseBodyDataKvListInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetVLExtractionResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVLExtractionResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(kvListInfo, kvListInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetVLExtractionResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(kvListInfo, kvListInfo_);
    };
    GetVLExtractionResultResponseBodyData() = default ;
    GetVLExtractionResultResponseBodyData(const GetVLExtractionResultResponseBodyData &) = default ;
    GetVLExtractionResultResponseBodyData(GetVLExtractionResultResponseBodyData &&) = default ;
    GetVLExtractionResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVLExtractionResultResponseBodyData() = default ;
    GetVLExtractionResultResponseBodyData& operator=(const GetVLExtractionResultResponseBodyData &) = default ;
    GetVLExtractionResultResponseBodyData& operator=(GetVLExtractionResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->kvListInfo_ != nullptr; };
    // kvListInfo Field Functions 
    bool hasKvListInfo() const { return this->kvListInfo_ != nullptr;};
    void deleteKvListInfo() { this->kvListInfo_ = nullptr;};
    inline const vector<Models::GetVLExtractionResultResponseBodyDataKvListInfo> & kvListInfo() const { DARABONBA_PTR_GET_CONST(kvListInfo_, vector<Models::GetVLExtractionResultResponseBodyDataKvListInfo>) };
    inline vector<Models::GetVLExtractionResultResponseBodyDataKvListInfo> kvListInfo() { DARABONBA_PTR_GET(kvListInfo_, vector<Models::GetVLExtractionResultResponseBodyDataKvListInfo>) };
    inline GetVLExtractionResultResponseBodyData& setKvListInfo(const vector<Models::GetVLExtractionResultResponseBodyDataKvListInfo> & kvListInfo) { DARABONBA_PTR_SET_VALUE(kvListInfo_, kvListInfo) };
    inline GetVLExtractionResultResponseBodyData& setKvListInfo(vector<Models::GetVLExtractionResultResponseBodyDataKvListInfo> && kvListInfo) { DARABONBA_PTR_SET_RVALUE(kvListInfo_, kvListInfo) };


  protected:
    // Document Parsing Result
    std::shared_ptr<vector<Models::GetVLExtractionResultResponseBodyDataKvListInfo>> kvListInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
