// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCEXTRACTIONRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCEXTRACTIONRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDocExtractionResultResponseBodyDataKvListInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDocExtractionResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocExtractionResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(kvListInfo, kvListInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocExtractionResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(kvListInfo, kvListInfo_);
    };
    GetDocExtractionResultResponseBodyData() = default ;
    GetDocExtractionResultResponseBodyData(const GetDocExtractionResultResponseBodyData &) = default ;
    GetDocExtractionResultResponseBodyData(GetDocExtractionResultResponseBodyData &&) = default ;
    GetDocExtractionResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocExtractionResultResponseBodyData() = default ;
    GetDocExtractionResultResponseBodyData& operator=(const GetDocExtractionResultResponseBodyData &) = default ;
    GetDocExtractionResultResponseBodyData& operator=(GetDocExtractionResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->kvListInfo_ != nullptr; };
    // kvListInfo Field Functions 
    bool hasKvListInfo() const { return this->kvListInfo_ != nullptr;};
    void deleteKvListInfo() { this->kvListInfo_ = nullptr;};
    inline const vector<Models::GetDocExtractionResultResponseBodyDataKvListInfo> & kvListInfo() const { DARABONBA_PTR_GET_CONST(kvListInfo_, vector<Models::GetDocExtractionResultResponseBodyDataKvListInfo>) };
    inline vector<Models::GetDocExtractionResultResponseBodyDataKvListInfo> kvListInfo() { DARABONBA_PTR_GET(kvListInfo_, vector<Models::GetDocExtractionResultResponseBodyDataKvListInfo>) };
    inline GetDocExtractionResultResponseBodyData& setKvListInfo(const vector<Models::GetDocExtractionResultResponseBodyDataKvListInfo> & kvListInfo) { DARABONBA_PTR_SET_VALUE(kvListInfo_, kvListInfo) };
    inline GetDocExtractionResultResponseBodyData& setKvListInfo(vector<Models::GetDocExtractionResultResponseBodyDataKvListInfo> && kvListInfo) { DARABONBA_PTR_SET_RVALUE(kvListInfo_, kvListInfo) };


  protected:
    // Details of document extraction results
    std::shared_ptr<vector<Models::GetDocExtractionResultResponseBodyDataKvListInfo>> kvListInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
