// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECMETAPROFILINGSKILLJOBDISABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECMETAPROFILINGSKILLJOBDISABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ExecMetaProfilingSkillJobDisableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecMetaProfilingSkillJobDisableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dsId, dsId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecMetaProfilingSkillJobDisableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dsId, dsId_);
    };
    ExecMetaProfilingSkillJobDisableRequest() = default ;
    ExecMetaProfilingSkillJobDisableRequest(const ExecMetaProfilingSkillJobDisableRequest &) = default ;
    ExecMetaProfilingSkillJobDisableRequest(ExecMetaProfilingSkillJobDisableRequest &&) = default ;
    ExecMetaProfilingSkillJobDisableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecMetaProfilingSkillJobDisableRequest() = default ;
    ExecMetaProfilingSkillJobDisableRequest& operator=(const ExecMetaProfilingSkillJobDisableRequest &) = default ;
    ExecMetaProfilingSkillJobDisableRequest& operator=(ExecMetaProfilingSkillJobDisableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dsId_ == nullptr; };
    // dsId Field Functions 
    bool hasDsId() const { return this->dsId_ != nullptr;};
    void deleteDsId() { this->dsId_ = nullptr;};
    inline int64_t getDsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, 0L) };
    inline ExecMetaProfilingSkillJobDisableRequest& setDsId(int64_t dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


  protected:
    shared_ptr<int64_t> dsId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
