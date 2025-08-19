// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFOLDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFOLDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateFolderResponseBodyFolder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class UpdateFolderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFolderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Folder, folder_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFolderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Folder, folder_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateFolderResponseBody() = default ;
    UpdateFolderResponseBody(const UpdateFolderResponseBody &) = default ;
    UpdateFolderResponseBody(UpdateFolderResponseBody &&) = default ;
    UpdateFolderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFolderResponseBody() = default ;
    UpdateFolderResponseBody& operator=(const UpdateFolderResponseBody &) = default ;
    UpdateFolderResponseBody& operator=(UpdateFolderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->folder_ != nullptr
        && this->requestId_ != nullptr; };
    // folder Field Functions 
    bool hasFolder() const { return this->folder_ != nullptr;};
    void deleteFolder() { this->folder_ = nullptr;};
    inline const UpdateFolderResponseBodyFolder & folder() const { DARABONBA_PTR_GET_CONST(folder_, UpdateFolderResponseBodyFolder) };
    inline UpdateFolderResponseBodyFolder folder() { DARABONBA_PTR_GET(folder_, UpdateFolderResponseBodyFolder) };
    inline UpdateFolderResponseBody& setFolder(const UpdateFolderResponseBodyFolder & folder) { DARABONBA_PTR_SET_VALUE(folder_, folder) };
    inline UpdateFolderResponseBody& setFolder(UpdateFolderResponseBodyFolder && folder) { DARABONBA_PTR_SET_RVALUE(folder_, folder) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateFolderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the folder.
    std::shared_ptr<UpdateFolderResponseBodyFolder> folder_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
