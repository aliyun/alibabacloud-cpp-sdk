// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUNKNOWNTHREATDETECTSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUNKNOWNTHREATDETECTSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetUnknownThreatDetectStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUnknownThreatDetectStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUnknownThreatDetectStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetUnknownThreatDetectStatisticResponseBody() = default ;
    GetUnknownThreatDetectStatisticResponseBody(const GetUnknownThreatDetectStatisticResponseBody &) = default ;
    GetUnknownThreatDetectStatisticResponseBody(GetUnknownThreatDetectStatisticResponseBody &&) = default ;
    GetUnknownThreatDetectStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUnknownThreatDetectStatisticResponseBody() = default ;
    GetUnknownThreatDetectStatisticResponseBody& operator=(const GetUnknownThreatDetectStatisticResponseBody &) = default ;
    GetUnknownThreatDetectStatisticResponseBody& operator=(GetUnknownThreatDetectStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BlockMachineCount, blockMachineCount_);
        DARABONBA_PTR_TO_JSON(MachineCount, machineCount_);
        DARABONBA_PTR_TO_JSON(MonitorMachineCount, monitorMachineCount_);
        DARABONBA_PTR_TO_JSON(OpenMachineCount, openMachineCount_);
        DARABONBA_PTR_TO_JSON(StudyingMachineCount, studyingMachineCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BlockMachineCount, blockMachineCount_);
        DARABONBA_PTR_FROM_JSON(MachineCount, machineCount_);
        DARABONBA_PTR_FROM_JSON(MonitorMachineCount, monitorMachineCount_);
        DARABONBA_PTR_FROM_JSON(OpenMachineCount, openMachineCount_);
        DARABONBA_PTR_FROM_JSON(StudyingMachineCount, studyingMachineCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->blockMachineCount_ == nullptr
        && this->machineCount_ == nullptr && this->monitorMachineCount_ == nullptr && this->openMachineCount_ == nullptr && this->studyingMachineCount_ == nullptr; };
      // blockMachineCount Field Functions 
      bool hasBlockMachineCount() const { return this->blockMachineCount_ != nullptr;};
      void deleteBlockMachineCount() { this->blockMachineCount_ = nullptr;};
      inline int32_t getBlockMachineCount() const { DARABONBA_PTR_GET_DEFAULT(blockMachineCount_, 0) };
      inline Data& setBlockMachineCount(int32_t blockMachineCount) { DARABONBA_PTR_SET_VALUE(blockMachineCount_, blockMachineCount) };


      // machineCount Field Functions 
      bool hasMachineCount() const { return this->machineCount_ != nullptr;};
      void deleteMachineCount() { this->machineCount_ = nullptr;};
      inline int32_t getMachineCount() const { DARABONBA_PTR_GET_DEFAULT(machineCount_, 0) };
      inline Data& setMachineCount(int32_t machineCount) { DARABONBA_PTR_SET_VALUE(machineCount_, machineCount) };


      // monitorMachineCount Field Functions 
      bool hasMonitorMachineCount() const { return this->monitorMachineCount_ != nullptr;};
      void deleteMonitorMachineCount() { this->monitorMachineCount_ = nullptr;};
      inline int32_t getMonitorMachineCount() const { DARABONBA_PTR_GET_DEFAULT(monitorMachineCount_, 0) };
      inline Data& setMonitorMachineCount(int32_t monitorMachineCount) { DARABONBA_PTR_SET_VALUE(monitorMachineCount_, monitorMachineCount) };


      // openMachineCount Field Functions 
      bool hasOpenMachineCount() const { return this->openMachineCount_ != nullptr;};
      void deleteOpenMachineCount() { this->openMachineCount_ = nullptr;};
      inline int32_t getOpenMachineCount() const { DARABONBA_PTR_GET_DEFAULT(openMachineCount_, 0) };
      inline Data& setOpenMachineCount(int32_t openMachineCount) { DARABONBA_PTR_SET_VALUE(openMachineCount_, openMachineCount) };


      // studyingMachineCount Field Functions 
      bool hasStudyingMachineCount() const { return this->studyingMachineCount_ != nullptr;};
      void deleteStudyingMachineCount() { this->studyingMachineCount_ = nullptr;};
      inline int32_t getStudyingMachineCount() const { DARABONBA_PTR_GET_DEFAULT(studyingMachineCount_, 0) };
      inline Data& setStudyingMachineCount(int32_t studyingMachineCount) { DARABONBA_PTR_SET_VALUE(studyingMachineCount_, studyingMachineCount) };


    protected:
      shared_ptr<int32_t> blockMachineCount_ {};
      shared_ptr<int32_t> machineCount_ {};
      shared_ptr<int32_t> monitorMachineCount_ {};
      shared_ptr<int32_t> openMachineCount_ {};
      shared_ptr<int32_t> studyingMachineCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetUnknownThreatDetectStatisticResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetUnknownThreatDetectStatisticResponseBody::Data) };
    inline GetUnknownThreatDetectStatisticResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetUnknownThreatDetectStatisticResponseBody::Data) };
    inline GetUnknownThreatDetectStatisticResponseBody& setData(const GetUnknownThreatDetectStatisticResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetUnknownThreatDetectStatisticResponseBody& setData(GetUnknownThreatDetectStatisticResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUnknownThreatDetectStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetUnknownThreatDetectStatisticResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
