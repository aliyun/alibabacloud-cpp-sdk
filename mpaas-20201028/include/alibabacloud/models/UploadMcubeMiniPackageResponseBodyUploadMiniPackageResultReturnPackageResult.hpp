// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADMCUBEMINIPACKAGERESPONSEBODYUPLOADMINIPACKAGERESULTRETURNPACKAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_UPLOADMCUBEMINIPACKAGERESPONSEBODYUPLOADMINIPACKAGERESULTRETURNPACKAGERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult& obj) { 
      DARABONBA_PTR_TO_JSON(DebugUrl, debugUrl_);
      DARABONBA_PTR_TO_JSON(PackageId, packageId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DebugUrl, debugUrl_);
      DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult() = default ;
    UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult(const UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult &) = default ;
    UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult(UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult &&) = default ;
    UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult() = default ;
    UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult& operator=(const UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult &) = default ;
    UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult& operator=(UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->debugUrl_ == nullptr
        && return this->packageId_ == nullptr && return this->userId_ == nullptr; };
    // debugUrl Field Functions 
    bool hasDebugUrl() const { return this->debugUrl_ != nullptr;};
    void deleteDebugUrl() { this->debugUrl_ = nullptr;};
    inline string debugUrl() const { DARABONBA_PTR_GET_DEFAULT(debugUrl_, "") };
    inline UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult& setDebugUrl(string debugUrl) { DARABONBA_PTR_SET_VALUE(debugUrl_, debugUrl) };


    // packageId Field Functions 
    bool hasPackageId() const { return this->packageId_ != nullptr;};
    void deletePackageId() { this->packageId_ = nullptr;};
    inline string packageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, "") };
    inline UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult& setPackageId(string packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> debugUrl_ = nullptr;
    std::shared_ptr<string> packageId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
