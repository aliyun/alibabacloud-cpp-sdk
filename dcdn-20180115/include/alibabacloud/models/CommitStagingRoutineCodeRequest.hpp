// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMITSTAGINGROUTINECODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMMITSTAGINGROUTINECODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CommitStagingRoutineCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommitStagingRoutineCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CodeDescription, codeDescription_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CommitStagingRoutineCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeDescription, codeDescription_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CommitStagingRoutineCodeRequest() = default ;
    CommitStagingRoutineCodeRequest(const CommitStagingRoutineCodeRequest &) = default ;
    CommitStagingRoutineCodeRequest(CommitStagingRoutineCodeRequest &&) = default ;
    CommitStagingRoutineCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommitStagingRoutineCodeRequest() = default ;
    CommitStagingRoutineCodeRequest& operator=(const CommitStagingRoutineCodeRequest &) = default ;
    CommitStagingRoutineCodeRequest& operator=(CommitStagingRoutineCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeDescription_ != nullptr
        && this->name_ != nullptr; };
    // codeDescription Field Functions 
    bool hasCodeDescription() const { return this->codeDescription_ != nullptr;};
    void deleteCodeDescription() { this->codeDescription_ = nullptr;};
    inline string codeDescription() const { DARABONBA_PTR_GET_DEFAULT(codeDescription_, "") };
    inline CommitStagingRoutineCodeRequest& setCodeDescription(string codeDescription) { DARABONBA_PTR_SET_VALUE(codeDescription_, codeDescription) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CommitStagingRoutineCodeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the code version.
    // 
    // This parameter is required.
    std::shared_ptr<string> codeDescription_ = nullptr;
    // The name of the routine. The name must be unique among the routines that belong to the same Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
