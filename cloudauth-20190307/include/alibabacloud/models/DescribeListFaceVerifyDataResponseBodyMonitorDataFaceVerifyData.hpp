// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYDATARESPONSEBODYMONITORDATAFACEVERIFYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYDATARESPONSEBODYMONITORDATAFACEVERIFYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData& obj) { 
      DARABONBA_PTR_TO_JSON(ConDate, conDate_);
      DARABONBA_PTR_TO_JSON(FailCnt, failCnt_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SuccCnt, succCnt_);
      DARABONBA_PTR_TO_JSON(TotalCnt, totalCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConDate, conDate_);
      DARABONBA_PTR_FROM_JSON(FailCnt, failCnt_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SuccCnt, succCnt_);
      DARABONBA_PTR_FROM_JSON(TotalCnt, totalCnt_);
    };
    DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData() = default ;
    DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData(const DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData &) = default ;
    DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData(DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData &&) = default ;
    DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData() = default ;
    DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData& operator=(const DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData &) = default ;
    DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData& operator=(DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conDate_ == nullptr
        && return this->failCnt_ == nullptr && return this->name_ == nullptr && return this->sceneId_ == nullptr && return this->succCnt_ == nullptr && return this->totalCnt_ == nullptr; };
    // conDate Field Functions 
    bool hasConDate() const { return this->conDate_ != nullptr;};
    void deleteConDate() { this->conDate_ = nullptr;};
    inline string conDate() const { DARABONBA_PTR_GET_DEFAULT(conDate_, "") };
    inline DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData& setConDate(string conDate) { DARABONBA_PTR_SET_VALUE(conDate_, conDate) };


    // failCnt Field Functions 
    bool hasFailCnt() const { return this->failCnt_ != nullptr;};
    void deleteFailCnt() { this->failCnt_ = nullptr;};
    inline string failCnt() const { DARABONBA_PTR_GET_DEFAULT(failCnt_, "") };
    inline DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData& setFailCnt(string failCnt) { DARABONBA_PTR_SET_VALUE(failCnt_, failCnt) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // succCnt Field Functions 
    bool hasSuccCnt() const { return this->succCnt_ != nullptr;};
    void deleteSuccCnt() { this->succCnt_ = nullptr;};
    inline string succCnt() const { DARABONBA_PTR_GET_DEFAULT(succCnt_, "") };
    inline DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData& setSuccCnt(string succCnt) { DARABONBA_PTR_SET_VALUE(succCnt_, succCnt) };


    // totalCnt Field Functions 
    bool hasTotalCnt() const { return this->totalCnt_ != nullptr;};
    void deleteTotalCnt() { this->totalCnt_ = nullptr;};
    inline string totalCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCnt_, "") };
    inline DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData& setTotalCnt(string totalCnt) { DARABONBA_PTR_SET_VALUE(totalCnt_, totalCnt) };


  protected:
    // Verification statistics time.
    std::shared_ptr<string> conDate_ = nullptr;
    // Number of failed verifications.
    std::shared_ptr<string> failCnt_ = nullptr;
    // Verification scheme.
    std::shared_ptr<string> name_ = nullptr;
    // Scene ID.
    std::shared_ptr<string> sceneId_ = nullptr;
    // Number of successful verifications.
    std::shared_ptr<string> succCnt_ = nullptr;
    // Total number of verifications.
    std::shared_ptr<string> totalCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
