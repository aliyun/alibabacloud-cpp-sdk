// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPOFORKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPOFORKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateRepoForkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRepoForkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRepoForkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    CreateRepoForkResponseBody() = default ;
    CreateRepoForkResponseBody(const CreateRepoForkResponseBody &) = default ;
    CreateRepoForkResponseBody(CreateRepoForkResponseBody &&) = default ;
    CreateRepoForkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRepoForkResponseBody() = default ;
    CreateRepoForkResponseBody& operator=(const CreateRepoForkResponseBody &) = default ;
    CreateRepoForkResponseBody& operator=(CreateRepoForkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRepoForkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline int64_t getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, 0L) };
    inline CreateRepoForkResponseBody& setResult(int64_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
