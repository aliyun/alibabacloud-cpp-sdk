// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKETABLEPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REVOKETABLEPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class RevokeTablePermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeTablePermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeTablePermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RevokeTablePermissionResponseBody() = default ;
    RevokeTablePermissionResponseBody(const RevokeTablePermissionResponseBody &) = default ;
    RevokeTablePermissionResponseBody(RevokeTablePermissionResponseBody &&) = default ;
    RevokeTablePermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeTablePermissionResponseBody() = default ;
    RevokeTablePermissionResponseBody& operator=(const RevokeTablePermissionResponseBody &) = default ;
    RevokeTablePermissionResponseBody& operator=(RevokeTablePermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline bool data() const { DARABONBA_PTR_GET_DEFAULT(data_, false) };
    inline RevokeTablePermissionResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RevokeTablePermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> data_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
