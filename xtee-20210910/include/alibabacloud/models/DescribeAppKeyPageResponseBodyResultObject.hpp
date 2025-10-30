// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPKEYPAGERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPKEYPAGERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAppKeyPageResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppKeyPageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(androidSdkUrl, androidSdkUrl_);
      DARABONBA_PTR_TO_JSON(androidSdkVersion, androidSdkVersion_);
      DARABONBA_PTR_TO_JSON(appKey, appKey_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(iosSdkUrl, iosSdkUrl_);
      DARABONBA_PTR_TO_JSON(iosSdkVersion, iosSdkVersion_);
      DARABONBA_PTR_TO_JSON(memo, memo_);
      DARABONBA_PTR_TO_JSON(sdkItems, sdkItems_);
      DARABONBA_PTR_TO_JSON(used, used_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppKeyPageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(androidSdkUrl, androidSdkUrl_);
      DARABONBA_PTR_FROM_JSON(androidSdkVersion, androidSdkVersion_);
      DARABONBA_PTR_FROM_JSON(appKey, appKey_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(iosSdkUrl, iosSdkUrl_);
      DARABONBA_PTR_FROM_JSON(iosSdkVersion, iosSdkVersion_);
      DARABONBA_PTR_FROM_JSON(memo, memo_);
      DARABONBA_PTR_FROM_JSON(sdkItems, sdkItems_);
      DARABONBA_PTR_FROM_JSON(used, used_);
    };
    DescribeAppKeyPageResponseBodyResultObject() = default ;
    DescribeAppKeyPageResponseBodyResultObject(const DescribeAppKeyPageResponseBodyResultObject &) = default ;
    DescribeAppKeyPageResponseBodyResultObject(DescribeAppKeyPageResponseBodyResultObject &&) = default ;
    DescribeAppKeyPageResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppKeyPageResponseBodyResultObject() = default ;
    DescribeAppKeyPageResponseBodyResultObject& operator=(const DescribeAppKeyPageResponseBodyResultObject &) = default ;
    DescribeAppKeyPageResponseBodyResultObject& operator=(DescribeAppKeyPageResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidSdkUrl_ == nullptr
        && return this->androidSdkVersion_ == nullptr && return this->appKey_ == nullptr && return this->gmtCreate_ == nullptr && return this->iosSdkUrl_ == nullptr && return this->iosSdkVersion_ == nullptr
        && return this->memo_ == nullptr && return this->sdkItems_ == nullptr && return this->used_ == nullptr; };
    // androidSdkUrl Field Functions 
    bool hasAndroidSdkUrl() const { return this->androidSdkUrl_ != nullptr;};
    void deleteAndroidSdkUrl() { this->androidSdkUrl_ = nullptr;};
    inline string androidSdkUrl() const { DARABONBA_PTR_GET_DEFAULT(androidSdkUrl_, "") };
    inline DescribeAppKeyPageResponseBodyResultObject& setAndroidSdkUrl(string androidSdkUrl) { DARABONBA_PTR_SET_VALUE(androidSdkUrl_, androidSdkUrl) };


    // androidSdkVersion Field Functions 
    bool hasAndroidSdkVersion() const { return this->androidSdkVersion_ != nullptr;};
    void deleteAndroidSdkVersion() { this->androidSdkVersion_ = nullptr;};
    inline string androidSdkVersion() const { DARABONBA_PTR_GET_DEFAULT(androidSdkVersion_, "") };
    inline DescribeAppKeyPageResponseBodyResultObject& setAndroidSdkVersion(string androidSdkVersion) { DARABONBA_PTR_SET_VALUE(androidSdkVersion_, androidSdkVersion) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline DescribeAppKeyPageResponseBodyResultObject& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeAppKeyPageResponseBodyResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // iosSdkUrl Field Functions 
    bool hasIosSdkUrl() const { return this->iosSdkUrl_ != nullptr;};
    void deleteIosSdkUrl() { this->iosSdkUrl_ = nullptr;};
    inline string iosSdkUrl() const { DARABONBA_PTR_GET_DEFAULT(iosSdkUrl_, "") };
    inline DescribeAppKeyPageResponseBodyResultObject& setIosSdkUrl(string iosSdkUrl) { DARABONBA_PTR_SET_VALUE(iosSdkUrl_, iosSdkUrl) };


    // iosSdkVersion Field Functions 
    bool hasIosSdkVersion() const { return this->iosSdkVersion_ != nullptr;};
    void deleteIosSdkVersion() { this->iosSdkVersion_ = nullptr;};
    inline string iosSdkVersion() const { DARABONBA_PTR_GET_DEFAULT(iosSdkVersion_, "") };
    inline DescribeAppKeyPageResponseBodyResultObject& setIosSdkVersion(string iosSdkVersion) { DARABONBA_PTR_SET_VALUE(iosSdkVersion_, iosSdkVersion) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline DescribeAppKeyPageResponseBodyResultObject& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // sdkItems Field Functions 
    bool hasSdkItems() const { return this->sdkItems_ != nullptr;};
    void deleteSdkItems() { this->sdkItems_ = nullptr;};
    inline string sdkItems() const { DARABONBA_PTR_GET_DEFAULT(sdkItems_, "") };
    inline DescribeAppKeyPageResponseBodyResultObject& setSdkItems(string sdkItems) { DARABONBA_PTR_SET_VALUE(sdkItems_, sdkItems) };


    // used Field Functions 
    bool hasUsed() const { return this->used_ != nullptr;};
    void deleteUsed() { this->used_ = nullptr;};
    inline string used() const { DARABONBA_PTR_GET_DEFAULT(used_, "") };
    inline DescribeAppKeyPageResponseBodyResultObject& setUsed(string used) { DARABONBA_PTR_SET_VALUE(used_, used) };


  protected:
    // Android SDK download URL.
    std::shared_ptr<string> androidSdkUrl_ = nullptr;
    // Android SDK version number.
    std::shared_ptr<string> androidSdkVersion_ = nullptr;
    // Application appkey.
    std::shared_ptr<string> appKey_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // iOS SDK download URL.
    std::shared_ptr<string> iosSdkUrl_ = nullptr;
    // iOS SDK version number.
    std::shared_ptr<string> iosSdkVersion_ = nullptr;
    // Memo.
    std::shared_ptr<string> memo_ = nullptr;
    // Deprecated.
    std::shared_ptr<string> sdkItems_ = nullptr;
    // Whether this appKey is integrated.
    std::shared_ptr<string> used_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
