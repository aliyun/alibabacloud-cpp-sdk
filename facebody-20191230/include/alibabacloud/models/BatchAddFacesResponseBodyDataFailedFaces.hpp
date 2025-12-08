// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDFACESRESPONSEBODYDATAFAILEDFACES_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDFACESRESPONSEBODYDATAFAILEDFACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class BatchAddFacesResponseBodyDataFailedFaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddFacesResponseBodyDataFailedFaces& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddFacesResponseBodyDataFailedFaces& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    BatchAddFacesResponseBodyDataFailedFaces() = default ;
    BatchAddFacesResponseBodyDataFailedFaces(const BatchAddFacesResponseBodyDataFailedFaces &) = default ;
    BatchAddFacesResponseBodyDataFailedFaces(BatchAddFacesResponseBodyDataFailedFaces &&) = default ;
    BatchAddFacesResponseBodyDataFailedFaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddFacesResponseBodyDataFailedFaces() = default ;
    BatchAddFacesResponseBodyDataFailedFaces& operator=(const BatchAddFacesResponseBodyDataFailedFaces &) = default ;
    BatchAddFacesResponseBodyDataFailedFaces& operator=(BatchAddFacesResponseBodyDataFailedFaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->imageURL_ == nullptr && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchAddFacesResponseBodyDataFailedFaces& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline BatchAddFacesResponseBodyDataFailedFaces& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchAddFacesResponseBodyDataFailedFaces& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
