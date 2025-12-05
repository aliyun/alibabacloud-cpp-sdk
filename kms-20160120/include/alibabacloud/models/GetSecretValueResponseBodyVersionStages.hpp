// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETVALUERESPONSEBODYVERSIONSTAGES_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETVALUERESPONSEBODYVERSIONSTAGES_HPP_
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
  class GetSecretValueResponseBodyVersionStages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretValueResponseBodyVersionStages& obj) { 
      DARABONBA_PTR_TO_JSON(VersionStage, versionStage_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretValueResponseBodyVersionStages& obj) { 
      DARABONBA_PTR_FROM_JSON(VersionStage, versionStage_);
    };
    GetSecretValueResponseBodyVersionStages() = default ;
    GetSecretValueResponseBodyVersionStages(const GetSecretValueResponseBodyVersionStages &) = default ;
    GetSecretValueResponseBodyVersionStages(GetSecretValueResponseBodyVersionStages &&) = default ;
    GetSecretValueResponseBodyVersionStages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretValueResponseBodyVersionStages() = default ;
    GetSecretValueResponseBodyVersionStages& operator=(const GetSecretValueResponseBodyVersionStages &) = default ;
    GetSecretValueResponseBodyVersionStages& operator=(GetSecretValueResponseBodyVersionStages &&) = default ;
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
    inline GetSecretValueResponseBodyVersionStages& setVersionStage(const vector<string> & versionStage) { DARABONBA_PTR_SET_VALUE(versionStage_, versionStage) };
    inline GetSecretValueResponseBodyVersionStages& setVersionStage(vector<string> && versionStage) { DARABONBA_PTR_SET_RVALUE(versionStage_, versionStage) };


  protected:
    std::shared_ptr<vector<string>> versionStage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
