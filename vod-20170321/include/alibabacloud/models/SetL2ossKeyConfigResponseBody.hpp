// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETL2OSSKEYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETL2OSSKEYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SetL2OssKeyConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetL2OssKeyConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetL2OssKeyConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetL2OssKeyConfigResponseBody() = default ;
    SetL2OssKeyConfigResponseBody(const SetL2OssKeyConfigResponseBody &) = default ;
    SetL2OssKeyConfigResponseBody(SetL2OssKeyConfigResponseBody &&) = default ;
    SetL2OssKeyConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetL2OssKeyConfigResponseBody() = default ;
    SetL2OssKeyConfigResponseBody& operator=(const SetL2OssKeyConfigResponseBody &) = default ;
    SetL2OssKeyConfigResponseBody& operator=(SetL2OssKeyConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetL2OssKeyConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
