// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIEWPOINTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIEWPOINTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GenerateViewPointResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateViewPointResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Point, point_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateViewPointResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Point, point_);
    };
    GenerateViewPointResponseBodyData() = default ;
    GenerateViewPointResponseBodyData(const GenerateViewPointResponseBodyData &) = default ;
    GenerateViewPointResponseBodyData(GenerateViewPointResponseBodyData &&) = default ;
    GenerateViewPointResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateViewPointResponseBodyData() = default ;
    GenerateViewPointResponseBodyData& operator=(const GenerateViewPointResponseBodyData &) = default ;
    GenerateViewPointResponseBodyData& operator=(GenerateViewPointResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->point_ != nullptr; };
    // point Field Functions 
    bool hasPoint() const { return this->point_ != nullptr;};
    void deletePoint() { this->point_ = nullptr;};
    inline string point() const { DARABONBA_PTR_GET_DEFAULT(point_, "") };
    inline GenerateViewPointResponseBodyData& setPoint(string point) { DARABONBA_PTR_SET_VALUE(point_, point) };


  protected:
    std::shared_ptr<string> point_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
