// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEMANTICJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSEMANTICJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RunSemanticJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSemanticJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, RunSemanticJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    RunSemanticJobRequest() = default ;
    RunSemanticJobRequest(const RunSemanticJobRequest &) = default ;
    RunSemanticJobRequest(RunSemanticJobRequest &&) = default ;
    RunSemanticJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSemanticJobRequest() = default ;
    RunSemanticJobRequest& operator=(const RunSemanticJobRequest &) = default ;
    RunSemanticJobRequest& operator=(RunSemanticJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunSemanticJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the job to run. Use the Data.Name value returned by CreateSemanticJob or the Name field from the ListSemanticJobs response. The Source, ResourceGroupId, and reference files of the job are determined by the definition saved at creation time.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
