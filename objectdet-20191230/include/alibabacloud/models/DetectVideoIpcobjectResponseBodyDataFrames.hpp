// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVIDEOIPCOBJECTRESPONSEBODYDATAFRAMES_HPP_
#define ALIBABACLOUD_MODELS_DETECTVIDEOIPCOBJECTRESPONSEBODYDATAFRAMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectVideoIPCObjectResponseBodyDataFramesElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVideoIPCObjectResponseBodyDataFrames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVideoIPCObjectResponseBodyDataFrames& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVideoIPCObjectResponseBodyDataFrames& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DetectVideoIPCObjectResponseBodyDataFrames() = default ;
    DetectVideoIPCObjectResponseBodyDataFrames(const DetectVideoIPCObjectResponseBodyDataFrames &) = default ;
    DetectVideoIPCObjectResponseBodyDataFrames(DetectVideoIPCObjectResponseBodyDataFrames &&) = default ;
    DetectVideoIPCObjectResponseBodyDataFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVideoIPCObjectResponseBodyDataFrames() = default ;
    DetectVideoIPCObjectResponseBodyDataFrames& operator=(const DetectVideoIPCObjectResponseBodyDataFrames &) = default ;
    DetectVideoIPCObjectResponseBodyDataFrames& operator=(DetectVideoIPCObjectResponseBodyDataFrames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elements_ != nullptr
        && this->time_ != nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::DetectVideoIPCObjectResponseBodyDataFramesElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::DetectVideoIPCObjectResponseBodyDataFramesElements>) };
    inline vector<Models::DetectVideoIPCObjectResponseBodyDataFramesElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::DetectVideoIPCObjectResponseBodyDataFramesElements>) };
    inline DetectVideoIPCObjectResponseBodyDataFrames& setElements(const vector<Models::DetectVideoIPCObjectResponseBodyDataFramesElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline DetectVideoIPCObjectResponseBodyDataFrames& setElements(vector<Models::DetectVideoIPCObjectResponseBodyDataFramesElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DetectVideoIPCObjectResponseBodyDataFrames& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<vector<Models::DetectVideoIPCObjectResponseBodyDataFramesElements>> elements_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
