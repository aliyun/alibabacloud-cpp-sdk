// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZELICENSEPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZELICENSEPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeLicensePlateResponseBodyDataPlates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeLicensePlateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeLicensePlateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Plates, plates_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeLicensePlateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Plates, plates_);
    };
    RecognizeLicensePlateResponseBodyData() = default ;
    RecognizeLicensePlateResponseBodyData(const RecognizeLicensePlateResponseBodyData &) = default ;
    RecognizeLicensePlateResponseBodyData(RecognizeLicensePlateResponseBodyData &&) = default ;
    RecognizeLicensePlateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeLicensePlateResponseBodyData() = default ;
    RecognizeLicensePlateResponseBodyData& operator=(const RecognizeLicensePlateResponseBodyData &) = default ;
    RecognizeLicensePlateResponseBodyData& operator=(RecognizeLicensePlateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->plates_ == nullptr; };
    // plates Field Functions 
    bool hasPlates() const { return this->plates_ != nullptr;};
    void deletePlates() { this->plates_ = nullptr;};
    inline const vector<Models::RecognizeLicensePlateResponseBodyDataPlates> & plates() const { DARABONBA_PTR_GET_CONST(plates_, vector<Models::RecognizeLicensePlateResponseBodyDataPlates>) };
    inline vector<Models::RecognizeLicensePlateResponseBodyDataPlates> plates() { DARABONBA_PTR_GET(plates_, vector<Models::RecognizeLicensePlateResponseBodyDataPlates>) };
    inline RecognizeLicensePlateResponseBodyData& setPlates(const vector<Models::RecognizeLicensePlateResponseBodyDataPlates> & plates) { DARABONBA_PTR_SET_VALUE(plates_, plates) };
    inline RecognizeLicensePlateResponseBodyData& setPlates(vector<Models::RecognizeLicensePlateResponseBodyDataPlates> && plates) { DARABONBA_PTR_SET_RVALUE(plates_, plates) };


  protected:
    std::shared_ptr<vector<Models::RecognizeLicensePlateResponseBodyDataPlates>> plates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
