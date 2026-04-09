// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class StopJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopJobRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, StopJobRequest& obj) { 
      (void)j; (void)obj; 
    };
    StopJobRequest() = default ;
    StopJobRequest(const StopJobRequest &) = default ;
    StopJobRequest(StopJobRequest &&) = default ;
    StopJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopJobRequest() = default ;
    StopJobRequest& operator=(const StopJobRequest &) = default ;
    StopJobRequest& operator=(StopJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
