// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNARINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNARINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeColumnarInfoResponseBodyDataInstanceTopologyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeColumnarInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnarInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BinlogPersistTime, binlogPersistTime_);
      DARABONBA_PTR_TO_JSON(BinlogSize, binlogSize_);
      DARABONBA_PTR_TO_JSON(CheckSumSwitch, checkSumSwitch_);
      DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
      DARABONBA_PTR_TO_JSON(ColumnarNewVersion, columnarNewVersion_);
      DARABONBA_PTR_TO_JSON(ColumnarVersion, columnarVersion_);
      DARABONBA_PTR_TO_JSON(InstanceTopologyList, instanceTopologyList_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColumnarInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BinlogPersistTime, binlogPersistTime_);
      DARABONBA_PTR_FROM_JSON(BinlogSize, binlogSize_);
      DARABONBA_PTR_FROM_JSON(CheckSumSwitch, checkSumSwitch_);
      DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
      DARABONBA_PTR_FROM_JSON(ColumnarNewVersion, columnarNewVersion_);
      DARABONBA_PTR_FROM_JSON(ColumnarVersion, columnarVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceTopologyList, instanceTopologyList_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
    };
    DescribeColumnarInfoResponseBodyData() = default ;
    DescribeColumnarInfoResponseBodyData(const DescribeColumnarInfoResponseBodyData &) = default ;
    DescribeColumnarInfoResponseBodyData(DescribeColumnarInfoResponseBodyData &&) = default ;
    DescribeColumnarInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnarInfoResponseBodyData() = default ;
    DescribeColumnarInfoResponseBodyData& operator=(const DescribeColumnarInfoResponseBodyData &) = default ;
    DescribeColumnarInfoResponseBodyData& operator=(DescribeColumnarInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->binlogPersistTime_ == nullptr
        && return this->binlogSize_ == nullptr && return this->checkSumSwitch_ == nullptr && return this->classCode_ == nullptr && return this->columnarNewVersion_ == nullptr && return this->columnarVersion_ == nullptr
        && return this->instanceTopologyList_ == nullptr && return this->serverId_ == nullptr; };
    // binlogPersistTime Field Functions 
    bool hasBinlogPersistTime() const { return this->binlogPersistTime_ != nullptr;};
    void deleteBinlogPersistTime() { this->binlogPersistTime_ = nullptr;};
    inline int32_t binlogPersistTime() const { DARABONBA_PTR_GET_DEFAULT(binlogPersistTime_, 0) };
    inline DescribeColumnarInfoResponseBodyData& setBinlogPersistTime(int32_t binlogPersistTime) { DARABONBA_PTR_SET_VALUE(binlogPersistTime_, binlogPersistTime) };


    // binlogSize Field Functions 
    bool hasBinlogSize() const { return this->binlogSize_ != nullptr;};
    void deleteBinlogSize() { this->binlogSize_ = nullptr;};
    inline int32_t binlogSize() const { DARABONBA_PTR_GET_DEFAULT(binlogSize_, 0) };
    inline DescribeColumnarInfoResponseBodyData& setBinlogSize(int32_t binlogSize) { DARABONBA_PTR_SET_VALUE(binlogSize_, binlogSize) };


    // checkSumSwitch Field Functions 
    bool hasCheckSumSwitch() const { return this->checkSumSwitch_ != nullptr;};
    void deleteCheckSumSwitch() { this->checkSumSwitch_ = nullptr;};
    inline string checkSumSwitch() const { DARABONBA_PTR_GET_DEFAULT(checkSumSwitch_, "") };
    inline DescribeColumnarInfoResponseBodyData& setCheckSumSwitch(string checkSumSwitch) { DARABONBA_PTR_SET_VALUE(checkSumSwitch_, checkSumSwitch) };


    // classCode Field Functions 
    bool hasClassCode() const { return this->classCode_ != nullptr;};
    void deleteClassCode() { this->classCode_ = nullptr;};
    inline string classCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
    inline DescribeColumnarInfoResponseBodyData& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


    // columnarNewVersion Field Functions 
    bool hasColumnarNewVersion() const { return this->columnarNewVersion_ != nullptr;};
    void deleteColumnarNewVersion() { this->columnarNewVersion_ = nullptr;};
    inline string columnarNewVersion() const { DARABONBA_PTR_GET_DEFAULT(columnarNewVersion_, "") };
    inline DescribeColumnarInfoResponseBodyData& setColumnarNewVersion(string columnarNewVersion) { DARABONBA_PTR_SET_VALUE(columnarNewVersion_, columnarNewVersion) };


    // columnarVersion Field Functions 
    bool hasColumnarVersion() const { return this->columnarVersion_ != nullptr;};
    void deleteColumnarVersion() { this->columnarVersion_ = nullptr;};
    inline string columnarVersion() const { DARABONBA_PTR_GET_DEFAULT(columnarVersion_, "") };
    inline DescribeColumnarInfoResponseBodyData& setColumnarVersion(string columnarVersion) { DARABONBA_PTR_SET_VALUE(columnarVersion_, columnarVersion) };


    // instanceTopologyList Field Functions 
    bool hasInstanceTopologyList() const { return this->instanceTopologyList_ != nullptr;};
    void deleteInstanceTopologyList() { this->instanceTopologyList_ = nullptr;};
    inline const vector<Models::DescribeColumnarInfoResponseBodyDataInstanceTopologyList> & instanceTopologyList() const { DARABONBA_PTR_GET_CONST(instanceTopologyList_, vector<Models::DescribeColumnarInfoResponseBodyDataInstanceTopologyList>) };
    inline vector<Models::DescribeColumnarInfoResponseBodyDataInstanceTopologyList> instanceTopologyList() { DARABONBA_PTR_GET(instanceTopologyList_, vector<Models::DescribeColumnarInfoResponseBodyDataInstanceTopologyList>) };
    inline DescribeColumnarInfoResponseBodyData& setInstanceTopologyList(const vector<Models::DescribeColumnarInfoResponseBodyDataInstanceTopologyList> & instanceTopologyList) { DARABONBA_PTR_SET_VALUE(instanceTopologyList_, instanceTopologyList) };
    inline DescribeColumnarInfoResponseBodyData& setInstanceTopologyList(vector<Models::DescribeColumnarInfoResponseBodyDataInstanceTopologyList> && instanceTopologyList) { DARABONBA_PTR_SET_RVALUE(instanceTopologyList_, instanceTopologyList) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline int32_t serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, 0) };
    inline DescribeColumnarInfoResponseBodyData& setServerId(int32_t serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


  protected:
    std::shared_ptr<int32_t> binlogPersistTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> binlogSize_ = nullptr;
    std::shared_ptr<string> checkSumSwitch_ = nullptr;
    std::shared_ptr<string> classCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> columnarNewVersion_ = nullptr;
    std::shared_ptr<string> columnarVersion_ = nullptr;
    std::shared_ptr<vector<Models::DescribeColumnarInfoResponseBodyDataInstanceTopologyList>> instanceTopologyList_ = nullptr;
    // server id
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> serverId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
