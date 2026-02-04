// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESLRANDSLSPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESLRANDSLSPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CreateSlrAndSlsProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSlrAndSlsProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsInfo, slsInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSlrAndSlsProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsInfo, slsInfo_);
    };
    CreateSlrAndSlsProjectResponseBody() = default ;
    CreateSlrAndSlsProjectResponseBody(const CreateSlrAndSlsProjectResponseBody &) = default ;
    CreateSlrAndSlsProjectResponseBody(CreateSlrAndSlsProjectResponseBody &&) = default ;
    CreateSlrAndSlsProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSlrAndSlsProjectResponseBody() = default ;
    CreateSlrAndSlsProjectResponseBody& operator=(const CreateSlrAndSlsProjectResponseBody &) = default ;
    CreateSlrAndSlsProjectResponseBody& operator=(CreateSlrAndSlsProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SlsInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlsInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EndPoint, endPoint_);
        DARABONBA_PTR_TO_JSON(LogStore, logStore_);
        DARABONBA_PTR_TO_JSON(Project, project_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, SlsInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EndPoint, endPoint_);
        DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
        DARABONBA_PTR_FROM_JSON(Project, project_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
      };
      SlsInfo() = default ;
      SlsInfo(const SlsInfo &) = default ;
      SlsInfo(SlsInfo &&) = default ;
      SlsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlsInfo() = default ;
      SlsInfo& operator=(const SlsInfo &) = default ;
      SlsInfo& operator=(SlsInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endPoint_ == nullptr
        && this->logStore_ == nullptr && this->project_ == nullptr && this->region_ == nullptr; };
      // endPoint Field Functions 
      bool hasEndPoint() const { return this->endPoint_ != nullptr;};
      void deleteEndPoint() { this->endPoint_ = nullptr;};
      inline string getEndPoint() const { DARABONBA_PTR_GET_DEFAULT(endPoint_, "") };
      inline SlsInfo& setEndPoint(string endPoint) { DARABONBA_PTR_SET_VALUE(endPoint_, endPoint) };


      // logStore Field Functions 
      bool hasLogStore() const { return this->logStore_ != nullptr;};
      void deleteLogStore() { this->logStore_ = nullptr;};
      inline string getLogStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
      inline SlsInfo& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline SlsInfo& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline SlsInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // The endpoint of Log Service.
      shared_ptr<string> endPoint_ {};
      // The Logstore of Log Service.
      shared_ptr<string> logStore_ {};
      // The project of Log Service.
      shared_ptr<string> project_ {};
      // The region where Log Service resides.
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->slsInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSlrAndSlsProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsInfo Field Functions 
    bool hasSlsInfo() const { return this->slsInfo_ != nullptr;};
    void deleteSlsInfo() { this->slsInfo_ = nullptr;};
    inline const CreateSlrAndSlsProjectResponseBody::SlsInfo & getSlsInfo() const { DARABONBA_PTR_GET_CONST(slsInfo_, CreateSlrAndSlsProjectResponseBody::SlsInfo) };
    inline CreateSlrAndSlsProjectResponseBody::SlsInfo getSlsInfo() { DARABONBA_PTR_GET(slsInfo_, CreateSlrAndSlsProjectResponseBody::SlsInfo) };
    inline CreateSlrAndSlsProjectResponseBody& setSlsInfo(const CreateSlrAndSlsProjectResponseBody::SlsInfo & slsInfo) { DARABONBA_PTR_SET_VALUE(slsInfo_, slsInfo) };
    inline CreateSlrAndSlsProjectResponseBody& setSlsInfo(CreateSlrAndSlsProjectResponseBody::SlsInfo && slsInfo) { DARABONBA_PTR_SET_RVALUE(slsInfo_, slsInfo) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about Log Service.
    shared_ptr<CreateSlrAndSlsProjectResponseBody::SlsInfo> slsInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
