// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODYMEDIAINFOSFILEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSRESPONSEBODYMEDIAINFOSFILEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class BatchGetMediaInfosResponseBodyMediaInfosFileInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetMediaInfosResponseBodyMediaInfosFileInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetMediaInfosResponseBodyMediaInfosFileInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
    };
    BatchGetMediaInfosResponseBodyMediaInfosFileInfoList() = default ;
    BatchGetMediaInfosResponseBodyMediaInfosFileInfoList(const BatchGetMediaInfosResponseBodyMediaInfosFileInfoList &) = default ;
    BatchGetMediaInfosResponseBodyMediaInfosFileInfoList(BatchGetMediaInfosResponseBodyMediaInfosFileInfoList &&) = default ;
    BatchGetMediaInfosResponseBodyMediaInfosFileInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetMediaInfosResponseBodyMediaInfosFileInfoList() = default ;
    BatchGetMediaInfosResponseBodyMediaInfosFileInfoList& operator=(const BatchGetMediaInfosResponseBodyMediaInfosFileInfoList &) = default ;
    BatchGetMediaInfosResponseBodyMediaInfosFileInfoList& operator=(BatchGetMediaInfosResponseBodyMediaInfosFileInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileBasicInfo_ == nullptr; };
    // fileBasicInfo Field Functions 
    bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
    void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
    inline const Models::BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo & fileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, Models::BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo) };
    inline Models::BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo fileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, Models::BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo) };
    inline BatchGetMediaInfosResponseBodyMediaInfosFileInfoList& setFileBasicInfo(const Models::BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
    inline BatchGetMediaInfosResponseBodyMediaInfosFileInfoList& setFileBasicInfo(Models::BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


  protected:
    // The basic information of the file, including the duration and size.
    std::shared_ptr<Models::BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo> fileBasicInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
