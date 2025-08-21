// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSETTINGRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSETTINGRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeSnapshotSettingResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotSettingResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(QuartzRegex, quartzRegex_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotSettingResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(QuartzRegex, quartzRegex_);
    };
    DescribeSnapshotSettingResponseBodyResult() = default ;
    DescribeSnapshotSettingResponseBodyResult(const DescribeSnapshotSettingResponseBodyResult &) = default ;
    DescribeSnapshotSettingResponseBodyResult(DescribeSnapshotSettingResponseBodyResult &&) = default ;
    DescribeSnapshotSettingResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotSettingResponseBodyResult() = default ;
    DescribeSnapshotSettingResponseBodyResult& operator=(const DescribeSnapshotSettingResponseBodyResult &) = default ;
    DescribeSnapshotSettingResponseBodyResult& operator=(DescribeSnapshotSettingResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->quartzRegex_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DescribeSnapshotSettingResponseBodyResult& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // quartzRegex Field Functions 
    bool hasQuartzRegex() const { return this->quartzRegex_ != nullptr;};
    void deleteQuartzRegex() { this->quartzRegex_ = nullptr;};
    inline string quartzRegex() const { DARABONBA_PTR_GET_DEFAULT(quartzRegex_, "") };
    inline DescribeSnapshotSettingResponseBodyResult& setQuartzRegex(string quartzRegex) { DARABONBA_PTR_SET_VALUE(quartzRegex_, quartzRegex) };


  protected:
    // Whether to enable automatic backup.
    std::shared_ptr<bool> enable_ = nullptr;
    // Automatic backup time configuration, using Quartz Cron expression.
    std::shared_ptr<string> quartzRegex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
