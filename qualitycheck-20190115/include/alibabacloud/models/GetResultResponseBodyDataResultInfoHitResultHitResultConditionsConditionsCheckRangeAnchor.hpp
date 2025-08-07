// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTCONDITIONSCONDITIONSCHECKRANGEANCHOR_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTCONDITIONSCONDITIONSCHECKRANGEANCHOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor& obj) { 
      DARABONBA_PTR_TO_JSON(Cid, cid_);
      DARABONBA_PTR_TO_JSON(Hit_time, hitTime_);
      DARABONBA_PTR_TO_JSON(Location, location_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor& obj) { 
      DARABONBA_PTR_FROM_JSON(Cid, cid_);
      DARABONBA_PTR_FROM_JSON(Hit_time, hitTime_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
    };
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor(const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor(GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor &&) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor& operator=(const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor& operator=(GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cid_ != nullptr
        && this->hitTime_ != nullptr && this->location_ != nullptr; };
    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline string cid() const { DARABONBA_PTR_GET_DEFAULT(cid_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor& setCid(string cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


    // hitTime Field Functions 
    bool hasHitTime() const { return this->hitTime_ != nullptr;};
    void deleteHitTime() { this->hitTime_ = nullptr;};
    inline int32_t hitTime() const { DARABONBA_PTR_GET_DEFAULT(hitTime_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor& setHitTime(int32_t hitTime) { DARABONBA_PTR_SET_VALUE(hitTime_, hitTime) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


  protected:
    // 条件ID
    std::shared_ptr<string> cid_ = nullptr;
    // 命中次数
    std::shared_ptr<int32_t> hitTime_ = nullptr;
    // 位置
    std::shared_ptr<string> location_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
