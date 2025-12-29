// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeListFaceVerifyDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListFaceVerifyDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListFaceVerifyDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeListFaceVerifyDataResponseBody() = default ;
    DescribeListFaceVerifyDataResponseBody(const DescribeListFaceVerifyDataResponseBody &) = default ;
    DescribeListFaceVerifyDataResponseBody(DescribeListFaceVerifyDataResponseBody &&) = default ;
    DescribeListFaceVerifyDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListFaceVerifyDataResponseBody() = default ;
    DescribeListFaceVerifyDataResponseBody& operator=(const DescribeListFaceVerifyDataResponseBody &) = default ;
    DescribeListFaceVerifyDataResponseBody& operator=(DescribeListFaceVerifyDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MonitorData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonitorData& obj) { 
        DARABONBA_PTR_TO_JSON(FaceVerifyData, faceVerifyData_);
      };
      friend void from_json(const Darabonba::Json& j, MonitorData& obj) { 
        DARABONBA_PTR_FROM_JSON(FaceVerifyData, faceVerifyData_);
      };
      MonitorData() = default ;
      MonitorData(const MonitorData &) = default ;
      MonitorData(MonitorData &&) = default ;
      MonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MonitorData() = default ;
      MonitorData& operator=(const MonitorData &) = default ;
      MonitorData& operator=(MonitorData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FaceVerifyData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FaceVerifyData& obj) { 
          DARABONBA_PTR_TO_JSON(ConDate, conDate_);
          DARABONBA_PTR_TO_JSON(FailCnt, failCnt_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
          DARABONBA_PTR_TO_JSON(SuccCnt, succCnt_);
          DARABONBA_PTR_TO_JSON(TotalCnt, totalCnt_);
        };
        friend void from_json(const Darabonba::Json& j, FaceVerifyData& obj) { 
          DARABONBA_PTR_FROM_JSON(ConDate, conDate_);
          DARABONBA_PTR_FROM_JSON(FailCnt, failCnt_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
          DARABONBA_PTR_FROM_JSON(SuccCnt, succCnt_);
          DARABONBA_PTR_FROM_JSON(TotalCnt, totalCnt_);
        };
        FaceVerifyData() = default ;
        FaceVerifyData(const FaceVerifyData &) = default ;
        FaceVerifyData(FaceVerifyData &&) = default ;
        FaceVerifyData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FaceVerifyData() = default ;
        FaceVerifyData& operator=(const FaceVerifyData &) = default ;
        FaceVerifyData& operator=(FaceVerifyData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->conDate_ == nullptr
        && this->failCnt_ == nullptr && this->name_ == nullptr && this->sceneId_ == nullptr && this->succCnt_ == nullptr && this->totalCnt_ == nullptr; };
        // conDate Field Functions 
        bool hasConDate() const { return this->conDate_ != nullptr;};
        void deleteConDate() { this->conDate_ = nullptr;};
        inline string getConDate() const { DARABONBA_PTR_GET_DEFAULT(conDate_, "") };
        inline FaceVerifyData& setConDate(string conDate) { DARABONBA_PTR_SET_VALUE(conDate_, conDate) };


        // failCnt Field Functions 
        bool hasFailCnt() const { return this->failCnt_ != nullptr;};
        void deleteFailCnt() { this->failCnt_ = nullptr;};
        inline string getFailCnt() const { DARABONBA_PTR_GET_DEFAULT(failCnt_, "") };
        inline FaceVerifyData& setFailCnt(string failCnt) { DARABONBA_PTR_SET_VALUE(failCnt_, failCnt) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline FaceVerifyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sceneId Field Functions 
        bool hasSceneId() const { return this->sceneId_ != nullptr;};
        void deleteSceneId() { this->sceneId_ = nullptr;};
        inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
        inline FaceVerifyData& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


        // succCnt Field Functions 
        bool hasSuccCnt() const { return this->succCnt_ != nullptr;};
        void deleteSuccCnt() { this->succCnt_ = nullptr;};
        inline string getSuccCnt() const { DARABONBA_PTR_GET_DEFAULT(succCnt_, "") };
        inline FaceVerifyData& setSuccCnt(string succCnt) { DARABONBA_PTR_SET_VALUE(succCnt_, succCnt) };


        // totalCnt Field Functions 
        bool hasTotalCnt() const { return this->totalCnt_ != nullptr;};
        void deleteTotalCnt() { this->totalCnt_ = nullptr;};
        inline string getTotalCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCnt_, "") };
        inline FaceVerifyData& setTotalCnt(string totalCnt) { DARABONBA_PTR_SET_VALUE(totalCnt_, totalCnt) };


      protected:
        // Verification statistics time.
        shared_ptr<string> conDate_ {};
        // Number of failed verifications.
        shared_ptr<string> failCnt_ {};
        // Verification scheme.
        shared_ptr<string> name_ {};
        // Scene ID.
        shared_ptr<string> sceneId_ {};
        // Number of successful verifications.
        shared_ptr<string> succCnt_ {};
        // Total number of verifications.
        shared_ptr<string> totalCnt_ {};
      };

      virtual bool empty() const override { return this->faceVerifyData_ == nullptr; };
      // faceVerifyData Field Functions 
      bool hasFaceVerifyData() const { return this->faceVerifyData_ != nullptr;};
      void deleteFaceVerifyData() { this->faceVerifyData_ = nullptr;};
      inline const vector<MonitorData::FaceVerifyData> & getFaceVerifyData() const { DARABONBA_PTR_GET_CONST(faceVerifyData_, vector<MonitorData::FaceVerifyData>) };
      inline vector<MonitorData::FaceVerifyData> getFaceVerifyData() { DARABONBA_PTR_GET(faceVerifyData_, vector<MonitorData::FaceVerifyData>) };
      inline MonitorData& setFaceVerifyData(const vector<MonitorData::FaceVerifyData> & faceVerifyData) { DARABONBA_PTR_SET_VALUE(faceVerifyData_, faceVerifyData) };
      inline MonitorData& setFaceVerifyData(vector<MonitorData::FaceVerifyData> && faceVerifyData) { DARABONBA_PTR_SET_RVALUE(faceVerifyData_, faceVerifyData) };


    protected:
      // Face verification data.
      shared_ptr<vector<MonitorData::FaceVerifyData>> faceVerifyData_ {};
    };

    virtual bool empty() const override { return this->monitorData_ == nullptr
        && this->requestId_ == nullptr; };
    // monitorData Field Functions 
    bool hasMonitorData() const { return this->monitorData_ != nullptr;};
    void deleteMonitorData() { this->monitorData_ = nullptr;};
    inline const DescribeListFaceVerifyDataResponseBody::MonitorData & getMonitorData() const { DARABONBA_PTR_GET_CONST(monitorData_, DescribeListFaceVerifyDataResponseBody::MonitorData) };
    inline DescribeListFaceVerifyDataResponseBody::MonitorData getMonitorData() { DARABONBA_PTR_GET(monitorData_, DescribeListFaceVerifyDataResponseBody::MonitorData) };
    inline DescribeListFaceVerifyDataResponseBody& setMonitorData(const DescribeListFaceVerifyDataResponseBody::MonitorData & monitorData) { DARABONBA_PTR_SET_VALUE(monitorData_, monitorData) };
    inline DescribeListFaceVerifyDataResponseBody& setMonitorData(DescribeListFaceVerifyDataResponseBody::MonitorData && monitorData) { DARABONBA_PTR_SET_RVALUE(monitorData_, monitorData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeListFaceVerifyDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data.
    shared_ptr<DescribeListFaceVerifyDataResponseBody::MonitorData> monitorData_ {};
    // ID of this request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
