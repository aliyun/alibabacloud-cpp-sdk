// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINDEXRESPONSEBODYRESULTVERSIONSFILES_HPP_
#define ALIBABACLOUD_MODELS_GETINDEXRESPONSEBODYRESULTVERSIONSFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetIndexResponseBodyResultVersionsFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIndexResponseBodyResultVersionsFiles& obj) { 
      DARABONBA_PTR_TO_JSON(fullPathName, fullPathName_);
      DARABONBA_PTR_TO_JSON(isDir, isDir_);
      DARABONBA_PTR_TO_JSON(isTemplate, isTemplate_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetIndexResponseBodyResultVersionsFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(fullPathName, fullPathName_);
      DARABONBA_PTR_FROM_JSON(isDir, isDir_);
      DARABONBA_PTR_FROM_JSON(isTemplate, isTemplate_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetIndexResponseBodyResultVersionsFiles() = default ;
    GetIndexResponseBodyResultVersionsFiles(const GetIndexResponseBodyResultVersionsFiles &) = default ;
    GetIndexResponseBodyResultVersionsFiles(GetIndexResponseBodyResultVersionsFiles &&) = default ;
    GetIndexResponseBodyResultVersionsFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIndexResponseBodyResultVersionsFiles() = default ;
    GetIndexResponseBodyResultVersionsFiles& operator=(const GetIndexResponseBodyResultVersionsFiles &) = default ;
    GetIndexResponseBodyResultVersionsFiles& operator=(GetIndexResponseBodyResultVersionsFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fullPathName_ != nullptr
        && this->isDir_ != nullptr && this->isTemplate_ != nullptr && this->name_ != nullptr; };
    // fullPathName Field Functions 
    bool hasFullPathName() const { return this->fullPathName_ != nullptr;};
    void deleteFullPathName() { this->fullPathName_ = nullptr;};
    inline string fullPathName() const { DARABONBA_PTR_GET_DEFAULT(fullPathName_, "") };
    inline GetIndexResponseBodyResultVersionsFiles& setFullPathName(string fullPathName) { DARABONBA_PTR_SET_VALUE(fullPathName_, fullPathName) };


    // isDir Field Functions 
    bool hasIsDir() const { return this->isDir_ != nullptr;};
    void deleteIsDir() { this->isDir_ = nullptr;};
    inline bool isDir() const { DARABONBA_PTR_GET_DEFAULT(isDir_, false) };
    inline GetIndexResponseBodyResultVersionsFiles& setIsDir(bool isDir) { DARABONBA_PTR_SET_VALUE(isDir_, isDir) };


    // isTemplate Field Functions 
    bool hasIsTemplate() const { return this->isTemplate_ != nullptr;};
    void deleteIsTemplate() { this->isTemplate_ = nullptr;};
    inline bool isTemplate() const { DARABONBA_PTR_GET_DEFAULT(isTemplate_, false) };
    inline GetIndexResponseBodyResultVersionsFiles& setIsTemplate(bool isTemplate) { DARABONBA_PTR_SET_VALUE(isTemplate_, isTemplate) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetIndexResponseBodyResultVersionsFiles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The full path of the file.
    std::shared_ptr<string> fullPathName_ = nullptr;
    // Indicates whether the file is a directory.
    std::shared_ptr<bool> isDir_ = nullptr;
    // Indicates whether the file is a template.
    std::shared_ptr<bool> isTemplate_ = nullptr;
    // The file name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
