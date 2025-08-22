// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRACEAPPREQUESTDELETEREASON_HPP_
#define ALIBABACLOUD_MODELS_DELETETRACEAPPREQUESTDELETEREASON_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteTraceAppRequestDeleteReasonReasonIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteTraceAppRequestDeleteReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTraceAppRequestDeleteReason& obj) { 
      DARABONBA_PTR_TO_JSON(ReasonIds, reasonIds_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTraceAppRequestDeleteReason& obj) { 
      DARABONBA_PTR_FROM_JSON(ReasonIds, reasonIds_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    DeleteTraceAppRequestDeleteReason() = default ;
    DeleteTraceAppRequestDeleteReason(const DeleteTraceAppRequestDeleteReason &) = default ;
    DeleteTraceAppRequestDeleteReason(DeleteTraceAppRequestDeleteReason &&) = default ;
    DeleteTraceAppRequestDeleteReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTraceAppRequestDeleteReason() = default ;
    DeleteTraceAppRequestDeleteReason& operator=(const DeleteTraceAppRequestDeleteReason &) = default ;
    DeleteTraceAppRequestDeleteReason& operator=(DeleteTraceAppRequestDeleteReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reasonIds_ != nullptr
        && this->remark_ != nullptr; };
    // reasonIds Field Functions 
    bool hasReasonIds() const { return this->reasonIds_ != nullptr;};
    void deleteReasonIds() { this->reasonIds_ = nullptr;};
    inline const vector<Models::DeleteTraceAppRequestDeleteReasonReasonIds> & reasonIds() const { DARABONBA_PTR_GET_CONST(reasonIds_, vector<Models::DeleteTraceAppRequestDeleteReasonReasonIds>) };
    inline vector<Models::DeleteTraceAppRequestDeleteReasonReasonIds> reasonIds() { DARABONBA_PTR_GET(reasonIds_, vector<Models::DeleteTraceAppRequestDeleteReasonReasonIds>) };
    inline DeleteTraceAppRequestDeleteReason& setReasonIds(const vector<Models::DeleteTraceAppRequestDeleteReasonReasonIds> & reasonIds) { DARABONBA_PTR_SET_VALUE(reasonIds_, reasonIds) };
    inline DeleteTraceAppRequestDeleteReason& setReasonIds(vector<Models::DeleteTraceAppRequestDeleteReasonReasonIds> && reasonIds) { DARABONBA_PTR_SET_RVALUE(reasonIds_, reasonIds) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DeleteTraceAppRequestDeleteReason& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // Reasons Ids.
    std::shared_ptr<vector<Models::DeleteTraceAppRequestDeleteReasonReasonIds>> reasonIds_ = nullptr;
    // Additional remarks when none of the reasons for removal provided are met.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
