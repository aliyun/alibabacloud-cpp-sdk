// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBENCHMARKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBENCHMARKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateBenchmarkTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBenchmarkTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBenchmarkTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateBenchmarkTaskRequest() = default ;
    UpdateBenchmarkTaskRequest(const UpdateBenchmarkTaskRequest &) = default ;
    UpdateBenchmarkTaskRequest(UpdateBenchmarkTaskRequest &&) = default ;
    UpdateBenchmarkTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBenchmarkTaskRequest() = default ;
    UpdateBenchmarkTaskRequest& operator=(const UpdateBenchmarkTaskRequest &) = default ;
    UpdateBenchmarkTaskRequest& operator=(UpdateBenchmarkTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline UpdateBenchmarkTaskRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    // The request body. The body includes the parameters that are set to create a stress testing task. For more information, see **Table 1. Fields in the base parameter**.
    std::shared_ptr<string> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
