// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TLSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_TLSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class TLSConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TLSConfig& obj) { 
      DARABONBA_PTR_TO_JSON(cipherSuites, cipherSuites_);
      DARABONBA_PTR_TO_JSON(maxVersion, maxVersion_);
      DARABONBA_PTR_TO_JSON(minVersion, minVersion_);
    };
    friend void from_json(const Darabonba::Json& j, TLSConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(cipherSuites, cipherSuites_);
      DARABONBA_PTR_FROM_JSON(maxVersion, maxVersion_);
      DARABONBA_PTR_FROM_JSON(minVersion, minVersion_);
    };
    TLSConfig() = default ;
    TLSConfig(const TLSConfig &) = default ;
    TLSConfig(TLSConfig &&) = default ;
    TLSConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TLSConfig() = default ;
    TLSConfig& operator=(const TLSConfig &) = default ;
    TLSConfig& operator=(TLSConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cipherSuites_ == nullptr
        && this->maxVersion_ == nullptr && this->minVersion_ == nullptr; };
    // cipherSuites Field Functions 
    bool hasCipherSuites() const { return this->cipherSuites_ != nullptr;};
    void deleteCipherSuites() { this->cipherSuites_ = nullptr;};
    inline const vector<string> & getCipherSuites() const { DARABONBA_PTR_GET_CONST(cipherSuites_, vector<string>) };
    inline vector<string> getCipherSuites() { DARABONBA_PTR_GET(cipherSuites_, vector<string>) };
    inline TLSConfig& setCipherSuites(const vector<string> & cipherSuites) { DARABONBA_PTR_SET_VALUE(cipherSuites_, cipherSuites) };
    inline TLSConfig& setCipherSuites(vector<string> && cipherSuites) { DARABONBA_PTR_SET_RVALUE(cipherSuites_, cipherSuites) };


    // maxVersion Field Functions 
    bool hasMaxVersion() const { return this->maxVersion_ != nullptr;};
    void deleteMaxVersion() { this->maxVersion_ = nullptr;};
    inline string getMaxVersion() const { DARABONBA_PTR_GET_DEFAULT(maxVersion_, "") };
    inline TLSConfig& setMaxVersion(string maxVersion) { DARABONBA_PTR_SET_VALUE(maxVersion_, maxVersion) };


    // minVersion Field Functions 
    bool hasMinVersion() const { return this->minVersion_ != nullptr;};
    void deleteMinVersion() { this->minVersion_ = nullptr;};
    inline string getMinVersion() const { DARABONBA_PTR_GET_DEFAULT(minVersion_, "") };
    inline TLSConfig& setMinVersion(string minVersion) { DARABONBA_PTR_SET_VALUE(minVersion_, minVersion) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> cipherSuites_ {};
    shared_ptr<string> maxVersion_ {};
    // This parameter is required.
    shared_ptr<string> minVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
