// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALGUARDFORBASE64RESPONSEBODYDATADETAILRESULT_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALGUARDFORBASE64RESPONSEBODYDATADETAILRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class MultiModalGuardForBase64ResponseBodyDataDetailResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultiModalGuardForBase64ResponseBodyDataDetailResult& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_ANY_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Level, level_);
    };
    friend void from_json(const Darabonba::Json& j, MultiModalGuardForBase64ResponseBodyDataDetailResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_ANY_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
    };
    MultiModalGuardForBase64ResponseBodyDataDetailResult() = default ;
    MultiModalGuardForBase64ResponseBodyDataDetailResult(const MultiModalGuardForBase64ResponseBodyDataDetailResult &) = default ;
    MultiModalGuardForBase64ResponseBodyDataDetailResult(MultiModalGuardForBase64ResponseBodyDataDetailResult &&) = default ;
    MultiModalGuardForBase64ResponseBodyDataDetailResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultiModalGuardForBase64ResponseBodyDataDetailResult() = default ;
    MultiModalGuardForBase64ResponseBodyDataDetailResult& operator=(const MultiModalGuardForBase64ResponseBodyDataDetailResult &) = default ;
    MultiModalGuardForBase64ResponseBodyDataDetailResult& operator=(MultiModalGuardForBase64ResponseBodyDataDetailResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confidence_ == nullptr
        && return this->description_ == nullptr && return this->ext_ == nullptr && return this->label_ == nullptr && return this->level_ == nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline MultiModalGuardForBase64ResponseBodyDataDetailResult& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline MultiModalGuardForBase64ResponseBodyDataDetailResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline     const Darabonba::Json & ext() const { DARABONBA_GET(ext_) };
    Darabonba::Json & ext() { DARABONBA_GET(ext_) };
    inline MultiModalGuardForBase64ResponseBodyDataDetailResult& setExt(const Darabonba::Json & ext) { DARABONBA_SET_VALUE(ext_, ext) };
    inline MultiModalGuardForBase64ResponseBodyDataDetailResult& setExt(Darabonba::Json & ext) { DARABONBA_SET_RVALUE(ext_, ext) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline MultiModalGuardForBase64ResponseBodyDataDetailResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline MultiModalGuardForBase64ResponseBodyDataDetailResult& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


  protected:
    std::shared_ptr<float> confidence_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    Darabonba::Json ext_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
