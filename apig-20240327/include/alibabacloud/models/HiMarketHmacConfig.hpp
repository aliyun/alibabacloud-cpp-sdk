// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETHMACCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETHMACCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketHmacConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketHmacConfig& obj) { 
      DARABONBA_PTR_TO_JSON(credentials, credentials_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketHmacConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(credentials, credentials_);
    };
    HiMarketHmacConfig() = default ;
    HiMarketHmacConfig(const HiMarketHmacConfig &) = default ;
    HiMarketHmacConfig(HiMarketHmacConfig &&) = default ;
    HiMarketHmacConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketHmacConfig() = default ;
    HiMarketHmacConfig& operator=(const HiMarketHmacConfig &) = default ;
    HiMarketHmacConfig& operator=(HiMarketHmacConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Credentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Credentials& obj) { 
        DARABONBA_PTR_TO_JSON(ak, ak_);
        DARABONBA_PTR_TO_JSON(mode, mode_);
        DARABONBA_PTR_TO_JSON(sk, sk_);
      };
      friend void from_json(const Darabonba::Json& j, Credentials& obj) { 
        DARABONBA_PTR_FROM_JSON(ak, ak_);
        DARABONBA_PTR_FROM_JSON(mode, mode_);
        DARABONBA_PTR_FROM_JSON(sk, sk_);
      };
      Credentials() = default ;
      Credentials(const Credentials &) = default ;
      Credentials(Credentials &&) = default ;
      Credentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Credentials() = default ;
      Credentials& operator=(const Credentials &) = default ;
      Credentials& operator=(Credentials &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ak_ == nullptr
        && this->mode_ == nullptr && this->sk_ == nullptr; };
      // ak Field Functions 
      bool hasAk() const { return this->ak_ != nullptr;};
      void deleteAk() { this->ak_ = nullptr;};
      inline string getAk() const { DARABONBA_PTR_GET_DEFAULT(ak_, "") };
      inline Credentials& setAk(string ak) { DARABONBA_PTR_SET_VALUE(ak_, ak) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Credentials& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // sk Field Functions 
      bool hasSk() const { return this->sk_ != nullptr;};
      void deleteSk() { this->sk_ = nullptr;};
      inline string getSk() const { DARABONBA_PTR_GET_DEFAULT(sk_, "") };
      inline Credentials& setSk(string sk) { DARABONBA_PTR_SET_VALUE(sk_, sk) };


    protected:
      shared_ptr<string> ak_ {};
      shared_ptr<string> mode_ {};
      shared_ptr<string> sk_ {};
    };

    virtual bool empty() const override { return this->credentials_ == nullptr; };
    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const vector<HiMarketHmacConfig::Credentials> & getCredentials() const { DARABONBA_PTR_GET_CONST(credentials_, vector<HiMarketHmacConfig::Credentials>) };
    inline vector<HiMarketHmacConfig::Credentials> getCredentials() { DARABONBA_PTR_GET(credentials_, vector<HiMarketHmacConfig::Credentials>) };
    inline HiMarketHmacConfig& setCredentials(const vector<HiMarketHmacConfig::Credentials> & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline HiMarketHmacConfig& setCredentials(vector<HiMarketHmacConfig::Credentials> && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


  protected:
    shared_ptr<vector<HiMarketHmacConfig::Credentials>> credentials_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
