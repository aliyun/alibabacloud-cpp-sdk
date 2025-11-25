// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPATTACKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPATTACKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainTopAttackListResponseBodyAttackList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainTopAttackListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopAttackListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackList, attackList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopAttackListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackList, attackList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainTopAttackListResponseBody() = default ;
    DescribeDomainTopAttackListResponseBody(const DescribeDomainTopAttackListResponseBody &) = default ;
    DescribeDomainTopAttackListResponseBody(DescribeDomainTopAttackListResponseBody &&) = default ;
    DescribeDomainTopAttackListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopAttackListResponseBody() = default ;
    DescribeDomainTopAttackListResponseBody& operator=(const DescribeDomainTopAttackListResponseBody &) = default ;
    DescribeDomainTopAttackListResponseBody& operator=(DescribeDomainTopAttackListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackList_ == nullptr
        && return this->requestId_ == nullptr; };
    // attackList Field Functions 
    bool hasAttackList() const { return this->attackList_ != nullptr;};
    void deleteAttackList() { this->attackList_ = nullptr;};
    inline const vector<DescribeDomainTopAttackListResponseBodyAttackList> & attackList() const { DARABONBA_PTR_GET_CONST(attackList_, vector<DescribeDomainTopAttackListResponseBodyAttackList>) };
    inline vector<DescribeDomainTopAttackListResponseBodyAttackList> attackList() { DARABONBA_PTR_GET(attackList_, vector<DescribeDomainTopAttackListResponseBodyAttackList>) };
    inline DescribeDomainTopAttackListResponseBody& setAttackList(const vector<DescribeDomainTopAttackListResponseBodyAttackList> & attackList) { DARABONBA_PTR_SET_VALUE(attackList_, attackList) };
    inline DescribeDomainTopAttackListResponseBody& setAttackList(vector<DescribeDomainTopAttackListResponseBodyAttackList> && attackList) { DARABONBA_PTR_SET_RVALUE(attackList_, attackList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainTopAttackListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The peak QPS of the website.
    std::shared_ptr<vector<DescribeDomainTopAttackListResponseBodyAttackList>> attackList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
