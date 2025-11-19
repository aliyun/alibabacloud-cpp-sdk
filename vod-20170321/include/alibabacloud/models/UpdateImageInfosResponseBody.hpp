// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIMAGEINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIMAGEINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateImageInfosResponseBodyNonExistImageIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateImageInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateImageInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExistImageIds, nonExistImageIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateImageInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExistImageIds, nonExistImageIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateImageInfosResponseBody() = default ;
    UpdateImageInfosResponseBody(const UpdateImageInfosResponseBody &) = default ;
    UpdateImageInfosResponseBody(UpdateImageInfosResponseBody &&) = default ;
    UpdateImageInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateImageInfosResponseBody() = default ;
    UpdateImageInfosResponseBody& operator=(const UpdateImageInfosResponseBody &) = default ;
    UpdateImageInfosResponseBody& operator=(UpdateImageInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nonExistImageIds_ == nullptr
        && return this->requestId_ == nullptr; };
    // nonExistImageIds Field Functions 
    bool hasNonExistImageIds() const { return this->nonExistImageIds_ != nullptr;};
    void deleteNonExistImageIds() { this->nonExistImageIds_ = nullptr;};
    inline const UpdateImageInfosResponseBodyNonExistImageIds & nonExistImageIds() const { DARABONBA_PTR_GET_CONST(nonExistImageIds_, UpdateImageInfosResponseBodyNonExistImageIds) };
    inline UpdateImageInfosResponseBodyNonExistImageIds nonExistImageIds() { DARABONBA_PTR_GET(nonExistImageIds_, UpdateImageInfosResponseBodyNonExistImageIds) };
    inline UpdateImageInfosResponseBody& setNonExistImageIds(const UpdateImageInfosResponseBodyNonExistImageIds & nonExistImageIds) { DARABONBA_PTR_SET_VALUE(nonExistImageIds_, nonExistImageIds) };
    inline UpdateImageInfosResponseBody& setNonExistImageIds(UpdateImageInfosResponseBodyNonExistImageIds && nonExistImageIds) { DARABONBA_PTR_SET_RVALUE(nonExistImageIds_, nonExistImageIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateImageInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the images that do not exist.
    std::shared_ptr<UpdateImageInfosResponseBodyNonExistImageIds> nonExistImageIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
