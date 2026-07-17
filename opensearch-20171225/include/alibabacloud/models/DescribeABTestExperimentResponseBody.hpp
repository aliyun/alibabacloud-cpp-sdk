// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABTESTEXPERIMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABTESTEXPERIMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeABTestExperimentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeABTestExperimentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeABTestExperimentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    DescribeABTestExperimentResponseBody() = default ;
    DescribeABTestExperimentResponseBody(const DescribeABTestExperimentResponseBody &) = default ;
    DescribeABTestExperimentResponseBody(DescribeABTestExperimentResponseBody &&) = default ;
    DescribeABTestExperimentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeABTestExperimentResponseBody() = default ;
    DescribeABTestExperimentResponseBody& operator=(const DescribeABTestExperimentResponseBody &) = default ;
    DescribeABTestExperimentResponseBody& operator=(DescribeABTestExperimentResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(params, params_);
        DARABONBA_PTR_TO_JSON(traffic, traffic_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(online, online_);
        DARABONBA_PTR_FROM_JSON(params, params_);
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
      class Params : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Params& obj) { 
          DARABONBA_PTR_TO_JSON(first_formula_name, firstFormulaName_);
        };
        friend void from_json(const Darabonba::Json& j, Params& obj) { 
          DARABONBA_PTR_FROM_JSON(first_formula_name, firstFormulaName_);
        };
        Params() = default ;
        Params(const Params &) = default ;
        Params(Params &&) = default ;
        Params(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Params() = default ;
        Params& operator=(const Params &) = default ;
        Params& operator=(Params &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->firstFormulaName_ == nullptr; };
        // firstFormulaName Field Functions 
        bool hasFirstFormulaName() const { return this->firstFormulaName_ != nullptr;};
        void deleteFirstFormulaName() { this->firstFormulaName_ = nullptr;};
        inline string getFirstFormulaName() const { DARABONBA_PTR_GET_DEFAULT(firstFormulaName_, "") };
        inline Params& setFirstFormulaName(string firstFormulaName) { DARABONBA_PTR_SET_VALUE(firstFormulaName_, firstFormulaName) };


      protected:
        // The name of the coarse-grained ranking policy.
        shared_ptr<string> firstFormulaName_ {};
      };

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
      inline const Result::Params & getParams() const { DARABONBA_PTR_GET_CONST(params_, Result::Params) };
      inline Result::Params getParams() { DARABONBA_PTR_GET(params_, Result::Params) };
      inline Result& setParams(const Result::Params & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
      inline Result& setParams(Result::Params && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


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
      // The time when the experiment was created.
      shared_ptr<int32_t> created_ {};
      // The experiment ID.
      shared_ptr<string> id_ {};
      // The alias of the experiment.
      shared_ptr<string> name_ {};
      // The status of the experiment.
      // 
      // - true: The experiment is online.
      // 
      // - false: The experiment is offline.
      shared_ptr<bool> online_ {};
      // The experiment parameters.
      shared_ptr<Result::Params> params_ {};
      // The percentage of traffic for the experiment bucketing.
      shared_ptr<int32_t> traffic_ {};
      // The time when the experiment was last modified.
      shared_ptr<int32_t> updated_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeABTestExperimentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeABTestExperimentResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribeABTestExperimentResponseBody::Result) };
    inline DescribeABTestExperimentResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribeABTestExperimentResponseBody::Result) };
    inline DescribeABTestExperimentResponseBody& setResult(const DescribeABTestExperimentResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeABTestExperimentResponseBody& setResult(DescribeABTestExperimentResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the experiment.
    shared_ptr<DescribeABTestExperimentResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
