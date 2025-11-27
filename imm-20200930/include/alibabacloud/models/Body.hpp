// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BODY_HPP_
#define ALIBABACLOUD_MODELS_BODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Boundary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Body : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Body& obj) { 
      DARABONBA_PTR_TO_JSON(Boundary, boundary_);
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
    };
    friend void from_json(const Darabonba::Json& j, Body& obj) { 
      DARABONBA_PTR_FROM_JSON(Boundary, boundary_);
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
    };
    Body() = default ;
    Body(const Body &) = default ;
    Body(Body &&) = default ;
    Body(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Body() = default ;
    Body& operator=(const Body &) = default ;
    Body& operator=(Body &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->boundary_ == nullptr
        && return this->confidence_ == nullptr; };
    // boundary Field Functions 
    bool hasBoundary() const { return this->boundary_ != nullptr;};
    void deleteBoundary() { this->boundary_ = nullptr;};
    inline const Boundary & boundary() const { DARABONBA_PTR_GET_CONST(boundary_, Boundary) };
    inline Boundary boundary() { DARABONBA_PTR_GET(boundary_, Boundary) };
    inline Body& setBoundary(const Boundary & boundary) { DARABONBA_PTR_SET_VALUE(boundary_, boundary) };
    inline Body& setBoundary(Boundary && boundary) { DARABONBA_PTR_SET_RVALUE(boundary_, boundary) };


    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline Body& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


  protected:
    std::shared_ptr<Boundary> boundary_ = nullptr;
    std::shared_ptr<float> confidence_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
