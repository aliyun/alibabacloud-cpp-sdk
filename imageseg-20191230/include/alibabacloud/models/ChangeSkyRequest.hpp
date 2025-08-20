// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGESKYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGESKYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class ChangeSkyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeSkyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(ReplaceImageURL, replaceImageURL_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeSkyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(ReplaceImageURL, replaceImageURL_);
    };
    ChangeSkyRequest() = default ;
    ChangeSkyRequest(const ChangeSkyRequest &) = default ;
    ChangeSkyRequest(ChangeSkyRequest &&) = default ;
    ChangeSkyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeSkyRequest() = default ;
    ChangeSkyRequest& operator=(const ChangeSkyRequest &) = default ;
    ChangeSkyRequest& operator=(ChangeSkyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURL_ != nullptr
        && this->replaceImageURL_ != nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline ChangeSkyRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // replaceImageURL Field Functions 
    bool hasReplaceImageURL() const { return this->replaceImageURL_ != nullptr;};
    void deleteReplaceImageURL() { this->replaceImageURL_ = nullptr;};
    inline string replaceImageURL() const { DARABONBA_PTR_GET_DEFAULT(replaceImageURL_, "") };
    inline ChangeSkyRequest& setReplaceImageURL(string replaceImageURL) { DARABONBA_PTR_SET_VALUE(replaceImageURL_, replaceImageURL) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> replaceImageURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
