// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBRANCHRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEBRANCHRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateBranchResponseBodyResultCommit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateBranchResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBranchResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(commit, commit_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(protected, protected_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBranchResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(commit, commit_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(protected, protected_);
    };
    CreateBranchResponseBodyResult() = default ;
    CreateBranchResponseBodyResult(const CreateBranchResponseBodyResult &) = default ;
    CreateBranchResponseBodyResult(CreateBranchResponseBodyResult &&) = default ;
    CreateBranchResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBranchResponseBodyResult() = default ;
    CreateBranchResponseBodyResult& operator=(const CreateBranchResponseBodyResult &) = default ;
    CreateBranchResponseBodyResult& operator=(CreateBranchResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commit_ == nullptr
        && return this->name_ == nullptr && return this->protected_ == nullptr; };
    // commit Field Functions 
    bool hasCommit() const { return this->commit_ != nullptr;};
    void deleteCommit() { this->commit_ = nullptr;};
    inline const Models::CreateBranchResponseBodyResultCommit & commit() const { DARABONBA_PTR_GET_CONST(commit_, Models::CreateBranchResponseBodyResultCommit) };
    inline Models::CreateBranchResponseBodyResultCommit commit() { DARABONBA_PTR_GET(commit_, Models::CreateBranchResponseBodyResultCommit) };
    inline CreateBranchResponseBodyResult& setCommit(const Models::CreateBranchResponseBodyResultCommit & commit) { DARABONBA_PTR_SET_VALUE(commit_, commit) };
    inline CreateBranchResponseBodyResult& setCommit(Models::CreateBranchResponseBodyResultCommit && commit) { DARABONBA_PTR_SET_RVALUE(commit_, commit) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateBranchResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protected Field Functions 
    bool hasProtected() const { return this->protected_ != nullptr;};
    void deleteProtected() { this->protected_ = nullptr;};
    inline bool _protected() const { DARABONBA_PTR_GET_DEFAULT(protected_, false) };
    inline CreateBranchResponseBodyResult& setProtected(bool _protected) { DARABONBA_PTR_SET_VALUE(protected_, _protected) };


  protected:
    std::shared_ptr<Models::CreateBranchResponseBodyResultCommit> commit_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> protected_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
