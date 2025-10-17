// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADBSPARKNECESSARYRAMPERMISSIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETADBSPARKNECESSARYRAMPERMISSIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetADBSparkNecessaryRAMPermissionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetADBSparkNecessaryRAMPermissionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DeniedDetail, deniedDetail_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, GetADBSparkNecessaryRAMPermissionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DeniedDetail, deniedDetail_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    GetADBSparkNecessaryRAMPermissionsResponseBodyData() = default ;
    GetADBSparkNecessaryRAMPermissionsResponseBodyData(const GetADBSparkNecessaryRAMPermissionsResponseBodyData &) = default ;
    GetADBSparkNecessaryRAMPermissionsResponseBodyData(GetADBSparkNecessaryRAMPermissionsResponseBodyData &&) = default ;
    GetADBSparkNecessaryRAMPermissionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetADBSparkNecessaryRAMPermissionsResponseBodyData() = default ;
    GetADBSparkNecessaryRAMPermissionsResponseBodyData& operator=(const GetADBSparkNecessaryRAMPermissionsResponseBodyData &) = default ;
    GetADBSparkNecessaryRAMPermissionsResponseBodyData& operator=(GetADBSparkNecessaryRAMPermissionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deniedDetail_ == nullptr
        && return this->passed_ == nullptr && return this->suggestion_ == nullptr; };
    // deniedDetail Field Functions 
    bool hasDeniedDetail() const { return this->deniedDetail_ != nullptr;};
    void deleteDeniedDetail() { this->deniedDetail_ = nullptr;};
    inline const Models::GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail & deniedDetail() const { DARABONBA_PTR_GET_CONST(deniedDetail_, Models::GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail) };
    inline Models::GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail deniedDetail() { DARABONBA_PTR_GET(deniedDetail_, Models::GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail) };
    inline GetADBSparkNecessaryRAMPermissionsResponseBodyData& setDeniedDetail(const Models::GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail & deniedDetail) { DARABONBA_PTR_SET_VALUE(deniedDetail_, deniedDetail) };
    inline GetADBSparkNecessaryRAMPermissionsResponseBodyData& setDeniedDetail(Models::GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail && deniedDetail) { DARABONBA_PTR_SET_RVALUE(deniedDetail_, deniedDetail) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline bool passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, false) };
    inline GetADBSparkNecessaryRAMPermissionsResponseBodyData& setPassed(bool passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetADBSparkNecessaryRAMPermissionsResponseBodyData& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    std::shared_ptr<Models::GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail> deniedDetail_ = nullptr;
    std::shared_ptr<bool> passed_ = nullptr;
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
