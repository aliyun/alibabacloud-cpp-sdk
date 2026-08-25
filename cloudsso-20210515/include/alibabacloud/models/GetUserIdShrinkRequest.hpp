// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetUserIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(ExternalId, externalIdShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(ExternalId, externalIdShrink_);
    };
    GetUserIdShrinkRequest() = default ;
    GetUserIdShrinkRequest(const GetUserIdShrinkRequest &) = default ;
    GetUserIdShrinkRequest(GetUserIdShrinkRequest &&) = default ;
    GetUserIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserIdShrinkRequest() = default ;
    GetUserIdShrinkRequest& operator=(const GetUserIdShrinkRequest &) = default ;
    GetUserIdShrinkRequest& operator=(GetUserIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->externalIdShrink_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline GetUserIdShrinkRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // externalIdShrink Field Functions 
    bool hasExternalIdShrink() const { return this->externalIdShrink_ != nullptr;};
    void deleteExternalIdShrink() { this->externalIdShrink_ = nullptr;};
    inline string getExternalIdShrink() const { DARABONBA_PTR_GET_DEFAULT(externalIdShrink_, "") };
    inline GetUserIdShrinkRequest& setExternalIdShrink(string externalIdShrink) { DARABONBA_PTR_SET_VALUE(externalIdShrink_, externalIdShrink) };


  protected:
    // The ID of the resource directory.
    shared_ptr<string> directoryId_ {};
    // The identifier information about the user that is synchronized from an external identity provider (IdP).
    shared_ptr<string> externalIdShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
