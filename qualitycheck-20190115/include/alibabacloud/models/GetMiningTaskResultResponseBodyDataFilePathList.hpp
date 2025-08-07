// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMININGTASKRESULTRESPONSEBODYDATAFILEPATHLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMININGTASKRESULTRESPONSEBODYDATAFILEPATHLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetMiningTaskResultResponseBodyDataFilePathList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMiningTaskResultResponseBodyDataFilePathList& obj) { 
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetMiningTaskResultResponseBodyDataFilePathList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
    };
    GetMiningTaskResultResponseBodyDataFilePathList() = default ;
    GetMiningTaskResultResponseBodyDataFilePathList(const GetMiningTaskResultResponseBodyDataFilePathList &) = default ;
    GetMiningTaskResultResponseBodyDataFilePathList(GetMiningTaskResultResponseBodyDataFilePathList &&) = default ;
    GetMiningTaskResultResponseBodyDataFilePathList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMiningTaskResultResponseBodyDataFilePathList() = default ;
    GetMiningTaskResultResponseBodyDataFilePathList& operator=(const GetMiningTaskResultResponseBodyDataFilePathList &) = default ;
    GetMiningTaskResultResponseBodyDataFilePathList& operator=(GetMiningTaskResultResponseBodyDataFilePathList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileType_ != nullptr
        && this->fileUrl_ != nullptr; };
    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline GetMiningTaskResultResponseBodyDataFilePathList& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline GetMiningTaskResultResponseBodyDataFilePathList& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


  protected:
    std::shared_ptr<string> fileType_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
