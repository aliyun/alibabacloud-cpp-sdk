// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEPUBLICFACERESPONSEBODYDATAELEMENTSRESULTSSUBRESULTSFACES_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEPUBLICFACERESPONSEBODYDATAELEMENTSRESULTSSUBRESULTSFACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
    };
    RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces() = default ;
    RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces(const RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces &) = default ;
    RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces(RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces &&) = default ;
    RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces() = default ;
    RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces& operator=(const RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces &) = default ;
    RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces& operator=(RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr && return this->rate_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline float rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline RecognizePublicFaceResponseBodyDataElementsResultsSubResultsFaces& setRate(float rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<float> rate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
