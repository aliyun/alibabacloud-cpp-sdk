// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLFLASHBACKTASKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLFLASHBACKTASKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeSqlFlashbackTaskListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlFlashbackTaskListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolardbxInstanceId, polardbxInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlFlashbackTaskListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolardbxInstanceId, polardbxInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeSqlFlashbackTaskListRequest() = default ;
    DescribeSqlFlashbackTaskListRequest(const DescribeSqlFlashbackTaskListRequest &) = default ;
    DescribeSqlFlashbackTaskListRequest(DescribeSqlFlashbackTaskListRequest &&) = default ;
    DescribeSqlFlashbackTaskListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlFlashbackTaskListRequest() = default ;
    DescribeSqlFlashbackTaskListRequest& operator=(const DescribeSqlFlashbackTaskListRequest &) = default ;
    DescribeSqlFlashbackTaskListRequest& operator=(DescribeSqlFlashbackTaskListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->polardbxInstanceId_ == nullptr
        && return this->regionId_ == nullptr; };
    // polardbxInstanceId Field Functions 
    bool hasPolardbxInstanceId() const { return this->polardbxInstanceId_ != nullptr;};
    void deletePolardbxInstanceId() { this->polardbxInstanceId_ = nullptr;};
    inline string polardbxInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polardbxInstanceId_, "") };
    inline DescribeSqlFlashbackTaskListRequest& setPolardbxInstanceId(string polardbxInstanceId) { DARABONBA_PTR_SET_VALUE(polardbxInstanceId_, polardbxInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSqlFlashbackTaskListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> polardbxInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
