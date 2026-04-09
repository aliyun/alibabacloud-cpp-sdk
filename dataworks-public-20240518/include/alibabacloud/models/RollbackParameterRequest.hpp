// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLLBACKPARAMETERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROLLBACKPARAMETERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RollbackParameterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RollbackParameterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RollbackVersion, rollbackVersion_);
    };
    friend void from_json(const Darabonba::Json& j, RollbackParameterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RollbackVersion, rollbackVersion_);
    };
    RollbackParameterRequest() = default ;
    RollbackParameterRequest(const RollbackParameterRequest &) = default ;
    RollbackParameterRequest(RollbackParameterRequest &&) = default ;
    RollbackParameterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RollbackParameterRequest() = default ;
    RollbackParameterRequest& operator=(const RollbackParameterRequest &) = default ;
    RollbackParameterRequest& operator=(RollbackParameterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->rollbackVersion_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline RollbackParameterRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // rollbackVersion Field Functions 
    bool hasRollbackVersion() const { return this->rollbackVersion_ != nullptr;};
    void deleteRollbackVersion() { this->rollbackVersion_ = nullptr;};
    inline int32_t getRollbackVersion() const { DARABONBA_PTR_GET_DEFAULT(rollbackVersion_, 0) };
    inline RollbackParameterRequest& setRollbackVersion(int32_t rollbackVersion) { DARABONBA_PTR_SET_VALUE(rollbackVersion_, rollbackVersion) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<int32_t> rollbackVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
