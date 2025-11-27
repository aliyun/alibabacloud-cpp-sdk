// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CALCULATEDBINSTANCEWEIGHTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CALCULATEDBINSTANCEWEIGHTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CalculateDBInstanceWeightResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CalculateDBInstanceWeightResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CalculateDBInstanceWeightResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CalculateDBInstanceWeightResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CalculateDBInstanceWeightResponseBody() = default ;
    CalculateDBInstanceWeightResponseBody(const CalculateDBInstanceWeightResponseBody &) = default ;
    CalculateDBInstanceWeightResponseBody(CalculateDBInstanceWeightResponseBody &&) = default ;
    CalculateDBInstanceWeightResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CalculateDBInstanceWeightResponseBody() = default ;
    CalculateDBInstanceWeightResponseBody& operator=(const CalculateDBInstanceWeightResponseBody &) = default ;
    CalculateDBInstanceWeightResponseBody& operator=(CalculateDBInstanceWeightResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const CalculateDBInstanceWeightResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, CalculateDBInstanceWeightResponseBodyItems) };
    inline CalculateDBInstanceWeightResponseBodyItems items() { DARABONBA_PTR_GET(items_, CalculateDBInstanceWeightResponseBodyItems) };
    inline CalculateDBInstanceWeightResponseBody& setItems(const CalculateDBInstanceWeightResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline CalculateDBInstanceWeightResponseBody& setItems(CalculateDBInstanceWeightResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CalculateDBInstanceWeightResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of information about the system-assigned read weight.
    std::shared_ptr<CalculateDBInstanceWeightResponseBodyItems> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
