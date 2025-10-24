// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBENCHMARKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBENCHMARKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateBenchmarkTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBenchmarkTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBenchmarkTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateBenchmarkTaskRequest() = default ;
    CreateBenchmarkTaskRequest(const CreateBenchmarkTaskRequest &) = default ;
    CreateBenchmarkTaskRequest(CreateBenchmarkTaskRequest &&) = default ;
    CreateBenchmarkTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBenchmarkTaskRequest() = default ;
    CreateBenchmarkTaskRequest& operator=(const CreateBenchmarkTaskRequest &) = default ;
    CreateBenchmarkTaskRequest& operator=(CreateBenchmarkTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline CreateBenchmarkTaskRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    // The request body. The body includes the parameters that are set to create a stress testing task.
    std::shared_ptr<string> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
