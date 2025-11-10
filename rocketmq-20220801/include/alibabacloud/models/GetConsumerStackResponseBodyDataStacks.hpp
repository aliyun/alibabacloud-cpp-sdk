// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERSTACKRESPONSEBODYDATASTACKS_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERSTACKRESPONSEBODYDATASTACKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetConsumerStackResponseBodyDataStacks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerStackResponseBodyDataStacks& obj) { 
      DARABONBA_PTR_TO_JSON(thread, thread_);
      DARABONBA_PTR_TO_JSON(tracks, tracks_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerStackResponseBodyDataStacks& obj) { 
      DARABONBA_PTR_FROM_JSON(thread, thread_);
      DARABONBA_PTR_FROM_JSON(tracks, tracks_);
    };
    GetConsumerStackResponseBodyDataStacks() = default ;
    GetConsumerStackResponseBodyDataStacks(const GetConsumerStackResponseBodyDataStacks &) = default ;
    GetConsumerStackResponseBodyDataStacks(GetConsumerStackResponseBodyDataStacks &&) = default ;
    GetConsumerStackResponseBodyDataStacks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerStackResponseBodyDataStacks() = default ;
    GetConsumerStackResponseBodyDataStacks& operator=(const GetConsumerStackResponseBodyDataStacks &) = default ;
    GetConsumerStackResponseBodyDataStacks& operator=(GetConsumerStackResponseBodyDataStacks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->thread_ == nullptr
        && return this->tracks_ == nullptr; };
    // thread Field Functions 
    bool hasThread() const { return this->thread_ != nullptr;};
    void deleteThread() { this->thread_ = nullptr;};
    inline string thread() const { DARABONBA_PTR_GET_DEFAULT(thread_, "") };
    inline GetConsumerStackResponseBodyDataStacks& setThread(string thread) { DARABONBA_PTR_SET_VALUE(thread_, thread) };


    // tracks Field Functions 
    bool hasTracks() const { return this->tracks_ != nullptr;};
    void deleteTracks() { this->tracks_ = nullptr;};
    inline const vector<string> & tracks() const { DARABONBA_PTR_GET_CONST(tracks_, vector<string>) };
    inline vector<string> tracks() { DARABONBA_PTR_GET(tracks_, vector<string>) };
    inline GetConsumerStackResponseBodyDataStacks& setTracks(const vector<string> & tracks) { DARABONBA_PTR_SET_VALUE(tracks_, tracks) };
    inline GetConsumerStackResponseBodyDataStacks& setTracks(vector<string> && tracks) { DARABONBA_PTR_SET_RVALUE(tracks_, tracks) };


  protected:
    // Thread id.
    std::shared_ptr<string> thread_ = nullptr;
    // Stack Information.
    std::shared_ptr<vector<string>> tracks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
