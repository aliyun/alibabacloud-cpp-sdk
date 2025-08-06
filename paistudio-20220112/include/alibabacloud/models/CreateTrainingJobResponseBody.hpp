// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAININGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAININGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CreateTrainingJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrainingJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrainingJobId, trainingJobId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrainingJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrainingJobId, trainingJobId_);
    };
    CreateTrainingJobResponseBody() = default ;
    CreateTrainingJobResponseBody(const CreateTrainingJobResponseBody &) = default ;
    CreateTrainingJobResponseBody(CreateTrainingJobResponseBody &&) = default ;
    CreateTrainingJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrainingJobResponseBody() = default ;
    CreateTrainingJobResponseBody& operator=(const CreateTrainingJobResponseBody &) = default ;
    CreateTrainingJobResponseBody& operator=(CreateTrainingJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->trainingJobId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTrainingJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trainingJobId Field Functions 
    bool hasTrainingJobId() const { return this->trainingJobId_ != nullptr;};
    void deleteTrainingJobId() { this->trainingJobId_ = nullptr;};
    inline string trainingJobId() const { DARABONBA_PTR_GET_DEFAULT(trainingJobId_, "") };
    inline CreateTrainingJobResponseBody& setTrainingJobId(string trainingJobId) { DARABONBA_PTR_SET_VALUE(trainingJobId_, trainingJobId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> trainingJobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
