// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTWHITEBASEIMAGERESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_DETECTWHITEBASEIMAGERESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectWhiteBaseImageResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectWhiteBaseImageResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(WhiteBase, whiteBase_);
    };
    friend void from_json(const Darabonba::Json& j, DetectWhiteBaseImageResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(WhiteBase, whiteBase_);
    };
    DetectWhiteBaseImageResponseBodyDataElements() = default ;
    DetectWhiteBaseImageResponseBodyDataElements(const DetectWhiteBaseImageResponseBodyDataElements &) = default ;
    DetectWhiteBaseImageResponseBodyDataElements(DetectWhiteBaseImageResponseBodyDataElements &&) = default ;
    DetectWhiteBaseImageResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectWhiteBaseImageResponseBodyDataElements() = default ;
    DetectWhiteBaseImageResponseBodyDataElements& operator=(const DetectWhiteBaseImageResponseBodyDataElements &) = default ;
    DetectWhiteBaseImageResponseBodyDataElements& operator=(DetectWhiteBaseImageResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->whiteBase_ != nullptr; };
    // whiteBase Field Functions 
    bool hasWhiteBase() const { return this->whiteBase_ != nullptr;};
    void deleteWhiteBase() { this->whiteBase_ = nullptr;};
    inline int32_t whiteBase() const { DARABONBA_PTR_GET_DEFAULT(whiteBase_, 0) };
    inline DetectWhiteBaseImageResponseBodyDataElements& setWhiteBase(int32_t whiteBase) { DARABONBA_PTR_SET_VALUE(whiteBase_, whiteBase) };


  protected:
    std::shared_ptr<int32_t> whiteBase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
