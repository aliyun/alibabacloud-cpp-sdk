// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFOLDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFOLDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class DeleteFolderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFolderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(folderId, folderId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFolderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(folderId, folderId_);
    };
    DeleteFolderRequest() = default ;
    DeleteFolderRequest(const DeleteFolderRequest &) = default ;
    DeleteFolderRequest(DeleteFolderRequest &&) = default ;
    DeleteFolderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFolderRequest() = default ;
    DeleteFolderRequest& operator=(const DeleteFolderRequest &) = default ;
    DeleteFolderRequest& operator=(DeleteFolderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folderId_ == nullptr; };
    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline DeleteFolderRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


  protected:
    shared_ptr<string> folderId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
