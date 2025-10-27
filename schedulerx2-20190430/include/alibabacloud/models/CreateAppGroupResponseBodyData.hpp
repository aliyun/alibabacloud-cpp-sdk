// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class CreateAppGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
    };
    CreateAppGroupResponseBodyData() = default ;
    CreateAppGroupResponseBodyData(const CreateAppGroupResponseBodyData &) = default ;
    CreateAppGroupResponseBodyData(CreateAppGroupResponseBodyData &&) = default ;
    CreateAppGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppGroupResponseBodyData() = default ;
    CreateAppGroupResponseBodyData& operator=(const CreateAppGroupResponseBodyData &) = default ;
    CreateAppGroupResponseBodyData& operator=(CreateAppGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appGroupId_ == nullptr
        && return this->appKey_ == nullptr; };
    // appGroupId Field Functions 
    bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
    void deleteAppGroupId() { this->appGroupId_ = nullptr;};
    inline int64_t appGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, 0L) };
    inline CreateAppGroupResponseBodyData& setAppGroupId(int64_t appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline CreateAppGroupResponseBodyData& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


  protected:
    // The job group ID.
    std::shared_ptr<int64_t> appGroupId_ = nullptr;
    // The AppKey for the application.
    std::shared_ptr<string> appKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
