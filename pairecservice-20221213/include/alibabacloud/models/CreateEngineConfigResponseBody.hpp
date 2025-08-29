// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENGINECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEENGINECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateEngineConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEngineConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EngineConfigId, engineConfigId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEngineConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EngineConfigId, engineConfigId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateEngineConfigResponseBody() = default ;
    CreateEngineConfigResponseBody(const CreateEngineConfigResponseBody &) = default ;
    CreateEngineConfigResponseBody(CreateEngineConfigResponseBody &&) = default ;
    CreateEngineConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEngineConfigResponseBody() = default ;
    CreateEngineConfigResponseBody& operator=(const CreateEngineConfigResponseBody &) = default ;
    CreateEngineConfigResponseBody& operator=(CreateEngineConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->engineConfigId_ != nullptr
        && this->requestId_ != nullptr; };
    // engineConfigId Field Functions 
    bool hasEngineConfigId() const { return this->engineConfigId_ != nullptr;};
    void deleteEngineConfigId() { this->engineConfigId_ = nullptr;};
    inline string engineConfigId() const { DARABONBA_PTR_GET_DEFAULT(engineConfigId_, "") };
    inline CreateEngineConfigResponseBody& setEngineConfigId(string engineConfigId) { DARABONBA_PTR_SET_VALUE(engineConfigId_, engineConfigId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEngineConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> engineConfigId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
