// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LICENSEPLATE_HPP_
#define ALIBABACLOUD_MODELS_LICENSEPLATE_HPP_
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
  class LicensePlate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LicensePlate& obj) { 
      DARABONBA_PTR_TO_JSON(Boundary, boundary_);
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(Content, content_);
    };
    friend void from_json(const Darabonba::Json& j, LicensePlate& obj) { 
      DARABONBA_PTR_FROM_JSON(Boundary, boundary_);
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
    };
    LicensePlate() = default ;
    LicensePlate(const LicensePlate &) = default ;
    LicensePlate(LicensePlate &&) = default ;
    LicensePlate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LicensePlate() = default ;
    LicensePlate& operator=(const LicensePlate &) = default ;
    LicensePlate& operator=(LicensePlate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->boundary_ == nullptr
        && return this->confidence_ == nullptr && return this->content_ == nullptr; };
    // boundary Field Functions 
    bool hasBoundary() const { return this->boundary_ != nullptr;};
    void deleteBoundary() { this->boundary_ = nullptr;};
    inline const Boundary & boundary() const { DARABONBA_PTR_GET_CONST(boundary_, Boundary) };
    inline Boundary boundary() { DARABONBA_PTR_GET(boundary_, Boundary) };
    inline LicensePlate& setBoundary(const Boundary & boundary) { DARABONBA_PTR_SET_VALUE(boundary_, boundary) };
    inline LicensePlate& setBoundary(Boundary && boundary) { DARABONBA_PTR_SET_RVALUE(boundary_, boundary) };


    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline double confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline LicensePlate& setConfidence(double confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline LicensePlate& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    std::shared_ptr<Boundary> boundary_ = nullptr;
    std::shared_ptr<double> confidence_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
