// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDrdsDbInstanceResponseBodyDbInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDbInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDbInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstance, dbInstance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDbInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstance, dbInstance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDrdsDbInstanceResponseBody() = default ;
    DescribeDrdsDbInstanceResponseBody(const DescribeDrdsDbInstanceResponseBody &) = default ;
    DescribeDrdsDbInstanceResponseBody(DescribeDrdsDbInstanceResponseBody &&) = default ;
    DescribeDrdsDbInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDbInstanceResponseBody() = default ;
    DescribeDrdsDbInstanceResponseBody& operator=(const DescribeDrdsDbInstanceResponseBody &) = default ;
    DescribeDrdsDbInstanceResponseBody& operator=(DescribeDrdsDbInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbInstance_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // dbInstance Field Functions 
    bool hasDbInstance() const { return this->dbInstance_ != nullptr;};
    void deleteDbInstance() { this->dbInstance_ = nullptr;};
    inline const DescribeDrdsDbInstanceResponseBodyDbInstance & dbInstance() const { DARABONBA_PTR_GET_CONST(dbInstance_, DescribeDrdsDbInstanceResponseBodyDbInstance) };
    inline DescribeDrdsDbInstanceResponseBodyDbInstance dbInstance() { DARABONBA_PTR_GET(dbInstance_, DescribeDrdsDbInstanceResponseBodyDbInstance) };
    inline DescribeDrdsDbInstanceResponseBody& setDbInstance(const DescribeDrdsDbInstanceResponseBodyDbInstance & dbInstance) { DARABONBA_PTR_SET_VALUE(dbInstance_, dbInstance) };
    inline DescribeDrdsDbInstanceResponseBody& setDbInstance(DescribeDrdsDbInstanceResponseBodyDbInstance && dbInstance) { DARABONBA_PTR_SET_RVALUE(dbInstance_, dbInstance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDrdsDbInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDrdsDbInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The detailed information about the returned custom ApsaraDB RDS for MySQL instance.
    std::shared_ptr<DescribeDrdsDbInstanceResponseBodyDbInstance> dbInstance_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
