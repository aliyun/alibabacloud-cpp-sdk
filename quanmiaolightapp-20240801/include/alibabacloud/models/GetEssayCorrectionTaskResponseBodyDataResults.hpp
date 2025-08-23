// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETESSAYCORRECTIONTASKRESPONSEBODYDATARESULTS_HPP_
#define ALIBABACLOUD_MODELS_GETESSAYCORRECTIONTASKRESPONSEBODYDATARESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetEssayCorrectionTaskResponseBodyDataResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEssayCorrectionTaskResponseBodyDataResults& obj) { 
      DARABONBA_PTR_TO_JSON(customId, customId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(score, score_);
    };
    friend void from_json(const Darabonba::Json& j, GetEssayCorrectionTaskResponseBodyDataResults& obj) { 
      DARABONBA_PTR_FROM_JSON(customId, customId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(score, score_);
    };
    GetEssayCorrectionTaskResponseBodyDataResults() = default ;
    GetEssayCorrectionTaskResponseBodyDataResults(const GetEssayCorrectionTaskResponseBodyDataResults &) = default ;
    GetEssayCorrectionTaskResponseBodyDataResults(GetEssayCorrectionTaskResponseBodyDataResults &&) = default ;
    GetEssayCorrectionTaskResponseBodyDataResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEssayCorrectionTaskResponseBodyDataResults() = default ;
    GetEssayCorrectionTaskResponseBodyDataResults& operator=(const GetEssayCorrectionTaskResponseBodyDataResults &) = default ;
    GetEssayCorrectionTaskResponseBodyDataResults& operator=(GetEssayCorrectionTaskResponseBodyDataResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customId_ != nullptr
        && this->result_ != nullptr && this->score_ != nullptr; };
    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string customId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline GetEssayCorrectionTaskResponseBodyDataResults& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetEssayCorrectionTaskResponseBodyDataResults& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetEssayCorrectionTaskResponseBodyDataResults& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


  protected:
    // xxx
    std::shared_ptr<string> customId_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<int32_t> score_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
