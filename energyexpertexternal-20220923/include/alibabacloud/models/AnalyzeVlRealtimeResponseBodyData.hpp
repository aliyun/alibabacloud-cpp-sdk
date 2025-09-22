// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZEVLREALTIMERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ANALYZEVLREALTIMERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AnalyzeVlRealtimeResponseBodyDataKvListInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class AnalyzeVlRealtimeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeVlRealtimeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(kvListInfo, kvListInfo_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeVlRealtimeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(kvListInfo, kvListInfo_);
    };
    AnalyzeVlRealtimeResponseBodyData() = default ;
    AnalyzeVlRealtimeResponseBodyData(const AnalyzeVlRealtimeResponseBodyData &) = default ;
    AnalyzeVlRealtimeResponseBodyData(AnalyzeVlRealtimeResponseBodyData &&) = default ;
    AnalyzeVlRealtimeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeVlRealtimeResponseBodyData() = default ;
    AnalyzeVlRealtimeResponseBodyData& operator=(const AnalyzeVlRealtimeResponseBodyData &) = default ;
    AnalyzeVlRealtimeResponseBodyData& operator=(AnalyzeVlRealtimeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->kvListInfo_ != nullptr; };
    // kvListInfo Field Functions 
    bool hasKvListInfo() const { return this->kvListInfo_ != nullptr;};
    void deleteKvListInfo() { this->kvListInfo_ = nullptr;};
    inline const vector<Models::AnalyzeVlRealtimeResponseBodyDataKvListInfo> & kvListInfo() const { DARABONBA_PTR_GET_CONST(kvListInfo_, vector<Models::AnalyzeVlRealtimeResponseBodyDataKvListInfo>) };
    inline vector<Models::AnalyzeVlRealtimeResponseBodyDataKvListInfo> kvListInfo() { DARABONBA_PTR_GET(kvListInfo_, vector<Models::AnalyzeVlRealtimeResponseBodyDataKvListInfo>) };
    inline AnalyzeVlRealtimeResponseBodyData& setKvListInfo(const vector<Models::AnalyzeVlRealtimeResponseBodyDataKvListInfo> & kvListInfo) { DARABONBA_PTR_SET_VALUE(kvListInfo_, kvListInfo) };
    inline AnalyzeVlRealtimeResponseBodyData& setKvListInfo(vector<Models::AnalyzeVlRealtimeResponseBodyDataKvListInfo> && kvListInfo) { DARABONBA_PTR_SET_RVALUE(kvListInfo_, kvListInfo) };


  protected:
    // Document parsing result details
    std::shared_ptr<vector<Models::AnalyzeVlRealtimeResponseBodyDataKvListInfo>> kvListInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
