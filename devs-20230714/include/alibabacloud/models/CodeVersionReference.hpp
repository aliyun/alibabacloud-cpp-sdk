// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CODEVERSIONREFERENCE_HPP_
#define ALIBABACLOUD_MODELS_CODEVERSIONREFERENCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class CodeVersionReference : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CodeVersionReference& obj) { 
      DARABONBA_PTR_TO_JSON(branch, branch_);
      DARABONBA_PTR_TO_JSON(commitID, commitID_);
    };
    friend void from_json(const Darabonba::Json& j, CodeVersionReference& obj) { 
      DARABONBA_PTR_FROM_JSON(branch, branch_);
      DARABONBA_PTR_FROM_JSON(commitID, commitID_);
    };
    CodeVersionReference() = default ;
    CodeVersionReference(const CodeVersionReference &) = default ;
    CodeVersionReference(CodeVersionReference &&) = default ;
    CodeVersionReference(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CodeVersionReference() = default ;
    CodeVersionReference& operator=(const CodeVersionReference &) = default ;
    CodeVersionReference& operator=(CodeVersionReference &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->branch_ != nullptr
        && this->commitID_ != nullptr; };
    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string branch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline CodeVersionReference& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // commitID Field Functions 
    bool hasCommitID() const { return this->commitID_ != nullptr;};
    void deleteCommitID() { this->commitID_ = nullptr;};
    inline string commitID() const { DARABONBA_PTR_GET_DEFAULT(commitID_, "") };
    inline CodeVersionReference& setCommitID(string commitID) { DARABONBA_PTR_SET_VALUE(commitID_, commitID) };


  protected:
    std::shared_ptr<string> branch_ = nullptr;
    std::shared_ptr<string> commitID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
