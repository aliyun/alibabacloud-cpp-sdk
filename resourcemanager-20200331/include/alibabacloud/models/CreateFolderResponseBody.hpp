// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFOLDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFOLDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateFolderResponseBodyFolder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateFolderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFolderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Folder, folder_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFolderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Folder, folder_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateFolderResponseBody() = default ;
    CreateFolderResponseBody(const CreateFolderResponseBody &) = default ;
    CreateFolderResponseBody(CreateFolderResponseBody &&) = default ;
    CreateFolderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFolderResponseBody() = default ;
    CreateFolderResponseBody& operator=(const CreateFolderResponseBody &) = default ;
    CreateFolderResponseBody& operator=(CreateFolderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folder_ == nullptr
        && return this->requestId_ == nullptr; };
    // folder Field Functions 
    bool hasFolder() const { return this->folder_ != nullptr;};
    void deleteFolder() { this->folder_ = nullptr;};
    inline const CreateFolderResponseBodyFolder & folder() const { DARABONBA_PTR_GET_CONST(folder_, CreateFolderResponseBodyFolder) };
    inline CreateFolderResponseBodyFolder folder() { DARABONBA_PTR_GET(folder_, CreateFolderResponseBodyFolder) };
    inline CreateFolderResponseBody& setFolder(const CreateFolderResponseBodyFolder & folder) { DARABONBA_PTR_SET_VALUE(folder_, folder) };
    inline CreateFolderResponseBody& setFolder(CreateFolderResponseBodyFolder && folder) { DARABONBA_PTR_SET_RVALUE(folder_, folder) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFolderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information of the folder.
    std::shared_ptr<CreateFolderResponseBodyFolder> folder_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
