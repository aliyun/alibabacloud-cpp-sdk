// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASEEXTENSIONSRESPONSEBODYEXTENSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASEEXTENSIONSRESPONSEBODYEXTENSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListDatabaseExtensionsResponseBodyExtensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabaseExtensionsResponseBodyExtensions& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExtensionName, extensionName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabaseExtensionsResponseBodyExtensions& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExtensionName, extensionName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDatabaseExtensionsResponseBodyExtensions() = default ;
    ListDatabaseExtensionsResponseBodyExtensions(const ListDatabaseExtensionsResponseBodyExtensions &) = default ;
    ListDatabaseExtensionsResponseBodyExtensions(ListDatabaseExtensionsResponseBodyExtensions &&) = default ;
    ListDatabaseExtensionsResponseBodyExtensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabaseExtensionsResponseBodyExtensions() = default ;
    ListDatabaseExtensionsResponseBodyExtensions& operator=(const ListDatabaseExtensionsResponseBodyExtensions &) = default ;
    ListDatabaseExtensionsResponseBodyExtensions& operator=(ListDatabaseExtensionsResponseBodyExtensions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->extensionName_ == nullptr && return this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListDatabaseExtensionsResponseBodyExtensions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extensionName Field Functions 
    bool hasExtensionName() const { return this->extensionName_ != nullptr;};
    void deleteExtensionName() { this->extensionName_ = nullptr;};
    inline string extensionName() const { DARABONBA_PTR_GET_DEFAULT(extensionName_, "") };
    inline ListDatabaseExtensionsResponseBodyExtensions& setExtensionName(string extensionName) { DARABONBA_PTR_SET_VALUE(extensionName_, extensionName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDatabaseExtensionsResponseBodyExtensions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> extensionName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
