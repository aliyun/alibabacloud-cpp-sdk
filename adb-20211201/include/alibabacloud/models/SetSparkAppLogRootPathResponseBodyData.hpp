// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSPARKAPPLOGROOTPATHRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SETSPARKAPPLOGROOTPATHRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class SetSparkAppLogRootPathResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSparkAppLogRootPathResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultLogPath, defaultLogPath_);
      DARABONBA_PTR_TO_JSON(IsLogPathExists, isLogPathExists_);
      DARABONBA_PTR_TO_JSON(ModifiedTimestamp, modifiedTimestamp_);
      DARABONBA_PTR_TO_JSON(ModifiedUid, modifiedUid_);
      DARABONBA_PTR_TO_JSON(RecordedLogPath, recordedLogPath_);
    };
    friend void from_json(const Darabonba::Json& j, SetSparkAppLogRootPathResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultLogPath, defaultLogPath_);
      DARABONBA_PTR_FROM_JSON(IsLogPathExists, isLogPathExists_);
      DARABONBA_PTR_FROM_JSON(ModifiedTimestamp, modifiedTimestamp_);
      DARABONBA_PTR_FROM_JSON(ModifiedUid, modifiedUid_);
      DARABONBA_PTR_FROM_JSON(RecordedLogPath, recordedLogPath_);
    };
    SetSparkAppLogRootPathResponseBodyData() = default ;
    SetSparkAppLogRootPathResponseBodyData(const SetSparkAppLogRootPathResponseBodyData &) = default ;
    SetSparkAppLogRootPathResponseBodyData(SetSparkAppLogRootPathResponseBodyData &&) = default ;
    SetSparkAppLogRootPathResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSparkAppLogRootPathResponseBodyData() = default ;
    SetSparkAppLogRootPathResponseBodyData& operator=(const SetSparkAppLogRootPathResponseBodyData &) = default ;
    SetSparkAppLogRootPathResponseBodyData& operator=(SetSparkAppLogRootPathResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultLogPath_ == nullptr
        && return this->isLogPathExists_ == nullptr && return this->modifiedTimestamp_ == nullptr && return this->modifiedUid_ == nullptr && return this->recordedLogPath_ == nullptr; };
    // defaultLogPath Field Functions 
    bool hasDefaultLogPath() const { return this->defaultLogPath_ != nullptr;};
    void deleteDefaultLogPath() { this->defaultLogPath_ = nullptr;};
    inline string defaultLogPath() const { DARABONBA_PTR_GET_DEFAULT(defaultLogPath_, "") };
    inline SetSparkAppLogRootPathResponseBodyData& setDefaultLogPath(string defaultLogPath) { DARABONBA_PTR_SET_VALUE(defaultLogPath_, defaultLogPath) };


    // isLogPathExists Field Functions 
    bool hasIsLogPathExists() const { return this->isLogPathExists_ != nullptr;};
    void deleteIsLogPathExists() { this->isLogPathExists_ = nullptr;};
    inline bool isLogPathExists() const { DARABONBA_PTR_GET_DEFAULT(isLogPathExists_, false) };
    inline SetSparkAppLogRootPathResponseBodyData& setIsLogPathExists(bool isLogPathExists) { DARABONBA_PTR_SET_VALUE(isLogPathExists_, isLogPathExists) };


    // modifiedTimestamp Field Functions 
    bool hasModifiedTimestamp() const { return this->modifiedTimestamp_ != nullptr;};
    void deleteModifiedTimestamp() { this->modifiedTimestamp_ = nullptr;};
    inline string modifiedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimestamp_, "") };
    inline SetSparkAppLogRootPathResponseBodyData& setModifiedTimestamp(string modifiedTimestamp) { DARABONBA_PTR_SET_VALUE(modifiedTimestamp_, modifiedTimestamp) };


    // modifiedUid Field Functions 
    bool hasModifiedUid() const { return this->modifiedUid_ != nullptr;};
    void deleteModifiedUid() { this->modifiedUid_ = nullptr;};
    inline string modifiedUid() const { DARABONBA_PTR_GET_DEFAULT(modifiedUid_, "") };
    inline SetSparkAppLogRootPathResponseBodyData& setModifiedUid(string modifiedUid) { DARABONBA_PTR_SET_VALUE(modifiedUid_, modifiedUid) };


    // recordedLogPath Field Functions 
    bool hasRecordedLogPath() const { return this->recordedLogPath_ != nullptr;};
    void deleteRecordedLogPath() { this->recordedLogPath_ = nullptr;};
    inline string recordedLogPath() const { DARABONBA_PTR_GET_DEFAULT(recordedLogPath_, "") };
    inline SetSparkAppLogRootPathResponseBodyData& setRecordedLogPath(string recordedLogPath) { DARABONBA_PTR_SET_VALUE(recordedLogPath_, recordedLogPath) };


  protected:
    // The default log path.
    std::shared_ptr<string> defaultLogPath_ = nullptr;
    // Indicates whether a log path exists.
    std::shared_ptr<bool> isLogPathExists_ = nullptr;
    // The last modification time.
    std::shared_ptr<string> modifiedTimestamp_ = nullptr;
    // The modifier ID.
    std::shared_ptr<string> modifiedUid_ = nullptr;
    // The recorded log path.
    std::shared_ptr<string> recordedLogPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
