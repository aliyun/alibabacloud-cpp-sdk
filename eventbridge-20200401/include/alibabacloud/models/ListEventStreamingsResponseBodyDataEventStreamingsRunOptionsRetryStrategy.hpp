// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSRUNOPTIONSRETRYSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSRUNOPTIONSRETRYSTRATEGY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(PushRetryStrategy, pushRetryStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(PushRetryStrategy, pushRetryStrategy_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy(const ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy(ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy& operator=(ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pushRetryStrategy_ != nullptr; };
    // pushRetryStrategy Field Functions 
    bool hasPushRetryStrategy() const { return this->pushRetryStrategy_ != nullptr;};
    void deletePushRetryStrategy() { this->pushRetryStrategy_ = nullptr;};
    inline string pushRetryStrategy() const { DARABONBA_PTR_GET_DEFAULT(pushRetryStrategy_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy& setPushRetryStrategy(string pushRetryStrategy) { DARABONBA_PTR_SET_VALUE(pushRetryStrategy_, pushRetryStrategy) };


  protected:
    // The retry policy. Valid values: BACKOFF_RETRY and EXPONENTIAL_DECAY_RETRY.
    std::shared_ptr<string> pushRetryStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
