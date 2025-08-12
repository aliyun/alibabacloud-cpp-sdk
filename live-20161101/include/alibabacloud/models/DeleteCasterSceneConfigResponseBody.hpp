// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECASTERSCENECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECASTERSCENECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteCasterSceneConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCasterSceneConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCasterSceneConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteCasterSceneConfigResponseBody() = default ;
    DeleteCasterSceneConfigResponseBody(const DeleteCasterSceneConfigResponseBody &) = default ;
    DeleteCasterSceneConfigResponseBody(DeleteCasterSceneConfigResponseBody &&) = default ;
    DeleteCasterSceneConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCasterSceneConfigResponseBody() = default ;
    DeleteCasterSceneConfigResponseBody& operator=(const DeleteCasterSceneConfigResponseBody &) = default ;
    DeleteCasterSceneConfigResponseBody& operator=(DeleteCasterSceneConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteCasterSceneConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
