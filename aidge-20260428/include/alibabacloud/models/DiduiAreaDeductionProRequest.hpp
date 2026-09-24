// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIDUIAREADEDUCTIONPROREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DIDUIAREADEDUCTIONPROREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class DiduiAreaDeductionProRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiduiAreaDeductionProRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(RagId, ragId_);
    };
    friend void from_json(const Darabonba::Json& j, DiduiAreaDeductionProRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(RagId, ragId_);
    };
    DiduiAreaDeductionProRequest() = default ;
    DiduiAreaDeductionProRequest(const DiduiAreaDeductionProRequest &) = default ;
    DiduiAreaDeductionProRequest(DiduiAreaDeductionProRequest &&) = default ;
    DiduiAreaDeductionProRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiduiAreaDeductionProRequest() = default ;
    DiduiAreaDeductionProRequest& operator=(const DiduiAreaDeductionProRequest &) = default ;
    DiduiAreaDeductionProRequest& operator=(DiduiAreaDeductionProRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->ragId_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DiduiAreaDeductionProRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // ragId Field Functions 
    bool hasRagId() const { return this->ragId_ != nullptr;};
    void deleteRagId() { this->ragId_ = nullptr;};
    inline string getRagId() const { DARABONBA_PTR_GET_DEFAULT(ragId_, "") };
    inline DiduiAreaDeductionProRequest& setRagId(string ragId) { DARABONBA_PTR_SET_VALUE(ragId_, ragId) };


  protected:
    // The HTTP(S) URL of the overall floor display image.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The ID of the SKU asset knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> ragId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
