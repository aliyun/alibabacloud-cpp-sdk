// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFYPARAMETERLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFYPARAMETERLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeModifyParameterLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModifyParameterLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModifyParameterLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeModifyParameterLogResponseBody() = default ;
    DescribeModifyParameterLogResponseBody(const DescribeModifyParameterLogResponseBody &) = default ;
    DescribeModifyParameterLogResponseBody(DescribeModifyParameterLogResponseBody &&) = default ;
    DescribeModifyParameterLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModifyParameterLogResponseBody() = default ;
    DescribeModifyParameterLogResponseBody& operator=(const DescribeModifyParameterLogResponseBody &) = default ;
    DescribeModifyParameterLogResponseBody& operator=(DescribeModifyParameterLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(NewParameterValue, newParameterValue_);
        DARABONBA_PTR_TO_JSON(OldParameterValue, oldParameterValue_);
        DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(NewParameterValue, newParameterValue_);
        DARABONBA_PTR_FROM_JSON(OldParameterValue, oldParameterValue_);
        DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modifyTime_ == nullptr
        && this->newParameterValue_ == nullptr && this->oldParameterValue_ == nullptr && this->parameterName_ == nullptr && this->status_ == nullptr; };
      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Items& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // newParameterValue Field Functions 
      bool hasNewParameterValue() const { return this->newParameterValue_ != nullptr;};
      void deleteNewParameterValue() { this->newParameterValue_ = nullptr;};
      inline string getNewParameterValue() const { DARABONBA_PTR_GET_DEFAULT(newParameterValue_, "") };
      inline Items& setNewParameterValue(string newParameterValue) { DARABONBA_PTR_SET_VALUE(newParameterValue_, newParameterValue) };


      // oldParameterValue Field Functions 
      bool hasOldParameterValue() const { return this->oldParameterValue_ != nullptr;};
      void deleteOldParameterValue() { this->oldParameterValue_ = nullptr;};
      inline string getOldParameterValue() const { DARABONBA_PTR_GET_DEFAULT(oldParameterValue_, "") };
      inline Items& setOldParameterValue(string oldParameterValue) { DARABONBA_PTR_SET_VALUE(oldParameterValue_, oldParameterValue) };


      // parameterName Field Functions 
      bool hasParameterName() const { return this->parameterName_ != nullptr;};
      void deleteParameterName() { this->parameterName_ = nullptr;};
      inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
      inline Items& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> modifyTime_ {};
      shared_ptr<string> newParameterValue_ {};
      shared_ptr<string> oldParameterValue_ {};
      shared_ptr<string> parameterName_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->engine_ == nullptr
        && this->engineVersion_ == nullptr && this->items_ == nullptr && this->requestId_ == nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeModifyParameterLogResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeModifyParameterLogResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeModifyParameterLogResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeModifyParameterLogResponseBody::Items>) };
    inline vector<DescribeModifyParameterLogResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeModifyParameterLogResponseBody::Items>) };
    inline DescribeModifyParameterLogResponseBody& setItems(const vector<DescribeModifyParameterLogResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeModifyParameterLogResponseBody& setItems(vector<DescribeModifyParameterLogResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModifyParameterLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> engine_ {};
    shared_ptr<string> engineVersion_ {};
    shared_ptr<vector<DescribeModifyParameterLogResponseBody::Items>> items_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
