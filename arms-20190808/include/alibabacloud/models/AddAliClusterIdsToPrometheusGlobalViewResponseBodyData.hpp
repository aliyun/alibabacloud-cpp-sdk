// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDALICLUSTERIDSTOPROMETHEUSGLOBALVIEWRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDALICLUSTERIDSTOPROMETHEUSGLOBALVIEWRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class AddAliClusterIdsToPrometheusGlobalViewResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAliClusterIdsToPrometheusGlobalViewResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddAliClusterIdsToPrometheusGlobalViewResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddAliClusterIdsToPrometheusGlobalViewResponseBodyData() = default ;
    AddAliClusterIdsToPrometheusGlobalViewResponseBodyData(const AddAliClusterIdsToPrometheusGlobalViewResponseBodyData &) = default ;
    AddAliClusterIdsToPrometheusGlobalViewResponseBodyData(AddAliClusterIdsToPrometheusGlobalViewResponseBodyData &&) = default ;
    AddAliClusterIdsToPrometheusGlobalViewResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAliClusterIdsToPrometheusGlobalViewResponseBodyData() = default ;
    AddAliClusterIdsToPrometheusGlobalViewResponseBodyData& operator=(const AddAliClusterIdsToPrometheusGlobalViewResponseBodyData &) = default ;
    AddAliClusterIdsToPrometheusGlobalViewResponseBodyData& operator=(AddAliClusterIdsToPrometheusGlobalViewResponseBodyData &&) = default ;
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
    inline AddAliClusterIdsToPrometheusGlobalViewResponseBodyData& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline AddAliClusterIdsToPrometheusGlobalViewResponseBodyData& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddAliClusterIdsToPrometheusGlobalViewResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The Info-level information.
    std::shared_ptr<string> info_ = nullptr;
    // The additional information.
    std::shared_ptr<string> msg_ = nullptr;
    // Indicates whether the request was successful.
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
