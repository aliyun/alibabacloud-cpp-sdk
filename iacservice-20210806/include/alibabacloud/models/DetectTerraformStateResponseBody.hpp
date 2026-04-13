// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTTERRAFORMSTATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTTERRAFORMSTATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class DetectTerraformStateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectTerraformStateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(detectionId, detectionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectTerraformStateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(detectionId, detectionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DetectTerraformStateResponseBody() = default ;
    DetectTerraformStateResponseBody(const DetectTerraformStateResponseBody &) = default ;
    DetectTerraformStateResponseBody(DetectTerraformStateResponseBody &&) = default ;
    DetectTerraformStateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectTerraformStateResponseBody() = default ;
    DetectTerraformStateResponseBody& operator=(const DetectTerraformStateResponseBody &) = default ;
    DetectTerraformStateResponseBody& operator=(DetectTerraformStateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectionId_ == nullptr
        && this->requestId_ == nullptr; };
    // detectionId Field Functions 
    bool hasDetectionId() const { return this->detectionId_ != nullptr;};
    void deleteDetectionId() { this->detectionId_ = nullptr;};
    inline string getDetectionId() const { DARABONBA_PTR_GET_DEFAULT(detectionId_, "") };
    inline DetectTerraformStateResponseBody& setDetectionId(string detectionId) { DARABONBA_PTR_SET_VALUE(detectionId_, detectionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectTerraformStateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> detectionId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
