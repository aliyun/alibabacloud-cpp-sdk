// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEACTIONADVANCEREQUESTURLLIST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEACTIONADVANCEREQUESTURLLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class RecognizeActionAdvanceRequestURLList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeActionAdvanceRequestURLList& obj) { 
      DARABONBA_TO_JSON(URL, URLObject_);
      DARABONBA_PTR_TO_JSON(imageData, imageData_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeActionAdvanceRequestURLList& obj) { 
      DARABONBA_FROM_JSON(URL, URLObject_);
      DARABONBA_PTR_FROM_JSON(imageData, imageData_);
    };
    RecognizeActionAdvanceRequestURLList() = default ;
    RecognizeActionAdvanceRequestURLList(const RecognizeActionAdvanceRequestURLList &) = default ;
    RecognizeActionAdvanceRequestURLList(RecognizeActionAdvanceRequestURLList &&) = default ;
    RecognizeActionAdvanceRequestURLList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeActionAdvanceRequestURLList() = default ;
    RecognizeActionAdvanceRequestURLList& operator=(const RecognizeActionAdvanceRequestURLList &) = default ;
    RecognizeActionAdvanceRequestURLList& operator=(RecognizeActionAdvanceRequestURLList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->URLObject_ == nullptr
        && return this->imageData_ == nullptr; };
    // URLObject Field Functions 
    bool hasURLObject() const { return this->URLObject_ != nullptr;};
    void deleteURLObject() { this->URLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> URLObject() const { DARABONBA_GET(URLObject_) };
    inline RecognizeActionAdvanceRequestURLList& setURLObject(shared_ptr<Darabonba::IStream> URLObject) { DARABONBA_SET_VALUE(URLObject_, URLObject) };


    // imageData Field Functions 
    bool hasImageData() const { return this->imageData_ != nullptr;};
    void deleteImageData() { this->imageData_ = nullptr;};
    inline string imageData() const { DARABONBA_PTR_GET_DEFAULT(imageData_, "") };
    inline RecognizeActionAdvanceRequestURLList& setImageData(string imageData) { DARABONBA_PTR_SET_VALUE(imageData_, imageData) };


  protected:
    shared_ptr<Darabonba::IStream> URLObject_ = nullptr;
    std::shared_ptr<string> imageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
