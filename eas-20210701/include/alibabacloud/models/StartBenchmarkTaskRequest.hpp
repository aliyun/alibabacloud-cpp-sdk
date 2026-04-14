// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTBENCHMARKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTBENCHMARKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class StartBenchmarkTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartBenchmarkTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, StartBenchmarkTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    StartBenchmarkTaskRequest() = default ;
    StartBenchmarkTaskRequest(const StartBenchmarkTaskRequest &) = default ;
    StartBenchmarkTaskRequest(StartBenchmarkTaskRequest &&) = default ;
    StartBenchmarkTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartBenchmarkTaskRequest() = default ;
    StartBenchmarkTaskRequest& operator=(const StartBenchmarkTaskRequest &) = default ;
    StartBenchmarkTaskRequest& operator=(StartBenchmarkTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
