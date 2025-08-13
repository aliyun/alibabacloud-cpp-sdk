// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetImageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentVersionFullShowName, currentVersionFullShowName_);
      DARABONBA_PTR_TO_JSON(MaxVersionChangelogUrl, maxVersionChangelogUrl_);
      DARABONBA_PTR_TO_JSON(MaxVersionCode, maxVersionCode_);
      DARABONBA_PTR_TO_JSON(MaxVersionFullShowName, maxVersionFullShowName_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentVersionFullShowName, currentVersionFullShowName_);
      DARABONBA_PTR_FROM_JSON(MaxVersionChangelogUrl, maxVersionChangelogUrl_);
      DARABONBA_PTR_FROM_JSON(MaxVersionCode, maxVersionCode_);
      DARABONBA_PTR_FROM_JSON(MaxVersionFullShowName, maxVersionFullShowName_);
    };
    GetImageResponseBodyData() = default ;
    GetImageResponseBodyData(const GetImageResponseBodyData &) = default ;
    GetImageResponseBodyData(GetImageResponseBodyData &&) = default ;
    GetImageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageResponseBodyData() = default ;
    GetImageResponseBodyData& operator=(const GetImageResponseBodyData &) = default ;
    GetImageResponseBodyData& operator=(GetImageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentVersionFullShowName_ != nullptr
        && this->maxVersionChangelogUrl_ != nullptr && this->maxVersionCode_ != nullptr && this->maxVersionFullShowName_ != nullptr; };
    // currentVersionFullShowName Field Functions 
    bool hasCurrentVersionFullShowName() const { return this->currentVersionFullShowName_ != nullptr;};
    void deleteCurrentVersionFullShowName() { this->currentVersionFullShowName_ = nullptr;};
    inline string currentVersionFullShowName() const { DARABONBA_PTR_GET_DEFAULT(currentVersionFullShowName_, "") };
    inline GetImageResponseBodyData& setCurrentVersionFullShowName(string currentVersionFullShowName) { DARABONBA_PTR_SET_VALUE(currentVersionFullShowName_, currentVersionFullShowName) };


    // maxVersionChangelogUrl Field Functions 
    bool hasMaxVersionChangelogUrl() const { return this->maxVersionChangelogUrl_ != nullptr;};
    void deleteMaxVersionChangelogUrl() { this->maxVersionChangelogUrl_ = nullptr;};
    inline string maxVersionChangelogUrl() const { DARABONBA_PTR_GET_DEFAULT(maxVersionChangelogUrl_, "") };
    inline GetImageResponseBodyData& setMaxVersionChangelogUrl(string maxVersionChangelogUrl) { DARABONBA_PTR_SET_VALUE(maxVersionChangelogUrl_, maxVersionChangelogUrl) };


    // maxVersionCode Field Functions 
    bool hasMaxVersionCode() const { return this->maxVersionCode_ != nullptr;};
    void deleteMaxVersionCode() { this->maxVersionCode_ = nullptr;};
    inline string maxVersionCode() const { DARABONBA_PTR_GET_DEFAULT(maxVersionCode_, "") };
    inline GetImageResponseBodyData& setMaxVersionCode(string maxVersionCode) { DARABONBA_PTR_SET_VALUE(maxVersionCode_, maxVersionCode) };


    // maxVersionFullShowName Field Functions 
    bool hasMaxVersionFullShowName() const { return this->maxVersionFullShowName_ != nullptr;};
    void deleteMaxVersionFullShowName() { this->maxVersionFullShowName_ = nullptr;};
    inline string maxVersionFullShowName() const { DARABONBA_PTR_GET_DEFAULT(maxVersionFullShowName_, "") };
    inline GetImageResponseBodyData& setMaxVersionFullShowName(string maxVersionFullShowName) { DARABONBA_PTR_SET_VALUE(maxVersionFullShowName_, maxVersionFullShowName) };


  protected:
    // The full version number of the current instance image. The parameter is in the X.X.X.X format.
    std::shared_ptr<string> currentVersionFullShowName_ = nullptr;
    // The URL of the changelog for the maximum version to which the current version can be upgraded.
    std::shared_ptr<string> maxVersionChangelogUrl_ = nullptr;
    // The code of the maximum version to which the current version can be upgraded.
    std::shared_ptr<string> maxVersionCode_ = nullptr;
    // The full number of the maximum version to which the current version can be upgraded.
    std::shared_ptr<string> maxVersionFullShowName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
