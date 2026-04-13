// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDETECTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDETECTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class CreateDetectConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDetectConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(detectConfigId, detectConfigId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDetectConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(detectConfigId, detectConfigId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateDetectConfigResponseBody() = default ;
    CreateDetectConfigResponseBody(const CreateDetectConfigResponseBody &) = default ;
    CreateDetectConfigResponseBody(CreateDetectConfigResponseBody &&) = default ;
    CreateDetectConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDetectConfigResponseBody() = default ;
    CreateDetectConfigResponseBody& operator=(const CreateDetectConfigResponseBody &) = default ;
    CreateDetectConfigResponseBody& operator=(CreateDetectConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectConfigId_ == nullptr
        && this->requestId_ == nullptr; };
    // detectConfigId Field Functions 
    bool hasDetectConfigId() const { return this->detectConfigId_ != nullptr;};
    void deleteDetectConfigId() { this->detectConfigId_ = nullptr;};
    inline string getDetectConfigId() const { DARABONBA_PTR_GET_DEFAULT(detectConfigId_, "") };
    inline CreateDetectConfigResponseBody& setDetectConfigId(string detectConfigId) { DARABONBA_PTR_SET_VALUE(detectConfigId_, detectConfigId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDetectConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> detectConfigId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
