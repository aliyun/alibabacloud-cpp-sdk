// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFOLDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFOLDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFolderResponseBodyFolder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetFolderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFolderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Folder, folder_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFolderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Folder, folder_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFolderResponseBody() = default ;
    GetFolderResponseBody(const GetFolderResponseBody &) = default ;
    GetFolderResponseBody(GetFolderResponseBody &&) = default ;
    GetFolderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFolderResponseBody() = default ;
    GetFolderResponseBody& operator=(const GetFolderResponseBody &) = default ;
    GetFolderResponseBody& operator=(GetFolderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folder_ == nullptr
        && return this->requestId_ == nullptr; };
    // folder Field Functions 
    bool hasFolder() const { return this->folder_ != nullptr;};
    void deleteFolder() { this->folder_ = nullptr;};
    inline const GetFolderResponseBodyFolder & folder() const { DARABONBA_PTR_GET_CONST(folder_, GetFolderResponseBodyFolder) };
    inline GetFolderResponseBodyFolder folder() { DARABONBA_PTR_GET(folder_, GetFolderResponseBodyFolder) };
    inline GetFolderResponseBody& setFolder(const GetFolderResponseBodyFolder & folder) { DARABONBA_PTR_SET_VALUE(folder_, folder) };
    inline GetFolderResponseBody& setFolder(GetFolderResponseBodyFolder && folder) { DARABONBA_PTR_SET_RVALUE(folder_, folder) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFolderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the folder.
    std::shared_ptr<GetFolderResponseBodyFolder> folder_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
