// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTATTACKTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTATTACKTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDDosEventAttackTypeResponseBodyAttackTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDosEventAttackTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosEventAttackTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackTypes, attackTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosEventAttackTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackTypes, attackTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDDosEventAttackTypeResponseBody() = default ;
    DescribeDDosEventAttackTypeResponseBody(const DescribeDDosEventAttackTypeResponseBody &) = default ;
    DescribeDDosEventAttackTypeResponseBody(DescribeDDosEventAttackTypeResponseBody &&) = default ;
    DescribeDDosEventAttackTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosEventAttackTypeResponseBody() = default ;
    DescribeDDosEventAttackTypeResponseBody& operator=(const DescribeDDosEventAttackTypeResponseBody &) = default ;
    DescribeDDosEventAttackTypeResponseBody& operator=(DescribeDDosEventAttackTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackTypes_ == nullptr
        && return this->requestId_ == nullptr; };
    // attackTypes Field Functions 
    bool hasAttackTypes() const { return this->attackTypes_ != nullptr;};
    void deleteAttackTypes() { this->attackTypes_ = nullptr;};
    inline const vector<DescribeDDosEventAttackTypeResponseBodyAttackTypes> & attackTypes() const { DARABONBA_PTR_GET_CONST(attackTypes_, vector<DescribeDDosEventAttackTypeResponseBodyAttackTypes>) };
    inline vector<DescribeDDosEventAttackTypeResponseBodyAttackTypes> attackTypes() { DARABONBA_PTR_GET(attackTypes_, vector<DescribeDDosEventAttackTypeResponseBodyAttackTypes>) };
    inline DescribeDDosEventAttackTypeResponseBody& setAttackTypes(const vector<DescribeDDosEventAttackTypeResponseBodyAttackTypes> & attackTypes) { DARABONBA_PTR_SET_VALUE(attackTypes_, attackTypes) };
    inline DescribeDDosEventAttackTypeResponseBody& setAttackTypes(vector<DescribeDDosEventAttackTypeResponseBodyAttackTypes> && attackTypes) { DARABONBA_PTR_SET_RVALUE(attackTypes_, attackTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDosEventAttackTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the attack types.
    std::shared_ptr<vector<DescribeDDosEventAttackTypeResponseBodyAttackTypes>> attackTypes_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
