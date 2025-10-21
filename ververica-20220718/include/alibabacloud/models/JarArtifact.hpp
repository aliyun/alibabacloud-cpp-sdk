// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JARARTIFACT_HPP_
#define ALIBABACLOUD_MODELS_JARARTIFACT_HPP_
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
  class JarArtifact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JarArtifact& obj) { 
      DARABONBA_PTR_TO_JSON(additionalDependencies, additionalDependencies_);
      DARABONBA_PTR_TO_JSON(entryClass, entryClass_);
      DARABONBA_PTR_TO_JSON(jarUri, jarUri_);
      DARABONBA_PTR_TO_JSON(mainArgs, mainArgs_);
    };
    friend void from_json(const Darabonba::Json& j, JarArtifact& obj) { 
      DARABONBA_PTR_FROM_JSON(additionalDependencies, additionalDependencies_);
      DARABONBA_PTR_FROM_JSON(entryClass, entryClass_);
      DARABONBA_PTR_FROM_JSON(jarUri, jarUri_);
      DARABONBA_PTR_FROM_JSON(mainArgs, mainArgs_);
    };
    JarArtifact() = default ;
    JarArtifact(const JarArtifact &) = default ;
    JarArtifact(JarArtifact &&) = default ;
    JarArtifact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JarArtifact() = default ;
    JarArtifact& operator=(const JarArtifact &) = default ;
    JarArtifact& operator=(JarArtifact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalDependencies_ == nullptr
        && return this->entryClass_ == nullptr && return this->jarUri_ == nullptr && return this->mainArgs_ == nullptr; };
    // additionalDependencies Field Functions 
    bool hasAdditionalDependencies() const { return this->additionalDependencies_ != nullptr;};
    void deleteAdditionalDependencies() { this->additionalDependencies_ = nullptr;};
    inline const vector<string> & additionalDependencies() const { DARABONBA_PTR_GET_CONST(additionalDependencies_, vector<string>) };
    inline vector<string> additionalDependencies() { DARABONBA_PTR_GET(additionalDependencies_, vector<string>) };
    inline JarArtifact& setAdditionalDependencies(const vector<string> & additionalDependencies) { DARABONBA_PTR_SET_VALUE(additionalDependencies_, additionalDependencies) };
    inline JarArtifact& setAdditionalDependencies(vector<string> && additionalDependencies) { DARABONBA_PTR_SET_RVALUE(additionalDependencies_, additionalDependencies) };


    // entryClass Field Functions 
    bool hasEntryClass() const { return this->entryClass_ != nullptr;};
    void deleteEntryClass() { this->entryClass_ = nullptr;};
    inline string entryClass() const { DARABONBA_PTR_GET_DEFAULT(entryClass_, "") };
    inline JarArtifact& setEntryClass(string entryClass) { DARABONBA_PTR_SET_VALUE(entryClass_, entryClass) };


    // jarUri Field Functions 
    bool hasJarUri() const { return this->jarUri_ != nullptr;};
    void deleteJarUri() { this->jarUri_ = nullptr;};
    inline string jarUri() const { DARABONBA_PTR_GET_DEFAULT(jarUri_, "") };
    inline JarArtifact& setJarUri(string jarUri) { DARABONBA_PTR_SET_VALUE(jarUri_, jarUri) };


    // mainArgs Field Functions 
    bool hasMainArgs() const { return this->mainArgs_ != nullptr;};
    void deleteMainArgs() { this->mainArgs_ = nullptr;};
    inline string mainArgs() const { DARABONBA_PTR_GET_DEFAULT(mainArgs_, "") };
    inline JarArtifact& setMainArgs(string mainArgs) { DARABONBA_PTR_SET_VALUE(mainArgs_, mainArgs) };


  protected:
    std::shared_ptr<vector<string>> additionalDependencies_ = nullptr;
    std::shared_ptr<string> entryClass_ = nullptr;
    std::shared_ptr<string> jarUri_ = nullptr;
    std::shared_ptr<string> mainArgs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
