// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKTYPELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKTYPELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAttackTypeListResponseBodyAttackTypeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAttackTypeListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackTypeListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackTypeList, attackTypeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackTypeListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackTypeList, attackTypeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAttackTypeListResponseBody() = default ;
    GetAttackTypeListResponseBody(const GetAttackTypeListResponseBody &) = default ;
    GetAttackTypeListResponseBody(GetAttackTypeListResponseBody &&) = default ;
    GetAttackTypeListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackTypeListResponseBody() = default ;
    GetAttackTypeListResponseBody& operator=(const GetAttackTypeListResponseBody &) = default ;
    GetAttackTypeListResponseBody& operator=(GetAttackTypeListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attackTypeList_ != nullptr
        && this->requestId_ != nullptr; };
    // attackTypeList Field Functions 
    bool hasAttackTypeList() const { return this->attackTypeList_ != nullptr;};
    void deleteAttackTypeList() { this->attackTypeList_ = nullptr;};
    inline const vector<GetAttackTypeListResponseBodyAttackTypeList> & attackTypeList() const { DARABONBA_PTR_GET_CONST(attackTypeList_, vector<GetAttackTypeListResponseBodyAttackTypeList>) };
    inline vector<GetAttackTypeListResponseBodyAttackTypeList> attackTypeList() { DARABONBA_PTR_GET(attackTypeList_, vector<GetAttackTypeListResponseBodyAttackTypeList>) };
    inline GetAttackTypeListResponseBody& setAttackTypeList(const vector<GetAttackTypeListResponseBodyAttackTypeList> & attackTypeList) { DARABONBA_PTR_SET_VALUE(attackTypeList_, attackTypeList) };
    inline GetAttackTypeListResponseBody& setAttackTypeList(vector<GetAttackTypeListResponseBodyAttackTypeList> && attackTypeList) { DARABONBA_PTR_SET_RVALUE(attackTypeList_, attackTypeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAttackTypeListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The attack types.
    std::shared_ptr<vector<GetAttackTypeListResponseBodyAttackTypeList>> attackTypeList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
