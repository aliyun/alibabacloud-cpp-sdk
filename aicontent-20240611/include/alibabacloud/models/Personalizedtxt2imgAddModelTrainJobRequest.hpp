// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGADDMODELTRAINJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGADDMODELTRAINJOBREQUEST_HPP_
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
  class Personalizedtxt2imgAddModelTrainJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Personalizedtxt2imgAddModelTrainJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(objectType, objectType_);
      DARABONBA_PTR_TO_JSON(trainSteps, trainSteps_);
    };
    friend void from_json(const Darabonba::Json& j, Personalizedtxt2imgAddModelTrainJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(objectType, objectType_);
      DARABONBA_PTR_FROM_JSON(trainSteps, trainSteps_);
    };
    Personalizedtxt2imgAddModelTrainJobRequest() = default ;
    Personalizedtxt2imgAddModelTrainJobRequest(const Personalizedtxt2imgAddModelTrainJobRequest &) = default ;
    Personalizedtxt2imgAddModelTrainJobRequest(Personalizedtxt2imgAddModelTrainJobRequest &&) = default ;
    Personalizedtxt2imgAddModelTrainJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Personalizedtxt2imgAddModelTrainJobRequest() = default ;
    Personalizedtxt2imgAddModelTrainJobRequest& operator=(const Personalizedtxt2imgAddModelTrainJobRequest &) = default ;
    Personalizedtxt2imgAddModelTrainJobRequest& operator=(Personalizedtxt2imgAddModelTrainJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->name_ == nullptr && this->objectType_ == nullptr && this->trainSteps_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline const vector<string> & getImageUrl() const { DARABONBA_PTR_GET_CONST(imageUrl_, vector<string>) };
    inline vector<string> getImageUrl() { DARABONBA_PTR_GET(imageUrl_, vector<string>) };
    inline Personalizedtxt2imgAddModelTrainJobRequest& setImageUrl(const vector<string> & imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };
    inline Personalizedtxt2imgAddModelTrainJobRequest& setImageUrl(vector<string> && imageUrl) { DARABONBA_PTR_SET_RVALUE(imageUrl_, imageUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Personalizedtxt2imgAddModelTrainJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline Personalizedtxt2imgAddModelTrainJobRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // trainSteps Field Functions 
    bool hasTrainSteps() const { return this->trainSteps_ != nullptr;};
    void deleteTrainSteps() { this->trainSteps_ = nullptr;};
    inline int32_t getTrainSteps() const { DARABONBA_PTR_GET_DEFAULT(trainSteps_, 0) };
    inline Personalizedtxt2imgAddModelTrainJobRequest& setTrainSteps(int32_t trainSteps) { DARABONBA_PTR_SET_VALUE(trainSteps_, trainSteps) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> imageUrl_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> objectType_ {};
    shared_ptr<int32_t> trainSteps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
