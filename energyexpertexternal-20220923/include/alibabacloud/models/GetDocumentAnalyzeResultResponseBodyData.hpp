// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTANALYZERESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTANALYZERESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDocumentAnalyzeResultResponseBodyDataKvListInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDocumentAnalyzeResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentAnalyzeResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(kvListInfo, kvListInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentAnalyzeResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(kvListInfo, kvListInfo_);
    };
    GetDocumentAnalyzeResultResponseBodyData() = default ;
    GetDocumentAnalyzeResultResponseBodyData(const GetDocumentAnalyzeResultResponseBodyData &) = default ;
    GetDocumentAnalyzeResultResponseBodyData(GetDocumentAnalyzeResultResponseBodyData &&) = default ;
    GetDocumentAnalyzeResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentAnalyzeResultResponseBodyData() = default ;
    GetDocumentAnalyzeResultResponseBodyData& operator=(const GetDocumentAnalyzeResultResponseBodyData &) = default ;
    GetDocumentAnalyzeResultResponseBodyData& operator=(GetDocumentAnalyzeResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kvListInfo_ == nullptr; };
    // kvListInfo Field Functions 
    bool hasKvListInfo() const { return this->kvListInfo_ != nullptr;};
    void deleteKvListInfo() { this->kvListInfo_ = nullptr;};
    inline const vector<Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfo> & kvListInfo() const { DARABONBA_PTR_GET_CONST(kvListInfo_, vector<Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfo>) };
    inline vector<Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfo> kvListInfo() { DARABONBA_PTR_GET(kvListInfo_, vector<Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfo>) };
    inline GetDocumentAnalyzeResultResponseBodyData& setKvListInfo(const vector<Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfo> & kvListInfo) { DARABONBA_PTR_SET_VALUE(kvListInfo_, kvListInfo) };
    inline GetDocumentAnalyzeResultResponseBodyData& setKvListInfo(vector<Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfo> && kvListInfo) { DARABONBA_PTR_SET_RVALUE(kvListInfo_, kvListInfo) };


  protected:
    // Document Parsing Result
    std::shared_ptr<vector<Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfo>> kvListInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
