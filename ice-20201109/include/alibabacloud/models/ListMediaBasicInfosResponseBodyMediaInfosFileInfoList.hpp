// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIABASICINFOSRESPONSEBODYMEDIAINFOSFILEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIABASICINFOSRESPONSEBODYMEDIAINFOSFILEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaBasicInfosResponseBodyMediaInfosFileInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaBasicInfosResponseBodyMediaInfosFileInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaBasicInfosResponseBodyMediaInfosFileInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
    };
    ListMediaBasicInfosResponseBodyMediaInfosFileInfoList() = default ;
    ListMediaBasicInfosResponseBodyMediaInfosFileInfoList(const ListMediaBasicInfosResponseBodyMediaInfosFileInfoList &) = default ;
    ListMediaBasicInfosResponseBodyMediaInfosFileInfoList(ListMediaBasicInfosResponseBodyMediaInfosFileInfoList &&) = default ;
    ListMediaBasicInfosResponseBodyMediaInfosFileInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaBasicInfosResponseBodyMediaInfosFileInfoList() = default ;
    ListMediaBasicInfosResponseBodyMediaInfosFileInfoList& operator=(const ListMediaBasicInfosResponseBodyMediaInfosFileInfoList &) = default ;
    ListMediaBasicInfosResponseBodyMediaInfosFileInfoList& operator=(ListMediaBasicInfosResponseBodyMediaInfosFileInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileBasicInfo_ != nullptr; };
    // fileBasicInfo Field Functions 
    bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
    void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
    inline const Models::ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo & fileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, Models::ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo) };
    inline Models::ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo fileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, Models::ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo) };
    inline ListMediaBasicInfosResponseBodyMediaInfosFileInfoList& setFileBasicInfo(const Models::ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
    inline ListMediaBasicInfosResponseBodyMediaInfosFileInfoList& setFileBasicInfo(Models::ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


  protected:
    // The basic information of the file, including the duration and size.
    std::shared_ptr<Models::ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo> fileBasicInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
