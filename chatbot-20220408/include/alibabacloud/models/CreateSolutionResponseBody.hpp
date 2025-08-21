// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESOLUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESOLUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateSolutionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSolutionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SolutionId, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSolutionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SolutionId, solutionId_);
    };
    CreateSolutionResponseBody() = default ;
    CreateSolutionResponseBody(const CreateSolutionResponseBody &) = default ;
    CreateSolutionResponseBody(CreateSolutionResponseBody &&) = default ;
    CreateSolutionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSolutionResponseBody() = default ;
    CreateSolutionResponseBody& operator=(const CreateSolutionResponseBody &) = default ;
    CreateSolutionResponseBody& operator=(CreateSolutionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->solutionId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSolutionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline int64_t solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, 0L) };
    inline CreateSolutionResponseBody& setSolutionId(int64_t solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> solutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
