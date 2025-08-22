// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPENDINSTANCESTOPROMETHEUSGLOBALVIEWRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_APPENDINSTANCESTOPROMETHEUSGLOBALVIEWRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class AppendInstancesToPrometheusGlobalViewResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppendInstancesToPrometheusGlobalViewResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AppendInstancesToPrometheusGlobalViewResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AppendInstancesToPrometheusGlobalViewResponseBodyData() = default ;
    AppendInstancesToPrometheusGlobalViewResponseBodyData(const AppendInstancesToPrometheusGlobalViewResponseBodyData &) = default ;
    AppendInstancesToPrometheusGlobalViewResponseBodyData(AppendInstancesToPrometheusGlobalViewResponseBodyData &&) = default ;
    AppendInstancesToPrometheusGlobalViewResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppendInstancesToPrometheusGlobalViewResponseBodyData() = default ;
    AppendInstancesToPrometheusGlobalViewResponseBodyData& operator=(const AppendInstancesToPrometheusGlobalViewResponseBodyData &) = default ;
    AppendInstancesToPrometheusGlobalViewResponseBodyData& operator=(AppendInstancesToPrometheusGlobalViewResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->info_ != nullptr
        && this->msg_ != nullptr && this->success_ != nullptr; };
    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline string info() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
    inline AppendInstancesToPrometheusGlobalViewResponseBodyData& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline AppendInstancesToPrometheusGlobalViewResponseBodyData& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AppendInstancesToPrometheusGlobalViewResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The Info-level information.
    std::shared_ptr<string> info_ = nullptr;
    // The additional information.
    std::shared_ptr<string> msg_ = nullptr;
    // Indicates whether the call was successful. Valid values:
    // 
    // *   `true`: The call was successful.
    // *   `false`: The call failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
