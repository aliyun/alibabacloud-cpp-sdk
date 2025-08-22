// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROMETHEUSGLOBALVIEWBYALICLUSTERIDSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDPROMETHEUSGLOBALVIEWBYALICLUSTERIDSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class AddPrometheusGlobalViewByAliClusterIdsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPrometheusGlobalViewByAliClusterIdsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddPrometheusGlobalViewByAliClusterIdsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddPrometheusGlobalViewByAliClusterIdsResponseBodyData() = default ;
    AddPrometheusGlobalViewByAliClusterIdsResponseBodyData(const AddPrometheusGlobalViewByAliClusterIdsResponseBodyData &) = default ;
    AddPrometheusGlobalViewByAliClusterIdsResponseBodyData(AddPrometheusGlobalViewByAliClusterIdsResponseBodyData &&) = default ;
    AddPrometheusGlobalViewByAliClusterIdsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPrometheusGlobalViewByAliClusterIdsResponseBodyData() = default ;
    AddPrometheusGlobalViewByAliClusterIdsResponseBodyData& operator=(const AddPrometheusGlobalViewByAliClusterIdsResponseBodyData &) = default ;
    AddPrometheusGlobalViewByAliClusterIdsResponseBodyData& operator=(AddPrometheusGlobalViewByAliClusterIdsResponseBodyData &&) = default ;
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
    inline AddPrometheusGlobalViewByAliClusterIdsResponseBodyData& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline AddPrometheusGlobalViewByAliClusterIdsResponseBodyData& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddPrometheusGlobalViewByAliClusterIdsResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The Info-level information.
    std::shared_ptr<string> info_ = nullptr;
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
