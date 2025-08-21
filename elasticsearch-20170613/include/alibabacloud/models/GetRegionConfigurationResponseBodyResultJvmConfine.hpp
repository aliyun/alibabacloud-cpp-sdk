// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODYRESULTJVMCONFINE_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODYRESULTJVMCONFINE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetRegionConfigurationResponseBodyResultJvmConfine : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionConfigurationResponseBodyResultJvmConfine& obj) { 
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(supportEsVersions, supportEsVersions_);
      DARABONBA_PTR_TO_JSON(supportGcs, supportGcs_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionConfigurationResponseBodyResultJvmConfine& obj) { 
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(supportEsVersions, supportEsVersions_);
      DARABONBA_PTR_FROM_JSON(supportGcs, supportGcs_);
    };
    GetRegionConfigurationResponseBodyResultJvmConfine() = default ;
    GetRegionConfigurationResponseBodyResultJvmConfine(const GetRegionConfigurationResponseBodyResultJvmConfine &) = default ;
    GetRegionConfigurationResponseBodyResultJvmConfine(GetRegionConfigurationResponseBodyResultJvmConfine &&) = default ;
    GetRegionConfigurationResponseBodyResultJvmConfine(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionConfigurationResponseBodyResultJvmConfine() = default ;
    GetRegionConfigurationResponseBodyResultJvmConfine& operator=(const GetRegionConfigurationResponseBodyResultJvmConfine &) = default ;
    GetRegionConfigurationResponseBodyResultJvmConfine& operator=(GetRegionConfigurationResponseBodyResultJvmConfine &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->memory_ != nullptr
        && this->supportEsVersions_ != nullptr && this->supportGcs_ != nullptr; };
    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline GetRegionConfigurationResponseBodyResultJvmConfine& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // supportEsVersions Field Functions 
    bool hasSupportEsVersions() const { return this->supportEsVersions_ != nullptr;};
    void deleteSupportEsVersions() { this->supportEsVersions_ = nullptr;};
    inline const vector<string> & supportEsVersions() const { DARABONBA_PTR_GET_CONST(supportEsVersions_, vector<string>) };
    inline vector<string> supportEsVersions() { DARABONBA_PTR_GET(supportEsVersions_, vector<string>) };
    inline GetRegionConfigurationResponseBodyResultJvmConfine& setSupportEsVersions(const vector<string> & supportEsVersions) { DARABONBA_PTR_SET_VALUE(supportEsVersions_, supportEsVersions) };
    inline GetRegionConfigurationResponseBodyResultJvmConfine& setSupportEsVersions(vector<string> && supportEsVersions) { DARABONBA_PTR_SET_RVALUE(supportEsVersions_, supportEsVersions) };


    // supportGcs Field Functions 
    bool hasSupportGcs() const { return this->supportGcs_ != nullptr;};
    void deleteSupportGcs() { this->supportGcs_ = nullptr;};
    inline const vector<string> & supportGcs() const { DARABONBA_PTR_GET_CONST(supportGcs_, vector<string>) };
    inline vector<string> supportGcs() { DARABONBA_PTR_GET(supportGcs_, vector<string>) };
    inline GetRegionConfigurationResponseBodyResultJvmConfine& setSupportGcs(const vector<string> & supportGcs) { DARABONBA_PTR_SET_VALUE(supportGcs_, supportGcs) };
    inline GetRegionConfigurationResponseBodyResultJvmConfine& setSupportGcs(vector<string> && supportGcs) { DARABONBA_PTR_SET_RVALUE(supportGcs_, supportGcs) };


  protected:
    std::shared_ptr<int32_t> memory_ = nullptr;
    std::shared_ptr<vector<string>> supportEsVersions_ = nullptr;
    std::shared_ptr<vector<string>> supportGcs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
