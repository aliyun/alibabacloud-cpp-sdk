// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLICMEDIABASICINFOSRESPONSEBODYMEDIAINFOSFILEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLICMEDIABASICINFOSRESPONSEBODYMEDIAINFOSFILEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
    };
    ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList() = default ;
    ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList(const ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList &) = default ;
    ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList(ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList &&) = default ;
    ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList() = default ;
    ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList& operator=(const ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList &) = default ;
    ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList& operator=(ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileBasicInfo_ == nullptr; };
    // fileBasicInfo Field Functions 
    bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
    void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
    inline const Models::ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo & fileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, Models::ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo) };
    inline Models::ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo fileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, Models::ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo) };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList& setFileBasicInfo(const Models::ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
    inline ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList& setFileBasicInfo(Models::ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


  protected:
    // The basic information of the file, such as the duration and size.
    std::shared_ptr<Models::ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo> fileBasicInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
