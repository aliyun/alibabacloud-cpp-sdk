// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSITMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSITMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class GetTransitMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransitMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireMs, expireMs_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(TransitId, transitId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransitMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireMs, expireMs_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(TransitId, transitId_);
    };
    GetTransitMetaRequest() = default ;
    GetTransitMetaRequest(const GetTransitMetaRequest &) = default ;
    GetTransitMetaRequest(GetTransitMetaRequest &&) = default ;
    GetTransitMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransitMetaRequest() = default ;
    GetTransitMetaRequest& operator=(const GetTransitMetaRequest &) = default ;
    GetTransitMetaRequest& operator=(GetTransitMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireMs_ == nullptr
        && this->filePath_ == nullptr && this->network_ == nullptr && this->transitId_ == nullptr; };
    // expireMs Field Functions 
    bool hasExpireMs() const { return this->expireMs_ != nullptr;};
    void deleteExpireMs() { this->expireMs_ = nullptr;};
    inline int64_t getExpireMs() const { DARABONBA_PTR_GET_DEFAULT(expireMs_, 0L) };
    inline GetTransitMetaRequest& setExpireMs(int64_t expireMs) { DARABONBA_PTR_SET_VALUE(expireMs_, expireMs) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline GetTransitMetaRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline GetTransitMetaRequest& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // transitId Field Functions 
    bool hasTransitId() const { return this->transitId_ != nullptr;};
    void deleteTransitId() { this->transitId_ = nullptr;};
    inline string getTransitId() const { DARABONBA_PTR_GET_DEFAULT(transitId_, "") };
    inline GetTransitMetaRequest& setTransitId(string transitId) { DARABONBA_PTR_SET_VALUE(transitId_, transitId) };


  protected:
    // The validity period of the temporary download URL generated for the current request, in milliseconds. The value must be an integer greater than or equal to 1000 and is rounded down to the nearest whole second. If ExpireMs is omitted, the default validity period is 900000 milliseconds (15 minutes). A download URL is generated only when Network is specified.
    shared_ptr<int64_t> expireMs_ {};
    // The opaque object path returned by CreateTransitUploadPolicy. Specify at least one of this parameter and TransitId.
    shared_ptr<string> filePath_ {};
    // The network type used for the download URL. Valid values: public and internal. If this parameter is omitted, no download URL is generated.
    shared_ptr<string> network_ {};
    // The transit ID. Specify at least one of this parameter and FilePath. If both are provided, this parameter takes precedence.
    shared_ptr<string> transitId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
