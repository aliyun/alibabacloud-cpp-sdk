// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPERIMENTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPERIMENTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateExperimentGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExperimentGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExperimentGroupId, experimentGroupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExperimentGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExperimentGroupId, experimentGroupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateExperimentGroupResponseBody() = default ;
    CreateExperimentGroupResponseBody(const CreateExperimentGroupResponseBody &) = default ;
    CreateExperimentGroupResponseBody(CreateExperimentGroupResponseBody &&) = default ;
    CreateExperimentGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExperimentGroupResponseBody() = default ;
    CreateExperimentGroupResponseBody& operator=(const CreateExperimentGroupResponseBody &) = default ;
    CreateExperimentGroupResponseBody& operator=(CreateExperimentGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->experimentGroupId_ != nullptr
        && this->requestId_ != nullptr; };
    // experimentGroupId Field Functions 
    bool hasExperimentGroupId() const { return this->experimentGroupId_ != nullptr;};
    void deleteExperimentGroupId() { this->experimentGroupId_ = nullptr;};
    inline string experimentGroupId() const { DARABONBA_PTR_GET_DEFAULT(experimentGroupId_, "") };
    inline CreateExperimentGroupResponseBody& setExperimentGroupId(string experimentGroupId) { DARABONBA_PTR_SET_VALUE(experimentGroupId_, experimentGroupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateExperimentGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> experimentGroupId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
