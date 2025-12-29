// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTHVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTHVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeAuthVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuthVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuthVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    DescribeAuthVerifyRequest() = default ;
    DescribeAuthVerifyRequest(const DescribeAuthVerifyRequest &) = default ;
    DescribeAuthVerifyRequest(DescribeAuthVerifyRequest &&) = default ;
    DescribeAuthVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuthVerifyRequest() = default ;
    DescribeAuthVerifyRequest& operator=(const DescribeAuthVerifyRequest &) = default ;
    DescribeAuthVerifyRequest& operator=(DescribeAuthVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certifyId_ == nullptr
        && this->sceneId_ == nullptr; };
    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string getCertifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline DescribeAuthVerifyRequest& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline DescribeAuthVerifyRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // This parameter is required.
    shared_ptr<string> certifyId_ {};
    // This parameter is required.
    shared_ptr<int64_t> sceneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
