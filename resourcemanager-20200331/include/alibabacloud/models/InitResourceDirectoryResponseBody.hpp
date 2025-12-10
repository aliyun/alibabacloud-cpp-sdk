// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITRESOURCEDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INITRESOURCEDIRECTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InitResourceDirectoryResponseBodyResourceDirectory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class InitResourceDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitResourceDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectory, resourceDirectory_);
    };
    friend void from_json(const Darabonba::Json& j, InitResourceDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectory, resourceDirectory_);
    };
    InitResourceDirectoryResponseBody() = default ;
    InitResourceDirectoryResponseBody(const InitResourceDirectoryResponseBody &) = default ;
    InitResourceDirectoryResponseBody(InitResourceDirectoryResponseBody &&) = default ;
    InitResourceDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitResourceDirectoryResponseBody() = default ;
    InitResourceDirectoryResponseBody& operator=(const InitResourceDirectoryResponseBody &) = default ;
    InitResourceDirectoryResponseBody& operator=(InitResourceDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resourceDirectory_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InitResourceDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceDirectory Field Functions 
    bool hasResourceDirectory() const { return this->resourceDirectory_ != nullptr;};
    void deleteResourceDirectory() { this->resourceDirectory_ = nullptr;};
    inline const InitResourceDirectoryResponseBodyResourceDirectory & resourceDirectory() const { DARABONBA_PTR_GET_CONST(resourceDirectory_, InitResourceDirectoryResponseBodyResourceDirectory) };
    inline InitResourceDirectoryResponseBodyResourceDirectory resourceDirectory() { DARABONBA_PTR_GET(resourceDirectory_, InitResourceDirectoryResponseBodyResourceDirectory) };
    inline InitResourceDirectoryResponseBody& setResourceDirectory(const InitResourceDirectoryResponseBodyResourceDirectory & resourceDirectory) { DARABONBA_PTR_SET_VALUE(resourceDirectory_, resourceDirectory) };
    inline InitResourceDirectoryResponseBody& setResourceDirectory(InitResourceDirectoryResponseBodyResourceDirectory && resourceDirectory) { DARABONBA_PTR_SET_RVALUE(resourceDirectory_, resourceDirectory) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information of the resource directory.
    std::shared_ptr<InitResourceDirectoryResponseBodyResourceDirectory> resourceDirectory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
