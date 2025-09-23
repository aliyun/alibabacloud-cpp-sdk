// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEMIGRATIONOPERATIONRESPONSEBODYDATAOPERATIONPARAM_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEMIGRATIONOPERATIONRESPONSEBODYDATAOPERATIONPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ExecuteMigrationOperationResponseBodyDataOperationParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteMigrationOperationResponseBodyDataOperationParam& obj) { 
      DARABONBA_ANY_TO_JSON(paramData, paramData_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteMigrationOperationResponseBodyDataOperationParam& obj) { 
      DARABONBA_ANY_FROM_JSON(paramData, paramData_);
    };
    ExecuteMigrationOperationResponseBodyDataOperationParam() = default ;
    ExecuteMigrationOperationResponseBodyDataOperationParam(const ExecuteMigrationOperationResponseBodyDataOperationParam &) = default ;
    ExecuteMigrationOperationResponseBodyDataOperationParam(ExecuteMigrationOperationResponseBodyDataOperationParam &&) = default ;
    ExecuteMigrationOperationResponseBodyDataOperationParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteMigrationOperationResponseBodyDataOperationParam() = default ;
    ExecuteMigrationOperationResponseBodyDataOperationParam& operator=(const ExecuteMigrationOperationResponseBodyDataOperationParam &) = default ;
    ExecuteMigrationOperationResponseBodyDataOperationParam& operator=(ExecuteMigrationOperationResponseBodyDataOperationParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->paramData_ != nullptr; };
    // paramData Field Functions 
    bool hasParamData() const { return this->paramData_ != nullptr;};
    void deleteParamData() { this->paramData_ = nullptr;};
    inline     const Darabonba::Json & paramData() const { DARABONBA_GET(paramData_) };
    Darabonba::Json & paramData() { DARABONBA_GET(paramData_) };
    inline ExecuteMigrationOperationResponseBodyDataOperationParam& setParamData(const Darabonba::Json & paramData) { DARABONBA_SET_VALUE(paramData_, paramData) };
    inline ExecuteMigrationOperationResponseBodyDataOperationParam& setParamData(Darabonba::Json & paramData) { DARABONBA_SET_RVALUE(paramData_, paramData) };


  protected:
    Darabonba::Json paramData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
