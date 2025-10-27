// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLEARLOGSTORESTORAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLEARLOGSTORESTORAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyClearLogstoreStorageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClearLogstoreStorageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserLogStore, userLogStore_);
      DARABONBA_PTR_TO_JSON(UserProject, userProject_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClearLogstoreStorageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserLogStore, userLogStore_);
      DARABONBA_PTR_FROM_JSON(UserProject, userProject_);
    };
    ModifyClearLogstoreStorageRequest() = default ;
    ModifyClearLogstoreStorageRequest(const ModifyClearLogstoreStorageRequest &) = default ;
    ModifyClearLogstoreStorageRequest(ModifyClearLogstoreStorageRequest &&) = default ;
    ModifyClearLogstoreStorageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClearLogstoreStorageRequest() = default ;
    ModifyClearLogstoreStorageRequest& operator=(const ModifyClearLogstoreStorageRequest &) = default ;
    ModifyClearLogstoreStorageRequest& operator=(ModifyClearLogstoreStorageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && return this->lang_ == nullptr && return this->userLogStore_ == nullptr && return this->userProject_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline ModifyClearLogstoreStorageRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyClearLogstoreStorageRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userLogStore Field Functions 
    bool hasUserLogStore() const { return this->userLogStore_ != nullptr;};
    void deleteUserLogStore() { this->userLogStore_ = nullptr;};
    inline string userLogStore() const { DARABONBA_PTR_GET_DEFAULT(userLogStore_, "") };
    inline ModifyClearLogstoreStorageRequest& setUserLogStore(string userLogStore) { DARABONBA_PTR_SET_VALUE(userLogStore_, userLogStore) };


    // userProject Field Functions 
    bool hasUserProject() const { return this->userProject_ != nullptr;};
    void deleteUserProject() { this->userProject_ = nullptr;};
    inline string userProject() const { DARABONBA_PTR_GET_DEFAULT(userProject_, "") };
    inline ModifyClearLogstoreStorageRequest& setUserProject(string userProject) { DARABONBA_PTR_SET_VALUE(userProject_, userProject) };


  protected:
    // The ID of the request source. Set the value to **sas**.
    std::shared_ptr<string> from_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The name of the Logstore that stores logs.
    std::shared_ptr<string> userLogStore_ = nullptr;
    // The name of the project.
    std::shared_ptr<string> userProject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
