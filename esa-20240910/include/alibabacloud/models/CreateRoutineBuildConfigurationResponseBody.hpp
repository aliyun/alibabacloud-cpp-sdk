// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINEBUILDCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINEBUILDCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRoutineBuildConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoutineBuildConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoutineBuildConfigurationId, routineBuildConfigurationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoutineBuildConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoutineBuildConfigurationId, routineBuildConfigurationId_);
    };
    CreateRoutineBuildConfigurationResponseBody() = default ;
    CreateRoutineBuildConfigurationResponseBody(const CreateRoutineBuildConfigurationResponseBody &) = default ;
    CreateRoutineBuildConfigurationResponseBody(CreateRoutineBuildConfigurationResponseBody &&) = default ;
    CreateRoutineBuildConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoutineBuildConfigurationResponseBody() = default ;
    CreateRoutineBuildConfigurationResponseBody& operator=(const CreateRoutineBuildConfigurationResponseBody &) = default ;
    CreateRoutineBuildConfigurationResponseBody& operator=(CreateRoutineBuildConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->routineBuildConfigurationId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRoutineBuildConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routineBuildConfigurationId Field Functions 
    bool hasRoutineBuildConfigurationId() const { return this->routineBuildConfigurationId_ != nullptr;};
    void deleteRoutineBuildConfigurationId() { this->routineBuildConfigurationId_ = nullptr;};
    inline int64_t getRoutineBuildConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(routineBuildConfigurationId_, 0L) };
    inline CreateRoutineBuildConfigurationResponseBody& setRoutineBuildConfigurationId(int64_t routineBuildConfigurationId) { DARABONBA_PTR_SET_VALUE(routineBuildConfigurationId_, routineBuildConfigurationId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ER build configuration ID.
    shared_ptr<int64_t> routineBuildConfigurationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
