// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEFOLDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEFOLDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataServiceFolderResponseBodyFolder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataServiceFolderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceFolderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Folder, folder_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceFolderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Folder, folder_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataServiceFolderResponseBody() = default ;
    GetDataServiceFolderResponseBody(const GetDataServiceFolderResponseBody &) = default ;
    GetDataServiceFolderResponseBody(GetDataServiceFolderResponseBody &&) = default ;
    GetDataServiceFolderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceFolderResponseBody() = default ;
    GetDataServiceFolderResponseBody& operator=(const GetDataServiceFolderResponseBody &) = default ;
    GetDataServiceFolderResponseBody& operator=(GetDataServiceFolderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->folder_ != nullptr
        && this->requestId_ != nullptr; };
    // folder Field Functions 
    bool hasFolder() const { return this->folder_ != nullptr;};
    void deleteFolder() { this->folder_ = nullptr;};
    inline const GetDataServiceFolderResponseBodyFolder & folder() const { DARABONBA_PTR_GET_CONST(folder_, GetDataServiceFolderResponseBodyFolder) };
    inline GetDataServiceFolderResponseBodyFolder folder() { DARABONBA_PTR_GET(folder_, GetDataServiceFolderResponseBodyFolder) };
    inline GetDataServiceFolderResponseBody& setFolder(const GetDataServiceFolderResponseBodyFolder & folder) { DARABONBA_PTR_SET_VALUE(folder_, folder) };
    inline GetDataServiceFolderResponseBody& setFolder(GetDataServiceFolderResponseBodyFolder && folder) { DARABONBA_PTR_SET_RVALUE(folder_, folder) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataServiceFolderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the folder.
    std::shared_ptr<GetDataServiceFolderResponseBodyFolder> folder_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
