// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTHITSHITCID_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTHITSHITCID_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid& obj) { 
      DARABONBA_PTR_TO_JSON(Cid, cid_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid& obj) { 
      DARABONBA_PTR_FROM_JSON(Cid, cid_);
    };
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid(const GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid(GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid &&) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid& operator=(const GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid& operator=(GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cid_ == nullptr; };
    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline const vector<string> & cid() const { DARABONBA_PTR_GET_CONST(cid_, vector<string>) };
    inline vector<string> cid() { DARABONBA_PTR_GET(cid_, vector<string>) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid& setCid(const vector<string> & cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid& setCid(vector<string> && cid) { DARABONBA_PTR_SET_RVALUE(cid_, cid) };


  protected:
    std::shared_ptr<vector<string>> cid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
