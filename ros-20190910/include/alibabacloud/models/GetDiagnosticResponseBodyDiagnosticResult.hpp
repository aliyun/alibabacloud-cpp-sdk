// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIAGNOSTICRESPONSEBODYDIAGNOSTICRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETDIAGNOSTICRESPONSEBODYDIAGNOSTICRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetDiagnosticResponseBodyDiagnosticResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDiagnosticResponseBodyDiagnosticResult& obj) { 
      DARABONBA_ANY_TO_JSON(FailedResources, failedResources_);
      DARABONBA_ANY_TO_JSON(RosActionMessages, rosActionMessages_);
      DARABONBA_ANY_TO_JSON(StackMessages, stackMessages_);
    };
    friend void from_json(const Darabonba::Json& j, GetDiagnosticResponseBodyDiagnosticResult& obj) { 
      DARABONBA_ANY_FROM_JSON(FailedResources, failedResources_);
      DARABONBA_ANY_FROM_JSON(RosActionMessages, rosActionMessages_);
      DARABONBA_ANY_FROM_JSON(StackMessages, stackMessages_);
    };
    GetDiagnosticResponseBodyDiagnosticResult() = default ;
    GetDiagnosticResponseBodyDiagnosticResult(const GetDiagnosticResponseBodyDiagnosticResult &) = default ;
    GetDiagnosticResponseBodyDiagnosticResult(GetDiagnosticResponseBodyDiagnosticResult &&) = default ;
    GetDiagnosticResponseBodyDiagnosticResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDiagnosticResponseBodyDiagnosticResult() = default ;
    GetDiagnosticResponseBodyDiagnosticResult& operator=(const GetDiagnosticResponseBodyDiagnosticResult &) = default ;
    GetDiagnosticResponseBodyDiagnosticResult& operator=(GetDiagnosticResponseBodyDiagnosticResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedResources_ != nullptr
        && this->rosActionMessages_ != nullptr && this->stackMessages_ != nullptr; };
    // failedResources Field Functions 
    bool hasFailedResources() const { return this->failedResources_ != nullptr;};
    void deleteFailedResources() { this->failedResources_ = nullptr;};
    inline     const Darabonba::Json & failedResources() const { DARABONBA_GET(failedResources_) };
    Darabonba::Json & failedResources() { DARABONBA_GET(failedResources_) };
    inline GetDiagnosticResponseBodyDiagnosticResult& setFailedResources(const Darabonba::Json & failedResources) { DARABONBA_SET_VALUE(failedResources_, failedResources) };
    inline GetDiagnosticResponseBodyDiagnosticResult& setFailedResources(Darabonba::Json & failedResources) { DARABONBA_SET_RVALUE(failedResources_, failedResources) };


    // rosActionMessages Field Functions 
    bool hasRosActionMessages() const { return this->rosActionMessages_ != nullptr;};
    void deleteRosActionMessages() { this->rosActionMessages_ = nullptr;};
    inline     const Darabonba::Json & rosActionMessages() const { DARABONBA_GET(rosActionMessages_) };
    Darabonba::Json & rosActionMessages() { DARABONBA_GET(rosActionMessages_) };
    inline GetDiagnosticResponseBodyDiagnosticResult& setRosActionMessages(const Darabonba::Json & rosActionMessages) { DARABONBA_SET_VALUE(rosActionMessages_, rosActionMessages) };
    inline GetDiagnosticResponseBodyDiagnosticResult& setRosActionMessages(Darabonba::Json & rosActionMessages) { DARABONBA_SET_RVALUE(rosActionMessages_, rosActionMessages) };


    // stackMessages Field Functions 
    bool hasStackMessages() const { return this->stackMessages_ != nullptr;};
    void deleteStackMessages() { this->stackMessages_ = nullptr;};
    inline     const Darabonba::Json & stackMessages() const { DARABONBA_GET(stackMessages_) };
    Darabonba::Json & stackMessages() { DARABONBA_GET(stackMessages_) };
    inline GetDiagnosticResponseBodyDiagnosticResult& setStackMessages(const Darabonba::Json & stackMessages) { DARABONBA_SET_VALUE(stackMessages_, stackMessages) };
    inline GetDiagnosticResponseBodyDiagnosticResult& setStackMessages(Darabonba::Json & stackMessages) { DARABONBA_SET_RVALUE(stackMessages_, stackMessages) };


  protected:
    // The resources that failed to be diagnosed.
    Darabonba::Json failedResources_ = nullptr;
    // The information about Resource Orchestration Service (ROS) calling.
    Darabonba::Json rosActionMessages_ = nullptr;
    // The stack information.
    Darabonba::Json stackMessages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
