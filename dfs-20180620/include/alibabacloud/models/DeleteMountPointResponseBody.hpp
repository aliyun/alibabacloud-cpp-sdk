// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMOUNTPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMOUNTPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DeleteMountPointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMountPointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMountPointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteMountPointResponseBody() = default ;
    DeleteMountPointResponseBody(const DeleteMountPointResponseBody &) = default ;
    DeleteMountPointResponseBody(DeleteMountPointResponseBody &&) = default ;
    DeleteMountPointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMountPointResponseBody() = default ;
    DeleteMountPointResponseBody& operator=(const DeleteMountPointResponseBody &) = default ;
    DeleteMountPointResponseBody& operator=(DeleteMountPointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMountPointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
