// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREDISALLSESSIONRESPONSEBODYDATASOURCESTATS_HPP_
#define ALIBABACLOUD_MODELS_GETREDISALLSESSIONRESPONSEBODYDATASOURCESTATS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetRedisAllSessionResponseBodyDataSourceStats : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRedisAllSessionResponseBodyDataSourceStats& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, GetRedisAllSessionResponseBodyDataSourceStats& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    GetRedisAllSessionResponseBodyDataSourceStats() = default ;
    GetRedisAllSessionResponseBodyDataSourceStats(const GetRedisAllSessionResponseBodyDataSourceStats &) = default ;
    GetRedisAllSessionResponseBodyDataSourceStats(GetRedisAllSessionResponseBodyDataSourceStats &&) = default ;
    GetRedisAllSessionResponseBodyDataSourceStats(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRedisAllSessionResponseBodyDataSourceStats() = default ;
    GetRedisAllSessionResponseBodyDataSourceStats& operator=(const GetRedisAllSessionResponseBodyDataSourceStats &) = default ;
    GetRedisAllSessionResponseBodyDataSourceStats& operator=(GetRedisAllSessionResponseBodyDataSourceStats &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->ids_ != nullptr && this->key_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline GetRedisAllSessionResponseBodyDataSourceStats& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> ids() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline GetRedisAllSessionResponseBodyDataSourceStats& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline GetRedisAllSessionResponseBodyDataSourceStats& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetRedisAllSessionResponseBodyDataSourceStats& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    // The total number of sessions from the access source.
    std::shared_ptr<string> count_ = nullptr;
    // The client IDs.
    std::shared_ptr<vector<int64_t>> ids_ = nullptr;
    // The access source.
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
