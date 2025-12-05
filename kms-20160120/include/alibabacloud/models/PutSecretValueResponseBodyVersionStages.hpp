// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTSECRETVALUERESPONSEBODYVERSIONSTAGES_HPP_
#define ALIBABACLOUD_MODELS_PUTSECRETVALUERESPONSEBODYVERSIONSTAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class PutSecretValueResponseBodyVersionStages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutSecretValueResponseBodyVersionStages& obj) { 
      DARABONBA_PTR_TO_JSON(VersionStage, versionStage_);
    };
    friend void from_json(const Darabonba::Json& j, PutSecretValueResponseBodyVersionStages& obj) { 
      DARABONBA_PTR_FROM_JSON(VersionStage, versionStage_);
    };
    PutSecretValueResponseBodyVersionStages() = default ;
    PutSecretValueResponseBodyVersionStages(const PutSecretValueResponseBodyVersionStages &) = default ;
    PutSecretValueResponseBodyVersionStages(PutSecretValueResponseBodyVersionStages &&) = default ;
    PutSecretValueResponseBodyVersionStages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutSecretValueResponseBodyVersionStages() = default ;
    PutSecretValueResponseBodyVersionStages& operator=(const PutSecretValueResponseBodyVersionStages &) = default ;
    PutSecretValueResponseBodyVersionStages& operator=(PutSecretValueResponseBodyVersionStages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->versionStage_ == nullptr; };
    // versionStage Field Functions 
    bool hasVersionStage() const { return this->versionStage_ != nullptr;};
    void deleteVersionStage() { this->versionStage_ = nullptr;};
    inline const vector<string> & versionStage() const { DARABONBA_PTR_GET_CONST(versionStage_, vector<string>) };
    inline vector<string> versionStage() { DARABONBA_PTR_GET(versionStage_, vector<string>) };
    inline PutSecretValueResponseBodyVersionStages& setVersionStage(const vector<string> & versionStage) { DARABONBA_PTR_SET_VALUE(versionStage_, versionStage) };
    inline PutSecretValueResponseBodyVersionStages& setVersionStage(vector<string> && versionStage) { DARABONBA_PTR_SET_RVALUE(versionStage_, versionStage) };


  protected:
    std::shared_ptr<vector<string>> versionStage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
