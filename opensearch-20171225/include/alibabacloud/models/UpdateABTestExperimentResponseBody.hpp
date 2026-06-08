// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEABTESTEXPERIMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEABTESTEXPERIMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UpdateABTestExperimentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateABTestExperimentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateABTestExperimentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    UpdateABTestExperimentResponseBody() = default ;
    UpdateABTestExperimentResponseBody(const UpdateABTestExperimentResponseBody &) = default ;
    UpdateABTestExperimentResponseBody(UpdateABTestExperimentResponseBody &&) = default ;
    UpdateABTestExperimentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateABTestExperimentResponseBody() = default ;
    UpdateABTestExperimentResponseBody& operator=(const UpdateABTestExperimentResponseBody &) = default ;
    UpdateABTestExperimentResponseBody& operator=(UpdateABTestExperimentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(online, online_);
        DARABONBA_ANY_TO_JSON(params, params_);
        DARABONBA_PTR_TO_JSON(traffic, traffic_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(online, online_);
        DARABONBA_ANY_FROM_JSON(params, params_);
        DARABONBA_PTR_FROM_JSON(traffic, traffic_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->created_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->online_ == nullptr && this->params_ == nullptr && this->traffic_ == nullptr
        && this->updated_ == nullptr; };
      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int32_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
      inline Result& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // online Field Functions 
      bool hasOnline() const { return this->online_ != nullptr;};
      void deleteOnline() { this->online_ = nullptr;};
      inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
      inline Result& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline       const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
      Darabonba::Json & getParams() { DARABONBA_GET(params_) };
      inline Result& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
      inline Result& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


      // traffic Field Functions 
      bool hasTraffic() const { return this->traffic_ != nullptr;};
      void deleteTraffic() { this->traffic_ = nullptr;};
      inline int32_t getTraffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, 0) };
      inline Result& setTraffic(int32_t traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline int32_t getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
      inline Result& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    protected:
      // The time when the test was created.
      shared_ptr<int32_t> created_ {};
      // The test ID.
      shared_ptr<string> id_ {};
      // The alias of the test.
      shared_ptr<string> name_ {};
      // Indicates whether the test is in effect. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> online_ {};
      // The test parameters.
      Darabonba::Json params_ {};
      // The percentage of traffic that is routed to the test. Valid values: [0,100]
      shared_ptr<int32_t> traffic_ {};
      // The time when the test was last modified.
      shared_ptr<int32_t> updated_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateABTestExperimentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpdateABTestExperimentResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, UpdateABTestExperimentResponseBody::Result) };
    inline UpdateABTestExperimentResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, UpdateABTestExperimentResponseBody::Result) };
    inline UpdateABTestExperimentResponseBody& setResult(const UpdateABTestExperimentResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdateABTestExperimentResponseBody& setResult(UpdateABTestExperimentResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the test.
    shared_ptr<UpdateABTestExperimentResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
