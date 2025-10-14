// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAIMPORTTASKINFORESPONSEBODYDATADATAIMPORTTASKDETAILINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAIMPORTTASKINFORESPONSEBODYDATADATAIMPORTTASKDETAILINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo& obj) { 
      DARABONBA_PTR_TO_JSON(FsmId, fsmId_);
      DARABONBA_PTR_TO_JSON(FsmState, fsmState_);
      DARABONBA_PTR_TO_JSON(FsmStatus, fsmStatus_);
      DARABONBA_PTR_TO_JSON(ServiceDetailList, serviceDetailList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(FsmId, fsmId_);
      DARABONBA_PTR_FROM_JSON(FsmState, fsmState_);
      DARABONBA_PTR_FROM_JSON(FsmStatus, fsmStatus_);
      DARABONBA_PTR_FROM_JSON(ServiceDetailList, serviceDetailList_);
    };
    DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo() = default ;
    DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo(const DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo &) = default ;
    DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo(DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo &&) = default ;
    DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo() = default ;
    DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo& operator=(const DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo &) = default ;
    DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo& operator=(DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fsmId_ == nullptr
        && return this->fsmState_ == nullptr && return this->fsmStatus_ == nullptr && return this->serviceDetailList_ == nullptr; };
    // fsmId Field Functions 
    bool hasFsmId() const { return this->fsmId_ != nullptr;};
    void deleteFsmId() { this->fsmId_ = nullptr;};
    inline int64_t fsmId() const { DARABONBA_PTR_GET_DEFAULT(fsmId_, 0L) };
    inline DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo& setFsmId(int64_t fsmId) { DARABONBA_PTR_SET_VALUE(fsmId_, fsmId) };


    // fsmState Field Functions 
    bool hasFsmState() const { return this->fsmState_ != nullptr;};
    void deleteFsmState() { this->fsmState_ = nullptr;};
    inline string fsmState() const { DARABONBA_PTR_GET_DEFAULT(fsmState_, "") };
    inline DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo& setFsmState(string fsmState) { DARABONBA_PTR_SET_VALUE(fsmState_, fsmState) };


    // fsmStatus Field Functions 
    bool hasFsmStatus() const { return this->fsmStatus_ != nullptr;};
    void deleteFsmStatus() { this->fsmStatus_ = nullptr;};
    inline string fsmStatus() const { DARABONBA_PTR_GET_DEFAULT(fsmStatus_, "") };
    inline DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo& setFsmStatus(string fsmStatus) { DARABONBA_PTR_SET_VALUE(fsmStatus_, fsmStatus) };


    // serviceDetailList Field Functions 
    bool hasServiceDetailList() const { return this->serviceDetailList_ != nullptr;};
    void deleteServiceDetailList() { this->serviceDetailList_ = nullptr;};
    inline const vector<Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList> & serviceDetailList() const { DARABONBA_PTR_GET_CONST(serviceDetailList_, vector<Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList>) };
    inline vector<Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList> serviceDetailList() { DARABONBA_PTR_GET(serviceDetailList_, vector<Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList>) };
    inline DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo& setServiceDetailList(const vector<Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList> & serviceDetailList) { DARABONBA_PTR_SET_VALUE(serviceDetailList_, serviceDetailList) };
    inline DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfo& setServiceDetailList(vector<Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList> && serviceDetailList) { DARABONBA_PTR_SET_RVALUE(serviceDetailList_, serviceDetailList) };


  protected:
    std::shared_ptr<int64_t> fsmId_ = nullptr;
    std::shared_ptr<string> fsmState_ = nullptr;
    std::shared_ptr<string> fsmStatus_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList>> serviceDetailList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
