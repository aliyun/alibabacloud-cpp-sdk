// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEACTIONRESPONSEBODYDATAELEMENTSBOXES_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEACTIONRESPONSEBODYDATAELEMENTSBOXES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class RecognizeActionResponseBodyDataElementsBoxes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeActionResponseBodyDataElementsBoxes& obj) { 
      DARABONBA_PTR_TO_JSON(Box, box_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeActionResponseBodyDataElementsBoxes& obj) { 
      DARABONBA_PTR_FROM_JSON(Box, box_);
    };
    RecognizeActionResponseBodyDataElementsBoxes() = default ;
    RecognizeActionResponseBodyDataElementsBoxes(const RecognizeActionResponseBodyDataElementsBoxes &) = default ;
    RecognizeActionResponseBodyDataElementsBoxes(RecognizeActionResponseBodyDataElementsBoxes &&) = default ;
    RecognizeActionResponseBodyDataElementsBoxes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeActionResponseBodyDataElementsBoxes() = default ;
    RecognizeActionResponseBodyDataElementsBoxes& operator=(const RecognizeActionResponseBodyDataElementsBoxes &) = default ;
    RecognizeActionResponseBodyDataElementsBoxes& operator=(RecognizeActionResponseBodyDataElementsBoxes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->box_ == nullptr; };
    // box Field Functions 
    bool hasBox() const { return this->box_ != nullptr;};
    void deleteBox() { this->box_ = nullptr;};
    inline const vector<int32_t> & box() const { DARABONBA_PTR_GET_CONST(box_, vector<int32_t>) };
    inline vector<int32_t> box() { DARABONBA_PTR_GET(box_, vector<int32_t>) };
    inline RecognizeActionResponseBodyDataElementsBoxes& setBox(const vector<int32_t> & box) { DARABONBA_PTR_SET_VALUE(box_, box) };
    inline RecognizeActionResponseBodyDataElementsBoxes& setBox(vector<int32_t> && box) { DARABONBA_PTR_SET_RVALUE(box_, box) };


  protected:
    std::shared_ptr<vector<int32_t>> box_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
