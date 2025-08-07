// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitResult& obj) { 
      DARABONBA_PTR_TO_JSON(HitResult, hitResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitResult& obj) { 
      DARABONBA_PTR_FROM_JSON(HitResult, hitResult_);
    };
    GetResultResponseBodyDataResultInfoHitResult() = default ;
    GetResultResponseBodyDataResultInfoHitResult(const GetResultResponseBodyDataResultInfoHitResult &) = default ;
    GetResultResponseBodyDataResultInfoHitResult(GetResultResponseBodyDataResultInfoHitResult &&) = default ;
    GetResultResponseBodyDataResultInfoHitResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitResult() = default ;
    GetResultResponseBodyDataResultInfoHitResult& operator=(const GetResultResponseBodyDataResultInfoHitResult &) = default ;
    GetResultResponseBodyDataResultInfoHitResult& operator=(GetResultResponseBodyDataResultInfoHitResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hitResult_ != nullptr; };
    // hitResult Field Functions 
    bool hasHitResult() const { return this->hitResult_ != nullptr;};
    void deleteHitResult() { this->hitResult_ = nullptr;};
    inline const vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResult> & hitResult() const { DARABONBA_PTR_GET_CONST(hitResult_, vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResult>) };
    inline vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResult> hitResult() { DARABONBA_PTR_GET(hitResult_, vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResult>) };
    inline GetResultResponseBodyDataResultInfoHitResult& setHitResult(const vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResult> & hitResult) { DARABONBA_PTR_SET_VALUE(hitResult_, hitResult) };
    inline GetResultResponseBodyDataResultInfoHitResult& setHitResult(vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResult> && hitResult) { DARABONBA_PTR_SET_RVALUE(hitResult_, hitResult) };


  protected:
    std::shared_ptr<vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResult>> hitResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
