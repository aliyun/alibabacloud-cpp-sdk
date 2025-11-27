// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTIMAGECROPPINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTIMAGECROPPINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CroppingSuggestion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DetectImageCroppingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectImageCroppingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Croppings, croppings_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectImageCroppingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Croppings, croppings_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetectImageCroppingResponseBody() = default ;
    DetectImageCroppingResponseBody(const DetectImageCroppingResponseBody &) = default ;
    DetectImageCroppingResponseBody(DetectImageCroppingResponseBody &&) = default ;
    DetectImageCroppingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectImageCroppingResponseBody() = default ;
    DetectImageCroppingResponseBody& operator=(const DetectImageCroppingResponseBody &) = default ;
    DetectImageCroppingResponseBody& operator=(DetectImageCroppingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->croppings_ == nullptr
        && return this->requestId_ == nullptr; };
    // croppings Field Functions 
    bool hasCroppings() const { return this->croppings_ != nullptr;};
    void deleteCroppings() { this->croppings_ = nullptr;};
    inline const vector<CroppingSuggestion> & croppings() const { DARABONBA_PTR_GET_CONST(croppings_, vector<CroppingSuggestion>) };
    inline vector<CroppingSuggestion> croppings() { DARABONBA_PTR_GET(croppings_, vector<CroppingSuggestion>) };
    inline DetectImageCroppingResponseBody& setCroppings(const vector<CroppingSuggestion> & croppings) { DARABONBA_PTR_SET_VALUE(croppings_, croppings) };
    inline DetectImageCroppingResponseBody& setCroppings(vector<CroppingSuggestion> && croppings) { DARABONBA_PTR_SET_RVALUE(croppings_, croppings) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectImageCroppingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The image cropping suggestions.
    std::shared_ptr<vector<CroppingSuggestion>> croppings_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
