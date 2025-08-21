// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSETTINGSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSETTINGSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeDiagnosisSettingsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisSettingsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisSettingsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    DescribeDiagnosisSettingsResponseBodyResult() = default ;
    DescribeDiagnosisSettingsResponseBodyResult(const DescribeDiagnosisSettingsResponseBodyResult &) = default ;
    DescribeDiagnosisSettingsResponseBodyResult(DescribeDiagnosisSettingsResponseBodyResult &&) = default ;
    DescribeDiagnosisSettingsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisSettingsResponseBodyResult() = default ;
    DescribeDiagnosisSettingsResponseBodyResult& operator=(const DescribeDiagnosisSettingsResponseBodyResult &) = default ;
    DescribeDiagnosisSettingsResponseBodyResult& operator=(DescribeDiagnosisSettingsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scene_ != nullptr
        && this->updateTime_ != nullptr; };
    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeDiagnosisSettingsResponseBodyResult& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeDiagnosisSettingsResponseBodyResult& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Scenarios of intelligent maintenance.
    std::shared_ptr<string> scene_ = nullptr;
    // The timestamp of the last update for Intelligent Maintenance scenarios.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
