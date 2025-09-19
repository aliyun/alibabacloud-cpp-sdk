// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERISKNUMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERISKNUMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceRiskNumResponseBodyInstanceRiskNum.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInstanceRiskNumResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRiskNumResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceRiskNum, instanceRiskNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRiskNumResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceRiskNum, instanceRiskNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstanceRiskNumResponseBody() = default ;
    ListInstanceRiskNumResponseBody(const ListInstanceRiskNumResponseBody &) = default ;
    ListInstanceRiskNumResponseBody(ListInstanceRiskNumResponseBody &&) = default ;
    ListInstanceRiskNumResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRiskNumResponseBody() = default ;
    ListInstanceRiskNumResponseBody& operator=(const ListInstanceRiskNumResponseBody &) = default ;
    ListInstanceRiskNumResponseBody& operator=(ListInstanceRiskNumResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceRiskNum_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceRiskNum Field Functions 
    bool hasInstanceRiskNum() const { return this->instanceRiskNum_ != nullptr;};
    void deleteInstanceRiskNum() { this->instanceRiskNum_ = nullptr;};
    inline const vector<ListInstanceRiskNumResponseBodyInstanceRiskNum> & instanceRiskNum() const { DARABONBA_PTR_GET_CONST(instanceRiskNum_, vector<ListInstanceRiskNumResponseBodyInstanceRiskNum>) };
    inline vector<ListInstanceRiskNumResponseBodyInstanceRiskNum> instanceRiskNum() { DARABONBA_PTR_GET(instanceRiskNum_, vector<ListInstanceRiskNumResponseBodyInstanceRiskNum>) };
    inline ListInstanceRiskNumResponseBody& setInstanceRiskNum(const vector<ListInstanceRiskNumResponseBodyInstanceRiskNum> & instanceRiskNum) { DARABONBA_PTR_SET_VALUE(instanceRiskNum_, instanceRiskNum) };
    inline ListInstanceRiskNumResponseBody& setInstanceRiskNum(vector<ListInstanceRiskNumResponseBodyInstanceRiskNum> && instanceRiskNum) { DARABONBA_PTR_SET_RVALUE(instanceRiskNum_, instanceRiskNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceRiskNumResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the risks in the instance.
    std::shared_ptr<vector<ListInstanceRiskNumResponseBodyInstanceRiskNum>> instanceRiskNum_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
