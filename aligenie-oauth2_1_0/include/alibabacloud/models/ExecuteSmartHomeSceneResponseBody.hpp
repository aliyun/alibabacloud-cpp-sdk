// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESMARTHOMESCENERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESMARTHOMESCENERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class ExecuteSmartHomeSceneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteSmartHomeSceneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteSmartHomeSceneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExecuteSmartHomeSceneResponseBody() = default ;
    ExecuteSmartHomeSceneResponseBody(const ExecuteSmartHomeSceneResponseBody &) = default ;
    ExecuteSmartHomeSceneResponseBody(ExecuteSmartHomeSceneResponseBody &&) = default ;
    ExecuteSmartHomeSceneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteSmartHomeSceneResponseBody() = default ;
    ExecuteSmartHomeSceneResponseBody& operator=(const ExecuteSmartHomeSceneResponseBody &) = default ;
    ExecuteSmartHomeSceneResponseBody& operator=(ExecuteSmartHomeSceneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteSmartHomeSceneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
