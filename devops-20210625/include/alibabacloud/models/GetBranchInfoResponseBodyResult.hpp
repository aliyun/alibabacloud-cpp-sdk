// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBRANCHINFORESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETBRANCHINFORESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBranchInfoResponseBodyResultCommit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetBranchInfoResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBranchInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(commit, commit_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(protected, protected_);
    };
    friend void from_json(const Darabonba::Json& j, GetBranchInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(commit, commit_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(protected, protected_);
    };
    GetBranchInfoResponseBodyResult() = default ;
    GetBranchInfoResponseBodyResult(const GetBranchInfoResponseBodyResult &) = default ;
    GetBranchInfoResponseBodyResult(GetBranchInfoResponseBodyResult &&) = default ;
    GetBranchInfoResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBranchInfoResponseBodyResult() = default ;
    GetBranchInfoResponseBodyResult& operator=(const GetBranchInfoResponseBodyResult &) = default ;
    GetBranchInfoResponseBodyResult& operator=(GetBranchInfoResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commit_ == nullptr
        && return this->name_ == nullptr && return this->protected_ == nullptr; };
    // commit Field Functions 
    bool hasCommit() const { return this->commit_ != nullptr;};
    void deleteCommit() { this->commit_ = nullptr;};
    inline const Models::GetBranchInfoResponseBodyResultCommit & commit() const { DARABONBA_PTR_GET_CONST(commit_, Models::GetBranchInfoResponseBodyResultCommit) };
    inline Models::GetBranchInfoResponseBodyResultCommit commit() { DARABONBA_PTR_GET(commit_, Models::GetBranchInfoResponseBodyResultCommit) };
    inline GetBranchInfoResponseBodyResult& setCommit(const Models::GetBranchInfoResponseBodyResultCommit & commit) { DARABONBA_PTR_SET_VALUE(commit_, commit) };
    inline GetBranchInfoResponseBodyResult& setCommit(Models::GetBranchInfoResponseBodyResultCommit && commit) { DARABONBA_PTR_SET_RVALUE(commit_, commit) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetBranchInfoResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protected Field Functions 
    bool hasProtected() const { return this->protected_ != nullptr;};
    void deleteProtected() { this->protected_ = nullptr;};
    inline string _protected() const { DARABONBA_PTR_GET_DEFAULT(protected_, "") };
    inline GetBranchInfoResponseBodyResult& setProtected(string _protected) { DARABONBA_PTR_SET_VALUE(protected_, _protected) };


  protected:
    std::shared_ptr<Models::GetBranchInfoResponseBodyResultCommit> commit_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> protected_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
