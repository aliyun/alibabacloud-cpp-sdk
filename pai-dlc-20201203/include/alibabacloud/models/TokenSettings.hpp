// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOKENSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_TOKENSETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class TokenSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TokenSettings& obj) { 
      DARABONBA_PTR_TO_JSON(EnableCrossAccountAccess, enableCrossAccountAccess_);
      DARABONBA_PTR_TO_JSON(EnableLogDownloadJob, enableLogDownloadJob_);
    };
    friend void from_json(const Darabonba::Json& j, TokenSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableCrossAccountAccess, enableCrossAccountAccess_);
      DARABONBA_PTR_FROM_JSON(EnableLogDownloadJob, enableLogDownloadJob_);
    };
    TokenSettings() = default ;
    TokenSettings(const TokenSettings &) = default ;
    TokenSettings(TokenSettings &&) = default ;
    TokenSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TokenSettings() = default ;
    TokenSettings& operator=(const TokenSettings &) = default ;
    TokenSettings& operator=(TokenSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableCrossAccountAccess_ == nullptr
        && this->enableLogDownloadJob_ == nullptr; };
    // enableCrossAccountAccess Field Functions 
    bool hasEnableCrossAccountAccess() const { return this->enableCrossAccountAccess_ != nullptr;};
    void deleteEnableCrossAccountAccess() { this->enableCrossAccountAccess_ = nullptr;};
    inline bool getEnableCrossAccountAccess() const { DARABONBA_PTR_GET_DEFAULT(enableCrossAccountAccess_, false) };
    inline TokenSettings& setEnableCrossAccountAccess(bool enableCrossAccountAccess) { DARABONBA_PTR_SET_VALUE(enableCrossAccountAccess_, enableCrossAccountAccess) };


    // enableLogDownloadJob Field Functions 
    bool hasEnableLogDownloadJob() const { return this->enableLogDownloadJob_ != nullptr;};
    void deleteEnableLogDownloadJob() { this->enableLogDownloadJob_ = nullptr;};
    inline bool getEnableLogDownloadJob() const { DARABONBA_PTR_GET_DEFAULT(enableLogDownloadJob_, false) };
    inline TokenSettings& setEnableLogDownloadJob(bool enableLogDownloadJob) { DARABONBA_PTR_SET_VALUE(enableLogDownloadJob_, enableLogDownloadJob) };


  protected:
    shared_ptr<bool> enableCrossAccountAccess_ {};
    shared_ptr<bool> enableLogDownloadJob_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
