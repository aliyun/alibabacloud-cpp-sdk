// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTOREOSSIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESTOREOSSIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class RestoreOssImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreOssImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestoredImageKey, restoredImageKey_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreOssImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestoredImageKey, restoredImageKey_);
    };
    RestoreOssImageResponseBody() = default ;
    RestoreOssImageResponseBody(const RestoreOssImageResponseBody &) = default ;
    RestoreOssImageResponseBody(RestoreOssImageResponseBody &&) = default ;
    RestoreOssImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreOssImageResponseBody() = default ;
    RestoreOssImageResponseBody& operator=(const RestoreOssImageResponseBody &) = default ;
    RestoreOssImageResponseBody& operator=(RestoreOssImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->restoredImageKey_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RestoreOssImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoredImageKey Field Functions 
    bool hasRestoredImageKey() const { return this->restoredImageKey_ != nullptr;};
    void deleteRestoredImageKey() { this->restoredImageKey_ = nullptr;};
    inline string restoredImageKey() const { DARABONBA_PTR_GET_DEFAULT(restoredImageKey_, "") };
    inline RestoreOssImageResponseBody& setRestoredImageKey(string restoredImageKey) { DARABONBA_PTR_SET_VALUE(restoredImageKey_, restoredImageKey) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> restoredImageKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
