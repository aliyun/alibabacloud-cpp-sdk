// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ResultInfo, resultInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ResultInfo, resultInfo_);
    };
    GetResultResponseBodyData() = default ;
    GetResultResponseBodyData(const GetResultResponseBodyData &) = default ;
    GetResultResponseBodyData(GetResultResponseBodyData &&) = default ;
    GetResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyData() = default ;
    GetResultResponseBodyData& operator=(const GetResultResponseBodyData &) = default ;
    GetResultResponseBodyData& operator=(GetResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resultInfo_ != nullptr; };
    // resultInfo Field Functions 
    bool hasResultInfo() const { return this->resultInfo_ != nullptr;};
    void deleteResultInfo() { this->resultInfo_ = nullptr;};
    inline const vector<Models::GetResultResponseBodyDataResultInfo> & resultInfo() const { DARABONBA_PTR_GET_CONST(resultInfo_, vector<Models::GetResultResponseBodyDataResultInfo>) };
    inline vector<Models::GetResultResponseBodyDataResultInfo> resultInfo() { DARABONBA_PTR_GET(resultInfo_, vector<Models::GetResultResponseBodyDataResultInfo>) };
    inline GetResultResponseBodyData& setResultInfo(const vector<Models::GetResultResponseBodyDataResultInfo> & resultInfo) { DARABONBA_PTR_SET_VALUE(resultInfo_, resultInfo) };
    inline GetResultResponseBodyData& setResultInfo(vector<Models::GetResultResponseBodyDataResultInfo> && resultInfo) { DARABONBA_PTR_SET_RVALUE(resultInfo_, resultInfo) };


  protected:
    std::shared_ptr<vector<Models::GetResultResponseBodyDataResultInfo>> resultInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
