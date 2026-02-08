// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPMATERIALDIRECTORY_HPP_
#define ALIBABACLOUD_MODELS_APPMATERIALDIRECTORY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AppMaterialDirectory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class AppMaterialDirectory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppMaterialDirectory& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SortNum, sortNum_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AppMaterialDirectory& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SortNum, sortNum_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AppMaterialDirectory() = default ;
    AppMaterialDirectory(const AppMaterialDirectory &) = default ;
    AppMaterialDirectory(AppMaterialDirectory &&) = default ;
    AppMaterialDirectory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppMaterialDirectory() = default ;
    AppMaterialDirectory& operator=(const AppMaterialDirectory &) = default ;
    AppMaterialDirectory& operator=(AppMaterialDirectory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->children_ == nullptr && this->directoryId_ == nullptr && this->name_ == nullptr && this->sortNum_ == nullptr && this->type_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline AppMaterialDirectory& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<AppMaterialDirectory> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<AppMaterialDirectory>) };
    inline vector<AppMaterialDirectory> getChildren() { DARABONBA_PTR_GET(children_, vector<AppMaterialDirectory>) };
    inline AppMaterialDirectory& setChildren(const vector<AppMaterialDirectory> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline AppMaterialDirectory& setChildren(vector<AppMaterialDirectory> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline AppMaterialDirectory& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AppMaterialDirectory& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sortNum Field Functions 
    bool hasSortNum() const { return this->sortNum_ != nullptr;};
    void deleteSortNum() { this->sortNum_ = nullptr;};
    inline string getSortNum() const { DARABONBA_PTR_GET_DEFAULT(sortNum_, "") };
    inline AppMaterialDirectory& setSortNum(string sortNum) { DARABONBA_PTR_SET_VALUE(sortNum_, sortNum) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AppMaterialDirectory& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<vector<AppMaterialDirectory>> children_ {};
    shared_ptr<string> directoryId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> sortNum_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
