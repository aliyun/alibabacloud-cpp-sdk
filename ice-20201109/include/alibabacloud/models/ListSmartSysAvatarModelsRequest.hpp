// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTSYSAVATARMODELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTSYSAVATARMODELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSmartSysAvatarModelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartSysAvatarModelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SdkVersion, sdkVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartSysAvatarModelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SdkVersion, sdkVersion_);
    };
    ListSmartSysAvatarModelsRequest() = default ;
    ListSmartSysAvatarModelsRequest(const ListSmartSysAvatarModelsRequest &) = default ;
    ListSmartSysAvatarModelsRequest(ListSmartSysAvatarModelsRequest &&) = default ;
    ListSmartSysAvatarModelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartSysAvatarModelsRequest() = default ;
    ListSmartSysAvatarModelsRequest& operator=(const ListSmartSysAvatarModelsRequest &) = default ;
    ListSmartSysAvatarModelsRequest& operator=(ListSmartSysAvatarModelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNo_ != nullptr
        && this->pageSize_ != nullptr && this->sdkVersion_ != nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListSmartSysAvatarModelsRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSmartSysAvatarModelsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sdkVersion Field Functions 
    bool hasSdkVersion() const { return this->sdkVersion_ != nullptr;};
    void deleteSdkVersion() { this->sdkVersion_ = nullptr;};
    inline string sdkVersion() const { DARABONBA_PTR_GET_DEFAULT(sdkVersion_, "") };
    inline ListSmartSysAvatarModelsRequest& setSdkVersion(string sdkVersion) { DARABONBA_PTR_SET_VALUE(sdkVersion_, sdkVersion) };


  protected:
    // The page number. Default value: 1.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page. Default value: 10. Valid values: 1 to 100.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> sdkVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
