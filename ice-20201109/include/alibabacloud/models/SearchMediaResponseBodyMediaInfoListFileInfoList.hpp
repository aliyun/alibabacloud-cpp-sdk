// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLISTFILEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLISTFILEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaResponseBodyMediaInfoListFileInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaInfoListFileInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaInfoListFileInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
    };
    SearchMediaResponseBodyMediaInfoListFileInfoList() = default ;
    SearchMediaResponseBodyMediaInfoListFileInfoList(const SearchMediaResponseBodyMediaInfoListFileInfoList &) = default ;
    SearchMediaResponseBodyMediaInfoListFileInfoList(SearchMediaResponseBodyMediaInfoListFileInfoList &&) = default ;
    SearchMediaResponseBodyMediaInfoListFileInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaInfoListFileInfoList() = default ;
    SearchMediaResponseBodyMediaInfoListFileInfoList& operator=(const SearchMediaResponseBodyMediaInfoListFileInfoList &) = default ;
    SearchMediaResponseBodyMediaInfoListFileInfoList& operator=(SearchMediaResponseBodyMediaInfoListFileInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileBasicInfo_ == nullptr; };
    // fileBasicInfo Field Functions 
    bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
    void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
    inline const Models::SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo & fileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, Models::SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo) };
    inline Models::SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo fileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, Models::SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo) };
    inline SearchMediaResponseBodyMediaInfoListFileInfoList& setFileBasicInfo(const Models::SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
    inline SearchMediaResponseBodyMediaInfoListFileInfoList& setFileBasicInfo(Models::SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


  protected:
    // The basic information about the file, such as the duration and size.
    std::shared_ptr<Models::SearchMediaResponseBodyMediaInfoListFileInfoListFileBasicInfo> fileBasicInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
