// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBTLSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_WEBTLSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebTLSConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebTLSConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CipherSuites, cipherSuites_);
      DARABONBA_PTR_TO_JSON(MaxVersion, maxVersion_);
      DARABONBA_PTR_TO_JSON(MinVersion, minVersion_);
    };
    friend void from_json(const Darabonba::Json& j, WebTLSConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CipherSuites, cipherSuites_);
      DARABONBA_PTR_FROM_JSON(MaxVersion, maxVersion_);
      DARABONBA_PTR_FROM_JSON(MinVersion, minVersion_);
    };
    WebTLSConfig() = default ;
    WebTLSConfig(const WebTLSConfig &) = default ;
    WebTLSConfig(WebTLSConfig &&) = default ;
    WebTLSConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebTLSConfig() = default ;
    WebTLSConfig& operator=(const WebTLSConfig &) = default ;
    WebTLSConfig& operator=(WebTLSConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cipherSuites_ != nullptr
        && this->maxVersion_ != nullptr && this->minVersion_ != nullptr; };
    // cipherSuites Field Functions 
    bool hasCipherSuites() const { return this->cipherSuites_ != nullptr;};
    void deleteCipherSuites() { this->cipherSuites_ = nullptr;};
    inline const vector<string> & cipherSuites() const { DARABONBA_PTR_GET_CONST(cipherSuites_, vector<string>) };
    inline vector<string> cipherSuites() { DARABONBA_PTR_GET(cipherSuites_, vector<string>) };
    inline WebTLSConfig& setCipherSuites(const vector<string> & cipherSuites) { DARABONBA_PTR_SET_VALUE(cipherSuites_, cipherSuites) };
    inline WebTLSConfig& setCipherSuites(vector<string> && cipherSuites) { DARABONBA_PTR_SET_RVALUE(cipherSuites_, cipherSuites) };


    // maxVersion Field Functions 
    bool hasMaxVersion() const { return this->maxVersion_ != nullptr;};
    void deleteMaxVersion() { this->maxVersion_ = nullptr;};
    inline string maxVersion() const { DARABONBA_PTR_GET_DEFAULT(maxVersion_, "") };
    inline WebTLSConfig& setMaxVersion(string maxVersion) { DARABONBA_PTR_SET_VALUE(maxVersion_, maxVersion) };


    // minVersion Field Functions 
    bool hasMinVersion() const { return this->minVersion_ != nullptr;};
    void deleteMinVersion() { this->minVersion_ = nullptr;};
    inline string minVersion() const { DARABONBA_PTR_GET_DEFAULT(minVersion_, "") };
    inline WebTLSConfig& setMinVersion(string minVersion) { DARABONBA_PTR_SET_VALUE(minVersion_, minVersion) };


  protected:
    std::shared_ptr<vector<string>> cipherSuites_ = nullptr;
    std::shared_ptr<string> maxVersion_ = nullptr;
    std::shared_ptr<string> minVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
