// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONEENGINECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLONEENGINECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CloneEngineConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneEngineConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EngineConfigId, engineConfigId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloneEngineConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EngineConfigId, engineConfigId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloneEngineConfigResponseBody() = default ;
    CloneEngineConfigResponseBody(const CloneEngineConfigResponseBody &) = default ;
    CloneEngineConfigResponseBody(CloneEngineConfigResponseBody &&) = default ;
    CloneEngineConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneEngineConfigResponseBody() = default ;
    CloneEngineConfigResponseBody& operator=(const CloneEngineConfigResponseBody &) = default ;
    CloneEngineConfigResponseBody& operator=(CloneEngineConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->engineConfigId_ == nullptr
        && this->requestId_ == nullptr; };
    // engineConfigId Field Functions 
    bool hasEngineConfigId() const { return this->engineConfigId_ != nullptr;};
    void deleteEngineConfigId() { this->engineConfigId_ = nullptr;};
    inline string getEngineConfigId() const { DARABONBA_PTR_GET_DEFAULT(engineConfigId_, "") };
    inline CloneEngineConfigResponseBody& setEngineConfigId(string engineConfigId) { DARABONBA_PTR_SET_VALUE(engineConfigId_, engineConfigId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloneEngineConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> engineConfigId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
