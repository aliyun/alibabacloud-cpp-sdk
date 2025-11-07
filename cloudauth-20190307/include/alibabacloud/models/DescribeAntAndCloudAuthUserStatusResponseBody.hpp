// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANTANDCLOUDAUTHUSERSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANTANDCLOUDAUTHUSERSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeAntAndCloudAuthUserStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAntAndCloudAuthUserStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AntcloudauthEnabled, antcloudauthEnabled_);
      DARABONBA_PTR_TO_JSON(CloudauthEnabled, cloudauthEnabled_);
      DARABONBA_PTR_TO_JSON(CloudauthstEnabled, cloudauthstEnabled_);
      DARABONBA_PTR_TO_JSON(InforverifyEnabled, inforverifyEnabled_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAntAndCloudAuthUserStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AntcloudauthEnabled, antcloudauthEnabled_);
      DARABONBA_PTR_FROM_JSON(CloudauthEnabled, cloudauthEnabled_);
      DARABONBA_PTR_FROM_JSON(CloudauthstEnabled, cloudauthstEnabled_);
      DARABONBA_PTR_FROM_JSON(InforverifyEnabled, inforverifyEnabled_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAntAndCloudAuthUserStatusResponseBody() = default ;
    DescribeAntAndCloudAuthUserStatusResponseBody(const DescribeAntAndCloudAuthUserStatusResponseBody &) = default ;
    DescribeAntAndCloudAuthUserStatusResponseBody(DescribeAntAndCloudAuthUserStatusResponseBody &&) = default ;
    DescribeAntAndCloudAuthUserStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAntAndCloudAuthUserStatusResponseBody() = default ;
    DescribeAntAndCloudAuthUserStatusResponseBody& operator=(const DescribeAntAndCloudAuthUserStatusResponseBody &) = default ;
    DescribeAntAndCloudAuthUserStatusResponseBody& operator=(DescribeAntAndCloudAuthUserStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->antcloudauthEnabled_ == nullptr
        && return this->cloudauthEnabled_ == nullptr && return this->cloudauthstEnabled_ == nullptr && return this->inforverifyEnabled_ == nullptr && return this->requestId_ == nullptr; };
    // antcloudauthEnabled Field Functions 
    bool hasAntcloudauthEnabled() const { return this->antcloudauthEnabled_ != nullptr;};
    void deleteAntcloudauthEnabled() { this->antcloudauthEnabled_ = nullptr;};
    inline bool antcloudauthEnabled() const { DARABONBA_PTR_GET_DEFAULT(antcloudauthEnabled_, false) };
    inline DescribeAntAndCloudAuthUserStatusResponseBody& setAntcloudauthEnabled(bool antcloudauthEnabled) { DARABONBA_PTR_SET_VALUE(antcloudauthEnabled_, antcloudauthEnabled) };


    // cloudauthEnabled Field Functions 
    bool hasCloudauthEnabled() const { return this->cloudauthEnabled_ != nullptr;};
    void deleteCloudauthEnabled() { this->cloudauthEnabled_ = nullptr;};
    inline bool cloudauthEnabled() const { DARABONBA_PTR_GET_DEFAULT(cloudauthEnabled_, false) };
    inline DescribeAntAndCloudAuthUserStatusResponseBody& setCloudauthEnabled(bool cloudauthEnabled) { DARABONBA_PTR_SET_VALUE(cloudauthEnabled_, cloudauthEnabled) };


    // cloudauthstEnabled Field Functions 
    bool hasCloudauthstEnabled() const { return this->cloudauthstEnabled_ != nullptr;};
    void deleteCloudauthstEnabled() { this->cloudauthstEnabled_ = nullptr;};
    inline bool cloudauthstEnabled() const { DARABONBA_PTR_GET_DEFAULT(cloudauthstEnabled_, false) };
    inline DescribeAntAndCloudAuthUserStatusResponseBody& setCloudauthstEnabled(bool cloudauthstEnabled) { DARABONBA_PTR_SET_VALUE(cloudauthstEnabled_, cloudauthstEnabled) };


    // inforverifyEnabled Field Functions 
    bool hasInforverifyEnabled() const { return this->inforverifyEnabled_ != nullptr;};
    void deleteInforverifyEnabled() { this->inforverifyEnabled_ = nullptr;};
    inline bool inforverifyEnabled() const { DARABONBA_PTR_GET_DEFAULT(inforverifyEnabled_, false) };
    inline DescribeAntAndCloudAuthUserStatusResponseBody& setInforverifyEnabled(bool inforverifyEnabled) { DARABONBA_PTR_SET_VALUE(inforverifyEnabled_, inforverifyEnabled) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAntAndCloudAuthUserStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether financial-grade real-person authentication is activated. Values:
    // - **true**: Activated
    // - **false**: Not activated
    std::shared_ptr<bool> antcloudauthEnabled_ = nullptr;
    // Indicates whether real-person authentication is activated. Values:
    // - **true**: Activated
    // - **false**: Not activated
    std::shared_ptr<bool> cloudauthEnabled_ = nullptr;
    // Indicates whether the enhanced version of real-person authentication is activated. Values:
    // - **true**: Activated
    // - **false**: Not activated
    std::shared_ptr<bool> cloudauthstEnabled_ = nullptr;
    // Indicates whether information verification is activated. Values:
    // - **true**: Activated
    // - **false**: Not activated
    std::shared_ptr<bool> inforverifyEnabled_ = nullptr;
    // The ID of this request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
