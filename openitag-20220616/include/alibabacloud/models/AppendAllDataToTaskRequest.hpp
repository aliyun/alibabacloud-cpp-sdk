// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPENDALLDATATOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPENDALLDATATOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OpenDatasetProxyAppendDataRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class AppendAllDataToTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppendAllDataToTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AppendAllDataToTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    AppendAllDataToTaskRequest() = default ;
    AppendAllDataToTaskRequest(const AppendAllDataToTaskRequest &) = default ;
    AppendAllDataToTaskRequest(AppendAllDataToTaskRequest &&) = default ;
    AppendAllDataToTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppendAllDataToTaskRequest() = default ;
    AppendAllDataToTaskRequest& operator=(const AppendAllDataToTaskRequest &) = default ;
    AppendAllDataToTaskRequest& operator=(AppendAllDataToTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const OpenDatasetProxyAppendDataRequest & getBody() const { DARABONBA_PTR_GET_CONST(body_, OpenDatasetProxyAppendDataRequest) };
    inline OpenDatasetProxyAppendDataRequest getBody() { DARABONBA_PTR_GET(body_, OpenDatasetProxyAppendDataRequest) };
    inline AppendAllDataToTaskRequest& setBody(const OpenDatasetProxyAppendDataRequest & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AppendAllDataToTaskRequest& setBody(OpenDatasetProxyAppendDataRequest && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // Parameters.
    shared_ptr<OpenDatasetProxyAppendDataRequest> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
