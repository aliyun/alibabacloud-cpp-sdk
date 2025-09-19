// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPFILESRESPONSEBODYBACKUPFILES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPFILESRESPONSEBODYBACKUPFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupFilesResponseBodyBackupFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupFilesResponseBodyBackupFiles& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Subtree, subtree_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupFilesResponseBodyBackupFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Subtree, subtree_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeBackupFilesResponseBodyBackupFiles() = default ;
    DescribeBackupFilesResponseBodyBackupFiles(const DescribeBackupFilesResponseBodyBackupFiles &) = default ;
    DescribeBackupFilesResponseBodyBackupFiles(DescribeBackupFilesResponseBodyBackupFiles &&) = default ;
    DescribeBackupFilesResponseBodyBackupFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupFilesResponseBodyBackupFiles() = default ;
    DescribeBackupFilesResponseBodyBackupFiles& operator=(const DescribeBackupFilesResponseBodyBackupFiles &) = default ;
    DescribeBackupFilesResponseBodyBackupFiles& operator=(DescribeBackupFilesResponseBodyBackupFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->size_ != nullptr && this->subtree_ != nullptr && this->type_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeBackupFilesResponseBodyBackupFiles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeBackupFilesResponseBodyBackupFiles& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // subtree Field Functions 
    bool hasSubtree() const { return this->subtree_ != nullptr;};
    void deleteSubtree() { this->subtree_ = nullptr;};
    inline string subtree() const { DARABONBA_PTR_GET_DEFAULT(subtree_, "") };
    inline DescribeBackupFilesResponseBodyBackupFiles& setSubtree(string subtree) { DARABONBA_PTR_SET_VALUE(subtree_, subtree) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeBackupFilesResponseBodyBackupFiles& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the anti-ransomware policy.
    std::shared_ptr<string> name_ = nullptr;
    // The size of the backup file. Unit: bytes.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The path to the subdirectory of the backup file.
    std::shared_ptr<string> subtree_ = nullptr;
    // The type of the protected file. Valid values:
    // 
    // *   **file**: files
    // *   **dir**: folders
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
