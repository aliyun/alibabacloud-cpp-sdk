// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTOBJECTFRAME_HPP_
#define ALIBABACLOUD_MODELS_DETECTOBJECTFRAME_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectObjectElement.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectObjectFrame : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectObjectFrame& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DetectObjectFrame& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DetectObjectFrame() = default ;
    DetectObjectFrame(const DetectObjectFrame &) = default ;
    DetectObjectFrame(DetectObjectFrame &&) = default ;
    DetectObjectFrame(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectObjectFrame() = default ;
    DetectObjectFrame& operator=(const DetectObjectFrame &) = default ;
    DetectObjectFrame& operator=(DetectObjectFrame &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elements_ != nullptr
        && this->time_ != nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<DetectObjectElement> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<DetectObjectElement>) };
    inline vector<DetectObjectElement> elements() { DARABONBA_PTR_GET(elements_, vector<DetectObjectElement>) };
    inline DetectObjectFrame& setElements(const vector<DetectObjectElement> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline DetectObjectFrame& setElements(vector<DetectObjectElement> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DetectObjectFrame& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<vector<DetectObjectElement>> elements_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
