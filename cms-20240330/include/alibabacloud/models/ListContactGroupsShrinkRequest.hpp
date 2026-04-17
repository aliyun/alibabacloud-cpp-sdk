// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTACTGROUPSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTACTGROUPSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListContactGroupsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContactGroupsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contactGroupIds, contactGroupIdsShrink_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListContactGroupsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contactGroupIds, contactGroupIdsShrink_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListContactGroupsShrinkRequest() = default ;
    ListContactGroupsShrinkRequest(const ListContactGroupsShrinkRequest &) = default ;
    ListContactGroupsShrinkRequest(ListContactGroupsShrinkRequest &&) = default ;
    ListContactGroupsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContactGroupsShrinkRequest() = default ;
    ListContactGroupsShrinkRequest& operator=(const ListContactGroupsShrinkRequest &) = default ;
    ListContactGroupsShrinkRequest& operator=(ListContactGroupsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroupIdsShrink_ == nullptr
        && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->workspace_ == nullptr; };
    // contactGroupIdsShrink Field Functions 
    bool hasContactGroupIdsShrink() const { return this->contactGroupIdsShrink_ != nullptr;};
    void deleteContactGroupIdsShrink() { this->contactGroupIdsShrink_ = nullptr;};
    inline string getContactGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(contactGroupIdsShrink_, "") };
    inline ListContactGroupsShrinkRequest& setContactGroupIdsShrink(string contactGroupIdsShrink) { DARABONBA_PTR_SET_VALUE(contactGroupIdsShrink_, contactGroupIdsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListContactGroupsShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListContactGroupsShrinkRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListContactGroupsShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListContactGroupsShrinkRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<string> contactGroupIdsShrink_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
