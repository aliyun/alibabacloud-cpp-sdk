// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBRANCHRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DELETEBRANCHRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class DeleteBranchResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBranchResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(branchName, branchName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBranchResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(branchName, branchName_);
    };
    DeleteBranchResponseBodyResult() = default ;
    DeleteBranchResponseBodyResult(const DeleteBranchResponseBodyResult &) = default ;
    DeleteBranchResponseBodyResult(DeleteBranchResponseBodyResult &&) = default ;
    DeleteBranchResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBranchResponseBodyResult() = default ;
    DeleteBranchResponseBodyResult& operator=(const DeleteBranchResponseBodyResult &) = default ;
    DeleteBranchResponseBodyResult& operator=(DeleteBranchResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branchName_ == nullptr; };
    // branchName Field Functions 
    bool hasBranchName() const { return this->branchName_ != nullptr;};
    void deleteBranchName() { this->branchName_ = nullptr;};
    inline string branchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
    inline DeleteBranchResponseBodyResult& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


  protected:
    std::shared_ptr<string> branchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
