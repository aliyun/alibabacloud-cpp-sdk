// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PYTHONARTIFACT_HPP_
#define ALIBABACLOUD_MODELS_PYTHONARTIFACT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class PythonArtifact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PythonArtifact& obj) { 
      DARABONBA_PTR_TO_JSON(additionalDependencies, additionalDependencies_);
      DARABONBA_PTR_TO_JSON(additionalPythonArchives, additionalPythonArchives_);
      DARABONBA_PTR_TO_JSON(additionalPythonLibraries, additionalPythonLibraries_);
      DARABONBA_PTR_TO_JSON(entryModule, entryModule_);
      DARABONBA_PTR_TO_JSON(mainArgs, mainArgs_);
      DARABONBA_PTR_TO_JSON(pythonArtifactUri, pythonArtifactUri_);
    };
    friend void from_json(const Darabonba::Json& j, PythonArtifact& obj) { 
      DARABONBA_PTR_FROM_JSON(additionalDependencies, additionalDependencies_);
      DARABONBA_PTR_FROM_JSON(additionalPythonArchives, additionalPythonArchives_);
      DARABONBA_PTR_FROM_JSON(additionalPythonLibraries, additionalPythonLibraries_);
      DARABONBA_PTR_FROM_JSON(entryModule, entryModule_);
      DARABONBA_PTR_FROM_JSON(mainArgs, mainArgs_);
      DARABONBA_PTR_FROM_JSON(pythonArtifactUri, pythonArtifactUri_);
    };
    PythonArtifact() = default ;
    PythonArtifact(const PythonArtifact &) = default ;
    PythonArtifact(PythonArtifact &&) = default ;
    PythonArtifact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PythonArtifact() = default ;
    PythonArtifact& operator=(const PythonArtifact &) = default ;
    PythonArtifact& operator=(PythonArtifact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalDependencies_ == nullptr
        && this->additionalPythonArchives_ == nullptr && this->additionalPythonLibraries_ == nullptr && this->entryModule_ == nullptr && this->mainArgs_ == nullptr && this->pythonArtifactUri_ == nullptr; };
    // additionalDependencies Field Functions 
    bool hasAdditionalDependencies() const { return this->additionalDependencies_ != nullptr;};
    void deleteAdditionalDependencies() { this->additionalDependencies_ = nullptr;};
    inline const vector<string> & getAdditionalDependencies() const { DARABONBA_PTR_GET_CONST(additionalDependencies_, vector<string>) };
    inline vector<string> getAdditionalDependencies() { DARABONBA_PTR_GET(additionalDependencies_, vector<string>) };
    inline PythonArtifact& setAdditionalDependencies(const vector<string> & additionalDependencies) { DARABONBA_PTR_SET_VALUE(additionalDependencies_, additionalDependencies) };
    inline PythonArtifact& setAdditionalDependencies(vector<string> && additionalDependencies) { DARABONBA_PTR_SET_RVALUE(additionalDependencies_, additionalDependencies) };


    // additionalPythonArchives Field Functions 
    bool hasAdditionalPythonArchives() const { return this->additionalPythonArchives_ != nullptr;};
    void deleteAdditionalPythonArchives() { this->additionalPythonArchives_ = nullptr;};
    inline const vector<string> & getAdditionalPythonArchives() const { DARABONBA_PTR_GET_CONST(additionalPythonArchives_, vector<string>) };
    inline vector<string> getAdditionalPythonArchives() { DARABONBA_PTR_GET(additionalPythonArchives_, vector<string>) };
    inline PythonArtifact& setAdditionalPythonArchives(const vector<string> & additionalPythonArchives) { DARABONBA_PTR_SET_VALUE(additionalPythonArchives_, additionalPythonArchives) };
    inline PythonArtifact& setAdditionalPythonArchives(vector<string> && additionalPythonArchives) { DARABONBA_PTR_SET_RVALUE(additionalPythonArchives_, additionalPythonArchives) };


    // additionalPythonLibraries Field Functions 
    bool hasAdditionalPythonLibraries() const { return this->additionalPythonLibraries_ != nullptr;};
    void deleteAdditionalPythonLibraries() { this->additionalPythonLibraries_ = nullptr;};
    inline const vector<string> & getAdditionalPythonLibraries() const { DARABONBA_PTR_GET_CONST(additionalPythonLibraries_, vector<string>) };
    inline vector<string> getAdditionalPythonLibraries() { DARABONBA_PTR_GET(additionalPythonLibraries_, vector<string>) };
    inline PythonArtifact& setAdditionalPythonLibraries(const vector<string> & additionalPythonLibraries) { DARABONBA_PTR_SET_VALUE(additionalPythonLibraries_, additionalPythonLibraries) };
    inline PythonArtifact& setAdditionalPythonLibraries(vector<string> && additionalPythonLibraries) { DARABONBA_PTR_SET_RVALUE(additionalPythonLibraries_, additionalPythonLibraries) };


    // entryModule Field Functions 
    bool hasEntryModule() const { return this->entryModule_ != nullptr;};
    void deleteEntryModule() { this->entryModule_ = nullptr;};
    inline string getEntryModule() const { DARABONBA_PTR_GET_DEFAULT(entryModule_, "") };
    inline PythonArtifact& setEntryModule(string entryModule) { DARABONBA_PTR_SET_VALUE(entryModule_, entryModule) };


    // mainArgs Field Functions 
    bool hasMainArgs() const { return this->mainArgs_ != nullptr;};
    void deleteMainArgs() { this->mainArgs_ = nullptr;};
    inline string getMainArgs() const { DARABONBA_PTR_GET_DEFAULT(mainArgs_, "") };
    inline PythonArtifact& setMainArgs(string mainArgs) { DARABONBA_PTR_SET_VALUE(mainArgs_, mainArgs) };


    // pythonArtifactUri Field Functions 
    bool hasPythonArtifactUri() const { return this->pythonArtifactUri_ != nullptr;};
    void deletePythonArtifactUri() { this->pythonArtifactUri_ = nullptr;};
    inline string getPythonArtifactUri() const { DARABONBA_PTR_GET_DEFAULT(pythonArtifactUri_, "") };
    inline PythonArtifact& setPythonArtifactUri(string pythonArtifactUri) { DARABONBA_PTR_SET_VALUE(pythonArtifactUri_, pythonArtifactUri) };


  protected:
    // The URL of the additional dependency file.
    shared_ptr<vector<string>> additionalDependencies_ {};
    // The Python archive file on which the deployment depends.
    shared_ptr<vector<string>> additionalPythonArchives_ {};
    // The Python library file on which the deployment depends.
    shared_ptr<vector<string>> additionalPythonLibraries_ {};
    // The startup module for the Python deployment.
    shared_ptr<string> entryModule_ {};
    // The startup parameter.
    shared_ptr<string> mainArgs_ {};
    // The full URL for the Python deployment.
    shared_ptr<string> pythonArtifactUri_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
