// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTSTACKDRIFTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTSTACKDRIFTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class DetectStackDriftResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectStackDriftResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DriftDetectionId, driftDetectionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectStackDriftResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DriftDetectionId, driftDetectionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetectStackDriftResponseBody() = default ;
    DetectStackDriftResponseBody(const DetectStackDriftResponseBody &) = default ;
    DetectStackDriftResponseBody(DetectStackDriftResponseBody &&) = default ;
    DetectStackDriftResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectStackDriftResponseBody() = default ;
    DetectStackDriftResponseBody& operator=(const DetectStackDriftResponseBody &) = default ;
    DetectStackDriftResponseBody& operator=(DetectStackDriftResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->driftDetectionId_ != nullptr
        && this->requestId_ != nullptr; };
    // driftDetectionId Field Functions 
    bool hasDriftDetectionId() const { return this->driftDetectionId_ != nullptr;};
    void deleteDriftDetectionId() { this->driftDetectionId_ = nullptr;};
    inline string driftDetectionId() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionId_, "") };
    inline DetectStackDriftResponseBody& setDriftDetectionId(string driftDetectionId) { DARABONBA_PTR_SET_VALUE(driftDetectionId_, driftDetectionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectStackDriftResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the drift detection.
    std::shared_ptr<string> driftDetectionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
