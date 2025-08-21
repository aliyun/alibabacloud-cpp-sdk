// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSCREDITRESPONSEBODYDDOSCREDIT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSCREDITRESPONSEBODYDDOSCREDIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosCreditResponseBodyDdosCredit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosCreditResponseBodyDdosCredit& obj) { 
      DARABONBA_PTR_TO_JSON(BlackholeTime, blackholeTime_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(ScoreLevel, scoreLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosCreditResponseBodyDdosCredit& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackholeTime, blackholeTime_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(ScoreLevel, scoreLevel_);
    };
    DescribeDdosCreditResponseBodyDdosCredit() = default ;
    DescribeDdosCreditResponseBodyDdosCredit(const DescribeDdosCreditResponseBodyDdosCredit &) = default ;
    DescribeDdosCreditResponseBodyDdosCredit(DescribeDdosCreditResponseBodyDdosCredit &&) = default ;
    DescribeDdosCreditResponseBodyDdosCredit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosCreditResponseBodyDdosCredit() = default ;
    DescribeDdosCreditResponseBodyDdosCredit& operator=(const DescribeDdosCreditResponseBodyDdosCredit &) = default ;
    DescribeDdosCreditResponseBodyDdosCredit& operator=(DescribeDdosCreditResponseBodyDdosCredit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blackholeTime_ != nullptr
        && this->score_ != nullptr && this->scoreLevel_ != nullptr; };
    // blackholeTime Field Functions 
    bool hasBlackholeTime() const { return this->blackholeTime_ != nullptr;};
    void deleteBlackholeTime() { this->blackholeTime_ = nullptr;};
    inline int32_t blackholeTime() const { DARABONBA_PTR_GET_DEFAULT(blackholeTime_, 0) };
    inline DescribeDdosCreditResponseBodyDdosCredit& setBlackholeTime(int32_t blackholeTime) { DARABONBA_PTR_SET_VALUE(blackholeTime_, blackholeTime) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline DescribeDdosCreditResponseBodyDdosCredit& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // scoreLevel Field Functions 
    bool hasScoreLevel() const { return this->scoreLevel_ != nullptr;};
    void deleteScoreLevel() { this->scoreLevel_ = nullptr;};
    inline string scoreLevel() const { DARABONBA_PTR_GET_DEFAULT(scoreLevel_, "") };
    inline DescribeDdosCreditResponseBodyDdosCredit& setScoreLevel(string scoreLevel) { DARABONBA_PTR_SET_VALUE(scoreLevel_, scoreLevel) };


  protected:
    // The time period after which blackhole filtering is automatically deactivated in the specified region. Unit: minutes.
    std::shared_ptr<int32_t> blackholeTime_ = nullptr;
    // The security credit score. The full score is **1000**.
    std::shared_ptr<int32_t> score_ = nullptr;
    // The security credit level. Valid values:
    // 
    // *   **A**: outstanding
    // *   **B**: excellent
    // *   **C**: good
    // *   **D**: average
    // *   **E**: poor
    // *   **F**: poorer
    std::shared_ptr<string> scoreLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
