// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLFILEDETECTRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLFILEDETECTRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetSkillFileDetectResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillFileDetectResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillFileDetectResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetSkillFileDetectResultRequest() = default ;
    GetSkillFileDetectResultRequest(const GetSkillFileDetectResultRequest &) = default ;
    GetSkillFileDetectResultRequest(GetSkillFileDetectResultRequest &&) = default ;
    GetSkillFileDetectResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillFileDetectResultRequest() = default ;
    GetSkillFileDetectResultRequest& operator=(const GetSkillFileDetectResultRequest &) = default ;
    GetSkillFileDetectResultRequest& operator=(GetSkillFileDetectResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hashKey_ == nullptr
        && this->regionId_ == nullptr; };
    // hashKey Field Functions 
    bool hasHashKey() const { return this->hashKey_ != nullptr;};
    void deleteHashKey() { this->hashKey_ = nullptr;};
    inline string getHashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
    inline GetSkillFileDetectResultRequest& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSkillFileDetectResultRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> hashKey_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
