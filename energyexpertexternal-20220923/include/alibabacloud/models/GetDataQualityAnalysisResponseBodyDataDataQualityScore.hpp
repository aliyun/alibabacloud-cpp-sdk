// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYANALYSISRESPONSEBODYDATADATAQUALITYSCORE_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYANALYSISRESPONSEBODYDATADATAQUALITYSCORE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDataQualityAnalysisResponseBodyDataDataQualityScore : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityAnalysisResponseBodyDataDataQualityScore& obj) { 
      DARABONBA_PTR_TO_JSON(g1, g1_);
      DARABONBA_PTR_TO_JSON(g2, g2_);
      DARABONBA_PTR_TO_JSON(g3, g3_);
      DARABONBA_PTR_TO_JSON(g4, g4_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityAnalysisResponseBodyDataDataQualityScore& obj) { 
      DARABONBA_PTR_FROM_JSON(g1, g1_);
      DARABONBA_PTR_FROM_JSON(g2, g2_);
      DARABONBA_PTR_FROM_JSON(g3, g3_);
      DARABONBA_PTR_FROM_JSON(g4, g4_);
    };
    GetDataQualityAnalysisResponseBodyDataDataQualityScore() = default ;
    GetDataQualityAnalysisResponseBodyDataDataQualityScore(const GetDataQualityAnalysisResponseBodyDataDataQualityScore &) = default ;
    GetDataQualityAnalysisResponseBodyDataDataQualityScore(GetDataQualityAnalysisResponseBodyDataDataQualityScore &&) = default ;
    GetDataQualityAnalysisResponseBodyDataDataQualityScore(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityAnalysisResponseBodyDataDataQualityScore() = default ;
    GetDataQualityAnalysisResponseBodyDataDataQualityScore& operator=(const GetDataQualityAnalysisResponseBodyDataDataQualityScore &) = default ;
    GetDataQualityAnalysisResponseBodyDataDataQualityScore& operator=(GetDataQualityAnalysisResponseBodyDataDataQualityScore &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->g1_ != nullptr
        && this->g2_ != nullptr && this->g3_ != nullptr && this->g4_ != nullptr; };
    // g1 Field Functions 
    bool hasG1() const { return this->g1_ != nullptr;};
    void deleteG1() { this->g1_ = nullptr;};
    inline double g1() const { DARABONBA_PTR_GET_DEFAULT(g1_, 0.0) };
    inline GetDataQualityAnalysisResponseBodyDataDataQualityScore& setG1(double g1) { DARABONBA_PTR_SET_VALUE(g1_, g1) };


    // g2 Field Functions 
    bool hasG2() const { return this->g2_ != nullptr;};
    void deleteG2() { this->g2_ = nullptr;};
    inline double g2() const { DARABONBA_PTR_GET_DEFAULT(g2_, 0.0) };
    inline GetDataQualityAnalysisResponseBodyDataDataQualityScore& setG2(double g2) { DARABONBA_PTR_SET_VALUE(g2_, g2) };


    // g3 Field Functions 
    bool hasG3() const { return this->g3_ != nullptr;};
    void deleteG3() { this->g3_ = nullptr;};
    inline double g3() const { DARABONBA_PTR_GET_DEFAULT(g3_, 0.0) };
    inline GetDataQualityAnalysisResponseBodyDataDataQualityScore& setG3(double g3) { DARABONBA_PTR_SET_VALUE(g3_, g3) };


    // g4 Field Functions 
    bool hasG4() const { return this->g4_ != nullptr;};
    void deleteG4() { this->g4_ = nullptr;};
    inline double g4() const { DARABONBA_PTR_GET_DEFAULT(g4_, 0.0) };
    inline GetDataQualityAnalysisResponseBodyDataDataQualityScore& setG4(double g4) { DARABONBA_PTR_SET_VALUE(g4_, g4) };


  protected:
    // Data quality evaluation indicator 1: activity data credibility.
    std::shared_ptr<double> g1_ = nullptr;
    // Data quality evaluation indicator 2: data factor reliability.
    std::shared_ptr<double> g2_ = nullptr;
    // Data quality evaluation indicator 3: time representativeness.
    std::shared_ptr<double> g3_ = nullptr;
    // Data quality evaluation indicator 4: geographic representativeness.
    std::shared_ptr<double> g4_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
