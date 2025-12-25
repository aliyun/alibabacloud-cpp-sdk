// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWEXECUTIONDAGRESPONSEBODYDATANODESCOORDINATE_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWEXECUTIONDAGRESPONSEBODYDATANODESCOORDINATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate() = default ;
    GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate(const GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate &) = default ;
    GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate(GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate &&) = default ;
    GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate() = default ;
    GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate& operator=(const GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate &) = default ;
    GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate& operator=(GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->height_ == nullptr
        && return this->width_ == nullptr && return this->x_ == nullptr && return this->y_ == nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline float height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline float width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline GetWorkflowExecutionDAGResponseBodyDataNodesCoordinate& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<float> height_ = nullptr;
    std::shared_ptr<float> width_ = nullptr;
    std::shared_ptr<float> x_ = nullptr;
    std::shared_ptr<float> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
