// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EVALUATERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class EvaluateResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluateResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceAvailable, DBInstanceAvailable_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluateResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceAvailable, DBInstanceAvailable_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EvaluateResourceResponseBody() = default ;
    EvaluateResourceResponseBody(const EvaluateResourceResponseBody &) = default ;
    EvaluateResourceResponseBody(EvaluateResourceResponseBody &&) = default ;
    EvaluateResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluateResourceResponseBody() = default ;
    EvaluateResourceResponseBody& operator=(const EvaluateResourceResponseBody &) = default ;
    EvaluateResourceResponseBody& operator=(EvaluateResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceAvailable_ == nullptr
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceAvailable Field Functions 
    bool hasDBInstanceAvailable() const { return this->DBInstanceAvailable_ != nullptr;};
    void deleteDBInstanceAvailable() { this->DBInstanceAvailable_ = nullptr;};
    inline string getDBInstanceAvailable() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceAvailable_, "") };
    inline EvaluateResourceResponseBody& setDBInstanceAvailable(string DBInstanceAvailable) { DARABONBA_PTR_SET_VALUE(DBInstanceAvailable_, DBInstanceAvailable) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline EvaluateResourceResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline EvaluateResourceResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EvaluateResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the resources are sufficient in the region. Valid values:
    // 
    // *   **1**: The resources are sufficient.
    // *   **0**: The resources are insufficient.
    shared_ptr<string> DBInstanceAvailable_ {};
    // The database engine of the instance. Only MongoDB is returned.
    shared_ptr<string> engine_ {};
    // The version of the database engine.
    shared_ptr<string> engineVersion_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
