// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FilePermissionMember.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListFilePermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFilePermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FilePermissions, filePermissions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFilePermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FilePermissions, filePermissions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFilePermissionResponseBody() = default ;
    ListFilePermissionResponseBody(const ListFilePermissionResponseBody &) = default ;
    ListFilePermissionResponseBody(ListFilePermissionResponseBody &&) = default ;
    ListFilePermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFilePermissionResponseBody() = default ;
    ListFilePermissionResponseBody& operator=(const ListFilePermissionResponseBody &) = default ;
    ListFilePermissionResponseBody& operator=(ListFilePermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filePermissions_ == nullptr
        && return this->requestId_ == nullptr; };
    // filePermissions Field Functions 
    bool hasFilePermissions() const { return this->filePermissions_ != nullptr;};
    void deleteFilePermissions() { this->filePermissions_ = nullptr;};
    inline const vector<FilePermissionMember> & filePermissions() const { DARABONBA_PTR_GET_CONST(filePermissions_, vector<FilePermissionMember>) };
    inline vector<FilePermissionMember> filePermissions() { DARABONBA_PTR_GET(filePermissions_, vector<FilePermissionMember>) };
    inline ListFilePermissionResponseBody& setFilePermissions(const vector<FilePermissionMember> & filePermissions) { DARABONBA_PTR_SET_VALUE(filePermissions_, filePermissions) };
    inline ListFilePermissionResponseBody& setFilePermissions(vector<FilePermissionMember> && filePermissions) { DARABONBA_PTR_SET_RVALUE(filePermissions_, filePermissions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFilePermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The permissions on the shared file.
    std::shared_ptr<vector<FilePermissionMember>> filePermissions_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
