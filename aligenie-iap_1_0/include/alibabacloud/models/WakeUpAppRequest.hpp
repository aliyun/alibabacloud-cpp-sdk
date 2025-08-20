// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAKEUPAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WAKEUPAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WakeUpAppRequestTargetInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class WakeUpAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WakeUpAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsDebug, isDebug_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(TargetInfo, targetInfo_);
    };
    friend void from_json(const Darabonba::Json& j, WakeUpAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDebug, isDebug_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(TargetInfo, targetInfo_);
    };
    WakeUpAppRequest() = default ;
    WakeUpAppRequest(const WakeUpAppRequest &) = default ;
    WakeUpAppRequest(WakeUpAppRequest &&) = default ;
    WakeUpAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WakeUpAppRequest() = default ;
    WakeUpAppRequest& operator=(const WakeUpAppRequest &) = default ;
    WakeUpAppRequest& operator=(WakeUpAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isDebug_ != nullptr
        && this->path_ != nullptr && this->targetInfo_ != nullptr; };
    // isDebug Field Functions 
    bool hasIsDebug() const { return this->isDebug_ != nullptr;};
    void deleteIsDebug() { this->isDebug_ = nullptr;};
    inline bool isDebug() const { DARABONBA_PTR_GET_DEFAULT(isDebug_, false) };
    inline WakeUpAppRequest& setIsDebug(bool isDebug) { DARABONBA_PTR_SET_VALUE(isDebug_, isDebug) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline WakeUpAppRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // targetInfo Field Functions 
    bool hasTargetInfo() const { return this->targetInfo_ != nullptr;};
    void deleteTargetInfo() { this->targetInfo_ = nullptr;};
    inline const WakeUpAppRequestTargetInfo & targetInfo() const { DARABONBA_PTR_GET_CONST(targetInfo_, WakeUpAppRequestTargetInfo) };
    inline WakeUpAppRequestTargetInfo targetInfo() { DARABONBA_PTR_GET(targetInfo_, WakeUpAppRequestTargetInfo) };
    inline WakeUpAppRequest& setTargetInfo(const WakeUpAppRequestTargetInfo & targetInfo) { DARABONBA_PTR_SET_VALUE(targetInfo_, targetInfo) };
    inline WakeUpAppRequest& setTargetInfo(WakeUpAppRequestTargetInfo && targetInfo) { DARABONBA_PTR_SET_RVALUE(targetInfo_, targetInfo) };


  protected:
    std::shared_ptr<bool> isDebug_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> path_ = nullptr;
    // This parameter is required.
    std::shared_ptr<WakeUpAppRequestTargetInfo> targetInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
