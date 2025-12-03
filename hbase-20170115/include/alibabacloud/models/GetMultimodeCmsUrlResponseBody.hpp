// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIMODECMSURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIMODECMSURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class GetMultimodeCmsUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultimodeCmsUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(MultimodCmsUrl, multimodCmsUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultimodeCmsUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(MultimodCmsUrl, multimodCmsUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMultimodeCmsUrlResponseBody() = default ;
    GetMultimodeCmsUrlResponseBody(const GetMultimodeCmsUrlResponseBody &) = default ;
    GetMultimodeCmsUrlResponseBody(GetMultimodeCmsUrlResponseBody &&) = default ;
    GetMultimodeCmsUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultimodeCmsUrlResponseBody() = default ;
    GetMultimodeCmsUrlResponseBody& operator=(const GetMultimodeCmsUrlResponseBody &) = default ;
    GetMultimodeCmsUrlResponseBody& operator=(GetMultimodeCmsUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->multimodCmsUrl_ == nullptr && return this->requestId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetMultimodeCmsUrlResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // multimodCmsUrl Field Functions 
    bool hasMultimodCmsUrl() const { return this->multimodCmsUrl_ != nullptr;};
    void deleteMultimodCmsUrl() { this->multimodCmsUrl_ = nullptr;};
    inline string multimodCmsUrl() const { DARABONBA_PTR_GET_DEFAULT(multimodCmsUrl_, "") };
    inline GetMultimodeCmsUrlResponseBody& setMultimodCmsUrl(string multimodCmsUrl) { DARABONBA_PTR_SET_VALUE(multimodCmsUrl_, multimodCmsUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMultimodeCmsUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> multimodCmsUrl_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
