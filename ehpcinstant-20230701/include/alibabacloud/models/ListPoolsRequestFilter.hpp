// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOOLSREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTPOOLSREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListPoolsRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoolsRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(PoolName, poolName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeCreatedAfter, timeCreatedAfter_);
      DARABONBA_PTR_TO_JSON(TimeCreatedBefore, timeCreatedBefore_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoolsRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(PoolName, poolName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeCreatedAfter, timeCreatedAfter_);
      DARABONBA_PTR_FROM_JSON(TimeCreatedBefore, timeCreatedBefore_);
    };
    ListPoolsRequestFilter() = default ;
    ListPoolsRequestFilter(const ListPoolsRequestFilter &) = default ;
    ListPoolsRequestFilter(ListPoolsRequestFilter &&) = default ;
    ListPoolsRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoolsRequestFilter() = default ;
    ListPoolsRequestFilter& operator=(const ListPoolsRequestFilter &) = default ;
    ListPoolsRequestFilter& operator=(ListPoolsRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->poolName_ != nullptr
        && this->status_ != nullptr && this->timeCreatedAfter_ != nullptr && this->timeCreatedBefore_ != nullptr; };
    // poolName Field Functions 
    bool hasPoolName() const { return this->poolName_ != nullptr;};
    void deletePoolName() { this->poolName_ = nullptr;};
    inline const vector<string> & poolName() const { DARABONBA_PTR_GET_CONST(poolName_, vector<string>) };
    inline vector<string> poolName() { DARABONBA_PTR_GET(poolName_, vector<string>) };
    inline ListPoolsRequestFilter& setPoolName(const vector<string> & poolName) { DARABONBA_PTR_SET_VALUE(poolName_, poolName) };
    inline ListPoolsRequestFilter& setPoolName(vector<string> && poolName) { DARABONBA_PTR_SET_RVALUE(poolName_, poolName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & status() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> status() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline ListPoolsRequestFilter& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ListPoolsRequestFilter& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // timeCreatedAfter Field Functions 
    bool hasTimeCreatedAfter() const { return this->timeCreatedAfter_ != nullptr;};
    void deleteTimeCreatedAfter() { this->timeCreatedAfter_ = nullptr;};
    inline int32_t timeCreatedAfter() const { DARABONBA_PTR_GET_DEFAULT(timeCreatedAfter_, 0) };
    inline ListPoolsRequestFilter& setTimeCreatedAfter(int32_t timeCreatedAfter) { DARABONBA_PTR_SET_VALUE(timeCreatedAfter_, timeCreatedAfter) };


    // timeCreatedBefore Field Functions 
    bool hasTimeCreatedBefore() const { return this->timeCreatedBefore_ != nullptr;};
    void deleteTimeCreatedBefore() { this->timeCreatedBefore_ = nullptr;};
    inline int32_t timeCreatedBefore() const { DARABONBA_PTR_GET_DEFAULT(timeCreatedBefore_, 0) };
    inline ListPoolsRequestFilter& setTimeCreatedBefore(int32_t timeCreatedBefore) { DARABONBA_PTR_SET_VALUE(timeCreatedBefore_, timeCreatedBefore) };


  protected:
    std::shared_ptr<vector<string>> poolName_ = nullptr;
    std::shared_ptr<vector<string>> status_ = nullptr;
    std::shared_ptr<int32_t> timeCreatedAfter_ = nullptr;
    std::shared_ptr<int32_t> timeCreatedBefore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
