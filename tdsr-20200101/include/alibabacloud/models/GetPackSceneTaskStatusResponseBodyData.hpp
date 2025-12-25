// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPACKSCENETASKSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPACKSCENETASKSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetPackSceneTaskStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPackSceneTaskStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetPackSceneTaskStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetPackSceneTaskStatusResponseBodyData() = default ;
    GetPackSceneTaskStatusResponseBodyData(const GetPackSceneTaskStatusResponseBodyData &) = default ;
    GetPackSceneTaskStatusResponseBodyData(GetPackSceneTaskStatusResponseBodyData &&) = default ;
    GetPackSceneTaskStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPackSceneTaskStatusResponseBodyData() = default ;
    GetPackSceneTaskStatusResponseBodyData& operator=(const GetPackSceneTaskStatusResponseBodyData &) = default ;
    GetPackSceneTaskStatusResponseBodyData& operator=(GetPackSceneTaskStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->progress_ == nullptr
        && return this->status_ == nullptr; };
    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int64_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
    inline GetPackSceneTaskStatusResponseBodyData& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPackSceneTaskStatusResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> progress_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
