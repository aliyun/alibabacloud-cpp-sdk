// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetDoctorApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(locale, locale_);
      DARABONBA_PTR_TO_JSON(queryTime, queryTime_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(locale, locale_);
      DARABONBA_PTR_FROM_JSON(queryTime, queryTime_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    GetDoctorApplicationRequest() = default ;
    GetDoctorApplicationRequest(const GetDoctorApplicationRequest &) = default ;
    GetDoctorApplicationRequest(GetDoctorApplicationRequest &&) = default ;
    GetDoctorApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorApplicationRequest() = default ;
    GetDoctorApplicationRequest& operator=(const GetDoctorApplicationRequest &) = default ;
    GetDoctorApplicationRequest& operator=(GetDoctorApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->locale_ != nullptr
        && this->queryTime_ != nullptr && this->regionId_ != nullptr; };
    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string locale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline GetDoctorApplicationRequest& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


    // queryTime Field Functions 
    bool hasQueryTime() const { return this->queryTime_ != nullptr;};
    void deleteQueryTime() { this->queryTime_ = nullptr;};
    inline string queryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, "") };
    inline GetDoctorApplicationRequest& setQueryTime(string queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetDoctorApplicationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The language of diagnostic information.
    std::shared_ptr<string> locale_ = nullptr;
    // The query time.
    std::shared_ptr<string> queryTime_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
