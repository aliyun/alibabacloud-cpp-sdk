// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBCONFIGPARAM_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBCONFIGPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class UpdateJobConfigParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJobConfigParam& obj) { 
      DARABONBA_ANY_TO_JSON(newFlinkConf, newFlinkConf_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJobConfigParam& obj) { 
      DARABONBA_ANY_FROM_JSON(newFlinkConf, newFlinkConf_);
    };
    UpdateJobConfigParam() = default ;
    UpdateJobConfigParam(const UpdateJobConfigParam &) = default ;
    UpdateJobConfigParam(UpdateJobConfigParam &&) = default ;
    UpdateJobConfigParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJobConfigParam() = default ;
    UpdateJobConfigParam& operator=(const UpdateJobConfigParam &) = default ;
    UpdateJobConfigParam& operator=(UpdateJobConfigParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newFlinkConf_ == nullptr; };
    // newFlinkConf Field Functions 
    bool hasNewFlinkConf() const { return this->newFlinkConf_ != nullptr;};
    void deleteNewFlinkConf() { this->newFlinkConf_ = nullptr;};
    inline     const Darabonba::Json & newFlinkConf() const { DARABONBA_GET(newFlinkConf_) };
    Darabonba::Json & newFlinkConf() { DARABONBA_GET(newFlinkConf_) };
    inline UpdateJobConfigParam& setNewFlinkConf(const Darabonba::Json & newFlinkConf) { DARABONBA_SET_VALUE(newFlinkConf_, newFlinkConf) };
    inline UpdateJobConfigParam& setNewFlinkConf(Darabonba::Json & newFlinkConf) { DARABONBA_SET_RVALUE(newFlinkConf_, newFlinkConf) };


  protected:
    Darabonba::Json newFlinkConf_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
