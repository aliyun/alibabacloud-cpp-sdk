// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFPSHOTFILESRESPONSEBODYFPSHOTFILELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTFPSHOTFILESRESPONSEBODYFPSHOTFILELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFpShotFilesResponseBodyFpShotFileListFpShotFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListFpShotFilesResponseBodyFpShotFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFpShotFilesResponseBodyFpShotFileList& obj) { 
      DARABONBA_PTR_TO_JSON(FpShotFile, fpShotFile_);
    };
    friend void from_json(const Darabonba::Json& j, ListFpShotFilesResponseBodyFpShotFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShotFile, fpShotFile_);
    };
    ListFpShotFilesResponseBodyFpShotFileList() = default ;
    ListFpShotFilesResponseBodyFpShotFileList(const ListFpShotFilesResponseBodyFpShotFileList &) = default ;
    ListFpShotFilesResponseBodyFpShotFileList(ListFpShotFilesResponseBodyFpShotFileList &&) = default ;
    ListFpShotFilesResponseBodyFpShotFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFpShotFilesResponseBodyFpShotFileList() = default ;
    ListFpShotFilesResponseBodyFpShotFileList& operator=(const ListFpShotFilesResponseBodyFpShotFileList &) = default ;
    ListFpShotFilesResponseBodyFpShotFileList& operator=(ListFpShotFilesResponseBodyFpShotFileList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpShotFile_ == nullptr; };
    // fpShotFile Field Functions 
    bool hasFpShotFile() const { return this->fpShotFile_ != nullptr;};
    void deleteFpShotFile() { this->fpShotFile_ = nullptr;};
    inline const vector<Models::ListFpShotFilesResponseBodyFpShotFileListFpShotFile> & fpShotFile() const { DARABONBA_PTR_GET_CONST(fpShotFile_, vector<Models::ListFpShotFilesResponseBodyFpShotFileListFpShotFile>) };
    inline vector<Models::ListFpShotFilesResponseBodyFpShotFileListFpShotFile> fpShotFile() { DARABONBA_PTR_GET(fpShotFile_, vector<Models::ListFpShotFilesResponseBodyFpShotFileListFpShotFile>) };
    inline ListFpShotFilesResponseBodyFpShotFileList& setFpShotFile(const vector<Models::ListFpShotFilesResponseBodyFpShotFileListFpShotFile> & fpShotFile) { DARABONBA_PTR_SET_VALUE(fpShotFile_, fpShotFile) };
    inline ListFpShotFilesResponseBodyFpShotFileList& setFpShotFile(vector<Models::ListFpShotFilesResponseBodyFpShotFileListFpShotFile> && fpShotFile) { DARABONBA_PTR_SET_RVALUE(fpShotFile_, fpShotFile) };


  protected:
    std::shared_ptr<vector<Models::ListFpShotFilesResponseBodyFpShotFileListFpShotFile>> fpShotFile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
