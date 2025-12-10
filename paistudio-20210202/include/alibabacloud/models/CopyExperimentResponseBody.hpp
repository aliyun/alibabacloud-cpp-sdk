// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYEXPERIMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COPYEXPERIMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class CopyExperimentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyExperimentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyExperimentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CopyExperimentResponseBody() = default ;
    CopyExperimentResponseBody(const CopyExperimentResponseBody &) = default ;
    CopyExperimentResponseBody(CopyExperimentResponseBody &&) = default ;
    CopyExperimentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyExperimentResponseBody() = default ;
    CopyExperimentResponseBody& operator=(const CopyExperimentResponseBody &) = default ;
    CopyExperimentResponseBody& operator=(CopyExperimentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->experimentId_ == nullptr
        && return this->requestId_ == nullptr; };
    // experimentId Field Functions 
    bool hasExperimentId() const { return this->experimentId_ != nullptr;};
    void deleteExperimentId() { this->experimentId_ = nullptr;};
    inline string experimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
    inline CopyExperimentResponseBody& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CopyExperimentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> experimentId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
