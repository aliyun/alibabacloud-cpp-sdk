// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateFileResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(branchName, branchName_);
      DARABONBA_PTR_TO_JSON(filePath, filePath_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(branchName, branchName_);
      DARABONBA_PTR_FROM_JSON(filePath, filePath_);
    };
    CreateFileResponseBodyResult() = default ;
    CreateFileResponseBodyResult(const CreateFileResponseBodyResult &) = default ;
    CreateFileResponseBodyResult(CreateFileResponseBodyResult &&) = default ;
    CreateFileResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileResponseBodyResult() = default ;
    CreateFileResponseBodyResult& operator=(const CreateFileResponseBodyResult &) = default ;
    CreateFileResponseBodyResult& operator=(CreateFileResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branchName_ == nullptr
        && return this->filePath_ == nullptr; };
    // branchName Field Functions 
    bool hasBranchName() const { return this->branchName_ != nullptr;};
    void deleteBranchName() { this->branchName_ = nullptr;};
    inline string branchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
    inline CreateFileResponseBodyResult& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline CreateFileResponseBodyResult& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


  protected:
    std::shared_ptr<string> branchName_ = nullptr;
    std::shared_ptr<string> filePath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
