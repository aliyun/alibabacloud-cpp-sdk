// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SOURCECODEREPOBRANCH_HPP_
#define ALIBABACLOUD_MODELS_SOURCECODEREPOBRANCH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class SourceCodeRepoBranch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SourceCodeRepoBranch& obj) { 
      DARABONBA_PTR_TO_JSON(CommitId, commitId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, SourceCodeRepoBranch& obj) { 
      DARABONBA_PTR_FROM_JSON(CommitId, commitId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    SourceCodeRepoBranch() = default ;
    SourceCodeRepoBranch(const SourceCodeRepoBranch &) = default ;
    SourceCodeRepoBranch(SourceCodeRepoBranch &&) = default ;
    SourceCodeRepoBranch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SourceCodeRepoBranch() = default ;
    SourceCodeRepoBranch& operator=(const SourceCodeRepoBranch &) = default ;
    SourceCodeRepoBranch& operator=(SourceCodeRepoBranch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commitId_ == nullptr
        && return this->name_ == nullptr; };
    // commitId Field Functions 
    bool hasCommitId() const { return this->commitId_ != nullptr;};
    void deleteCommitId() { this->commitId_ = nullptr;};
    inline string commitId() const { DARABONBA_PTR_GET_DEFAULT(commitId_, "") };
    inline SourceCodeRepoBranch& setCommitId(string commitId) { DARABONBA_PTR_SET_VALUE(commitId_, commitId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SourceCodeRepoBranch& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> commitId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
