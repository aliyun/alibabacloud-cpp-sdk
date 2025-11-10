// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEMIGRATIONOPERATIONREQUESTOPERATIONPARAM_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEMIGRATIONOPERATIONREQUESTOPERATIONPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ExecuteMigrationOperationRequestOperationParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteMigrationOperationRequestOperationParam& obj) { 
      DARABONBA_ANY_TO_JSON(paramData, paramData_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteMigrationOperationRequestOperationParam& obj) { 
      DARABONBA_ANY_FROM_JSON(paramData, paramData_);
    };
    ExecuteMigrationOperationRequestOperationParam() = default ;
    ExecuteMigrationOperationRequestOperationParam(const ExecuteMigrationOperationRequestOperationParam &) = default ;
    ExecuteMigrationOperationRequestOperationParam(ExecuteMigrationOperationRequestOperationParam &&) = default ;
    ExecuteMigrationOperationRequestOperationParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteMigrationOperationRequestOperationParam() = default ;
    ExecuteMigrationOperationRequestOperationParam& operator=(const ExecuteMigrationOperationRequestOperationParam &) = default ;
    ExecuteMigrationOperationRequestOperationParam& operator=(ExecuteMigrationOperationRequestOperationParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramData_ == nullptr; };
    // paramData Field Functions 
    bool hasParamData() const { return this->paramData_ != nullptr;};
    void deleteParamData() { this->paramData_ = nullptr;};
    inline     const Darabonba::Json & paramData() const { DARABONBA_GET(paramData_) };
    Darabonba::Json & paramData() { DARABONBA_GET(paramData_) };
    inline ExecuteMigrationOperationRequestOperationParam& setParamData(const Darabonba::Json & paramData) { DARABONBA_SET_VALUE(paramData_, paramData) };
    inline ExecuteMigrationOperationRequestOperationParam& setParamData(Darabonba::Json & paramData) { DARABONBA_SET_RVALUE(paramData_, paramData) };


  protected:
    Darabonba::Json paramData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
