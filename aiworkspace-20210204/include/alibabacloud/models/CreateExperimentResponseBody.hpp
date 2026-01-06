// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPERIMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPERIMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateExperimentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExperimentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExperimentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateExperimentResponseBody() = default ;
    CreateExperimentResponseBody(const CreateExperimentResponseBody &) = default ;
    CreateExperimentResponseBody(CreateExperimentResponseBody &&) = default ;
    CreateExperimentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExperimentResponseBody() = default ;
    CreateExperimentResponseBody& operator=(const CreateExperimentResponseBody &) = default ;
    CreateExperimentResponseBody& operator=(CreateExperimentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->experimentId_ == nullptr
        && this->requestId_ == nullptr; };
    // experimentId Field Functions 
    bool hasExperimentId() const { return this->experimentId_ != nullptr;};
    void deleteExperimentId() { this->experimentId_ = nullptr;};
    inline string getExperimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
    inline CreateExperimentResponseBody& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateExperimentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data. If the operation is asynchronously implemented, the job ID is returned.
    shared_ptr<string> experimentId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
