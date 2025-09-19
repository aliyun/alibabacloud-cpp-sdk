// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILEDETECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILEDETECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateFileDetectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileDetectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileDetectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateFileDetectResponseBody() = default ;
    CreateFileDetectResponseBody(const CreateFileDetectResponseBody &) = default ;
    CreateFileDetectResponseBody(CreateFileDetectResponseBody &&) = default ;
    CreateFileDetectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileDetectResponseBody() = default ;
    CreateFileDetectResponseBody& operator=(const CreateFileDetectResponseBody &) = default ;
    CreateFileDetectResponseBody& operator=(CreateFileDetectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hashKey_ != nullptr
        && this->requestId_ != nullptr; };
    // hashKey Field Functions 
    bool hasHashKey() const { return this->hashKey_ != nullptr;};
    void deleteHashKey() { this->hashKey_ = nullptr;};
    inline string hashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
    inline CreateFileDetectResponseBody& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFileDetectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The identifier of the file.
    std::shared_ptr<string> hashKey_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
