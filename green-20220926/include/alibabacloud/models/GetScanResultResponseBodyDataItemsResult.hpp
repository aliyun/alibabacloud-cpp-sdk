// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCANRESULTRESPONSEBODYDATAITEMSRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETSCANRESULTRESPONSEBODYDATAITEMSRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetScanResultResponseBodyDataItemsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScanResultResponseBodyDataItemsResult& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Label, label_);
    };
    friend void from_json(const Darabonba::Json& j, GetScanResultResponseBodyDataItemsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
    };
    GetScanResultResponseBodyDataItemsResult() = default ;
    GetScanResultResponseBodyDataItemsResult(const GetScanResultResponseBodyDataItemsResult &) = default ;
    GetScanResultResponseBodyDataItemsResult(GetScanResultResponseBodyDataItemsResult &&) = default ;
    GetScanResultResponseBodyDataItemsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScanResultResponseBodyDataItemsResult() = default ;
    GetScanResultResponseBodyDataItemsResult& operator=(const GetScanResultResponseBodyDataItemsResult &) = default ;
    GetScanResultResponseBodyDataItemsResult& operator=(GetScanResultResponseBodyDataItemsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confidence_ == nullptr
        && return this->description_ == nullptr && return this->label_ == nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline string confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, "") };
    inline GetScanResultResponseBodyDataItemsResult& setConfidence(string confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetScanResultResponseBodyDataItemsResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetScanResultResponseBodyDataItemsResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    // Confidence score, ranging from 0 to 100, with two decimal places.
    std::shared_ptr<string> confidence_ = nullptr;
    // Description of the Label field.
    std::shared_ptr<string> description_ = nullptr;
    // Label.
    std::shared_ptr<string> label_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
