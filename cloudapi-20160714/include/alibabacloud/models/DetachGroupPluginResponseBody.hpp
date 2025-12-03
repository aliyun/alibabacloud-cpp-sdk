// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHGROUPPLUGINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHGROUPPLUGINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DetachGroupPluginResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachGroupPluginResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachGroupPluginResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetachGroupPluginResponseBody() = default ;
    DetachGroupPluginResponseBody(const DetachGroupPluginResponseBody &) = default ;
    DetachGroupPluginResponseBody(DetachGroupPluginResponseBody &&) = default ;
    DetachGroupPluginResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachGroupPluginResponseBody() = default ;
    DetachGroupPluginResponseBody& operator=(const DetachGroupPluginResponseBody &) = default ;
    DetachGroupPluginResponseBody& operator=(DetachGroupPluginResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachGroupPluginResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
