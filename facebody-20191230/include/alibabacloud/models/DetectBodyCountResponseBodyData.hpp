// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTBODYCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTBODYCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectBodyCountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectBodyCountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PersonNumber, personNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DetectBodyCountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PersonNumber, personNumber_);
    };
    DetectBodyCountResponseBodyData() = default ;
    DetectBodyCountResponseBodyData(const DetectBodyCountResponseBodyData &) = default ;
    DetectBodyCountResponseBodyData(DetectBodyCountResponseBodyData &&) = default ;
    DetectBodyCountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectBodyCountResponseBodyData() = default ;
    DetectBodyCountResponseBodyData& operator=(const DetectBodyCountResponseBodyData &) = default ;
    DetectBodyCountResponseBodyData& operator=(DetectBodyCountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->personNumber_ == nullptr; };
    // personNumber Field Functions 
    bool hasPersonNumber() const { return this->personNumber_ != nullptr;};
    void deletePersonNumber() { this->personNumber_ = nullptr;};
    inline int32_t personNumber() const { DARABONBA_PTR_GET_DEFAULT(personNumber_, 0) };
    inline DetectBodyCountResponseBodyData& setPersonNumber(int32_t personNumber) { DARABONBA_PTR_SET_VALUE(personNumber_, personNumber) };


  protected:
    std::shared_ptr<int32_t> personNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
