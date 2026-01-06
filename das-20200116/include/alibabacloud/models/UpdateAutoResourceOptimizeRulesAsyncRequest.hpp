// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTORESOURCEOPTIMIZERULESASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTORESOURCEOPTIMIZERULESASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class UpdateAutoResourceOptimizeRulesAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAutoResourceOptimizeRulesAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(ResultId, resultId_);
      DARABONBA_PTR_TO_JSON(TableFragmentationRatio, tableFragmentationRatio_);
      DARABONBA_PTR_TO_JSON(TableSpaceSize, tableSpaceSize_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAutoResourceOptimizeRulesAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(ResultId, resultId_);
      DARABONBA_PTR_FROM_JSON(TableFragmentationRatio, tableFragmentationRatio_);
      DARABONBA_PTR_FROM_JSON(TableSpaceSize, tableSpaceSize_);
    };
    UpdateAutoResourceOptimizeRulesAsyncRequest() = default ;
    UpdateAutoResourceOptimizeRulesAsyncRequest(const UpdateAutoResourceOptimizeRulesAsyncRequest &) = default ;
    UpdateAutoResourceOptimizeRulesAsyncRequest(UpdateAutoResourceOptimizeRulesAsyncRequest &&) = default ;
    UpdateAutoResourceOptimizeRulesAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAutoResourceOptimizeRulesAsyncRequest() = default ;
    UpdateAutoResourceOptimizeRulesAsyncRequest& operator=(const UpdateAutoResourceOptimizeRulesAsyncRequest &) = default ;
    UpdateAutoResourceOptimizeRulesAsyncRequest& operator=(UpdateAutoResourceOptimizeRulesAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleContext_ == nullptr
        && this->instanceIds_ == nullptr && this->resultId_ == nullptr && this->tableFragmentationRatio_ == nullptr && this->tableSpaceSize_ == nullptr; };
    // consoleContext Field Functions 
    bool hasConsoleContext() const { return this->consoleContext_ != nullptr;};
    void deleteConsoleContext() { this->consoleContext_ = nullptr;};
    inline string getConsoleContext() const { DARABONBA_PTR_GET_DEFAULT(consoleContext_, "") };
    inline UpdateAutoResourceOptimizeRulesAsyncRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline UpdateAutoResourceOptimizeRulesAsyncRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // resultId Field Functions 
    bool hasResultId() const { return this->resultId_ != nullptr;};
    void deleteResultId() { this->resultId_ = nullptr;};
    inline string getResultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
    inline UpdateAutoResourceOptimizeRulesAsyncRequest& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


    // tableFragmentationRatio Field Functions 
    bool hasTableFragmentationRatio() const { return this->tableFragmentationRatio_ != nullptr;};
    void deleteTableFragmentationRatio() { this->tableFragmentationRatio_ = nullptr;};
    inline double getTableFragmentationRatio() const { DARABONBA_PTR_GET_DEFAULT(tableFragmentationRatio_, 0.0) };
    inline UpdateAutoResourceOptimizeRulesAsyncRequest& setTableFragmentationRatio(double tableFragmentationRatio) { DARABONBA_PTR_SET_VALUE(tableFragmentationRatio_, tableFragmentationRatio) };


    // tableSpaceSize Field Functions 
    bool hasTableSpaceSize() const { return this->tableSpaceSize_ != nullptr;};
    void deleteTableSpaceSize() { this->tableSpaceSize_ = nullptr;};
    inline double getTableSpaceSize() const { DARABONBA_PTR_GET_DEFAULT(tableSpaceSize_, 0.0) };
    inline UpdateAutoResourceOptimizeRulesAsyncRequest& setTableSpaceSize(double tableSpaceSize) { DARABONBA_PTR_SET_VALUE(tableSpaceSize_, tableSpaceSize) };


  protected:
    // The reserved parameter.
    shared_ptr<string> consoleContext_ {};
    // The database instance IDs.
    // 
    // >  Set this parameter to a JSON array that consists of multiple instance IDs. Separate instance IDs with commas (,). Example: `[\\"Instance ID1\\", \\"Instance ID2\\"]`.
    // 
    // This parameter is required.
    shared_ptr<string> instanceIds_ {};
    // The ID of the asynchronous request.
    // 
    // >  Asynchronous calls do not immediately return the complete results. To obtain the complete results, you must use the value of **ResultId** returned in the response to re-initiate the call until the value of **isFinish** is **true**.**** In this case, you must call this operation at least twice.
    shared_ptr<string> resultId_ {};
    // The fragmentation rate that triggers automatic fragment recycling of a single physical table. Valid values: **0.10** to **0.99**.
    // 
    // This parameter is required.
    shared_ptr<double> tableFragmentationRatio_ {};
    // The minimum storage usage that triggers automatic fragment recycling of a single physical table. Valid values: **5** to **100**. Unit: GB.
    // 
    // This parameter is required.
    shared_ptr<double> tableSpaceSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
