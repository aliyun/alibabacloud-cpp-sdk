// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROMETHEUSGLOBALVIEWRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDPROMETHEUSGLOBALVIEWRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddPrometheusGlobalViewResponseBodyDataInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class AddPrometheusGlobalViewResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPrometheusGlobalViewResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddPrometheusGlobalViewResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddPrometheusGlobalViewResponseBodyData() = default ;
    AddPrometheusGlobalViewResponseBodyData(const AddPrometheusGlobalViewResponseBodyData &) = default ;
    AddPrometheusGlobalViewResponseBodyData(AddPrometheusGlobalViewResponseBodyData &&) = default ;
    AddPrometheusGlobalViewResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPrometheusGlobalViewResponseBodyData() = default ;
    AddPrometheusGlobalViewResponseBodyData& operator=(const AddPrometheusGlobalViewResponseBodyData &) = default ;
    AddPrometheusGlobalViewResponseBodyData& operator=(AddPrometheusGlobalViewResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->info_ != nullptr
        && this->msg_ != nullptr && this->success_ != nullptr; };
    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const Models::AddPrometheusGlobalViewResponseBodyDataInfo & info() const { DARABONBA_PTR_GET_CONST(info_, Models::AddPrometheusGlobalViewResponseBodyDataInfo) };
    inline Models::AddPrometheusGlobalViewResponseBodyDataInfo info() { DARABONBA_PTR_GET(info_, Models::AddPrometheusGlobalViewResponseBodyDataInfo) };
    inline AddPrometheusGlobalViewResponseBodyData& setInfo(const Models::AddPrometheusGlobalViewResponseBodyDataInfo & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline AddPrometheusGlobalViewResponseBodyData& setInfo(Models::AddPrometheusGlobalViewResponseBodyDataInfo && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline AddPrometheusGlobalViewResponseBodyData& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddPrometheusGlobalViewResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The Info-level information.
    std::shared_ptr<Models::AddPrometheusGlobalViewResponseBodyDataInfo> info_ = nullptr;
    // The additional information.
    std::shared_ptr<string> msg_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
