// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATEREGIONRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EVALUATEREGIONRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class EvaluateRegionResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluateRegionResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceAvailable, DBInstanceAvailable_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluateRegionResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceAvailable, DBInstanceAvailable_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EvaluateRegionResourceResponseBody() = default ;
    EvaluateRegionResourceResponseBody(const EvaluateRegionResourceResponseBody &) = default ;
    EvaluateRegionResourceResponseBody(EvaluateRegionResourceResponseBody &&) = default ;
    EvaluateRegionResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluateRegionResourceResponseBody() = default ;
    EvaluateRegionResourceResponseBody& operator=(const EvaluateRegionResourceResponseBody &) = default ;
    EvaluateRegionResourceResponseBody& operator=(EvaluateRegionResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceAvailable_ == nullptr
        && return this->DBType_ == nullptr && return this->DBVersion_ == nullptr && return this->requestId_ == nullptr; };
    // DBInstanceAvailable Field Functions 
    bool hasDBInstanceAvailable() const { return this->DBInstanceAvailable_ != nullptr;};
    void deleteDBInstanceAvailable() { this->DBInstanceAvailable_ = nullptr;};
    inline string DBInstanceAvailable() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceAvailable_, "") };
    inline EvaluateRegionResourceResponseBody& setDBInstanceAvailable(string DBInstanceAvailable) { DARABONBA_PTR_SET_VALUE(DBInstanceAvailable_, DBInstanceAvailable) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline EvaluateRegionResourceResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline EvaluateRegionResourceResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EvaluateRegionResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether sufficient resources are available. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> DBInstanceAvailable_ = nullptr;
    // The type of the database engine. Valid values:
    // 
    // *   **MySQL**
    // *   **PostgreSQL**
    // *   **Oracle**
    std::shared_ptr<string> DBType_ = nullptr;
    // The version of the database engine
    // 
    // *   Valid values for the MySQL database engine:
    // 
    //     *   **5.6**
    //     *   **5.7**
    //     *   **8.0**
    // 
    // *   Valid values for the PostgreSQL database engine:
    // 
    //     *   **11**
    //     *   **14**
    // 
    // *   Valid value for the Oracle database engine: **11**
    std::shared_ptr<string> DBVersion_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
