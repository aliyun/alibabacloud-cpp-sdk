// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTENSIONSRESPONSEBODYPAGINGINFOEXTENSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTENSIONSRESPONSEBODYPAGINGINFOEXTENSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExtensionsResponseBodyPagingInfoExtensionsBindEventList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListExtensionsResponseBodyPagingInfoExtensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExtensionsResponseBodyPagingInfoExtensions& obj) { 
      DARABONBA_PTR_TO_JSON(BindEventList, bindEventList_);
      DARABONBA_PTR_TO_JSON(ExtensionCode, extensionCode_);
      DARABONBA_PTR_TO_JSON(ExtensionDesc, extensionDesc_);
      DARABONBA_PTR_TO_JSON(ExtensionName, extensionName_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListExtensionsResponseBodyPagingInfoExtensions& obj) { 
      DARABONBA_PTR_FROM_JSON(BindEventList, bindEventList_);
      DARABONBA_PTR_FROM_JSON(ExtensionCode, extensionCode_);
      DARABONBA_PTR_FROM_JSON(ExtensionDesc, extensionDesc_);
      DARABONBA_PTR_FROM_JSON(ExtensionName, extensionName_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListExtensionsResponseBodyPagingInfoExtensions() = default ;
    ListExtensionsResponseBodyPagingInfoExtensions(const ListExtensionsResponseBodyPagingInfoExtensions &) = default ;
    ListExtensionsResponseBodyPagingInfoExtensions(ListExtensionsResponseBodyPagingInfoExtensions &&) = default ;
    ListExtensionsResponseBodyPagingInfoExtensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExtensionsResponseBodyPagingInfoExtensions() = default ;
    ListExtensionsResponseBodyPagingInfoExtensions& operator=(const ListExtensionsResponseBodyPagingInfoExtensions &) = default ;
    ListExtensionsResponseBodyPagingInfoExtensions& operator=(ListExtensionsResponseBodyPagingInfoExtensions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindEventList_ != nullptr
        && this->extensionCode_ != nullptr && this->extensionDesc_ != nullptr && this->extensionName_ != nullptr && this->owner_ != nullptr && this->status_ != nullptr; };
    // bindEventList Field Functions 
    bool hasBindEventList() const { return this->bindEventList_ != nullptr;};
    void deleteBindEventList() { this->bindEventList_ = nullptr;};
    inline const vector<Models::ListExtensionsResponseBodyPagingInfoExtensionsBindEventList> & bindEventList() const { DARABONBA_PTR_GET_CONST(bindEventList_, vector<Models::ListExtensionsResponseBodyPagingInfoExtensionsBindEventList>) };
    inline vector<Models::ListExtensionsResponseBodyPagingInfoExtensionsBindEventList> bindEventList() { DARABONBA_PTR_GET(bindEventList_, vector<Models::ListExtensionsResponseBodyPagingInfoExtensionsBindEventList>) };
    inline ListExtensionsResponseBodyPagingInfoExtensions& setBindEventList(const vector<Models::ListExtensionsResponseBodyPagingInfoExtensionsBindEventList> & bindEventList) { DARABONBA_PTR_SET_VALUE(bindEventList_, bindEventList) };
    inline ListExtensionsResponseBodyPagingInfoExtensions& setBindEventList(vector<Models::ListExtensionsResponseBodyPagingInfoExtensionsBindEventList> && bindEventList) { DARABONBA_PTR_SET_RVALUE(bindEventList_, bindEventList) };


    // extensionCode Field Functions 
    bool hasExtensionCode() const { return this->extensionCode_ != nullptr;};
    void deleteExtensionCode() { this->extensionCode_ = nullptr;};
    inline string extensionCode() const { DARABONBA_PTR_GET_DEFAULT(extensionCode_, "") };
    inline ListExtensionsResponseBodyPagingInfoExtensions& setExtensionCode(string extensionCode) { DARABONBA_PTR_SET_VALUE(extensionCode_, extensionCode) };


    // extensionDesc Field Functions 
    bool hasExtensionDesc() const { return this->extensionDesc_ != nullptr;};
    void deleteExtensionDesc() { this->extensionDesc_ = nullptr;};
    inline string extensionDesc() const { DARABONBA_PTR_GET_DEFAULT(extensionDesc_, "") };
    inline ListExtensionsResponseBodyPagingInfoExtensions& setExtensionDesc(string extensionDesc) { DARABONBA_PTR_SET_VALUE(extensionDesc_, extensionDesc) };


    // extensionName Field Functions 
    bool hasExtensionName() const { return this->extensionName_ != nullptr;};
    void deleteExtensionName() { this->extensionName_ = nullptr;};
    inline string extensionName() const { DARABONBA_PTR_GET_DEFAULT(extensionName_, "") };
    inline ListExtensionsResponseBodyPagingInfoExtensions& setExtensionName(string extensionName) { DARABONBA_PTR_SET_VALUE(extensionName_, extensionName) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListExtensionsResponseBodyPagingInfoExtensions& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListExtensionsResponseBodyPagingInfoExtensions& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The list of extension point events.
    std::shared_ptr<vector<Models::ListExtensionsResponseBodyPagingInfoExtensionsBindEventList>> bindEventList_ = nullptr;
    // The unique code of the extension.
    std::shared_ptr<string> extensionCode_ = nullptr;
    // The description of the extension.
    std::shared_ptr<string> extensionDesc_ = nullptr;
    // The name of the extension.
    std::shared_ptr<string> extensionName_ = nullptr;
    // The ID of the RAM user.
    std::shared_ptr<string> owner_ = nullptr;
    // The state of the extension. Valid values: 0: Testing 1: Publishing 3: Disabled 4: Processing 5: Approved 6: Approve Failed
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
