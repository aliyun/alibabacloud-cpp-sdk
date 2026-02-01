// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVMCOREDIAGNOSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVMCOREDIAGNOSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListVmcoreDiagnosisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVmcoreDiagnosisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(days, days_);
    };
    friend void from_json(const Darabonba::Json& j, ListVmcoreDiagnosisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(days, days_);
    };
    ListVmcoreDiagnosisTaskRequest() = default ;
    ListVmcoreDiagnosisTaskRequest(const ListVmcoreDiagnosisTaskRequest &) = default ;
    ListVmcoreDiagnosisTaskRequest(ListVmcoreDiagnosisTaskRequest &&) = default ;
    ListVmcoreDiagnosisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVmcoreDiagnosisTaskRequest() = default ;
    ListVmcoreDiagnosisTaskRequest& operator=(const ListVmcoreDiagnosisTaskRequest &) = default ;
    ListVmcoreDiagnosisTaskRequest& operator=(ListVmcoreDiagnosisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->days_ == nullptr; };
    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline int64_t getDays() const { DARABONBA_PTR_GET_DEFAULT(days_, 0L) };
    inline ListVmcoreDiagnosisTaskRequest& setDays(int64_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> days_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
