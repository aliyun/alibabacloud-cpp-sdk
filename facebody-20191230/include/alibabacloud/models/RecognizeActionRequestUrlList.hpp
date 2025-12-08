// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEACTIONREQUESTURLLIST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEACTIONREQUESTURLLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class RecognizeActionRequestURLList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeActionRequestURLList& obj) { 
      DARABONBA_PTR_TO_JSON(URL, URL_);
      DARABONBA_PTR_TO_JSON(imageData, imageData_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeActionRequestURLList& obj) { 
      DARABONBA_PTR_FROM_JSON(URL, URL_);
      DARABONBA_PTR_FROM_JSON(imageData, imageData_);
    };
    RecognizeActionRequestURLList() = default ;
    RecognizeActionRequestURLList(const RecognizeActionRequestURLList &) = default ;
    RecognizeActionRequestURLList(RecognizeActionRequestURLList &&) = default ;
    RecognizeActionRequestURLList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeActionRequestURLList() = default ;
    RecognizeActionRequestURLList& operator=(const RecognizeActionRequestURLList &) = default ;
    RecognizeActionRequestURLList& operator=(RecognizeActionRequestURLList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->URL_ == nullptr
        && return this->imageData_ == nullptr; };
    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline string URL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
    inline RecognizeActionRequestURLList& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


    // imageData Field Functions 
    bool hasImageData() const { return this->imageData_ != nullptr;};
    void deleteImageData() { this->imageData_ = nullptr;};
    inline string imageData() const { DARABONBA_PTR_GET_DEFAULT(imageData_, "") };
    inline RecognizeActionRequestURLList& setImageData(string imageData) { DARABONBA_PTR_SET_VALUE(imageData_, imageData) };


  protected:
    std::shared_ptr<string> URL_ = nullptr;
    std::shared_ptr<string> imageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
