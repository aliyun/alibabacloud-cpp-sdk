// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTHITS_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTHITS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitResultHitResultHits : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitResultHitResultHits& obj) { 
      DARABONBA_PTR_TO_JSON(Hit, hit_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitResultHitResultHits& obj) { 
      DARABONBA_PTR_FROM_JSON(Hit, hit_);
    };
    GetResultResponseBodyDataResultInfoHitResultHitResultHits() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHits(const GetResultResponseBodyDataResultInfoHitResultHitResultHits &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHits(GetResultResponseBodyDataResultInfoHitResultHitResultHits &&) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHits(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultHits() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHits& operator=(const GetResultResponseBodyDataResultInfoHitResultHitResultHits &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHits& operator=(GetResultResponseBodyDataResultInfoHitResultHitResultHits &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hit_ == nullptr; };
    // hit Field Functions 
    bool hasHit() const { return this->hit_ != nullptr;};
    void deleteHit() { this->hit_ = nullptr;};
    inline const vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit> & hit() const { DARABONBA_PTR_GET_CONST(hit_, vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit>) };
    inline vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit> hit() { DARABONBA_PTR_GET(hit_, vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit>) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultHits& setHit(const vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit> & hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultHits& setHit(vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit> && hit) { DARABONBA_PTR_SET_RVALUE(hit_, hit) };


  protected:
    std::shared_ptr<vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit>> hit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
