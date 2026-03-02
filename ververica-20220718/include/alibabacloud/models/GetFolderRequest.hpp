// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFOLDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFOLDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetFolderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFolderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(folderId, folderId_);
      DARABONBA_PTR_TO_JSON(rootType, rootType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFolderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(folderId, folderId_);
      DARABONBA_PTR_FROM_JSON(rootType, rootType_);
    };
    GetFolderRequest() = default ;
    GetFolderRequest(const GetFolderRequest &) = default ;
    GetFolderRequest(GetFolderRequest &&) = default ;
    GetFolderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFolderRequest() = default ;
    GetFolderRequest& operator=(const GetFolderRequest &) = default ;
    GetFolderRequest& operator=(GetFolderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folderId_ == nullptr
        && this->rootType_ == nullptr; };
    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline GetFolderRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // rootType Field Functions 
    bool hasRootType() const { return this->rootType_ != nullptr;};
    void deleteRootType() { this->rootType_ = nullptr;};
    inline string getRootType() const { DARABONBA_PTR_GET_DEFAULT(rootType_, "") };
    inline GetFolderRequest& setRootType(string rootType) { DARABONBA_PTR_SET_VALUE(rootType_, rootType) };


  protected:
    shared_ptr<string> folderId_ {};
    shared_ptr<string> rootType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
