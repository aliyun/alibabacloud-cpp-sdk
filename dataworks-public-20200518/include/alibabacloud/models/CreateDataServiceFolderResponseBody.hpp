// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASERVICEFOLDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASERVICEFOLDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateDataServiceFolderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataServiceFolderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataServiceFolderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDataServiceFolderResponseBody() = default ;
    CreateDataServiceFolderResponseBody(const CreateDataServiceFolderResponseBody &) = default ;
    CreateDataServiceFolderResponseBody(CreateDataServiceFolderResponseBody &&) = default ;
    CreateDataServiceFolderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataServiceFolderResponseBody() = default ;
    CreateDataServiceFolderResponseBody& operator=(const CreateDataServiceFolderResponseBody &) = default ;
    CreateDataServiceFolderResponseBody& operator=(CreateDataServiceFolderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->folderId_ != nullptr
        && this->requestId_ != nullptr; };
    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline int64_t folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, 0L) };
    inline CreateDataServiceFolderResponseBody& setFolderId(int64_t folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDataServiceFolderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the created folder.
    std::shared_ptr<int64_t> folderId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
