// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGADDMODELTRAINJOBCMD_HPP_
#define ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGADDMODELTRAINJOBCMD_HPP_
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
  class Personalizedtxt2imgAddModelTrainJobCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Personalizedtxt2imgAddModelTrainJobCmd& obj) { 
      DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(objectType, objectType_);
    };
    friend void from_json(const Darabonba::Json& j, Personalizedtxt2imgAddModelTrainJobCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(objectType, objectType_);
    };
    Personalizedtxt2imgAddModelTrainJobCmd() = default ;
    Personalizedtxt2imgAddModelTrainJobCmd(const Personalizedtxt2imgAddModelTrainJobCmd &) = default ;
    Personalizedtxt2imgAddModelTrainJobCmd(Personalizedtxt2imgAddModelTrainJobCmd &&) = default ;
    Personalizedtxt2imgAddModelTrainJobCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Personalizedtxt2imgAddModelTrainJobCmd() = default ;
    Personalizedtxt2imgAddModelTrainJobCmd& operator=(const Personalizedtxt2imgAddModelTrainJobCmd &) = default ;
    Personalizedtxt2imgAddModelTrainJobCmd& operator=(Personalizedtxt2imgAddModelTrainJobCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->name_ == nullptr && this->objectType_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline const vector<string> & getImageUrl() const { DARABONBA_PTR_GET_CONST(imageUrl_, vector<string>) };
    inline vector<string> getImageUrl() { DARABONBA_PTR_GET(imageUrl_, vector<string>) };
    inline Personalizedtxt2imgAddModelTrainJobCmd& setImageUrl(const vector<string> & imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };
    inline Personalizedtxt2imgAddModelTrainJobCmd& setImageUrl(vector<string> && imageUrl) { DARABONBA_PTR_SET_RVALUE(imageUrl_, imageUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Personalizedtxt2imgAddModelTrainJobCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline Personalizedtxt2imgAddModelTrainJobCmd& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> imageUrl_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> objectType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
