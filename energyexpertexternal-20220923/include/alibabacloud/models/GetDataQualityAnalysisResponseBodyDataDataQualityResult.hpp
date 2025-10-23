// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYANALYSISRESPONSEBODYDATADATAQUALITYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYANALYSISRESPONSEBODYDATADATAQUALITYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDataQualityAnalysisResponseBodyDataDataQualityResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityAnalysisResponseBodyDataDataQualityResult& obj) { 
      DARABONBA_PTR_TO_JSON(data_quality_score, dataQualityScore_);
      DARABONBA_PTR_TO_JSON(g1, g1_);
      DARABONBA_PTR_TO_JSON(g2, g2_);
      DARABONBA_PTR_TO_JSON(g3, g3_);
      DARABONBA_PTR_TO_JSON(g4, g4_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityAnalysisResponseBodyDataDataQualityResult& obj) { 
      DARABONBA_PTR_FROM_JSON(data_quality_score, dataQualityScore_);
      DARABONBA_PTR_FROM_JSON(g1, g1_);
      DARABONBA_PTR_FROM_JSON(g2, g2_);
      DARABONBA_PTR_FROM_JSON(g3, g3_);
      DARABONBA_PTR_FROM_JSON(g4, g4_);
    };
    GetDataQualityAnalysisResponseBodyDataDataQualityResult() = default ;
    GetDataQualityAnalysisResponseBodyDataDataQualityResult(const GetDataQualityAnalysisResponseBodyDataDataQualityResult &) = default ;
    GetDataQualityAnalysisResponseBodyDataDataQualityResult(GetDataQualityAnalysisResponseBodyDataDataQualityResult &&) = default ;
    GetDataQualityAnalysisResponseBodyDataDataQualityResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityAnalysisResponseBodyDataDataQualityResult() = default ;
    GetDataQualityAnalysisResponseBodyDataDataQualityResult& operator=(const GetDataQualityAnalysisResponseBodyDataDataQualityResult &) = default ;
    GetDataQualityAnalysisResponseBodyDataDataQualityResult& operator=(GetDataQualityAnalysisResponseBodyDataDataQualityResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataQualityScore_ == nullptr
        && return this->g1_ == nullptr && return this->g2_ == nullptr && return this->g3_ == nullptr && return this->g4_ == nullptr; };
    // dataQualityScore Field Functions 
    bool hasDataQualityScore() const { return this->dataQualityScore_ != nullptr;};
    void deleteDataQualityScore() { this->dataQualityScore_ = nullptr;};
    inline double dataQualityScore() const { DARABONBA_PTR_GET_DEFAULT(dataQualityScore_, 0.0) };
    inline GetDataQualityAnalysisResponseBodyDataDataQualityResult& setDataQualityScore(double dataQualityScore) { DARABONBA_PTR_SET_VALUE(dataQualityScore_, dataQualityScore) };


    // g1 Field Functions 
    bool hasG1() const { return this->g1_ != nullptr;};
    void deleteG1() { this->g1_ = nullptr;};
    inline double g1() const { DARABONBA_PTR_GET_DEFAULT(g1_, 0.0) };
    inline GetDataQualityAnalysisResponseBodyDataDataQualityResult& setG1(double g1) { DARABONBA_PTR_SET_VALUE(g1_, g1) };


    // g2 Field Functions 
    bool hasG2() const { return this->g2_ != nullptr;};
    void deleteG2() { this->g2_ = nullptr;};
    inline double g2() const { DARABONBA_PTR_GET_DEFAULT(g2_, 0.0) };
    inline GetDataQualityAnalysisResponseBodyDataDataQualityResult& setG2(double g2) { DARABONBA_PTR_SET_VALUE(g2_, g2) };


    // g3 Field Functions 
    bool hasG3() const { return this->g3_ != nullptr;};
    void deleteG3() { this->g3_ = nullptr;};
    inline double g3() const { DARABONBA_PTR_GET_DEFAULT(g3_, 0.0) };
    inline GetDataQualityAnalysisResponseBodyDataDataQualityResult& setG3(double g3) { DARABONBA_PTR_SET_VALUE(g3_, g3) };


    // g4 Field Functions 
    bool hasG4() const { return this->g4_ != nullptr;};
    void deleteG4() { this->g4_ = nullptr;};
    inline double g4() const { DARABONBA_PTR_GET_DEFAULT(g4_, 0.0) };
    inline GetDataQualityAnalysisResponseBodyDataDataQualityResult& setG4(double g4) { DARABONBA_PTR_SET_VALUE(g4_, g4) };


  protected:
    // The score. This parameter is applicable to DQR results. The distribution ranges from 1 to 5. A value closer to 1 indicates better data quality. The number of valid digits is kept to four decimal places.
    std::shared_ptr<double> dataQualityScore_ = nullptr;
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
