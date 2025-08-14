// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDNAFILESRESPONSEBODYFILELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDNAFILESRESPONSEBODYFILELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDNAFilesResponseBodyFileListInputFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListDNAFilesResponseBodyFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDNAFilesResponseBodyFileList& obj) { 
      DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
      DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListDNAFilesResponseBodyFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
      DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
    };
    ListDNAFilesResponseBodyFileList() = default ;
    ListDNAFilesResponseBodyFileList(const ListDNAFilesResponseBodyFileList &) = default ;
    ListDNAFilesResponseBodyFileList(ListDNAFilesResponseBodyFileList &&) = default ;
    ListDNAFilesResponseBodyFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDNAFilesResponseBodyFileList() = default ;
    ListDNAFilesResponseBodyFileList& operator=(const ListDNAFilesResponseBodyFileList &) = default ;
    ListDNAFilesResponseBodyFileList& operator=(ListDNAFilesResponseBodyFileList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputFile_ != nullptr
        && this->primaryKey_ != nullptr; };
    // inputFile Field Functions 
    bool hasInputFile() const { return this->inputFile_ != nullptr;};
    void deleteInputFile() { this->inputFile_ = nullptr;};
    inline const Models::ListDNAFilesResponseBodyFileListInputFile & inputFile() const { DARABONBA_PTR_GET_CONST(inputFile_, Models::ListDNAFilesResponseBodyFileListInputFile) };
    inline Models::ListDNAFilesResponseBodyFileListInputFile inputFile() { DARABONBA_PTR_GET(inputFile_, Models::ListDNAFilesResponseBodyFileListInputFile) };
    inline ListDNAFilesResponseBodyFileList& setInputFile(const Models::ListDNAFilesResponseBodyFileListInputFile & inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };
    inline ListDNAFilesResponseBodyFileList& setInputFile(Models::ListDNAFilesResponseBodyFileListInputFile && inputFile) { DARABONBA_PTR_SET_RVALUE(inputFile_, inputFile) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline ListDNAFilesResponseBodyFileList& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


  protected:
    // The Object Storage Service (OSS) information about the input file.
    std::shared_ptr<Models::ListDNAFilesResponseBodyFileListInputFile> inputFile_ = nullptr;
    // The primary key of the file.
    std::shared_ptr<string> primaryKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
