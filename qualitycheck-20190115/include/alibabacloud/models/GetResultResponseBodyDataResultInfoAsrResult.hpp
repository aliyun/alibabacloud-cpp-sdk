// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOASRRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOASRRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoAsrResultAsrResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoAsrResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoAsrResult& obj) { 
      DARABONBA_PTR_TO_JSON(AsrResult, asrResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoAsrResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrResult, asrResult_);
    };
    GetResultResponseBodyDataResultInfoAsrResult() = default ;
    GetResultResponseBodyDataResultInfoAsrResult(const GetResultResponseBodyDataResultInfoAsrResult &) = default ;
    GetResultResponseBodyDataResultInfoAsrResult(GetResultResponseBodyDataResultInfoAsrResult &&) = default ;
    GetResultResponseBodyDataResultInfoAsrResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoAsrResult() = default ;
    GetResultResponseBodyDataResultInfoAsrResult& operator=(const GetResultResponseBodyDataResultInfoAsrResult &) = default ;
    GetResultResponseBodyDataResultInfoAsrResult& operator=(GetResultResponseBodyDataResultInfoAsrResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asrResult_ != nullptr; };
    // asrResult Field Functions 
    bool hasAsrResult() const { return this->asrResult_ != nullptr;};
    void deleteAsrResult() { this->asrResult_ = nullptr;};
    inline const vector<Models::GetResultResponseBodyDataResultInfoAsrResultAsrResult> & asrResult() const { DARABONBA_PTR_GET_CONST(asrResult_, vector<Models::GetResultResponseBodyDataResultInfoAsrResultAsrResult>) };
    inline vector<Models::GetResultResponseBodyDataResultInfoAsrResultAsrResult> asrResult() { DARABONBA_PTR_GET(asrResult_, vector<Models::GetResultResponseBodyDataResultInfoAsrResultAsrResult>) };
    inline GetResultResponseBodyDataResultInfoAsrResult& setAsrResult(const vector<Models::GetResultResponseBodyDataResultInfoAsrResultAsrResult> & asrResult) { DARABONBA_PTR_SET_VALUE(asrResult_, asrResult) };
    inline GetResultResponseBodyDataResultInfoAsrResult& setAsrResult(vector<Models::GetResultResponseBodyDataResultInfoAsrResultAsrResult> && asrResult) { DARABONBA_PTR_SET_RVALUE(asrResult_, asrResult) };


  protected:
    std::shared_ptr<vector<Models::GetResultResponseBodyDataResultInfoAsrResultAsrResult>> asrResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
