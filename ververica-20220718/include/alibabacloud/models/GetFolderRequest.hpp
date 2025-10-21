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
    };
    friend void from_json(const Darabonba::Json& j, GetFolderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(folderId, folderId_);
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
    virtual bool empty() const override { return this->folderId_ == nullptr; };
    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline GetFolderRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


  protected:
    std::shared_ptr<string> folderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
