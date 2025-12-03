// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILESYSTEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILESYSTEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFileSystemResponseBodyFileSystem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class GetFileSystemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileSystemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystem, fileSystem_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileSystemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystem, fileSystem_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFileSystemResponseBody() = default ;
    GetFileSystemResponseBody(const GetFileSystemResponseBody &) = default ;
    GetFileSystemResponseBody(GetFileSystemResponseBody &&) = default ;
    GetFileSystemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileSystemResponseBody() = default ;
    GetFileSystemResponseBody& operator=(const GetFileSystemResponseBody &) = default ;
    GetFileSystemResponseBody& operator=(GetFileSystemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystem_ == nullptr
        && return this->requestId_ == nullptr; };
    // fileSystem Field Functions 
    bool hasFileSystem() const { return this->fileSystem_ != nullptr;};
    void deleteFileSystem() { this->fileSystem_ = nullptr;};
    inline const GetFileSystemResponseBodyFileSystem & fileSystem() const { DARABONBA_PTR_GET_CONST(fileSystem_, GetFileSystemResponseBodyFileSystem) };
    inline GetFileSystemResponseBodyFileSystem fileSystem() { DARABONBA_PTR_GET(fileSystem_, GetFileSystemResponseBodyFileSystem) };
    inline GetFileSystemResponseBody& setFileSystem(const GetFileSystemResponseBodyFileSystem & fileSystem) { DARABONBA_PTR_SET_VALUE(fileSystem_, fileSystem) };
    inline GetFileSystemResponseBody& setFileSystem(GetFileSystemResponseBodyFileSystem && fileSystem) { DARABONBA_PTR_SET_RVALUE(fileSystem_, fileSystem) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileSystemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetFileSystemResponseBodyFileSystem> fileSystem_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
