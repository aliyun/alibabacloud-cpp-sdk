// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERHONORSRESPONSEBODYHONORSGRANTHISTORY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERHONORSRESPONSEBODYHONORSGRANTHISTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryUserHonorsResponseBodyHonorsGrantHistory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserHonorsResponseBodyHonorsGrantHistory& obj) { 
      DARABONBA_PTR_TO_JSON(grantTime, grantTime_);
      DARABONBA_PTR_TO_JSON(senderUserid, senderUserid_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserHonorsResponseBodyHonorsGrantHistory& obj) { 
      DARABONBA_PTR_FROM_JSON(grantTime, grantTime_);
      DARABONBA_PTR_FROM_JSON(senderUserid, senderUserid_);
    };
    QueryUserHonorsResponseBodyHonorsGrantHistory() = default ;
    QueryUserHonorsResponseBodyHonorsGrantHistory(const QueryUserHonorsResponseBodyHonorsGrantHistory &) = default ;
    QueryUserHonorsResponseBodyHonorsGrantHistory(QueryUserHonorsResponseBodyHonorsGrantHistory &&) = default ;
    QueryUserHonorsResponseBodyHonorsGrantHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserHonorsResponseBodyHonorsGrantHistory() = default ;
    QueryUserHonorsResponseBodyHonorsGrantHistory& operator=(const QueryUserHonorsResponseBodyHonorsGrantHistory &) = default ;
    QueryUserHonorsResponseBodyHonorsGrantHistory& operator=(QueryUserHonorsResponseBodyHonorsGrantHistory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->grantTime_ != nullptr
        && this->senderUserid_ != nullptr; };
    // grantTime Field Functions 
    bool hasGrantTime() const { return this->grantTime_ != nullptr;};
    void deleteGrantTime() { this->grantTime_ = nullptr;};
    inline int64_t grantTime() const { DARABONBA_PTR_GET_DEFAULT(grantTime_, 0L) };
    inline QueryUserHonorsResponseBodyHonorsGrantHistory& setGrantTime(int64_t grantTime) { DARABONBA_PTR_SET_VALUE(grantTime_, grantTime) };


    // senderUserid Field Functions 
    bool hasSenderUserid() const { return this->senderUserid_ != nullptr;};
    void deleteSenderUserid() { this->senderUserid_ = nullptr;};
    inline string senderUserid() const { DARABONBA_PTR_GET_DEFAULT(senderUserid_, "") };
    inline QueryUserHonorsResponseBodyHonorsGrantHistory& setSenderUserid(string senderUserid) { DARABONBA_PTR_SET_VALUE(senderUserid_, senderUserid) };


  protected:
    std::shared_ptr<int64_t> grantTime_ = nullptr;
    std::shared_ptr<string> senderUserid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
