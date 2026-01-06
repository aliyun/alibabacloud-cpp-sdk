// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOSTGRESEXTENSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOSTGRESEXTENSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribePostgresExtensionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePostgresExtensionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstalledExtensions, installedExtensions_);
      DARABONBA_ANY_TO_JSON(Overview, overview_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UninstalledExtensions, uninstalledExtensions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePostgresExtensionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstalledExtensions, installedExtensions_);
      DARABONBA_ANY_FROM_JSON(Overview, overview_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UninstalledExtensions, uninstalledExtensions_);
    };
    DescribePostgresExtensionsResponseBody() = default ;
    DescribePostgresExtensionsResponseBody(const DescribePostgresExtensionsResponseBody &) = default ;
    DescribePostgresExtensionsResponseBody(DescribePostgresExtensionsResponseBody &&) = default ;
    DescribePostgresExtensionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePostgresExtensionsResponseBody() = default ;
    DescribePostgresExtensionsResponseBody& operator=(const DescribePostgresExtensionsResponseBody &) = default ;
    DescribePostgresExtensionsResponseBody& operator=(DescribePostgresExtensionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UninstalledExtensions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UninstalledExtensions& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
        DARABONBA_PTR_TO_JSON(InstalledVersion, installedVersion_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Requires, requires_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, UninstalledExtensions& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
        DARABONBA_PTR_FROM_JSON(InstalledVersion, installedVersion_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Requires, requires_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
      };
      UninstalledExtensions() = default ;
      UninstalledExtensions(const UninstalledExtensions &) = default ;
      UninstalledExtensions(UninstalledExtensions &&) = default ;
      UninstalledExtensions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UninstalledExtensions() = default ;
      UninstalledExtensions& operator=(const UninstalledExtensions &) = default ;
      UninstalledExtensions& operator=(UninstalledExtensions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->comment_ == nullptr && this->defaultVersion_ == nullptr && this->installedVersion_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->priority_ == nullptr && this->requires_ == nullptr && this->uid_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline UninstalledExtensions& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline UninstalledExtensions& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // defaultVersion Field Functions 
      bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
      void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
      inline string getDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, "") };
      inline UninstalledExtensions& setDefaultVersion(string defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


      // installedVersion Field Functions 
      bool hasInstalledVersion() const { return this->installedVersion_ != nullptr;};
      void deleteInstalledVersion() { this->installedVersion_ = nullptr;};
      inline string getInstalledVersion() const { DARABONBA_PTR_GET_DEFAULT(installedVersion_, "") };
      inline UninstalledExtensions& setInstalledVersion(string installedVersion) { DARABONBA_PTR_SET_VALUE(installedVersion_, installedVersion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UninstalledExtensions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline UninstalledExtensions& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline UninstalledExtensions& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // requires Field Functions 
      bool hasRequires() const { return this->requires_ != nullptr;};
      void deleteRequires() { this->requires_ = nullptr;};
      inline string getRequires() const { DARABONBA_PTR_GET_DEFAULT(requires_, "") };
      inline UninstalledExtensions& setRequires(string _requires) { DARABONBA_PTR_SET_VALUE(requires_, _requires) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline UninstalledExtensions& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      // The category of the extension.
      shared_ptr<string> category_ {};
      // The purpose of the extension.
      shared_ptr<string> comment_ {};
      // The default version of the extension.
      shared_ptr<string> defaultVersion_ {};
      // The current version of the extension.
      shared_ptr<string> installedVersion_ {};
      // The name of the extension.
      shared_ptr<string> name_ {};
      // The user of the extension.
      shared_ptr<string> owner_ {};
      // The priority of the extension.
      shared_ptr<string> priority_ {};
      // The extensions on which the current extension depends when it is installed.
      shared_ptr<string> requires_ {};
      // The ID of the Alibaba Cloud account.
      // 
      // >  This parameter is returned only for self-developed exclusive extensions. You can view exclusive extensions only within your Alibaba Cloud account.
      shared_ptr<string> uid_ {};
    };

    class InstalledExtensions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstalledExtensions& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
        DARABONBA_PTR_TO_JSON(InstalledVersion, installedVersion_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Requires, requires_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, InstalledExtensions& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
        DARABONBA_PTR_FROM_JSON(InstalledVersion, installedVersion_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Requires, requires_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
      };
      InstalledExtensions() = default ;
      InstalledExtensions(const InstalledExtensions &) = default ;
      InstalledExtensions(InstalledExtensions &&) = default ;
      InstalledExtensions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstalledExtensions() = default ;
      InstalledExtensions& operator=(const InstalledExtensions &) = default ;
      InstalledExtensions& operator=(InstalledExtensions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->comment_ == nullptr && this->defaultVersion_ == nullptr && this->installedVersion_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->priority_ == nullptr && this->requires_ == nullptr && this->uid_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline InstalledExtensions& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline InstalledExtensions& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // defaultVersion Field Functions 
      bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
      void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
      inline string getDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, "") };
      inline InstalledExtensions& setDefaultVersion(string defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


      // installedVersion Field Functions 
      bool hasInstalledVersion() const { return this->installedVersion_ != nullptr;};
      void deleteInstalledVersion() { this->installedVersion_ = nullptr;};
      inline string getInstalledVersion() const { DARABONBA_PTR_GET_DEFAULT(installedVersion_, "") };
      inline InstalledExtensions& setInstalledVersion(string installedVersion) { DARABONBA_PTR_SET_VALUE(installedVersion_, installedVersion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline InstalledExtensions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline InstalledExtensions& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline InstalledExtensions& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // requires Field Functions 
      bool hasRequires() const { return this->requires_ != nullptr;};
      void deleteRequires() { this->requires_ = nullptr;};
      inline string getRequires() const { DARABONBA_PTR_GET_DEFAULT(requires_, "") };
      inline InstalledExtensions& setRequires(string _requires) { DARABONBA_PTR_SET_VALUE(requires_, _requires) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline InstalledExtensions& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      // The category of the extension.
      // 
      // *   **external_access**
      // *   **index_support**
      // *   **information_stat**
      // *   **geography_space**
      // *   **vector_engine**
      // *   **timing_engine**
      // *   **data_type**
      // *   **encrypt_secure**
      // *   **text_process**
      // *   **operation_maintenance**
      // *   **self_develop**
      shared_ptr<string> category_ {};
      // The purpose of the extension.
      shared_ptr<string> comment_ {};
      // The default version of the extension.
      shared_ptr<string> defaultVersion_ {};
      // The current version of the extension.
      shared_ptr<string> installedVersion_ {};
      // The name of the extension.
      shared_ptr<string> name_ {};
      // The user of the extension.
      shared_ptr<string> owner_ {};
      // The priority of the extension.
      // 
      // *   **0**: The extension is displayed by default.
      // *   **1**: The extension is preferentially displayed.
      shared_ptr<string> priority_ {};
      // The extensions on which the current extension depends when it is installed.
      shared_ptr<string> requires_ {};
      // The ID of the Alibaba Cloud account.
      // 
      // >  This parameter is returned only for self-developed exclusive extensions. You can view exclusive extensions only within your Alibaba Cloud account.
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->installedExtensions_ == nullptr
        && this->overview_ == nullptr && this->requestId_ == nullptr && this->uninstalledExtensions_ == nullptr; };
    // installedExtensions Field Functions 
    bool hasInstalledExtensions() const { return this->installedExtensions_ != nullptr;};
    void deleteInstalledExtensions() { this->installedExtensions_ = nullptr;};
    inline const vector<DescribePostgresExtensionsResponseBody::InstalledExtensions> & getInstalledExtensions() const { DARABONBA_PTR_GET_CONST(installedExtensions_, vector<DescribePostgresExtensionsResponseBody::InstalledExtensions>) };
    inline vector<DescribePostgresExtensionsResponseBody::InstalledExtensions> getInstalledExtensions() { DARABONBA_PTR_GET(installedExtensions_, vector<DescribePostgresExtensionsResponseBody::InstalledExtensions>) };
    inline DescribePostgresExtensionsResponseBody& setInstalledExtensions(const vector<DescribePostgresExtensionsResponseBody::InstalledExtensions> & installedExtensions) { DARABONBA_PTR_SET_VALUE(installedExtensions_, installedExtensions) };
    inline DescribePostgresExtensionsResponseBody& setInstalledExtensions(vector<DescribePostgresExtensionsResponseBody::InstalledExtensions> && installedExtensions) { DARABONBA_PTR_SET_RVALUE(installedExtensions_, installedExtensions) };


    // overview Field Functions 
    bool hasOverview() const { return this->overview_ != nullptr;};
    void deleteOverview() { this->overview_ = nullptr;};
    inline     const Darabonba::Json & getOverview() const { DARABONBA_GET(overview_) };
    Darabonba::Json & getOverview() { DARABONBA_GET(overview_) };
    inline DescribePostgresExtensionsResponseBody& setOverview(const Darabonba::Json & overview) { DARABONBA_SET_VALUE(overview_, overview) };
    inline DescribePostgresExtensionsResponseBody& setOverview(Darabonba::Json && overview) { DARABONBA_SET_RVALUE(overview_, overview) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePostgresExtensionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uninstalledExtensions Field Functions 
    bool hasUninstalledExtensions() const { return this->uninstalledExtensions_ != nullptr;};
    void deleteUninstalledExtensions() { this->uninstalledExtensions_ = nullptr;};
    inline const vector<DescribePostgresExtensionsResponseBody::UninstalledExtensions> & getUninstalledExtensions() const { DARABONBA_PTR_GET_CONST(uninstalledExtensions_, vector<DescribePostgresExtensionsResponseBody::UninstalledExtensions>) };
    inline vector<DescribePostgresExtensionsResponseBody::UninstalledExtensions> getUninstalledExtensions() { DARABONBA_PTR_GET(uninstalledExtensions_, vector<DescribePostgresExtensionsResponseBody::UninstalledExtensions>) };
    inline DescribePostgresExtensionsResponseBody& setUninstalledExtensions(const vector<DescribePostgresExtensionsResponseBody::UninstalledExtensions> & uninstalledExtensions) { DARABONBA_PTR_SET_VALUE(uninstalledExtensions_, uninstalledExtensions) };
    inline DescribePostgresExtensionsResponseBody& setUninstalledExtensions(vector<DescribePostgresExtensionsResponseBody::UninstalledExtensions> && uninstalledExtensions) { DARABONBA_PTR_SET_RVALUE(uninstalledExtensions_, uninstalledExtensions) };


  protected:
    // The list of extensions that are installed on the specified database.
    shared_ptr<vector<DescribePostgresExtensionsResponseBody::InstalledExtensions>> installedExtensions_ {};
    // The overview of the extension.
    Darabonba::Json overview_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of extensions that are not installed on the specified database.
    shared_ptr<vector<DescribePostgresExtensionsResponseBody::UninstalledExtensions>> uninstalledExtensions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
