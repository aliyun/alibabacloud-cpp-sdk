// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CROPPINGSUGGESTION_HPP_
#define ALIBABACLOUD_MODELS_CROPPINGSUGGESTION_HPP_
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
  class CroppingSuggestion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CroppingSuggestion& obj) { 
      DARABONBA_PTR_TO_JSON(AspectRatio, aspectRatio_);
      DARABONBA_PTR_TO_JSON(Boundary, boundary_);
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
    };
    friend void from_json(const Darabonba::Json& j, CroppingSuggestion& obj) { 
      DARABONBA_PTR_FROM_JSON(AspectRatio, aspectRatio_);
      DARABONBA_PTR_FROM_JSON(Boundary, boundary_);
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
    };
    CroppingSuggestion() = default ;
    CroppingSuggestion(const CroppingSuggestion &) = default ;
    CroppingSuggestion(CroppingSuggestion &&) = default ;
    CroppingSuggestion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CroppingSuggestion() = default ;
    CroppingSuggestion& operator=(const CroppingSuggestion &) = default ;
    CroppingSuggestion& operator=(CroppingSuggestion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aspectRatio_ != nullptr
        && this->boundary_ != nullptr && this->confidence_ != nullptr; };
    // aspectRatio Field Functions 
    bool hasAspectRatio() const { return this->aspectRatio_ != nullptr;};
    void deleteAspectRatio() { this->aspectRatio_ = nullptr;};
    inline string aspectRatio() const { DARABONBA_PTR_GET_DEFAULT(aspectRatio_, "") };
    inline CroppingSuggestion& setAspectRatio(string aspectRatio) { DARABONBA_PTR_SET_VALUE(aspectRatio_, aspectRatio) };


    // boundary Field Functions 
    bool hasBoundary() const { return this->boundary_ != nullptr;};
    void deleteBoundary() { this->boundary_ = nullptr;};
    inline const Boundary & boundary() const { DARABONBA_PTR_GET_CONST(boundary_, Boundary) };
    inline Boundary boundary() { DARABONBA_PTR_GET(boundary_, Boundary) };
    inline CroppingSuggestion& setBoundary(const Boundary & boundary) { DARABONBA_PTR_SET_VALUE(boundary_, boundary) };
    inline CroppingSuggestion& setBoundary(Boundary && boundary) { DARABONBA_PTR_SET_RVALUE(boundary_, boundary) };


    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline CroppingSuggestion& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


  protected:
    std::shared_ptr<string> aspectRatio_ = nullptr;
    std::shared_ptr<Boundary> boundary_ = nullptr;
    std::shared_ptr<float> confidence_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
