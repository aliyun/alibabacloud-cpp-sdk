// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADJUSTPTSSCENESPEEDREQUESTAPISPEEDLIST_HPP_
#define ALIBABACLOUD_MODELS_ADJUSTPTSSCENESPEEDREQUESTAPISPEEDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class AdjustPtsSceneSpeedRequestApiSpeedList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AdjustPtsSceneSpeedRequestApiSpeedList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
    };
    friend void from_json(const Darabonba::Json& j, AdjustPtsSceneSpeedRequestApiSpeedList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
    };
    AdjustPtsSceneSpeedRequestApiSpeedList() = default ;
    AdjustPtsSceneSpeedRequestApiSpeedList(const AdjustPtsSceneSpeedRequestApiSpeedList &) = default ;
    AdjustPtsSceneSpeedRequestApiSpeedList(AdjustPtsSceneSpeedRequestApiSpeedList &&) = default ;
    AdjustPtsSceneSpeedRequestApiSpeedList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AdjustPtsSceneSpeedRequestApiSpeedList() = default ;
    AdjustPtsSceneSpeedRequestApiSpeedList& operator=(const AdjustPtsSceneSpeedRequestApiSpeedList &) = default ;
    AdjustPtsSceneSpeedRequestApiSpeedList& operator=(AdjustPtsSceneSpeedRequestApiSpeedList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->speed_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline AdjustPtsSceneSpeedRequestApiSpeedList& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline int64_t speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0L) };
    inline AdjustPtsSceneSpeedRequestApiSpeedList& setSpeed(int64_t speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


  protected:
    // The API ID. You can find the information of the API corresponding to the ID in the Relation response parameter of the GetPtsSceneRunningData operation based on the ID.
    std::shared_ptr<string> apiId_ = nullptr;
    // The new stress. In concurrency mode, the new stress is the concurrency. In RPS mode, the new stress is the RPS.
    std::shared_ptr<int64_t> speed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
