// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSCHECKFREEZERESULTRESPONSEBODYITEMSLABELDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETOSSCHECKFREEZERESULTRESPONSEBODYITEMSLABELDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetOssCheckFreezeResultResponseBodyItemsLabelDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssCheckFreezeResultResponseBodyItemsLabelDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Label, label_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssCheckFreezeResultResponseBodyItemsLabelDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
    };
    GetOssCheckFreezeResultResponseBodyItemsLabelDetails() = default ;
    GetOssCheckFreezeResultResponseBodyItemsLabelDetails(const GetOssCheckFreezeResultResponseBodyItemsLabelDetails &) = default ;
    GetOssCheckFreezeResultResponseBodyItemsLabelDetails(GetOssCheckFreezeResultResponseBodyItemsLabelDetails &&) = default ;
    GetOssCheckFreezeResultResponseBodyItemsLabelDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssCheckFreezeResultResponseBodyItemsLabelDetails() = default ;
    GetOssCheckFreezeResultResponseBodyItemsLabelDetails& operator=(const GetOssCheckFreezeResultResponseBodyItemsLabelDetails &) = default ;
    GetOssCheckFreezeResultResponseBodyItemsLabelDetails& operator=(GetOssCheckFreezeResultResponseBodyItemsLabelDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confidence_ == nullptr
        && return this->description_ == nullptr && return this->label_ == nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline GetOssCheckFreezeResultResponseBodyItemsLabelDetails& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetOssCheckFreezeResultResponseBodyItemsLabelDetails& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetOssCheckFreezeResultResponseBodyItemsLabelDetails& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    // Confidence.
    std::shared_ptr<float> confidence_ = nullptr;
    // Label description.
    std::shared_ptr<string> description_ = nullptr;
    // Label.
    std::shared_ptr<string> label_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
