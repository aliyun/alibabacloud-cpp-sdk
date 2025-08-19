// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEDIRECTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourceDirectoryResponseBodyResourceDirectory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetResourceDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectory, resourceDirectory_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectory, resourceDirectory_);
    };
    GetResourceDirectoryResponseBody() = default ;
    GetResourceDirectoryResponseBody(const GetResourceDirectoryResponseBody &) = default ;
    GetResourceDirectoryResponseBody(GetResourceDirectoryResponseBody &&) = default ;
    GetResourceDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceDirectoryResponseBody() = default ;
    GetResourceDirectoryResponseBody& operator=(const GetResourceDirectoryResponseBody &) = default ;
    GetResourceDirectoryResponseBody& operator=(GetResourceDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceDirectory_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceDirectory Field Functions 
    bool hasResourceDirectory() const { return this->resourceDirectory_ != nullptr;};
    void deleteResourceDirectory() { this->resourceDirectory_ = nullptr;};
    inline const GetResourceDirectoryResponseBodyResourceDirectory & resourceDirectory() const { DARABONBA_PTR_GET_CONST(resourceDirectory_, GetResourceDirectoryResponseBodyResourceDirectory) };
    inline GetResourceDirectoryResponseBodyResourceDirectory resourceDirectory() { DARABONBA_PTR_GET(resourceDirectory_, GetResourceDirectoryResponseBodyResourceDirectory) };
    inline GetResourceDirectoryResponseBody& setResourceDirectory(const GetResourceDirectoryResponseBodyResourceDirectory & resourceDirectory) { DARABONBA_PTR_SET_VALUE(resourceDirectory_, resourceDirectory) };
    inline GetResourceDirectoryResponseBody& setResourceDirectory(GetResourceDirectoryResponseBodyResourceDirectory && resourceDirectory) { DARABONBA_PTR_SET_RVALUE(resourceDirectory_, resourceDirectory) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the resource directory.
    std::shared_ptr<GetResourceDirectoryResponseBodyResourceDirectory> resourceDirectory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
