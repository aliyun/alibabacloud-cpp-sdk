// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERHONORSRESPONSEBODYHONORS_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERHONORSRESPONSEBODYHONORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryUserHonorsResponseBodyHonorsGrantHistory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryUserHonorsResponseBodyHonors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserHonorsResponseBodyHonors& obj) { 
      DARABONBA_PTR_TO_JSON(expirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(grantHistory, grantHistory_);
      DARABONBA_PTR_TO_JSON(honorDesc, honorDesc_);
      DARABONBA_PTR_TO_JSON(honorId, honorId_);
      DARABONBA_PTR_TO_JSON(honorName, honorName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserHonorsResponseBodyHonors& obj) { 
      DARABONBA_PTR_FROM_JSON(expirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(grantHistory, grantHistory_);
      DARABONBA_PTR_FROM_JSON(honorDesc, honorDesc_);
      DARABONBA_PTR_FROM_JSON(honorId, honorId_);
      DARABONBA_PTR_FROM_JSON(honorName, honorName_);
    };
    QueryUserHonorsResponseBodyHonors() = default ;
    QueryUserHonorsResponseBodyHonors(const QueryUserHonorsResponseBodyHonors &) = default ;
    QueryUserHonorsResponseBodyHonors(QueryUserHonorsResponseBodyHonors &&) = default ;
    QueryUserHonorsResponseBodyHonors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserHonorsResponseBodyHonors() = default ;
    QueryUserHonorsResponseBodyHonors& operator=(const QueryUserHonorsResponseBodyHonors &) = default ;
    QueryUserHonorsResponseBodyHonors& operator=(QueryUserHonorsResponseBodyHonors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expirationTime_ != nullptr
        && this->grantHistory_ != nullptr && this->honorDesc_ != nullptr && this->honorId_ != nullptr && this->honorName_ != nullptr; };
    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline int64_t expirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
    inline QueryUserHonorsResponseBodyHonors& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // grantHistory Field Functions 
    bool hasGrantHistory() const { return this->grantHistory_ != nullptr;};
    void deleteGrantHistory() { this->grantHistory_ = nullptr;};
    inline const vector<Models::QueryUserHonorsResponseBodyHonorsGrantHistory> & grantHistory() const { DARABONBA_PTR_GET_CONST(grantHistory_, vector<Models::QueryUserHonorsResponseBodyHonorsGrantHistory>) };
    inline vector<Models::QueryUserHonorsResponseBodyHonorsGrantHistory> grantHistory() { DARABONBA_PTR_GET(grantHistory_, vector<Models::QueryUserHonorsResponseBodyHonorsGrantHistory>) };
    inline QueryUserHonorsResponseBodyHonors& setGrantHistory(const vector<Models::QueryUserHonorsResponseBodyHonorsGrantHistory> & grantHistory) { DARABONBA_PTR_SET_VALUE(grantHistory_, grantHistory) };
    inline QueryUserHonorsResponseBodyHonors& setGrantHistory(vector<Models::QueryUserHonorsResponseBodyHonorsGrantHistory> && grantHistory) { DARABONBA_PTR_SET_RVALUE(grantHistory_, grantHistory) };


    // honorDesc Field Functions 
    bool hasHonorDesc() const { return this->honorDesc_ != nullptr;};
    void deleteHonorDesc() { this->honorDesc_ = nullptr;};
    inline string honorDesc() const { DARABONBA_PTR_GET_DEFAULT(honorDesc_, "") };
    inline QueryUserHonorsResponseBodyHonors& setHonorDesc(string honorDesc) { DARABONBA_PTR_SET_VALUE(honorDesc_, honorDesc) };


    // honorId Field Functions 
    bool hasHonorId() const { return this->honorId_ != nullptr;};
    void deleteHonorId() { this->honorId_ = nullptr;};
    inline string honorId() const { DARABONBA_PTR_GET_DEFAULT(honorId_, "") };
    inline QueryUserHonorsResponseBodyHonors& setHonorId(string honorId) { DARABONBA_PTR_SET_VALUE(honorId_, honorId) };


    // honorName Field Functions 
    bool hasHonorName() const { return this->honorName_ != nullptr;};
    void deleteHonorName() { this->honorName_ = nullptr;};
    inline string honorName() const { DARABONBA_PTR_GET_DEFAULT(honorName_, "") };
    inline QueryUserHonorsResponseBodyHonors& setHonorName(string honorName) { DARABONBA_PTR_SET_VALUE(honorName_, honorName) };


  protected:
    std::shared_ptr<int64_t> expirationTime_ = nullptr;
    std::shared_ptr<vector<Models::QueryUserHonorsResponseBodyHonorsGrantHistory>> grantHistory_ = nullptr;
    std::shared_ptr<string> honorDesc_ = nullptr;
    std::shared_ptr<string> honorId_ = nullptr;
    std::shared_ptr<string> honorName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
