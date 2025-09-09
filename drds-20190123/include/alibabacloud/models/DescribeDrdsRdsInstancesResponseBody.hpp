// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSRDSINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSRDSINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDrdsRdsInstancesResponseBodyDbInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsRdsInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsRdsInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstances, dbInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsRdsInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstances, dbInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDrdsRdsInstancesResponseBody() = default ;
    DescribeDrdsRdsInstancesResponseBody(const DescribeDrdsRdsInstancesResponseBody &) = default ;
    DescribeDrdsRdsInstancesResponseBody(DescribeDrdsRdsInstancesResponseBody &&) = default ;
    DescribeDrdsRdsInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsRdsInstancesResponseBody() = default ;
    DescribeDrdsRdsInstancesResponseBody& operator=(const DescribeDrdsRdsInstancesResponseBody &) = default ;
    DescribeDrdsRdsInstancesResponseBody& operator=(DescribeDrdsRdsInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbInstances_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // dbInstances Field Functions 
    bool hasDbInstances() const { return this->dbInstances_ != nullptr;};
    void deleteDbInstances() { this->dbInstances_ = nullptr;};
    inline const DescribeDrdsRdsInstancesResponseBodyDbInstances & dbInstances() const { DARABONBA_PTR_GET_CONST(dbInstances_, DescribeDrdsRdsInstancesResponseBodyDbInstances) };
    inline DescribeDrdsRdsInstancesResponseBodyDbInstances dbInstances() { DARABONBA_PTR_GET(dbInstances_, DescribeDrdsRdsInstancesResponseBodyDbInstances) };
    inline DescribeDrdsRdsInstancesResponseBody& setDbInstances(const DescribeDrdsRdsInstancesResponseBodyDbInstances & dbInstances) { DARABONBA_PTR_SET_VALUE(dbInstances_, dbInstances) };
    inline DescribeDrdsRdsInstancesResponseBody& setDbInstances(DescribeDrdsRdsInstancesResponseBodyDbInstances && dbInstances) { DARABONBA_PTR_SET_RVALUE(dbInstances_, dbInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDrdsRdsInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDrdsRdsInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the custom ApsaraDB RDS for MySQL instances at the storage layer.
    std::shared_ptr<DescribeDrdsRdsInstancesResponseBodyDbInstances> dbInstances_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
