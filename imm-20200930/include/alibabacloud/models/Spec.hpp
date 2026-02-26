// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPEC_HPP_
#define ALIBABACLOUD_MODELS_SPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CustomParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Spec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Spec& obj) { 
      DARABONBA_PTR_TO_JSON(Backbone, backbone_);
      DARABONBA_PTR_TO_JSON(ClassNum, classNum_);
      DARABONBA_PTR_TO_JSON(Head, head_);
      DARABONBA_PTR_TO_JSON(InputChannel, inputChannel_);
      DARABONBA_PTR_TO_JSON(Loss, loss_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Neck, neck_);
      DARABONBA_PTR_TO_JSON(NumLandmarks, numLandmarks_);
      DARABONBA_PTR_TO_JSON(PretrainedPath, pretrainedPath_);
    };
    friend void from_json(const Darabonba::Json& j, Spec& obj) { 
      DARABONBA_PTR_FROM_JSON(Backbone, backbone_);
      DARABONBA_PTR_FROM_JSON(ClassNum, classNum_);
      DARABONBA_PTR_FROM_JSON(Head, head_);
      DARABONBA_PTR_FROM_JSON(InputChannel, inputChannel_);
      DARABONBA_PTR_FROM_JSON(Loss, loss_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Neck, neck_);
      DARABONBA_PTR_FROM_JSON(NumLandmarks, numLandmarks_);
      DARABONBA_PTR_FROM_JSON(PretrainedPath, pretrainedPath_);
    };
    Spec() = default ;
    Spec(const Spec &) = default ;
    Spec(Spec &&) = default ;
    Spec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Spec() = default ;
    Spec& operator=(const Spec &) = default ;
    Spec& operator=(Spec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backbone_ == nullptr
        && this->classNum_ == nullptr && this->head_ == nullptr && this->inputChannel_ == nullptr && this->loss_ == nullptr && this->name_ == nullptr
        && this->neck_ == nullptr && this->numLandmarks_ == nullptr && this->pretrainedPath_ == nullptr; };
    // backbone Field Functions 
    bool hasBackbone() const { return this->backbone_ != nullptr;};
    void deleteBackbone() { this->backbone_ = nullptr;};
    inline const CustomParams & getBackbone() const { DARABONBA_PTR_GET_CONST(backbone_, CustomParams) };
    inline CustomParams getBackbone() { DARABONBA_PTR_GET(backbone_, CustomParams) };
    inline Spec& setBackbone(const CustomParams & backbone) { DARABONBA_PTR_SET_VALUE(backbone_, backbone) };
    inline Spec& setBackbone(CustomParams && backbone) { DARABONBA_PTR_SET_RVALUE(backbone_, backbone) };


    // classNum Field Functions 
    bool hasClassNum() const { return this->classNum_ != nullptr;};
    void deleteClassNum() { this->classNum_ = nullptr;};
    inline int64_t getClassNum() const { DARABONBA_PTR_GET_DEFAULT(classNum_, 0L) };
    inline Spec& setClassNum(int64_t classNum) { DARABONBA_PTR_SET_VALUE(classNum_, classNum) };


    // head Field Functions 
    bool hasHead() const { return this->head_ != nullptr;};
    void deleteHead() { this->head_ = nullptr;};
    inline const CustomParams & getHead() const { DARABONBA_PTR_GET_CONST(head_, CustomParams) };
    inline CustomParams getHead() { DARABONBA_PTR_GET(head_, CustomParams) };
    inline Spec& setHead(const CustomParams & head) { DARABONBA_PTR_SET_VALUE(head_, head) };
    inline Spec& setHead(CustomParams && head) { DARABONBA_PTR_SET_RVALUE(head_, head) };


    // inputChannel Field Functions 
    bool hasInputChannel() const { return this->inputChannel_ != nullptr;};
    void deleteInputChannel() { this->inputChannel_ = nullptr;};
    inline int64_t getInputChannel() const { DARABONBA_PTR_GET_DEFAULT(inputChannel_, 0L) };
    inline Spec& setInputChannel(int64_t inputChannel) { DARABONBA_PTR_SET_VALUE(inputChannel_, inputChannel) };


    // loss Field Functions 
    bool hasLoss() const { return this->loss_ != nullptr;};
    void deleteLoss() { this->loss_ = nullptr;};
    inline const CustomParams & getLoss() const { DARABONBA_PTR_GET_CONST(loss_, CustomParams) };
    inline CustomParams getLoss() { DARABONBA_PTR_GET(loss_, CustomParams) };
    inline Spec& setLoss(const CustomParams & loss) { DARABONBA_PTR_SET_VALUE(loss_, loss) };
    inline Spec& setLoss(CustomParams && loss) { DARABONBA_PTR_SET_RVALUE(loss_, loss) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Spec& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // neck Field Functions 
    bool hasNeck() const { return this->neck_ != nullptr;};
    void deleteNeck() { this->neck_ = nullptr;};
    inline const CustomParams & getNeck() const { DARABONBA_PTR_GET_CONST(neck_, CustomParams) };
    inline CustomParams getNeck() { DARABONBA_PTR_GET(neck_, CustomParams) };
    inline Spec& setNeck(const CustomParams & neck) { DARABONBA_PTR_SET_VALUE(neck_, neck) };
    inline Spec& setNeck(CustomParams && neck) { DARABONBA_PTR_SET_RVALUE(neck_, neck) };


    // numLandmarks Field Functions 
    bool hasNumLandmarks() const { return this->numLandmarks_ != nullptr;};
    void deleteNumLandmarks() { this->numLandmarks_ = nullptr;};
    inline int64_t getNumLandmarks() const { DARABONBA_PTR_GET_DEFAULT(numLandmarks_, 0L) };
    inline Spec& setNumLandmarks(int64_t numLandmarks) { DARABONBA_PTR_SET_VALUE(numLandmarks_, numLandmarks) };


    // pretrainedPath Field Functions 
    bool hasPretrainedPath() const { return this->pretrainedPath_ != nullptr;};
    void deletePretrainedPath() { this->pretrainedPath_ = nullptr;};
    inline string getPretrainedPath() const { DARABONBA_PTR_GET_DEFAULT(pretrainedPath_, "") };
    inline Spec& setPretrainedPath(string pretrainedPath) { DARABONBA_PTR_SET_VALUE(pretrainedPath_, pretrainedPath) };


  protected:
    // The custom parameters for model training.
    shared_ptr<CustomParams> backbone_ {};
    // The number of output classes of the last layer.
    shared_ptr<int64_t> classNum_ {};
    // The custom parameters for model training.
    shared_ptr<CustomParams> head_ {};
    // 3
    shared_ptr<int64_t> inputChannel_ {};
    // The custom parameters for model training.
    shared_ptr<CustomParams> loss_ {};
    // The name of the model. The available model names vary with the model category.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The custom parameters for model training.
    shared_ptr<CustomParams> neck_ {};
    // The number of face landmarks. This parameter is required for face detection. In most cases, you can set the parameter to 5.
    shared_ptr<int64_t> numLandmarks_ {};
    // The path to the pretrained model.
    shared_ptr<string> pretrainedPath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
