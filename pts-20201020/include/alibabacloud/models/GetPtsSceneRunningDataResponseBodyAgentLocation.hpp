// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENERUNNINGDATARESPONSEBODYAGENTLOCATION_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENERUNNINGDATARESPONSEBODYAGENTLOCATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneRunningDataResponseBodyAgentLocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneRunningDataResponseBodyAgentLocation& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneRunningDataResponseBodyAgentLocation& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    GetPtsSceneRunningDataResponseBodyAgentLocation() = default ;
    GetPtsSceneRunningDataResponseBodyAgentLocation(const GetPtsSceneRunningDataResponseBodyAgentLocation &) = default ;
    GetPtsSceneRunningDataResponseBodyAgentLocation(GetPtsSceneRunningDataResponseBodyAgentLocation &&) = default ;
    GetPtsSceneRunningDataResponseBodyAgentLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneRunningDataResponseBodyAgentLocation() = default ;
    GetPtsSceneRunningDataResponseBodyAgentLocation& operator=(const GetPtsSceneRunningDataResponseBodyAgentLocation &) = default ;
    GetPtsSceneRunningDataResponseBodyAgentLocation& operator=(GetPtsSceneRunningDataResponseBodyAgentLocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->isp_ == nullptr && return this->province_ == nullptr && return this->region_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetPtsSceneRunningDataResponseBodyAgentLocation& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline GetPtsSceneRunningDataResponseBodyAgentLocation& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline GetPtsSceneRunningDataResponseBodyAgentLocation& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetPtsSceneRunningDataResponseBodyAgentLocation& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The number of stress testers.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The provider of the stress tester.
    std::shared_ptr<string> isp_ = nullptr;
    // The province in which the stress tester resides.
    std::shared_ptr<string> province_ = nullptr;
    // The region in which the stress tester resides.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
