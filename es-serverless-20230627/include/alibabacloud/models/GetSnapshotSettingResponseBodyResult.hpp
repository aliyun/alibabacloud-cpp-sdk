// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSNAPSHOTSETTINGRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETSNAPSHOTSETTINGRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class GetSnapshotSettingResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSnapshotSettingResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(quartzRegex, quartzRegex_);
    };
    friend void from_json(const Darabonba::Json& j, GetSnapshotSettingResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(quartzRegex, quartzRegex_);
    };
    GetSnapshotSettingResponseBodyResult() = default ;
    GetSnapshotSettingResponseBodyResult(const GetSnapshotSettingResponseBodyResult &) = default ;
    GetSnapshotSettingResponseBodyResult(GetSnapshotSettingResponseBodyResult &&) = default ;
    GetSnapshotSettingResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSnapshotSettingResponseBodyResult() = default ;
    GetSnapshotSettingResponseBodyResult& operator=(const GetSnapshotSettingResponseBodyResult &) = default ;
    GetSnapshotSettingResponseBodyResult& operator=(GetSnapshotSettingResponseBodyResult &&) = default ;
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
    inline GetSnapshotSettingResponseBodyResult& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // quartzRegex Field Functions 
    bool hasQuartzRegex() const { return this->quartzRegex_ != nullptr;};
    void deleteQuartzRegex() { this->quartzRegex_ = nullptr;};
    inline string quartzRegex() const { DARABONBA_PTR_GET_DEFAULT(quartzRegex_, "") };
    inline GetSnapshotSettingResponseBodyResult& setQuartzRegex(string quartzRegex) { DARABONBA_PTR_SET_VALUE(quartzRegex_, quartzRegex) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> quartzRegex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
