// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSERVERLESSCONFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSERVERLESSCONFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationServerlessConfResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationServerlessConfResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServerlessConfItems, serverlessConfItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationServerlessConfResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServerlessConfItems, serverlessConfItems_);
    };
    DescribeApplicationServerlessConfResponseBody() = default ;
    DescribeApplicationServerlessConfResponseBody(const DescribeApplicationServerlessConfResponseBody &) = default ;
    DescribeApplicationServerlessConfResponseBody(DescribeApplicationServerlessConfResponseBody &&) = default ;
    DescribeApplicationServerlessConfResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationServerlessConfResponseBody() = default ;
    DescribeApplicationServerlessConfResponseBody& operator=(const DescribeApplicationServerlessConfResponseBody &) = default ;
    DescribeApplicationServerlessConfResponseBody& operator=(DescribeApplicationServerlessConfResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServerlessConfItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServerlessConfItems& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
        DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
        DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
      };
      friend void from_json(const Darabonba::Json& j, ServerlessConfItems& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
        DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
        DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
      };
      ServerlessConfItems() = default ;
      ServerlessConfItems(const ServerlessConfItems &) = default ;
      ServerlessConfItems(ServerlessConfItems &&) = default ;
      ServerlessConfItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServerlessConfItems() = default ;
      ServerlessConfItems& operator=(const ServerlessConfItems &) = default ;
      ServerlessConfItems& operator=(ServerlessConfItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->componentType_ == nullptr
        && this->scaleMax_ == nullptr && this->scaleMin_ == nullptr; };
      // componentType Field Functions 
      bool hasComponentType() const { return this->componentType_ != nullptr;};
      void deleteComponentType() { this->componentType_ = nullptr;};
      inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
      inline ServerlessConfItems& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


      // scaleMax Field Functions 
      bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
      void deleteScaleMax() { this->scaleMax_ = nullptr;};
      inline string getScaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, "") };
      inline ServerlessConfItems& setScaleMax(string scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


      // scaleMin Field Functions 
      bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
      void deleteScaleMin() { this->scaleMin_ = nullptr;};
      inline string getScaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, "") };
      inline ServerlessConfItems& setScaleMin(string scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    protected:
      shared_ptr<string> componentType_ {};
      shared_ptr<string> scaleMax_ {};
      shared_ptr<string> scaleMin_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->requestId_ == nullptr && this->serverlessConfItems_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationServerlessConfResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationServerlessConfResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serverlessConfItems Field Functions 
    bool hasServerlessConfItems() const { return this->serverlessConfItems_ != nullptr;};
    void deleteServerlessConfItems() { this->serverlessConfItems_ = nullptr;};
    inline const vector<DescribeApplicationServerlessConfResponseBody::ServerlessConfItems> & getServerlessConfItems() const { DARABONBA_PTR_GET_CONST(serverlessConfItems_, vector<DescribeApplicationServerlessConfResponseBody::ServerlessConfItems>) };
    inline vector<DescribeApplicationServerlessConfResponseBody::ServerlessConfItems> getServerlessConfItems() { DARABONBA_PTR_GET(serverlessConfItems_, vector<DescribeApplicationServerlessConfResponseBody::ServerlessConfItems>) };
    inline DescribeApplicationServerlessConfResponseBody& setServerlessConfItems(const vector<DescribeApplicationServerlessConfResponseBody::ServerlessConfItems> & serverlessConfItems) { DARABONBA_PTR_SET_VALUE(serverlessConfItems_, serverlessConfItems) };
    inline DescribeApplicationServerlessConfResponseBody& setServerlessConfItems(vector<DescribeApplicationServerlessConfResponseBody::ServerlessConfItems> && serverlessConfItems) { DARABONBA_PTR_SET_RVALUE(serverlessConfItems_, serverlessConfItems) };


  protected:
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeApplicationServerlessConfResponseBody::ServerlessConfItems>> serverlessConfItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
