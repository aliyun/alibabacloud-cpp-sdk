// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYDEVICERISKSTATISTICSRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYDEVICERISKSTATISTICSRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(FaceAttackRate, faceAttackRate_);
      DARABONBA_PTR_TO_JSON(IdFakeRate, idFakeRate_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_TO_JSON(RootRate, rootRate_);
      DARABONBA_PTR_TO_JSON(SimulatorRate, simulatorRate_);
      DARABONBA_PTR_TO_JSON(VirtualVideoRate, virtualVideoRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceAttackRate, faceAttackRate_);
      DARABONBA_PTR_FROM_JSON(IdFakeRate, idFakeRate_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_FROM_JSON(RootRate, rootRate_);
      DARABONBA_PTR_FROM_JSON(SimulatorRate, simulatorRate_);
      DARABONBA_PTR_FROM_JSON(VirtualVideoRate, virtualVideoRate_);
    };
    DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject() = default ;
    DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject(const DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject &) = default ;
    DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject(DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject &&) = default ;
    DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject() = default ;
    DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject& operator=(const DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject &) = default ;
    DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject& operator=(DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceAttackRate_ == nullptr
        && return this->idFakeRate_ == nullptr && return this->items_ == nullptr && return this->riskCount_ == nullptr && return this->rootRate_ == nullptr && return this->simulatorRate_ == nullptr
        && return this->virtualVideoRate_ == nullptr; };
    // faceAttackRate Field Functions 
    bool hasFaceAttackRate() const { return this->faceAttackRate_ != nullptr;};
    void deleteFaceAttackRate() { this->faceAttackRate_ = nullptr;};
    inline string faceAttackRate() const { DARABONBA_PTR_GET_DEFAULT(faceAttackRate_, "") };
    inline DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject& setFaceAttackRate(string faceAttackRate) { DARABONBA_PTR_SET_VALUE(faceAttackRate_, faceAttackRate) };


    // idFakeRate Field Functions 
    bool hasIdFakeRate() const { return this->idFakeRate_ != nullptr;};
    void deleteIdFakeRate() { this->idFakeRate_ = nullptr;};
    inline string idFakeRate() const { DARABONBA_PTR_GET_DEFAULT(idFakeRate_, "") };
    inline DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject& setIdFakeRate(string idFakeRate) { DARABONBA_PTR_SET_VALUE(idFakeRate_, idFakeRate) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems>) };
    inline vector<Models::DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems> items() { DARABONBA_PTR_GET(items_, vector<Models::DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems>) };
    inline DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject& setItems(const vector<Models::DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject& setItems(vector<Models::DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // riskCount Field Functions 
    bool hasRiskCount() const { return this->riskCount_ != nullptr;};
    void deleteRiskCount() { this->riskCount_ = nullptr;};
    inline int64_t riskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
    inline DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    // rootRate Field Functions 
    bool hasRootRate() const { return this->rootRate_ != nullptr;};
    void deleteRootRate() { this->rootRate_ = nullptr;};
    inline string rootRate() const { DARABONBA_PTR_GET_DEFAULT(rootRate_, "") };
    inline DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject& setRootRate(string rootRate) { DARABONBA_PTR_SET_VALUE(rootRate_, rootRate) };


    // simulatorRate Field Functions 
    bool hasSimulatorRate() const { return this->simulatorRate_ != nullptr;};
    void deleteSimulatorRate() { this->simulatorRate_ = nullptr;};
    inline string simulatorRate() const { DARABONBA_PTR_GET_DEFAULT(simulatorRate_, "") };
    inline DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject& setSimulatorRate(string simulatorRate) { DARABONBA_PTR_SET_VALUE(simulatorRate_, simulatorRate) };


    // virtualVideoRate Field Functions 
    bool hasVirtualVideoRate() const { return this->virtualVideoRate_ != nullptr;};
    void deleteVirtualVideoRate() { this->virtualVideoRate_ = nullptr;};
    inline string virtualVideoRate() const { DARABONBA_PTR_GET_DEFAULT(virtualVideoRate_, "") };
    inline DescribeVerifyDeviceRiskStatisticsResponseBodyResultObject& setVirtualVideoRate(string virtualVideoRate) { DARABONBA_PTR_SET_VALUE(virtualVideoRate_, virtualVideoRate) };


  protected:
    // Suspected fake face percentage: total number of suspected fake faces / total number of risks.
    std::shared_ptr<string> faceAttackRate_ = nullptr;
    // Total number of suspected fake identities.
    std::shared_ptr<string> idFakeRate_ = nullptr;
    // Data items in the response.
    std::shared_ptr<vector<Models::DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems>> items_ = nullptr;
    // Number of risks.
    std::shared_ptr<int64_t> riskCount_ = nullptr;
    // Root percentage: total number of root / total number of risks.
    std::shared_ptr<string> rootRate_ = nullptr;
    // Simulator percentage: total number of simulators / total number of risks.
    std::shared_ptr<string> simulatorRate_ = nullptr;
    // Virtual video percentage: total number of virtual videos / total number of risks.
    std::shared_ptr<string> virtualVideoRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
