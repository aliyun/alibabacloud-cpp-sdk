// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABTESTEXPERIMENTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABTESTEXPERIMENTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeABTestExperimentResponseBodyResultParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeABTestExperimentResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeABTestExperimentResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(online, online_);
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(traffic, traffic_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeABTestExperimentResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(online, online_);
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(traffic, traffic_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    DescribeABTestExperimentResponseBodyResult() = default ;
    DescribeABTestExperimentResponseBodyResult(const DescribeABTestExperimentResponseBodyResult &) = default ;
    DescribeABTestExperimentResponseBodyResult(DescribeABTestExperimentResponseBodyResult &&) = default ;
    DescribeABTestExperimentResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeABTestExperimentResponseBodyResult() = default ;
    DescribeABTestExperimentResponseBodyResult& operator=(const DescribeABTestExperimentResponseBodyResult &) = default ;
    DescribeABTestExperimentResponseBodyResult& operator=(DescribeABTestExperimentResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->created_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->online_ == nullptr && return this->params_ == nullptr && return this->traffic_ == nullptr
        && return this->updated_ == nullptr; };
    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int32_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
    inline DescribeABTestExperimentResponseBodyResult& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeABTestExperimentResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeABTestExperimentResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline DescribeABTestExperimentResponseBodyResult& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const Models::DescribeABTestExperimentResponseBodyResultParams & params() const { DARABONBA_PTR_GET_CONST(params_, Models::DescribeABTestExperimentResponseBodyResultParams) };
    inline Models::DescribeABTestExperimentResponseBodyResultParams params() { DARABONBA_PTR_GET(params_, Models::DescribeABTestExperimentResponseBodyResultParams) };
    inline DescribeABTestExperimentResponseBodyResult& setParams(const Models::DescribeABTestExperimentResponseBodyResultParams & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline DescribeABTestExperimentResponseBodyResult& setParams(Models::DescribeABTestExperimentResponseBodyResultParams && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // traffic Field Functions 
    bool hasTraffic() const { return this->traffic_ != nullptr;};
    void deleteTraffic() { this->traffic_ = nullptr;};
    inline int32_t traffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, 0) };
    inline DescribeABTestExperimentResponseBodyResult& setTraffic(int32_t traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline int32_t updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
    inline DescribeABTestExperimentResponseBodyResult& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The time when the test was created.
    std::shared_ptr<int32_t> created_ = nullptr;
    // The ID of the test.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the test.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the test. Valid values:
    // 
    // *   true: in effect
    // *   false: not in effect
    std::shared_ptr<bool> online_ = nullptr;
    // The parameters of the test.
    std::shared_ptr<Models::DescribeABTestExperimentResponseBodyResultParams> params_ = nullptr;
    // The percentage of traffic that is routed to the test.
    std::shared_ptr<int32_t> traffic_ = nullptr;
    // The time when the test was last modified.
    std::shared_ptr<int32_t> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
