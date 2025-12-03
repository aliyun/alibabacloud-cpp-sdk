// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETESTCASERESPONSEBODYTESTCASEDIRECTORY_HPP_
#define ALIBABACLOUD_MODELS_UPDATETESTCASERESPONSEBODYTESTCASEDIRECTORY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateTestCaseResponseBodyTestcaseDirectory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTestCaseResponseBodyTestcaseDirectory& obj) { 
      DARABONBA_PTR_TO_JSON(childIdentifier, childIdentifier_);
      DARABONBA_PTR_TO_JSON(directoryIdentifier, directoryIdentifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pathName, pathName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTestCaseResponseBodyTestcaseDirectory& obj) { 
      DARABONBA_PTR_FROM_JSON(childIdentifier, childIdentifier_);
      DARABONBA_PTR_FROM_JSON(directoryIdentifier, directoryIdentifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pathName, pathName_);
    };
    UpdateTestCaseResponseBodyTestcaseDirectory() = default ;
    UpdateTestCaseResponseBodyTestcaseDirectory(const UpdateTestCaseResponseBodyTestcaseDirectory &) = default ;
    UpdateTestCaseResponseBodyTestcaseDirectory(UpdateTestCaseResponseBodyTestcaseDirectory &&) = default ;
    UpdateTestCaseResponseBodyTestcaseDirectory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTestCaseResponseBodyTestcaseDirectory() = default ;
    UpdateTestCaseResponseBodyTestcaseDirectory& operator=(const UpdateTestCaseResponseBodyTestcaseDirectory &) = default ;
    UpdateTestCaseResponseBodyTestcaseDirectory& operator=(UpdateTestCaseResponseBodyTestcaseDirectory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->childIdentifier_ == nullptr
        && return this->directoryIdentifier_ == nullptr && return this->name_ == nullptr && return this->pathName_ == nullptr; };
    // childIdentifier Field Functions 
    bool hasChildIdentifier() const { return this->childIdentifier_ != nullptr;};
    void deleteChildIdentifier() { this->childIdentifier_ = nullptr;};
    inline string childIdentifier() const { DARABONBA_PTR_GET_DEFAULT(childIdentifier_, "") };
    inline UpdateTestCaseResponseBodyTestcaseDirectory& setChildIdentifier(string childIdentifier) { DARABONBA_PTR_SET_VALUE(childIdentifier_, childIdentifier) };


    // directoryIdentifier Field Functions 
    bool hasDirectoryIdentifier() const { return this->directoryIdentifier_ != nullptr;};
    void deleteDirectoryIdentifier() { this->directoryIdentifier_ = nullptr;};
    inline string directoryIdentifier() const { DARABONBA_PTR_GET_DEFAULT(directoryIdentifier_, "") };
    inline UpdateTestCaseResponseBodyTestcaseDirectory& setDirectoryIdentifier(string directoryIdentifier) { DARABONBA_PTR_SET_VALUE(directoryIdentifier_, directoryIdentifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTestCaseResponseBodyTestcaseDirectory& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pathName Field Functions 
    bool hasPathName() const { return this->pathName_ != nullptr;};
    void deletePathName() { this->pathName_ = nullptr;};
    inline const vector<string> & pathName() const { DARABONBA_PTR_GET_CONST(pathName_, vector<string>) };
    inline vector<string> pathName() { DARABONBA_PTR_GET(pathName_, vector<string>) };
    inline UpdateTestCaseResponseBodyTestcaseDirectory& setPathName(const vector<string> & pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };
    inline UpdateTestCaseResponseBodyTestcaseDirectory& setPathName(vector<string> && pathName) { DARABONBA_PTR_SET_RVALUE(pathName_, pathName) };


  protected:
    std::shared_ptr<string> childIdentifier_ = nullptr;
    std::shared_ptr<string> directoryIdentifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> pathName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
