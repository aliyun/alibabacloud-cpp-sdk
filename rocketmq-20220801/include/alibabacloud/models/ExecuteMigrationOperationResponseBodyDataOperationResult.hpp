// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEMIGRATIONOPERATIONRESPONSEBODYDATAOPERATIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEMIGRATIONOPERATIONRESPONSEBODYDATAOPERATIONRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ExecuteMigrationOperationResponseBodyDataOperationResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteMigrationOperationResponseBodyDataOperationResult& obj) { 
      DARABONBA_ANY_TO_JSON(resultData, resultData_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteMigrationOperationResponseBodyDataOperationResult& obj) { 
      DARABONBA_ANY_FROM_JSON(resultData, resultData_);
    };
    ExecuteMigrationOperationResponseBodyDataOperationResult() = default ;
    ExecuteMigrationOperationResponseBodyDataOperationResult(const ExecuteMigrationOperationResponseBodyDataOperationResult &) = default ;
    ExecuteMigrationOperationResponseBodyDataOperationResult(ExecuteMigrationOperationResponseBodyDataOperationResult &&) = default ;
    ExecuteMigrationOperationResponseBodyDataOperationResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteMigrationOperationResponseBodyDataOperationResult() = default ;
    ExecuteMigrationOperationResponseBodyDataOperationResult& operator=(const ExecuteMigrationOperationResponseBodyDataOperationResult &) = default ;
    ExecuteMigrationOperationResponseBodyDataOperationResult& operator=(ExecuteMigrationOperationResponseBodyDataOperationResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resultData_ == nullptr; };
    // resultData Field Functions 
    bool hasResultData() const { return this->resultData_ != nullptr;};
    void deleteResultData() { this->resultData_ = nullptr;};
    inline     const Darabonba::Json & resultData() const { DARABONBA_GET(resultData_) };
    Darabonba::Json & resultData() { DARABONBA_GET(resultData_) };
    inline ExecuteMigrationOperationResponseBodyDataOperationResult& setResultData(const Darabonba::Json & resultData) { DARABONBA_SET_VALUE(resultData_, resultData) };
    inline ExecuteMigrationOperationResponseBodyDataOperationResult& setResultData(Darabonba::Json & resultData) { DARABONBA_SET_RVALUE(resultData_, resultData) };


  protected:
    Darabonba::Json resultData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
