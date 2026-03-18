// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERSONALIZEDTEXTTOIMAGEADDINFERENCEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PERSONALIZEDTEXTTOIMAGEADDINFERENCEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class PersonalizedTextToImageAddInferenceJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PersonalizedTextToImageAddInferenceJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(imageNumber, imageNumber_);
      DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(prompt, prompt_);
      DARABONBA_PTR_TO_JSON(seed, seed_);
      DARABONBA_PTR_TO_JSON(strength, strength_);
      DARABONBA_PTR_TO_JSON(trainSteps, trainSteps_);
    };
    friend void from_json(const Darabonba::Json& j, PersonalizedTextToImageAddInferenceJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(imageNumber, imageNumber_);
      DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(seed, seed_);
      DARABONBA_PTR_FROM_JSON(strength, strength_);
      DARABONBA_PTR_FROM_JSON(trainSteps, trainSteps_);
    };
    PersonalizedTextToImageAddInferenceJobRequest() = default ;
    PersonalizedTextToImageAddInferenceJobRequest(const PersonalizedTextToImageAddInferenceJobRequest &) = default ;
    PersonalizedTextToImageAddInferenceJobRequest(PersonalizedTextToImageAddInferenceJobRequest &&) = default ;
    PersonalizedTextToImageAddInferenceJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PersonalizedTextToImageAddInferenceJobRequest() = default ;
    PersonalizedTextToImageAddInferenceJobRequest& operator=(const PersonalizedTextToImageAddInferenceJobRequest &) = default ;
    PersonalizedTextToImageAddInferenceJobRequest& operator=(PersonalizedTextToImageAddInferenceJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageNumber_ == nullptr
        && this->imageUrl_ == nullptr && this->prompt_ == nullptr && this->seed_ == nullptr && this->strength_ == nullptr && this->trainSteps_ == nullptr; };
    // imageNumber Field Functions 
    bool hasImageNumber() const { return this->imageNumber_ != nullptr;};
    void deleteImageNumber() { this->imageNumber_ = nullptr;};
    inline int32_t getImageNumber() const { DARABONBA_PTR_GET_DEFAULT(imageNumber_, 0) };
    inline PersonalizedTextToImageAddInferenceJobRequest& setImageNumber(int32_t imageNumber) { DARABONBA_PTR_SET_VALUE(imageNumber_, imageNumber) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline const vector<string> & getImageUrl() const { DARABONBA_PTR_GET_CONST(imageUrl_, vector<string>) };
    inline vector<string> getImageUrl() { DARABONBA_PTR_GET(imageUrl_, vector<string>) };
    inline PersonalizedTextToImageAddInferenceJobRequest& setImageUrl(const vector<string> & imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };
    inline PersonalizedTextToImageAddInferenceJobRequest& setImageUrl(vector<string> && imageUrl) { DARABONBA_PTR_SET_RVALUE(imageUrl_, imageUrl) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline PersonalizedTextToImageAddInferenceJobRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // seed Field Functions 
    bool hasSeed() const { return this->seed_ != nullptr;};
    void deleteSeed() { this->seed_ = nullptr;};
    inline int64_t getSeed() const { DARABONBA_PTR_GET_DEFAULT(seed_, 0L) };
    inline PersonalizedTextToImageAddInferenceJobRequest& setSeed(int64_t seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


    // strength Field Functions 
    bool hasStrength() const { return this->strength_ != nullptr;};
    void deleteStrength() { this->strength_ = nullptr;};
    inline double getStrength() const { DARABONBA_PTR_GET_DEFAULT(strength_, 0.0) };
    inline PersonalizedTextToImageAddInferenceJobRequest& setStrength(double strength) { DARABONBA_PTR_SET_VALUE(strength_, strength) };


    // trainSteps Field Functions 
    bool hasTrainSteps() const { return this->trainSteps_ != nullptr;};
    void deleteTrainSteps() { this->trainSteps_ = nullptr;};
    inline int32_t getTrainSteps() const { DARABONBA_PTR_GET_DEFAULT(trainSteps_, 0) };
    inline PersonalizedTextToImageAddInferenceJobRequest& setTrainSteps(int32_t trainSteps) { DARABONBA_PTR_SET_VALUE(trainSteps_, trainSteps) };


  protected:
    shared_ptr<int32_t> imageNumber_ {};
    // This parameter is required.
    shared_ptr<vector<string>> imageUrl_ {};
    // This parameter is required.
    shared_ptr<string> prompt_ {};
    shared_ptr<int64_t> seed_ {};
    shared_ptr<double> strength_ {};
    shared_ptr<int32_t> trainSteps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
